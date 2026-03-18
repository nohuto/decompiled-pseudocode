/*
 * XREFs of IsMiniportDriverCCDSupport @ 0x1C0154150
 * Callers:
 *     DxgkConvertDisplayConfigCScalingToDdiScaling @ 0x1C01540C0 (DxgkConvertDisplayConfigCScalingToDdiScaling.c)
 * Callees:
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C000A650 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?ReleaseReferenceNoTracking@DXGADAPTER@@QEAAXXZ @ 0x1C000E2A4 (-ReleaseReferenceNoTracking@DXGADAPTER@@QEAAXXZ.c)
 *     ?ReferenceAdapterByLuid@DXGGLOBAL@@QEAAPEAVDXGADAPTER@@U_LUID@@PEA_K@Z @ 0x1C0116E44 (-ReferenceAdapterByLuid@DXGGLOBAL@@QEAAPEAVDXGADAPTER@@U_LUID@@PEA_K@Z.c)
 */

_BOOL8 __fastcall IsMiniportDriverCCDSupport(struct _LUID *a1, __int64 a2)
{
  DXGGLOBAL *Global; // rax
  struct DXGADAPTER *v4; // rax
  __int64 v5; // rdx
  __int64 v6; // rcx
  BOOL v7; // ebx
  __int64 v8; // rcx
  __int64 v10; // rax
  unsigned __int64 v11; // [rsp+38h] [rbp+10h] BYREF

  Global = DXGGLOBAL::GetGlobal((__int64)a1, a2);
  v4 = DXGGLOBAL::ReferenceAdapterByLuid(Global, *a1, &v11);
  v7 = 0;
  if ( v4 )
  {
    v8 = *((_QWORD *)v4 + 334);
    if ( v8 )
      v7 = *(_DWORD *)(*(_QWORD *)(v8 + 16) + 2572LL) >= 1105;
    DXGADAPTER::ReleaseReferenceNoTracking(v4);
  }
  else
  {
    v10 = WdLogNewEntry5_WdError(v6, v5);
    *(_QWORD *)(v10 + 24) = a1->HighPart;
    *(_QWORD *)(v10 + 32) = a1->LowPart;
    WdLogEvent5_WdError(v10);
  }
  return v7;
}
