/*
 * XREFs of _LdrpLoadForwardedDll@24 @ 0x4B2CE9C0
 * Callers:
 *     _LdrpGetDelayloadExportDll@20 @ 0x4B2CF859 (_LdrpGetDelayloadExportDll@20.c)
 *     _LdrpResolveProcedureAddress@24 @ 0x4B306029 (_LdrpResolveProcedureAddress@24.c)
 * Callees:
 *     _RtlDeleteBoundaryDescriptor@4 @ 0x4B2ABA40 (_RtlDeleteBoundaryDescriptor@4.c)
 *     _LdrpPreprocessDllName@16 @ 0x4B2CB090 (_LdrpPreprocessDllName@16.c)
 *     @RtlDeactivateActivationContextUnsafeFast@4 @ 0x4B2CC6C0 (@RtlDeactivateActivationContextUnsafeFast@4.c)
 *     @RtlActivateActivationContextUnsafeFast@8 @ 0x4B2CDC10 (@RtlActivateActivationContextUnsafeFast@8.c)
 *     _LdrpLoadDllInternal@32 @ 0x4B2CE104 (_LdrpLoadDllInternal@32.c)
 *     _LdrpAppendAnsiStringToFilenameBuffer@8 @ 0x4B2CE8EA (_LdrpAppendAnsiStringToFilenameBuffer@8.c)
 *     _LdrpLoadForwardedDll@24 @ 0x4B2CE9C0 (_LdrpLoadForwardedDll@24.c)
 *     __SEH_prolog4_GS @ 0x4B307B20 (__SEH_prolog4_GS.c)
 */

int __fastcall LdrpLoadForwardedDll(const ANSI_STRING *a1, int a2, int a3, int a4, int a5, PVOID *a6)
{
  int v7[10]; // [esp+10h] [ebp-268h] BYREF
  int v8; // [esp+38h] [ebp-240h]
  PVOID *v9; // [esp+3Ch] [ebp-23Ch]
  int v10; // [esp+40h] [ebp-238h] BYREF
  int appended; // [esp+44h] [ebp-234h] BYREF
  _UNICODE_STRING SystemPath; // [esp+48h] [ebp-230h] BYREF
  _WORD v13[128]; // [esp+50h] [ebp-228h] BYREF
  _UNICODE_STRING OriginalName; // [esp+150h] [ebp-128h] BYREF
  _WORD v15[132]; // [esp+158h] [ebp-120h] BYREF
  CPPEH_RECORD ms_exc; // [esp+260h] [ebp-18h]

  v7[9] = a2;
  v8 = a3;
  v9 = a6;
  SystemPath.Buffer = v13;
  *(_DWORD *)&SystemPath.Length = 0x1000000;
  v13[0] = 0;
  OriginalName.Buffer = v15;
  *(_DWORD *)&OriginalName.Length = 0x1000000;
  v15[0] = 0;
  appended = LdrpAppendAnsiStringToFilenameBuffer(&OriginalName.Length, a1);
  if ( appended >= 0 )
  {
    v7[0] = 36;
    v7[1] = 1;
    memset(&v7[2], 0, 0x1Cu);
    RtlActivateActivationContextUnsafeFast(v7, *(_DWORD *)(a4 + 72));
    ms_exc.registration.TryLevel = 0;
    v10 = 0;
    appended = LdrpPreprocessDllName(&OriginalName, &SystemPath, a4, &v10);
    if ( appended >= 0 )
      LdrpLoadDllInternal(&SystemPath, v10, a5, a4, v8, v9, &appended);
    ms_exc.registration.TryLevel = -2;
    RtlDeactivateActivationContextUnsafeFast(v7);
  }
  if ( v15 != OriginalName.Buffer )
    RtlDeleteBoundaryDescriptor((POBJECT_BOUNDARY_DESCRIPTOR)OriginalName.Buffer);
  OriginalName.Buffer = v15;
  *(_DWORD *)&OriginalName.Length = 0x1000000;
  v15[0] = 0;
  if ( v13 != SystemPath.Buffer )
    RtlDeleteBoundaryDescriptor((POBJECT_BOUNDARY_DESCRIPTOR)SystemPath.Buffer);
  return appended;
}
