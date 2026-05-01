/*
 * XREFs of DllMain @ 0x180003E4C
 * Callers:
 *     __DllMainCRTStartup @ 0x180006034 (__DllMainCRTStartup.c)
 * Callees:
 *     _tlgWriteTransfer_EventWriteTransfer @ 0x180001008 (_tlgWriteTransfer_EventWriteTransfer.c)
 *     __security_check_cookie @ 0x1800062A0 (__security_check_cookie.c)
 */

BOOL __stdcall DllMain(HINSTANCE hinstDLL, DWORD fdwReason, LPVOID lpvReserved)
{
  GUID v4; // xmm0
  REGHANDLE v5; // rcx
  int v7; // [rsp+30h] [rbp-50h] BYREF
  GUID ProviderId; // [rsp+38h] [rbp-48h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v9; // [rsp+48h] [rbp-38h] BYREF
  int *v10; // [rsp+68h] [rbp-18h]
  int v11; // [rsp+70h] [rbp-10h]
  int v12; // [rsp+74h] [rbp-Ch]

  if ( fdwReason == 1 )
  {
    v4 = (GUID)*((_OWORD *)off_18000A008 - 1);
    xmmword_18000A028 = 0LL;
    ProviderId = v4;
    if ( !EventRegister(&ProviderId, (PENABLECALLBACK)tlgEnableCallback, &dword_18000A000, &RegHandle) )
      EventSetInformation(RegHandle, 2LL, off_18000A008, *(unsigned __int16 *)off_18000A008);
    if ( (unsigned int)dword_18000A000 > 4 )
    {
      v12 = 0;
      v10 = &v7;
      v7 = 1;
      v11 = 4;
      tlgWriteTransfer_EventWriteTransfer(
        (__int64)&dword_18000A000,
        (unsigned __int8 *)dword_180007D49,
        0LL,
        0LL,
        3u,
        &v9);
    }
    DisableThreadLibraryCalls(hinstDLL);
  }
  else if ( !fdwReason )
  {
    if ( (unsigned int)dword_18000A000 > 4 )
    {
      v7 = 0;
      v12 = 0;
      v10 = &v7;
      v11 = 4;
      tlgWriteTransfer_EventWriteTransfer(
        (__int64)&dword_18000A000,
        (unsigned __int8 *)dword_180007D49,
        0LL,
        0LL,
        3u,
        &v9);
    }
    v5 = RegHandle;
    RegHandle = 0LL;
    dword_18000A000 = 0;
    EventUnregister(v5);
  }
  return 1;
}
