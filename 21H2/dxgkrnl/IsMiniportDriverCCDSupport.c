/*
 * XREFs of IsMiniportDriverCCDSupport @ 0x1C01D3E20
 * Callers:
 *     DxgkConvertDisplayConfigCScalingToDdiScaling @ 0x1C01D3DA0 (DxgkConvertDisplayConfigCScalingToDdiScaling.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x1C0008E10 (DxgkLogInternalTriageEvent.c)
 *     ?DXGGLOBAL_GetGlobal@@YAPEAVDXGGLOBAL@@XZ @ 0x1C000BBD0 (-DXGGLOBAL_GetGlobal@@YAPEAVDXGGLOBAL@@XZ.c)
 *     ?ReleaseReference@DXGADAPTER@@QEAAX_K@Z @ 0x1C000BD00 (-ReleaseReference@DXGADAPTER@@QEAAX_K@Z.c)
 *     ?ReferenceAdapterByLuid@DXGGLOBAL@@QEAAPEAVDXGADAPTER@@U_LUID@@PEA_K@Z @ 0x1C01A442C (-ReferenceAdapterByLuid@DXGGLOBAL@@QEAAPEAVDXGADAPTER@@U_LUID@@PEA_K@Z.c)
 */

_BOOL8 __fastcall IsMiniportDriverCCDSupport(struct _LUID *a1)
{
  DXGGLOBAL *Global; // rax
  struct DXGADAPTER *v3; // rax
  BOOL v4; // ebx
  __int64 v5; // rcx
  unsigned __int64 v7; // [rsp+60h] [rbp+8h] BYREF

  Global = DXGGLOBAL_GetGlobal();
  v3 = DXGGLOBAL::ReferenceAdapterByLuid(Global, *a1, &v7);
  v4 = 0;
  if ( v3 )
  {
    v5 = *((_QWORD *)v3 + 349);
    if ( v5 )
      v4 = *(_DWORD *)(*(_QWORD *)(v5 + 16) + 2692LL) >= 1105;
    DXGADAPTER::ReleaseReference(v3);
  }
  else
  {
    WdLogSingleEntry2(2LL, a1->HighPart, a1->LowPart);
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      -1,
      (__int64)L"Failed in adapter ptr to query driver Ccd support, returnign on support (0x%I64x::0x%I64x).",
      a1->HighPart,
      a1->LowPart,
      0LL,
      0LL,
      0LL);
  }
  return v4;
}
