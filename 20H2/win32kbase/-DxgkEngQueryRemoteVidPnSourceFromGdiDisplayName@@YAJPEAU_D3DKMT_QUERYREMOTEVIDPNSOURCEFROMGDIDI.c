/*
 * XREFs of ?DxgkEngQueryRemoteVidPnSourceFromGdiDisplayName@@YAJPEAU_D3DKMT_QUERYREMOTEVIDPNSOURCEFROMGDIDISPLAYNAME@@@Z @ 0x1C014B7A0
 * Callers:
 *     <none>
 * Callees:
 *     EnterSharedCrit @ 0x1C004B1D0 (EnterSharedCrit.c)
 *     UserSessionSwitchLeaveCrit @ 0x1C004B4E0 (UserSessionSwitchLeaveCrit.c)
 *     DrvGetDeviceFromName @ 0x1C005EB10 (DrvGetDeviceFromName.c)
 *     __security_check_cookie @ 0x1C00CBC40 (__security_check_cookie.c)
 */

__int64 __fastcall DxgkEngQueryRemoteVidPnSourceFromGdiDisplayName(
        struct _D3DKMT_QUERYREMOTEVIDPNSOURCEFROMGDIDISPLAYNAME *a1)
{
  struct _D3DKMT_QUERYREMOTEVIDPNSOURCEFROMGDIDISPLAYNAME *v2; // rax
  unsigned int v3; // ebx
  wchar_t *DeviceFromName; // rax
  _DWORD *p_VidPnSourceId; // rdx
  ULONG64 v6; // rcx
  __int64 v7; // r9
  struct _UNICODE_STRING DestinationString; // [rsp+20h] [rbp-78h] BYREF
  WCHAR SourceString[8]; // [rsp+30h] [rbp-68h] BYREF
  __int128 v11; // [rsp+40h] [rbp-58h]
  __int128 v12; // [rsp+50h] [rbp-48h]
  __int128 v13; // [rsp+60h] [rbp-38h]
  D3DDDI_VIDEO_PRESENT_SOURCE_ID VidPnSourceId; // [rsp+70h] [rbp-28h]

  DestinationString = 0LL;
  v2 = a1;
  if ( (unsigned __int64)a1 >= MmUserProbeAddress )
    v2 = (struct _D3DKMT_QUERYREMOTEVIDPNSOURCEFROMGDIDISPLAYNAME *)MmUserProbeAddress;
  *(_OWORD *)SourceString = *(_OWORD *)v2->DeviceName;
  v11 = *(_OWORD *)&v2->DeviceName[8];
  v12 = *(_OWORD *)&v2->DeviceName[16];
  v13 = *(_OWORD *)&v2->DeviceName[24];
  VidPnSourceId = v2->VidPnSourceId;
  v3 = 0;
  HIWORD(v13) = 0;
  EnterSharedCrit(0, 1);
  RtlInitUnicodeString(&DestinationString, SourceString);
  DeviceFromName = DrvGetDeviceFromName(&DestinationString);
  if ( DeviceFromName && (*((_DWORD *)DeviceFromName + 40) & 0x4000000) != 0 )
  {
    p_VidPnSourceId = &a1->VidPnSourceId;
    v6 = MmUserProbeAddress;
    if ( (unsigned __int64)&a1->VidPnSourceId >= MmUserProbeAddress )
      p_VidPnSourceId = (_DWORD *)MmUserProbeAddress;
    *p_VidPnSourceId = *((_DWORD *)DeviceFromName + 64);
  }
  else
  {
    v3 = -1073741811;
  }
  UserSessionSwitchLeaveCrit(v6, (__int64)p_VidPnSourceId, (__int64)DeviceFromName, v7);
  return v3;
}
