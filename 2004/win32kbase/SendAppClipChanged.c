/*
 * XREFs of SendAppClipChanged @ 0x1C00127E0
 * Callers:
 *     ?UpdateClipRect@CCursorClip@@AEAAXUtagRECT@@@Z @ 0x1C00126F4 (-UpdateClipRect@CCursorClip@@AEAAXUtagRECT@@@Z.c)
 * Callees:
 *     ?CoreMsgSendMessage@InputExtensibilityCallout@@QEBAJW4_MIT_ENDPOINT@@PEBXI@Z @ 0x1C006A794 (-CoreMsgSendMessage@InputExtensibilityCallout@@QEBAJW4_MIT_ENDPOINT@@PEBXI@Z.c)
 */

__int64 __fastcall SendAppClipChanged(__int128 *a1)
{
  __int128 v1; // xmm0
  _DWORD v3[2]; // [rsp+20h] [rbp-28h] BYREF
  __int128 v4; // [rsp+28h] [rbp-20h]
  __int64 v5; // [rsp+38h] [rbp-10h]

  v1 = *a1;
  v3[1] = 0;
  v5 = 0LL;
  v3[0] = 2;
  v4 = v1;
  return ((__int64 (__fastcall *)(__int128 *, __int64, _DWORD *, __int64))InputExtensibilityCallout::CoreMsgSendMessage)(
           a1,
           1LL,
           v3,
           32LL);
}
