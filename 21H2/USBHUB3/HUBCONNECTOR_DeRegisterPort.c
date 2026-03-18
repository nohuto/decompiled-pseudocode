/*
 * XREFs of HUBCONNECTOR_DeRegisterPort @ 0x1C007CC9C
 * Callers:
 *     HUBCONNECTOR_UnMapHubPorts @ 0x1C007D6D4 (HUBCONNECTOR_UnMapHubPorts.c)
 * Callees:
 *     WPP_RECORDER_SF_d @ 0x1C0001C04 (WPP_RECORDER_SF_d.c)
 *     WPP_RECORDER_SF_ @ 0x1C0002130 (WPP_RECORDER_SF_.c)
 *     _guard_dispatch_icall_nop @ 0x1C00437E0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall HUBCONNECTOR_DeRegisterPort(__int64 a1)
{
  unsigned int v2; // edi
  __int64 v3; // rax
  _QWORD *v4; // r14
  _QWORD *i; // rax
  _QWORD *v6; // rbx
  __int64 v7; // rax
  int v9; // ecx
  __int64 v10; // rcx
  _QWORD *v11; // rdx

  v2 = 0;
  v3 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, WDFDRIVER__ *, void *))(WdfFunctions_01015 + 1616))(
         WdfDriverGlobals,
         WdfDriverGlobals->Driver,
         off_1C00671E8);
  (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD, _QWORD))(WdfFunctions_01015 + 2504))(
    WdfDriverGlobals,
    *(_QWORD *)(v3 + 56),
    0LL);
  if ( (*(_DWORD *)(a1 + 204) & 0x20) == 0 )
    goto LABEL_9;
  v4 = (_QWORD *)((*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, WDFDRIVER__ *, void *))(WdfFunctions_01015 + 1616))(
                    WdfDriverGlobals,
                    WdfDriverGlobals->Driver,
                    off_1C00671E8)
                + 40);
  for ( i = (_QWORD *)*v4; ; i = (_QWORD *)v6[10] )
  {
    v6 = i - 10;
    if ( v4 == i )
      goto LABEL_6;
    if ( RtlCompareMemory(i - 10, (const void *)(a1 + 1368), 0x38uLL) == 56 )
      break;
  }
  if ( !v6 )
  {
LABEL_6:
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_SF_(*(_QWORD *)(a1 + 1432), 2u, 4u, 0x13u, (__int64)&WPP_e747a75ab0a43332580ac19f3a627527_Traceguids);
    v2 = -1073741823;
    goto LABEL_9;
  }
  v9 = *(_DWORD *)(a1 + 208);
  if ( v9 == 512 )
  {
    v6[7] = 0LL;
    goto LABEL_18;
  }
  if ( v9 == 768 )
  {
    v6[8] = 0LL;
    if ( v6[7] )
    {
LABEL_16:
      _InterlockedAnd((volatile signed __int32 *)(a1 + 204), 0xFFFFFFDF);
      goto LABEL_9;
    }
LABEL_18:
    if ( !v6[8] )
    {
      v10 = v6[10];
      if ( *(_QWORD **)(v10 + 8) != v6 + 10 || (v11 = (_QWORD *)v6[11], (_QWORD *)*v11 != v6 + 10) )
        __fastfail(3u);
      *v11 = v10;
      *(_QWORD *)(v10 + 8) = v11;
      ExFreePoolWithTag(v6, 0x70334855u);
    }
    goto LABEL_16;
  }
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_d(
      *(_QWORD *)(a1 + 1432),
      2u,
      6u,
      0x14u,
      (__int64)&WPP_e747a75ab0a43332580ac19f3a627527_Traceguids,
      *(_DWORD *)(a1 + 208));
LABEL_9:
  v7 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, WDFDRIVER__ *, void *))(WdfFunctions_01015 + 1616))(
         WdfDriverGlobals,
         WdfDriverGlobals->Driver,
         off_1C00671E8);
  (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD))(WdfFunctions_01015 + 2512))(
    WdfDriverGlobals,
    *(_QWORD *)(v7 + 56));
  return v2;
}
