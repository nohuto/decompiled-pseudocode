/*
 * XREFs of MiMapPatchTable @ 0x1408C80C8
 * Callers:
 *     MiMapSystemImage @ 0x140745AB0 (MiMapSystemImage.c)
 * Callees:
 *     MiGetPteAddress @ 0x14027AF40 (MiGetPteAddress.c)
 *     MiPteInShadowRange @ 0x140291700 (MiPteInShadowRange.c)
 *     MiMakePrototypePteDirect @ 0x1402BCC70 (MiMakePrototypePteDirect.c)
 *     MiWritePteShadow @ 0x1402F2F20 (MiWritePteShadow.c)
 *     MiPteHasShadow @ 0x1402F2F80 (MiPteHasShadow.c)
 */

__int64 __fastcall MiMapPatchTable(unsigned __int64 a1, __int64 a2)
{
  __int64 v3; // rbp
  __int64 PteAddress; // rax
  _QWORD *v5; // rdi
  __int64 v6; // r14
  __int64 PrototypePteDirect; // rbx
  int v8; // esi
  bool v9; // zf

  v3 = ((unsigned int)dword_140C4CBF0 >> 12) + ((dword_140C4CBF0 & 0xFFF) != 0);
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
          if ( !HIBYTE(word_140C4DF48) )
          {
            v9 = (PrototypePteDirect & 1) == 0;
            goto LABEL_9;
          }
        }
        else if ( (HIDWORD(KeGetCurrentThread()->ApcState.Process[2].Header.WaitListHead.Flink) & 0x1000) != 0 )
        {
          v9 = (PrototypePteDirect & 1) == 0;
LABEL_9:
          if ( !v9 )
            PrototypePteDirect |= 0x8000000000000000uLL;
        }
      }
      *v5 = PrototypePteDirect;
      if ( v8 )
        MiWritePteShadow((__int64)v5, PrototypePteDirect);
      ++v5;
      --v3;
    }
    while ( v3 );
  }
  return 0LL;
}
