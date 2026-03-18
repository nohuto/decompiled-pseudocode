/*
 * XREFs of MiMapPatchTable @ 0x1408C9418
 * Callers:
 *     MiMapSystemImage @ 0x140747630 (MiMapSystemImage.c)
 * Callees:
 *     MiGetPteAddress @ 0x140221EF0 (MiGetPteAddress.c)
 *     MiPteInShadowRange @ 0x1402386B0 (MiPteInShadowRange.c)
 *     MiMakePrototypePteDirect @ 0x140263C40 (MiMakePrototypePteDirect.c)
 *     MiWritePteShadow @ 0x14032ECC0 (MiWritePteShadow.c)
 *     MiPteHasShadow @ 0x14032ED20 (MiPteHasShadow.c)
 */

__int64 __fastcall MiMapPatchTable(unsigned __int64 a1, __int64 a2)
{
  __int64 v3; // rbp
  __int64 PteAddress; // rax
  _QWORD *v5; // rdi
  __int64 v6; // r14
  __int64 PrototypePteDirect; // rbx
  int v8; // esi
  __int64 v9; // r8
  bool v10; // zf

  v3 = ((unsigned int)dword_140C4CAB0 >> 12) + ((dword_140C4CAB0 & 0xFFF) != 0);
  PteAddress = MiGetPteAddress(a1);
  v5 = (_QWORD *)PteAddress;
  if ( v3 )
  {
    v6 = a2 - PteAddress;
    do
    {
      PrototypePteDirect = MiMakePrototypePteDirect((__int64)v5 + v6);
      v8 = 0;
      if ( MiPteInShadowRange((unsigned __int64)v5) )
      {
        if ( (unsigned int)MiPteHasShadow() )
        {
          v8 = 1;
          if ( !HIBYTE(word_140C4DE08) )
          {
            v10 = (PrototypePteDirect & 1) == 0;
            goto LABEL_9;
          }
        }
        else if ( (HIDWORD(KeGetCurrentThread()->ApcState.Process[2].Header.WaitListHead.Flink) & 0x1000) != 0 )
        {
          v10 = (PrototypePteDirect & 1) == 0;
LABEL_9:
          if ( !v10 )
            PrototypePteDirect |= 0x8000000000000000uLL;
        }
      }
      *v5 = PrototypePteDirect;
      if ( v8 )
        MiWritePteShadow((__int64)v5, PrototypePteDirect, v9);
      ++v5;
      --v3;
    }
    while ( v3 );
  }
  return 0LL;
}
