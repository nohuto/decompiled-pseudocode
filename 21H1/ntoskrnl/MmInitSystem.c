/*
 * XREFs of MmInitSystem @ 0x140A4C3E4
 * Callers:
 *     KiInitializeBootStructures @ 0x1409977A0 (KiInitializeBootStructures.c)
 *     InitBootProcessor @ 0x140A37A74 (InitBootProcessor.c)
 *     Phase1InitializationDiscard @ 0x140A382A8 (Phase1InitializationDiscard.c)
 *     Phase1InitializationIoReady @ 0x140A3EF44 (Phase1InitializationIoReady.c)
 * Callees:
 *     VslGetNestedPageProtectionFlags @ 0x14032BBE0 (VslGetNestedPageProtectionFlags.c)
 *     ExFreePoolWithTag @ 0x1409B1010 (ExFreePoolWithTag.c)
 *     MiInitializeSystemVa @ 0x140A430FC (MiInitializeSystemVa.c)
 *     MiInitNucleus @ 0x140A43F3C (MiInitNucleus.c)
 *     MiInitSystem @ 0x140A4C4D4 (MiInitSystem.c)
 *     KeQueryNumaGraph @ 0x140A8F440 (KeQueryNumaGraph.c)
 */

char __fastcall MmInitSystem(int a1, ULONG_PTR a2)
{
  int NestedPageProtectionFlags; // eax
  char v5; // cl
  int v6; // eax
  unsigned __int16 *NumaGraph; // r10
  unsigned int v8; // r9d
  unsigned int i; // r8d
  unsigned int v10; // esi
  __int64 v11; // rax

  if ( a1 == -1 )
  {
    stru_140C2A080.SizeOfBitMap = 2048;
    stru_140C2A080.Buffer = (unsigned int *)&unk_140C2A090;
    word_140C2A1F2 |= 1u;
    NestedPageProtectionFlags = VslGetNestedPageProtectionFlags();
    v5 = NestedPageProtectionFlags;
    if ( !NestedPageProtectionFlags )
    {
LABEL_12:
      MiInitializeSystemVa(a2);
      return 1;
    }
    v6 = MiFlags | 0x2000;
    MiFlags |= 0x2000u;
    if ( (v5 & 4) != 0 )
    {
      v6 |= 0xC000u;
      MiFlags = v6;
    }
    if ( (v5 & 1) != 0 )
    {
      v6 |= 0x50000u;
    }
    else
    {
      if ( (v5 & 2) == 0 )
      {
LABEL_22:
        if ( (v5 & 0x10) == 0 )
        {
          v6 |= 0x20000u;
          MiFlags = v6;
        }
        if ( (v5 & 0x40) != 0 )
        {
          v6 |= 0x100000u;
          MiFlags = v6;
        }
        if ( v5 < 0 )
          MiFlags = v6 | 0x80000;
        goto LABEL_12;
      }
      v6 |= 0x10000u;
    }
    MiFlags = v6;
    goto LABEL_22;
  }
  if ( a1 )
  {
    if ( a1 == 1 )
    {
      if ( (unsigned __int16)KeNumberNodes > 1u )
      {
        NumaGraph = (unsigned __int16 *)KeQueryNumaGraph();
        if ( NumaGraph )
        {
          v8 = (unsigned __int16)KeNumberNodes;
          for ( i = 0; i < v8; ++i )
          {
            v10 = 0;
            do
            {
              v11 = i * v8 + v10++;
              *(_DWORD *)(qword_140C4DDD8 + 4LL * (unsigned int)v11) = NumaGraph[v11];
            }
            while ( v10 < v8 );
          }
          ExFreePoolWithTag(NumaGraph, 0);
        }
      }
      MiFlags = MiFlags & 0xFFFFFFCF | 0x10;
      if ( (unsigned __int8)MiInitSystem(1LL, a2) )
      {
        byte_140C4EE1C = 1;
        return 1;
      }
      return 0;
    }
    if ( a1 == 2 )
    {
      MiFlags = MiFlags & 0xFFFFFFCF | 0x20;
      return ((__int64 (*)(void))MiInitSystem)();
    }
  }
  else if ( MiInitNucleus(a2) )
  {
    return ((__int64 (*)(void))MiInitSystem)();
  }
  return 0;
}
