/*
 * XREFs of CoreMsgInitialize @ 0x1C003AF3C
 * Callers:
 *     Win32kBaseDriverEntry @ 0x1C029C0C0 (Win32kBaseDriverEntry.c)
 * Callees:
 *     _tlgWriteTransfer_EtwWriteTransfer @ 0x1C002874C (_tlgWriteTransfer_EtwWriteTransfer.c)
 *     ?Initialize@RegistrarClient@CoreMessagingK@@SAXXZ @ 0x1C003B638 (-Initialize@RegistrarClient@CoreMessagingK@@SAXXZ.c)
 *     ?Initialize@EntryLock@CoreMessagingK@@SAJXZ @ 0x1C003C394 (-Initialize@EntryLock@CoreMessagingK@@SAJXZ.c)
 *     __security_check_cookie @ 0x1C00CC180 (__security_check_cookie.c)
 *     ?BugCheck@Runtime@CoreMessagingK@@SAXW4BugCheckCodes@2@_K11@Z @ 0x1C02006B4 (-BugCheck@Runtime@CoreMessagingK@@SAXW4BugCheckCodes@2@_K11@Z.c)
 *     TraceLoggingRegisterEx_EtwRegister_EtwSetInformation @ 0x1C0280744 (TraceLoggingRegisterEx_EtwRegister_EtwSetInformation.c)
 */

__int64 CoreMsgInitialize()
{
  int v0; // ebx
  int v2; // [rsp+30h] [rbp-48h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v3; // [rsp+38h] [rbp-40h] BYREF
  int *v4; // [rsp+58h] [rbp-20h]
  int v5; // [rsp+60h] [rbp-18h]
  int v6; // [rsp+64h] [rbp-14h]

  if ( CoreMessagingK::EntryLock::s_Initialized )
    CoreMessagingK::Runtime::BugCheck(1LL, 0LL, 0LL);
  TraceLoggingRegisterEx_EtwRegister_EtwSetInformation(&dword_1C024B450);
  if ( (unsigned int)dword_1C024B450 > 5 )
    tlgWriteTransfer_EtwWriteTransfer((__int64)&dword_1C024B450, (unsigned __int8 *)dword_1C0223A58, 0LL, 0LL, 2u, &v3);
  v0 = CoreMessagingK::EntryLock::Initialize();
  if ( v0 >= 0 )
    CoreMessagingK::RegistrarClient::Initialize();
  if ( (unsigned int)dword_1C024B450 > 5 )
  {
    v6 = 0;
    v4 = &v2;
    v2 = v0;
    v5 = 4;
    tlgWriteTransfer_EtwWriteTransfer((__int64)&dword_1C024B450, (unsigned __int8 *)dword_1C0223A78, 0LL, 0LL, 3u, &v3);
  }
  return (unsigned int)v0;
}
