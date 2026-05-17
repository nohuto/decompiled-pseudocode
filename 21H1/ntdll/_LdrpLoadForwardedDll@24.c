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

int __fastcall LdrpLoadForwardedDll(STRING *a1, int a2, int a3, int a4, int a5, int *a6)
{
  int v7[10]; // [esp+10h] [ebp-268h] BYREF
  int v8; // [esp+38h] [ebp-240h]
  int *v9; // [esp+3Ch] [ebp-23Ch]
  int v10; // [esp+40h] [ebp-238h] BYREF
  int appended; // [esp+44h] [ebp-234h] BYREF
  int v12; // [esp+48h] [ebp-230h] BYREF
  _WORD *v13; // [esp+4Ch] [ebp-22Ch]
  _WORD v14[128]; // [esp+50h] [ebp-228h] BYREF
  int v15; // [esp+150h] [ebp-128h] BYREF
  _WORD *v16; // [esp+154h] [ebp-124h]
  _WORD v17[132]; // [esp+158h] [ebp-120h] BYREF
  CPPEH_RECORD ms_exc; // [esp+260h] [ebp-18h]

  v7[9] = a2;
  v8 = a3;
  v9 = a6;
  v13 = v14;
  v12 = 0x1000000;
  v14[0] = 0;
  v16 = v17;
  v15 = 0x1000000;
  v17[0] = 0;
  appended = LdrpAppendAnsiStringToFilenameBuffer((unsigned __int16 *)&v15, a1);
  if ( appended >= 0 )
  {
    v7[0] = 36;
    v7[1] = 1;
    memset(&v7[2], 0, 0x1Cu);
    RtlActivateActivationContextUnsafeFast(v7, *(_DWORD *)(a4 + 72));
    ms_exc.registration.TryLevel = 0;
    v10 = 0;
    appended = LdrpPreprocessDllName((unsigned __int16 *)&v15, (unsigned __int16 *)&v12, a4, &v10);
    if ( appended >= 0 )
      LdrpLoadDllInternal(&v12, v10, a5, a4, v8, v9, &appended);
    ms_exc.registration.TryLevel = -2;
    RtlDeactivateActivationContextUnsafeFast(v7);
  }
  if ( v17 != v16 )
    RtlDeleteBoundaryDescriptor((int)v16);
  v16 = v17;
  v15 = 0x1000000;
  v17[0] = 0;
  if ( v14 != v13 )
    RtlDeleteBoundaryDescriptor((int)v13);
  return appended;
}
