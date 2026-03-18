/*
 * XREFs of _WPP_RECORDER_SF_DD@28 @ 0x149D50
 * Callers:
 *     ?ValidateInjectedTouchFrame@@YGHIPAUtagPOINTER_TOUCH_INFO@@PAUtagINJECTED_CONTACT@@PAUtagRECT@@I@Z @ 0x149543 (-ValidateInjectedTouchFrame@@YGHIPAUtagPOINTER_TOUCH_INFO@@PAUtagINJECTED_CONTACT@@PAUtagRECT@@I.c)
 * Callees:
 *     <none>
 */

int __stdcall WPP_RECORDER_SF_DD(int a1, int a2, int a3, char a4, char a5)
{
  struct RECORDER_LOG__ *v5; // esi
  int v7; // [esp+0h] [ebp-Ch]
  int v8; // [esp+4h] [ebp-8h]

  v5 = gFullLog;
  if ( ((unsigned int)&loc_80000 & WPP_GLOBAL_Control->Characteristics) != 0 && BYTE1(WPP_GLOBAL_Control->Flags) >= 2u )
    ((void (__cdecl *)(struct _DEVICE_OBJECT *, struct _IRP *, int, void *, int, char *, int, char *, int, _DWORD))pfnWppTraceMessage)(
      WPP_GLOBAL_Control->AttachedDevice,
      WPP_GLOBAL_Control->CurrentIrp,
      43,
      &WPP_a7556dcd6e523d00d7fcf3c18afb0c6e_Traceguids,
      a2,
      &a4,
      4,
      &a5,
      4,
      0);
  return _WppAutoLogTrace(v5, 2, 20, &WPP_a7556dcd6e523d00d7fcf3c18afb0c6e_Traceguids, a2, &a4, 4, &a5, 4, 0, v7, v8);
}
