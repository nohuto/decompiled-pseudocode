/*
 * XREFs of _WPP_RECORDER_SF_i@28 @ 0x15EA15
 * Callers:
 *     ?ClearStaleEntries@@YGXPAUtagINPUTTRANSFORMLIST@@_K@Z @ 0x15E31A (-ClearStaleEntries@@YGXPAUtagINPUTTRANSFORMLIST@@_K@Z.c)
 * Callees:
 *     <none>
 */

int __stdcall WPP_RECORDER_SF_i(int a1, int a2, int a3, char a4, int a5)
{
  struct RECORDER_LOG__ *v5; // esi
  int v7; // [esp+0h] [ebp-Ch]
  int v8; // [esp+4h] [ebp-8h]
  int v9; // [esp+8h] [ebp-4h]
  int savedregs; // [esp+Ch] [ebp+0h]

  v5 = gFullLog;
  if ( (WPP_GLOBAL_Control->Characteristics & 0x200) != 0 && BYTE1(WPP_GLOBAL_Control->Flags) >= 4u )
    ((void (__cdecl *)(struct _DEVICE_OBJECT *, struct _IRP *, int, void *, int, char *, int, _DWORD))pfnWppTraceMessage)(
      WPP_GLOBAL_Control->AttachedDevice,
      WPP_GLOBAL_Control->CurrentIrp,
      43,
      &WPP_28bedf5f3f5f37f9cc6016b85e7e96ea_Traceguids,
      12,
      &a4,
      8,
      0);
  return _WppAutoLogTrace(
           v5,
           4,
           10,
           &WPP_28bedf5f3f5f37f9cc6016b85e7e96ea_Traceguids,
           12,
           &a4,
           8,
           0,
           v7,
           v8,
           v9,
           savedregs);
}
