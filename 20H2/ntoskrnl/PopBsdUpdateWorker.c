/*
 * XREFs of PopBsdUpdateWorker @ 0x1405CD1D0
 * Callers:
 *     <none>
 * Callees:
 *     RtlComputeCrc32 @ 0x140305E80 (RtlComputeCrc32.c)
 *     PopOkayToQueueNextWorkItem @ 0x14032FF84 (PopOkayToQueueNextWorkItem.c)
 *     PopReleaseRwLock @ 0x14033E5A4 (PopReleaseRwLock.c)
 *     PopAcquireRwLockExclusive @ 0x14036343C (PopAcquireRwLockExclusive.c)
 *     __security_check_cookie @ 0x1403CFAF0 (__security_check_cookie.c)
 *     PopWriteBsdPoInfo @ 0x1403F66A4 (PopWriteBsdPoInfo.c)
 */

void PopBsdUpdateWorker()
{
  int v0; // edi
  int v1; // esi
  int v2; // ebx
  char v3; // bl
  __int128 v4; // [rsp+28h] [rbp-29h] BYREF
  __int128 v5; // [rsp+38h] [rbp-19h]
  __int128 v6; // [rsp+48h] [rbp-9h] BYREF
  __int128 v7; // [rsp+58h] [rbp+7h]
  __int128 v8; // [rsp+68h] [rbp+17h] BYREF
  __int128 v9; // [rsp+78h] [rbp+27h]
  __int128 v10; // [rsp+88h] [rbp+37h]

  v8 = 0LL;
  v9 = 0LL;
  v10 = 0LL;
  v4 = 0LL;
  v5 = 0LL;
  v6 = 0LL;
  v7 = 0LL;
  while ( 1 )
  {
    PopAcquireRwLockExclusive((ULONG_PTR)&PopBsdUpdateLock);
    v3 = PopBsdUpdateRequests;
    if ( !PopBsdUpdateRequests )
      break;
    v0 = PopBsdUpdateRequests & 1;
    if ( (PopBsdUpdateRequests & 1) != 0 )
    {
      *(_QWORD *)&xmmword_140C50418 = MEMORY[0xFFFFF78000000014];
      DWORD2(xmmword_140C50418) = RtlComputeCrc32(0, &xmmword_140C50418, 8u);
      v4 = PopBsdPowerTransition;
      v5 = xmmword_140C50418;
    }
    v1 = v3 & 2;
    if ( (v3 & 2) != 0 )
    {
      v6 = PopBsdPowerTransitionExtension;
      v7 = xmmword_140C505D8;
    }
    v2 = v3 & 4;
    if ( v2 )
    {
      v8 = PopBsdPhysicalPowerButtonInfo;
      v9 = xmmword_140C503E8;
      v10 = xmmword_140C503F8;
    }
    PopBsdUpdateRequests = 0;
    PopReleaseRwLock((ULONG_PTR)&PopBsdUpdateLock);
    if ( v0 )
      PopWriteBsdPoInfo(7u, &v4);
    if ( v1 )
      PopWriteBsdPoInfo(0x10u, &v6);
    if ( v2 )
      PopWriteBsdPoInfo(0xEu, &v8);
  }
  PopOkayToQueueNextWorkItem((__int64)&PopBsdUpdateWorkItem);
  PopReleaseRwLock((ULONG_PTR)&PopBsdUpdateLock);
}
