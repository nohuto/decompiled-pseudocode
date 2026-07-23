/*
 * XREFs of MiFreeEmptyBootPageTable @ 0x140A93F24
 * Callers:
 *     MxCreateFreePfns @ 0x140A44ECC (MxCreateFreePfns.c)
 * Callees:
 *     MiWritePteShadow @ 0x140234B9C (MiWritePteShadow.c)
 *     MiPteHasShadow @ 0x140234BFC (MiPteHasShadow.c)
 *     MiPteInShadowRange @ 0x140353840 (MiPteInShadowRange.c)
 *     MiLockAndInsertPageInFreeList @ 0x1403B767C (MiLockAndInsertPageInFreeList.c)
 */

__int64 __fastcall MiFreeEmptyBootPageTable(__int64 a1)
{
  unsigned __int64 v1; // rdi
  __int64 result; // rax
  unsigned __int64 v4; // rbx
  int v5; // ebp
  __int64 v6; // rdx
  __int64 v7; // r8
  _DWORD *v8; // r9
  bool v9; // zf

  v1 = *(_QWORD *)(a1 + 8) | 0x8000000000000000uLL;
  result = 0LL;
  if ( (__int64)(v1 << 25) >> 16 << 25 >> 16 >= (unsigned __int64)MiLowHalVa )
    return result;
  v4 = ZeroPte;
  *(_QWORD *)(a1 + 24) &= 0xC000000000000000uLL;
  *(_WORD *)(a1 + 32) = 0;
  v5 = 0;
  if ( MiPteInShadowRange(v1) )
  {
    if ( (unsigned int)MiPteHasShadow() )
    {
      v5 = 1;
      if ( !HIBYTE(word_140C4E048) )
      {
        v9 = (ZeroPte & 1) == 0;
        goto LABEL_8;
      }
    }
    else if ( (HIDWORD(KeGetCurrentThread()->ApcState.Process[2].Header.WaitListHead.Flink) & 0x1000) != 0 )
    {
      v9 = (ZeroPte & 1) == 0;
LABEL_8:
      if ( !v9 )
        v4 = ZeroPte | 0x8000000000000000uLL;
    }
  }
  *(_QWORD *)v1 = v4;
  if ( v5 )
    MiWritePteShadow(v1, v4);
  return MiLockAndInsertPageInFreeList(a1, v6, v7, v8);
}
