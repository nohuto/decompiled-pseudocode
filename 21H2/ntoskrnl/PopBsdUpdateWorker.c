/*
 * XREFs of PopBsdUpdateWorker @ 0x140810990
 * Callers:
 *     <none>
 * Callees:
 *     PopReleaseRwLock @ 0x1402935D0 (PopReleaseRwLock.c)
 *     PopAcquireRwLockExclusive @ 0x1402D66A8 (PopAcquireRwLockExclusive.c)
 *     PopOkayToQueueNextWorkItem @ 0x140368A78 (PopOkayToQueueNextWorkItem.c)
 *     RtlComputeCrc32 @ 0x140369820 (RtlComputeCrc32.c)
 *     PopWriteBsdPoInfo @ 0x1403A68B0 (PopWriteBsdPoInfo.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     memset @ 0x140435E00 (memset.c)
 */

void PopBsdUpdateWorker()
{
  char v0; // bl
  int v1; // edi
  int v2; // esi
  int v3; // ebx
  __int128 v4; // [rsp+28h] [rbp-39h] BYREF
  __int128 v5; // [rsp+38h] [rbp-29h]
  __int128 v6; // [rsp+48h] [rbp-19h] BYREF
  __int128 v7; // [rsp+58h] [rbp-9h]
  _OWORD v8[4]; // [rsp+68h] [rbp+7h] BYREF

  memset(v8, 0, sizeof(v8));
  v4 = 0LL;
  v5 = 0LL;
  v6 = 0LL;
  v7 = 0LL;
  while ( 1 )
  {
    PopAcquireRwLockExclusive((ULONG_PTR)&PopBsdUpdateLock);
    v0 = PopBsdUpdateRequests;
    if ( !PopBsdUpdateRequests )
      break;
    v1 = PopBsdUpdateRequests & 1;
    if ( (PopBsdUpdateRequests & 1) != 0 )
    {
      *(_QWORD *)&xmmword_140C547A8 = MEMORY[0xFFFFF78000000014];
      DWORD2(xmmword_140C547A8) = RtlComputeCrc32(0, (char *)&xmmword_140C547A8, 8u);
      v4 = PopBsdPowerTransition;
      v5 = xmmword_140C547A8;
    }
    v2 = v0 & 2;
    if ( (v0 & 2) != 0 )
    {
      v6 = PopBsdPowerTransitionExtension;
      v7 = unk_140C548F0;
    }
    v3 = v0 & 4;
    if ( v3 )
    {
      v8[0] = PopBsdPhysicalPowerButtonInfo;
      v8[1] = xmmword_140C5ACD0;
      v8[2] = xmmword_140C5ACE0;
      v8[3] = xmmword_140C5ACF0;
    }
    PopBsdUpdateRequests = 0;
    PopReleaseRwLock((ULONG_PTR)&PopBsdUpdateLock);
    if ( v1 )
      PopWriteBsdPoInfo(7u, (__int64)&v4);
    if ( v2 )
      PopWriteBsdPoInfo(0x10u, (__int64)&v6);
    if ( v3 )
      PopWriteBsdPoInfo(0xEu, (__int64)v8);
  }
  PopOkayToQueueNextWorkItem((__int64)&PopBsdUpdateWorkItem);
  PopReleaseRwLock((ULONG_PTR)&PopBsdUpdateLock);
}
