/*
 * XREFs of InitAcpiLpiStates @ 0x1C00217FC
 * Callers:
 *     ProcLibDeviceStart @ 0x1C0021A14 (ProcLibDeviceStart.c)
 * Callees:
 *     WPP_RECORDER_SF_D @ 0x1C0003658 (WPP_RECORDER_SF_D.c)
 *     WPP_RECORDER_SF_ @ 0x1C0003718 (WPP_RECORDER_SF_.c)
 *     _guard_dispatch_icall_nop @ 0x1C00044E0 (_guard_dispatch_icall_nop.c)
 *     Display_LPI @ 0x1C000C058 (Display_LPI.c)
 *     AcpiEvaluateMethod @ 0x1C0020130 (AcpiEvaluateMethod.c)
 *     ValidateProcessorLpiStates @ 0x1C002F4BC (ValidateProcessorLpiStates.c)
 *     AcpiParseLpiObject @ 0x1C00325D4 (AcpiParseLpiObject.c)
 */

__int64 __fastcall InitAcpiLpiStates(__int64 a1)
{
  int v2; // edi
  _DWORD *v3; // rcx
  __int64 v5; // rdx
  unsigned __int16 v6; // r9
  unsigned __int8 v7; // dl
  int v8; // r8d
  int v9; // r9d
  PVOID v10; // rax
  const wchar_t *v11; // rdx
  __int64 v12; // rbx
  int v13; // [rsp+50h] [rbp+20h] BYREF
  PVOID v14; // [rsp+58h] [rbp+28h] BYREF
  PVOID P; // [rsp+60h] [rbp+30h] BYREF

  (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD, _QWORD))(WdfFunctions_01015 + 2504))(
    WdfDriverGlobals,
    *(_QWORD *)(a1 + 208),
    0LL);
  v14 = 0LL;
  v13 = 0;
  P = 0LL;
  _InterlockedOr((volatile signed __int32 *)(a1 + 1092), 0x80000u);
  v2 = AcpiEvaluateMethod(a1, 1229999199, 0LL, (unsigned int **)&P, &v13);
  if ( v2 >= 0 )
  {
    v5 = *(_QWORD *)(a1 + 64);
    *(_QWORD *)(a1 + 264) |= *(_QWORD *)(a1 + 272) & 0xE0000000000LL;
    v2 = AcpiParseLpiObject(P, v5, 0LL, &v14);
  }
  if ( P )
    ExFreePoolWithTag(P, 0);
  if ( v2 >= 0 )
  {
    v2 = ValidateProcessorLpiStates(v14);
    if ( v2 >= 0 )
    {
      v10 = v14;
      v2 = 0;
      v14 = 0LL;
      v11 = *(const wchar_t **)(a1 + 64);
      *(_QWORD *)(a1 + 528) = v10;
      Display_LPI((__int64)v10, v11, v8, v9);
      goto LABEL_9;
    }
    _InterlockedOr((volatile signed __int32 *)(a1 + 1096), 0x80000u);
    if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      goto LABEL_9;
    v6 = 12;
    v7 = 2;
LABEL_15:
    WPP_RECORDER_SF_D(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      v7,
      3u,
      v6,
      (__int64)&WPP_c9178c11c8093e361aee475e5cbe99c8_Traceguids,
      v2);
    goto LABEL_9;
  }
  _InterlockedOr((volatile signed __int32 *)(a1 + 1096), 0x80000u);
  v14 = 0LL;
  if ( v2 != -1073741772 )
  {
    if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      goto LABEL_9;
    v6 = 11;
    v7 = 3;
    goto LABEL_15;
  }
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      4u,
      2u,
      0xAu,
      (__int64)&WPP_c9178c11c8093e361aee475e5cbe99c8_Traceguids);
LABEL_9:
  (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD))(WdfFunctions_01015 + 2512))(
    WdfDriverGlobals,
    *(_QWORD *)(a1 + 208));
  if ( v2 < 0 )
    *(_QWORD *)(a1 + 272) &= 0xFFFFE1FFFFFFFFFFuLL;
  v3 = v14;
  if ( v14 )
  {
    v12 = 0LL;
    if ( *((_DWORD *)v14 + 4) )
    {
      do
      {
        if ( *(_QWORD *)&v3[20 * v12 + 24] )
        {
          RtlFreeUnicodeString((PUNICODE_STRING)&v3[20 * v12 + 22]);
          v3 = v14;
        }
        v12 = (unsigned int)(v12 + 1);
      }
      while ( (unsigned int)v12 < v3[4] );
    }
    ExFreePoolWithTag(v3, 0);
  }
  return (unsigned int)v2;
}
