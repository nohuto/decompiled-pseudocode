/*
 * XREFs of MiIsSubsectionClean @ 0x140524134
 * Callers:
 *     MiDeleteCachedSubsection @ 0x1405232AC (MiDeleteCachedSubsection.c)
 * Callees:
 *     MiUnlockProtoPoolPage @ 0x1402839B0 (MiUnlockProtoPoolPage.c)
 *     MiCheckProtoPtePageState @ 0x1402855A0 (MiCheckProtoPtePageState.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x140291580 (MI_READ_PTE_LOCK_FREE.c)
 *     MiLockLeafPage @ 0x140352AD0 (MiLockLeafPage.c)
 */

__int64 __fastcall MiIsSubsectionClean(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  unsigned int v4; // edi
  ULONG_PTR v5; // rbx
  ULONG_PTR v6; // r14
  __int64 v7; // rbp
  __int64 v8; // rsi
  char v9; // al
  char v10; // al
  char v12; // [rsp+40h] [rbp+8h] BYREF

  v4 = 0;
  if ( !*(_DWORD *)(a1 + 104) )
    return 0LL;
  v5 = *(_QWORD *)(a1 + 8);
  v6 = v5 + 8LL * *(unsigned int *)(a1 + 44);
  if ( !*(_QWORD *)(*(_QWORD *)a1 + 32LL) )
    return 0LL;
  v12 = 17;
  v7 = 0LL;
  if ( v5 >= v6 )
    return v4;
  while ( (v5 & 0xFFF) == 0 || v12 == 17 )
  {
    LOBYTE(a2) = v12;
    if ( v12 != 17 )
      MiUnlockProtoPoolPage(v7, a2, a3, a4);
    v7 = MiCheckProtoPtePageState(v5, (__int64)&v12);
    if ( v7 )
      break;
    v5 = (v5 & 0xFFFFFFFFFFFFF000uLL) + 4096;
LABEL_15:
    if ( v5 >= v6 )
      goto LABEL_20;
  }
  v8 = MiLockLeafPage((__int64 *)v5, 0, a3, a4);
  if ( !v8 )
  {
LABEL_14:
    v5 += 8LL;
    goto LABEL_15;
  }
  if ( (MI_READ_PTE_LOCK_FREE(v5) & 1) == 0 )
  {
    if ( *(_WORD *)(v8 + 32) )
    {
      _InterlockedAnd64((volatile signed __int64 *)(v8 + 24), 0x7FFFFFFFFFFFFFFFuLL);
      v4 = 2;
      goto LABEL_20;
    }
    v9 = *(_BYTE *)(v8 + 34);
    _InterlockedAnd64((volatile signed __int64 *)(v8 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    if ( (v9 & 0x18) != 0 )
    {
      v4 = 1;
      goto LABEL_20;
    }
    goto LABEL_14;
  }
  v10 = *(_BYTE *)(v8 + 34);
  _InterlockedAnd64((volatile signed __int64 *)(v8 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  v4 = 2 - ((v10 & 0x18) != 0);
LABEL_20:
  LOBYTE(a2) = v12;
  if ( v12 != 17 )
    MiUnlockProtoPoolPage(v7, a2, a3, a4);
  return v4;
}
