/*
 * XREFs of AlpcpRegisterCompletionListDatabase @ 0x1405D9608
 * Callers:
 *     AlpcpInitializeCompletionList @ 0x1405D96A0 (AlpcpInitializeCompletionList.c)
 * Callees:
 *     ExfTryToWakePushLock @ 0x1402FC2C0 (ExfTryToWakePushLock.c)
 *     KeAbPostRelease @ 0x1403539D0 (KeAbPostRelease.c)
 *     ExAcquirePushLockExclusiveEx @ 0x1403556E0 (ExAcquirePushLockExclusiveEx.c)
 */

__int64 __fastcall AlpcpRegisterCompletionListDatabase(__int64 **a1)
{
  __int64 *v2; // rdx
  __int64 **v3; // rax
  unsigned int v4; // ebx
  unsigned __int64 v6; // rcx

  ExAcquirePushLockExclusiveEx((ULONG_PTR)&AlpcpCompletionListDatabase, 0LL);
  v2 = (__int64 *)qword_140C2A990;
  if ( (__int64 *)qword_140C2A990 != &qword_140C2A990 )
  {
    v6 = (unsigned __int64)a1[2];
    while ( v2[2] <= v6 )
    {
      if ( v2[2] == v6 )
      {
        if ( v2[5] >= (unsigned __int64)a1[6] )
          break;
        if ( v2[6] > (unsigned __int64)a1[5] )
        {
          v4 = 0;
          goto LABEL_4;
        }
      }
      v2 = (__int64 *)*v2;
      if ( v2 == &qword_140C2A990 )
        break;
    }
  }
  v3 = (__int64 **)v2[1];
  if ( *v3 != v2 )
    __fastfail(3u);
  *a1 = v2;
  a1[1] = (__int64 *)v3;
  *v3 = (__int64 *)a1;
  v2[1] = (__int64)a1;
  v4 = 1;
  ++dword_140C2A988;
LABEL_4:
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&AlpcpCompletionListDatabase, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock(&AlpcpCompletionListDatabase);
  KeAbPostRelease((ULONG_PTR)&AlpcpCompletionListDatabase);
  return v4;
}
