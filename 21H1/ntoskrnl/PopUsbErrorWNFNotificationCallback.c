/*
 * XREFs of PopUsbErrorWNFNotificationCallback @ 0x1408E97C0
 * Callers:
 *     <none>
 * Callees:
 *     PopReleaseRwLock @ 0x140205C14 (PopReleaseRwLock.c)
 *     PopAcquireRwLockExclusive @ 0x14035D404 (PopAcquireRwLockExclusive.c)
 *     PopBatteryQueueWork @ 0x140397AC8 (PopBatteryQueueWork.c)
 *     __security_check_cookie @ 0x1403CC020 (__security_check_cookie.c)
 *     ExQueryWnfStateData @ 0x1406E54C0 (ExQueryWnfStateData.c)
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
      PopAcquireRwLockExclusive((ULONG_PTR)&xmmword_140C23868);
      byte_140C23864 = v2;
      if ( v2 )
        v3 = dword_140C23860 == 0;
      else
        v3 = dword_140C23860 == 1;
      if ( v3 )
        PopBatteryQueueWork(0x40u);
      PopReleaseRwLock((ULONG_PTR)&xmmword_140C23868);
    }
    else
    {
      return 128;
    }
  }
  return (unsigned int)v1;
}
