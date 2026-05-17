/*
 * XREFs of RtlpTpIoLookup @ 0x180113864
 * Callers:
 *     RtlSetIoCompletionCallback @ 0x180113120 (RtlSetIoCompletionCallback.c)
 * Callees:
 *     RtlReleaseSRWLockExclusive @ 0x180012C70 (RtlReleaseSRWLockExclusive.c)
 *     RtlAcquireSRWLockExclusive @ 0x1800290A0 (RtlAcquireSRWLockExclusive.c)
 *     RtlSplay @ 0x180065400 (RtlSplay.c)
 *     TpBindFileToDirect @ 0x180075E98 (TpBindFileToDirect.c)
 *     RtlpTpIoAlloc @ 0x1801132AC (RtlpTpIoAlloc.c)
 */

__int64 __fastcall RtlpTpIoLookup(__int64 *a1, unsigned __int64 a2, unsigned __int64 a3, unsigned __int64 a4)
{
  __int64 v7; // r9
  __int64 v8; // rdi
  int v9; // esi
  __int64 v10; // rbx
  __int64 v11; // rax
  __int64 *v12; // rax
  __int64 v14; // [rsp+68h] [rbp+20h] BYREF

  v14 = 0LL;
  RtlAcquireSRWLockExclusive((unsigned __int64)&RtlpTpIoTreeLock, a2, a3, a4);
  v8 = RtlpTpIoTree;
  if ( RtlpTpIoTree )
  {
    while ( 1 )
    {
      v10 = v8 - 96;
      v14 = v8 - 96;
      if ( *(_QWORD *)(v8 - 96) == a2 )
        break;
      if ( *(_QWORD *)(v8 - 96) <= a2 )
      {
        v11 = *(_QWORD *)(v8 + 16);
        if ( !v11 )
        {
          v9 = RtlpTpIoAlloc(&v14, a2, a3);
          v10 = v14;
          if ( !v14 )
            goto LABEL_14;
          v12 = (__int64 *)(v14 + 96);
          *(_QWORD *)(v8 + 16) = v14 + 96;
          goto LABEL_13;
        }
      }
      else
      {
        v11 = *(_QWORD *)(v8 + 8);
        if ( !v11 )
        {
          v9 = RtlpTpIoAlloc(&v14, a2, a3);
          v10 = v14;
          if ( !v14 )
            goto LABEL_14;
          v12 = (__int64 *)(v14 + 96);
          *(_QWORD *)(v8 + 8) = v14 + 96;
LABEL_13:
          *v12 = v8;
          goto LABEL_14;
        }
      }
      v8 = v11;
    }
    v9 = TpBindFileToDirect(a3, v10 + 8, *(_PEB_LDR_DATA **)(v10 + 80), v7);
    if ( v9 >= 0 )
      ++*(_DWORD *)(v10 + 88);
  }
  else
  {
    v9 = RtlpTpIoAlloc(&v14, a2, a3);
    v10 = v14;
  }
LABEL_14:
  if ( v10 && RtlpTpIoTree != v10 + 96 )
    RtlpTpIoTree = (__int64)RtlSplay((_QWORD *)(v10 + 96));
  RtlReleaseSRWLockExclusive(&RtlpTpIoTreeLock);
  *a1 = v10;
  return (unsigned int)v9;
}
