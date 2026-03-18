/*
 * XREFs of MmInitSystem @ 0x140B07AB0
 * Callers:
 *     KiInitializeBootStructures @ 0x140A57680 (KiInitializeBootStructures.c)
 *     InitBootProcessor @ 0x140AFB264 (InitBootProcessor.c)
 *     Phase1InitializationDiscard @ 0x140AFBDF4 (Phase1InitializationDiscard.c)
 *     Phase1InitializationIoReady @ 0x140B020A4 (Phase1InitializationIoReady.c)
 * Callees:
 *     VslGetNestedPageProtectionFlags @ 0x140294CC0 (VslGetNestedPageProtectionFlags.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 *     MiInitNucleus @ 0x140AF47DC (MiInitNucleus.c)
 *     MiInitializeSystemVa @ 0x140B071D0 (MiInitializeSystemVa.c)
 *     MiInitSystem @ 0x140B07C00 (MiInitSystem.c)
 *     KeSupportedPhysicalAddressBits @ 0x140B312E8 (KeSupportedPhysicalAddressBits.c)
 *     KeQueryNumaGraph @ 0x140B50C1C (KeQueryNumaGraph.c)
 */

char __fastcall MmInitSystem(__int64 a1, ULONG_PTR a2, __int64 a3)
{
  int v4; // r9d
  __int64 v6; // rcx
  unsigned __int8 v7; // r8
  unsigned __int8 v8; // al
  int NestedPageProtectionFlags; // eax
  int v10; // ecx
  unsigned __int16 *NumaGraph; // r10
  unsigned int v12; // r9d
  unsigned int i; // r8d
  unsigned int v14; // esi
  __int64 v15; // rax

  v4 = a1;
  if ( !dword_140C50720 )
  {
    v7 = KeSupportedPhysicalAddressBits(a1, a2, a3, (unsigned int)a1);
    if ( v7 > 0x34u )
      v7 = 52;
    dword_140C50720 = v7;
    v8 = v7 - 12;
    if ( (unsigned __int8)(v7 - 12) > 0x26u )
      v8 = 38;
    dword_140C50724 = v8;
  }
  if ( v4 == -1 )
  {
    dword_140C29560 = 2048;
    qword_140C29568 = (__int64)&unk_140C29570;
    word_140C296D2 |= 1u;
    NestedPageProtectionFlags = VslGetNestedPageProtectionFlags();
    if ( !NestedPageProtectionFlags )
    {
LABEL_18:
      MiInitializeSystemVa(a2);
      return 1;
    }
    v10 = MiFlags | 0x1000;
    MiFlags |= 0x1000u;
    if ( (NestedPageProtectionFlags & 4) != 0 )
    {
      v10 |= 0x6000u;
      MiFlags = v10;
    }
    if ( (NestedPageProtectionFlags & 1) != 0 )
    {
      v10 |= 0x28000u;
    }
    else
    {
      if ( (NestedPageProtectionFlags & 2) == 0 )
      {
LABEL_29:
        if ( (NestedPageProtectionFlags & 0x10) == 0 )
        {
          v10 |= 0x10000u;
          MiFlags = v10;
        }
        if ( (NestedPageProtectionFlags & 0x40) != 0 )
        {
          v10 |= 0x80000u;
          MiFlags = v10;
        }
        if ( (NestedPageProtectionFlags & 0x80u) != 0 )
          MiFlags = v10 | 0x40000;
        goto LABEL_18;
      }
      v10 |= 0x8000u;
    }
    MiFlags = v10;
    goto LABEL_29;
  }
  if ( v4 )
  {
    if ( v4 == 1 )
    {
      if ( (unsigned __int16)KeNumberNodes > 1u )
      {
        NumaGraph = (unsigned __int16 *)KeQueryNumaGraph();
        if ( NumaGraph )
        {
          v12 = (unsigned __int16)KeNumberNodes;
          for ( i = 0; i < v12; ++i )
          {
            v14 = 0;
            do
            {
              v15 = i * v12 + v14++;
              *(_DWORD *)(qword_140C506D8 + 4LL * (unsigned int)v15) = NumaGraph[v15];
            }
            while ( v14 < v12 );
          }
          ExFreePoolWithTag(NumaGraph, 0);
        }
      }
      MiFlags = MiFlags & 0xFFFFFFCF | 0x10;
      if ( (unsigned __int8)MiInitSystem(1LL, a2) )
      {
        byte_140C53444 = 1;
        return 1;
      }
      return 0;
    }
    if ( v4 == 2 )
    {
      v6 = 2LL;
      MiFlags = MiFlags & 0xFFFFFFCF | 0x20;
      return MiInitSystem(v6, a2);
    }
  }
  else if ( MiInitNucleus(a2) )
  {
    v6 = 0LL;
    return MiInitSystem(v6, a2);
  }
  return 0;
}
