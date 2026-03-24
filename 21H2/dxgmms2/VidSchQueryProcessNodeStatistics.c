/*
 * XREFs of VidSchQueryProcessNodeStatistics @ 0x1C00D1D20
 * Callers:
 *     <none>
 * Callees:
 *     CopyNodeStatistics @ 0x1C00D0E54 (CopyNodeStatistics.c)
 */

__int64 __fastcall VidSchQueryProcessNodeStatistics(__int64 a1, unsigned int a2, __int64 a3, __int64 a4)
{
  __int64 v7; // rbx
  __int64 v8; // rdi
  __int64 v9; // rcx
  unsigned int v10; // r8d
  _QWORD *v11; // rcx
  _QWORD *v12; // rdx
  __int64 *v13; // rdx

  v7 = a2;
  if ( a2 >= *(_DWORD *)(a1 + 72) )
    return 3221225485LL;
  v8 = a3 + 2656;
  ExAcquirePushLockSharedEx(a3 + 2656, 0LL);
  v9 = *(_QWORD *)(*(_QWORD *)(a3 + 24) + 8LL * *(unsigned int *)(a1 + 4));
  if ( !v9 )
    goto LABEL_9;
  v10 = *(_DWORD *)(v9 + 80);
  v11 = *(_QWORD **)(v9 + 8);
  v12 = &v11[v7];
  if ( (unsigned int)v7 >= v10 )
    v12 = v11;
  if ( !*v12 )
  {
LABEL_9:
    ExReleasePushLockSharedEx(v8, 0LL);
    return 3221225485LL;
  }
  v13 = &v11[v7];
  if ( (unsigned int)v7 >= v10 )
    v13 = v11;
  CopyNodeStatistics(a4, *v13);
  ExReleasePushLockSharedEx(v8, 0LL);
  return 0LL;
}
