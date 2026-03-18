/*
 * XREFs of _WPP_RECORDER_SF_Dq@28 @ 0x183A03
 * Callers:
 *     _UserJobCallout@4 @ 0x9D26C (_UserJobCallout@4.c)
 * Callees:
 *     <none>
 */

int __stdcall WPP_RECORDER_SF_Dq(int a1, int a2, int a3, char a4, char a5)
{
  struct RECORDER_LOG__ *v5; // esi
  int v7; // [esp+0h] [ebp-10h]
  int v8; // [esp+4h] [ebp-Ch]

  v5 = gFullLog;
  if ( (WPP_GLOBAL_Control->Characteristics & 0x1000) != 0 && BYTE1(WPP_GLOBAL_Control->Flags) >= 4u )
    ((void (__cdecl *)(struct _DEVICE_OBJECT *, struct _IRP *, int, void *, int, char *, int, char *, int, _DWORD))pfnWppTraceMessage)(
      WPP_GLOBAL_Control->AttachedDevice,
      WPP_GLOBAL_Control->CurrentIrp,
      43,
      &WPP_8d1b82f3b1933447d2872340d476a1f2_Traceguids,
      14,
      &a4,
      4,
      &a5,
      4,
      0);
  return _WppAutoLogTrace(v5, 4, 13, &WPP_8d1b82f3b1933447d2872340d476a1f2_Traceguids, 14, &a4, 4, &a5, 4, 0, v7, v8);
}
