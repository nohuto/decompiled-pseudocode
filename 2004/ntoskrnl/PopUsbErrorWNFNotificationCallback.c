/*
 * XREFs of PopUsbErrorWNFNotificationCallback @ 0x1408EAA40
 * Callers:
 *     <none>
 * Callees:
 *     PopReleaseRwLock @ 0x1402985D4 (PopReleaseRwLock.c)
 *     PopAcquireRwLockExclusive @ 0x1402DF2F4 (PopAcquireRwLockExclusive.c)
 *     PopBatteryQueueWork @ 0x140396C68 (PopBatteryQueueWork.c)
 *     __security_check_cookie @ 0x1403CCE60 (__security_check_cookie.c)
 *     ExQueryWnfStateData @ 0x1407090A0 (ExQueryWnfStateData.c)
 */

__int64 __fastcall PopUsbErrorWNFNotificationCallback(__int64 a1)
{
  int v1; // edi
  bool v2; // bl
  bool v3; // zf
  unsigned int v5; // [rsp+20h] [rbp-38h] BYREF
  int v6; // [rsp+28h] [rbp-30h] BYREF
  _DWORD v7[4]; // [rsp+30h] [rbp-28h] BYREF

  v5 = 12;
  v1 = ExQueryWnfStateData(a1, &v6, v7, &v5);
  if ( v1 >= 0 )
  {
    if ( v5 == 12 )
    {
      v2 = v7[2] == 1;
      PopAcquireRwLockExclusive((ULONG_PTR)&xmmword_140C232A8);
      byte_140C232A4 = v2;
      if ( v2 )
        v3 = dword_140C232A0 == 0;
      else
        v3 = dword_140C232A0 == 1;
      if ( v3 )
        PopBatteryQueueWork(0x40u);
      PopReleaseRwLock((ULONG_PTR)&xmmword_140C232A8);
    }
    else
    {
      return 128;
    }
  }
  return (unsigned int)v1;
}
