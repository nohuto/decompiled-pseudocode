/*
 * XREFs of _WPP_RECORDER_SF_D@24 @ 0x147D5C
 * Callers:
 *     ?xxxSkipSysMsgEx@@YGPAUtagQMSG@@PAUtagTHREADINFO@@PAU1@H@Z @ 0x6F108 (-xxxSkipSysMsgEx@@YGPAUtagQMSG@@PAUtagTHREADINFO@@PAU1@H@Z.c)
 *     _NtUserSetCursorPos@8 @ 0xAE922 (_NtUserSetCursorPos@8.c)
 *     ?xxxMouseEventDirect@@YGHKKKK_K0KH@Z @ 0xAF5BA (-xxxMouseEventDirect@@YGHKKKK_K0KH@Z.c)
 *     ?ValidateInjectedTouchFrame@@YGHIPAUtagPOINTER_TOUCH_INFO@@PAUtagINJECTED_CONTACT@@PAUtagRECT@@I@Z @ 0x149543 (-ValidateInjectedTouchFrame@@YGHIPAUtagPOINTER_TOUCH_INFO@@PAUtagINJECTED_CONTACT@@PAUtagRECT@@I.c)
 *     _xxxInjectTouchInput@8 @ 0x14A084 (_xxxInjectTouchInput@8.c)
 *     _NtUserInjectTouchInput@8 @ 0x165800 (_NtUserInjectTouchInput@8.c)
 *     ?xxxAdviseData@@YGKPAKPAJPAUtagDDECONV@@@Z @ 0x17EEED (-xxxAdviseData@@YGKPAKPAJPAUtagDDECONV@@@Z.c)
 * Callees:
 *     <none>
 */

int __fastcall WPP_RECORDER_SF_D(int a1, int a2, unsigned int a3, int a4, int a5, char a6)
{
  unsigned int v7; // edx
  int v9; // [esp+0h] [ebp-10h]
  int v10; // [esp+4h] [ebp-Ch]
  int v11; // [esp+8h] [ebp-8h]
  struct RECORDER_LOG__ *v12; // [esp+Ch] [ebp-4h]

  v12 = gFullLog;
  v7 = HIWORD(a3);
  if ( ((1 << ((a3 - 1) & 0x1F)) & *(&WPP_GLOBAL_Control->Characteristics + 14 * HIWORD(a3) + (((a3 - 1) >> 5) & 0x7FF))) != 0
    && *((_BYTE *)&WPP_GLOBAL_Control->Flags + 56 * v7 + 1) >= (unsigned __int8)a2 )
  {
    ((void (__cdecl *)(_DWORD, _DWORD, int, int, int, char *, int, _DWORD))pfnWppTraceMessage)(
      *((_DWORD *)&WPP_GLOBAL_Control->AttachedDevice + 14 * v7),
      *((_DWORD *)&WPP_GLOBAL_Control->CurrentIrp + 14 * v7),
      43,
      a5,
      a4,
      &a6,
      4,
      0);
  }
  return _WppAutoLogTrace(v12, a2, a3, a5, a4, &a6, 4, 0, v9, v10, v11, v12);
}
