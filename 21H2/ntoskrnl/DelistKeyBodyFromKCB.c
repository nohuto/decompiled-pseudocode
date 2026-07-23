/*
 * XREFs of DelistKeyBodyFromKCB @ 0x14065C750
 * Callers:
 *     CmpDeleteKeyObject @ 0x14065C3E0 (CmpDeleteKeyObject.c)
 * Callees:
 *     ExAcquirePushLockExclusiveEx @ 0x1403556E0 (ExAcquirePushLockExclusiveEx.c)
 *     ExReleasePushLockEx @ 0x140355BE0 (ExReleasePushLockEx.c)
 *     CmpFreeKeyControlBlock @ 0x1405E0C60 (CmpFreeKeyControlBlock.c)
 *     CmpLockKcbExclusive @ 0x1406DBABC (CmpLockKcbExclusive.c)
 */

char __fastcall DelistKeyBodyFromKCB(_QWORD *a1, char a2)
{
  char v2; // r9
  unsigned int i; // r8d
  signed __int64 v6; // rax
  __int64 v7; // rbx
  __int64 v8; // rcx
  _QWORD *v9; // rdx
  ULONG_PTR v10; // rbx
  bool v11; // di

  v2 = 0;
LABEL_2:
  for ( i = 0; i < 4; ++i )
  {
    v6 = _InterlockedCompareExchange64((volatile signed __int64 *)(a1[1] + 8LL * i + 136), 0LL, (signed __int64)a1);
    if ( a1 == (_QWORD *)v6 )
      goto LABEL_13;
    if ( (unsigned __int64)(v6 - 1) <= 1 )
    {
      CmpLockKcbExclusive(a1[1]);
      v2 = 1;
      goto LABEL_2;
    }
  }
  if ( !a2 && !v2 )
  {
    v7 = a1[1];
    ExAcquirePushLockExclusiveEx(v7 + 48, 0LL);
    v2 = 1;
    *(_QWORD *)(v7 + 56) = KeGetCurrentThread();
  }
  v8 = a1[4];
  v6 = (signed __int64)(a1 + 4);
  if ( *(_QWORD **)(v8 + 8) != a1 + 4 || (v9 = (_QWORD *)a1[5], *v9 != v6) )
    __fastfail(3u);
  *v9 = v8;
  *(_QWORD *)(v8 + 8) = v9;
LABEL_13:
  if ( v2 )
  {
    v10 = a1[1];
    v11 = (*(_DWORD *)(v10 + 8) & 0x80000) != 0;
    if ( *(struct _KTHREAD **)(v10 + 56) == KeGetCurrentThread() )
      *(_QWORD *)(v10 + 56) = 0LL;
    else
      _InterlockedDecrement((volatile signed __int32 *)(v10 + 56));
    LOBYTE(v6) = ExReleasePushLockEx(v10 + 48, 0LL);
    if ( v11 && (*(_DWORD *)(v10 + 8) & 0x80000) != 0 )
      LOBYTE(v6) = (unsigned __int8)CmpFreeKeyControlBlock(v10);
  }
  return v6;
}
