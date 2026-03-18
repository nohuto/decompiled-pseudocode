/*
 * XREFs of ??$ReleaseInterface@VCHwLightCollectionBuffer@@@@YAXAEAPEAVCHwLightCollectionBuffer@@@Z @ 0x180046E5C
 * Callers:
 *     ?RetrieveCurrentLightBufferForContextNoRef@CLightStack@@QEAAJPEAVCDrawingContext@@PEBVCMILMatrix@@PEAPEAVCHwLightCollectionBuffer@@@Z @ 0x1800107F0 (-RetrieveCurrentLightBufferForContextNoRef@CLightStack@@QEAAJPEAVCDrawingContext@@PEBVCMILMatrix.c)
 *     ?Create@CHwLightCollectionBuffer@@SAJPEBULightInfo@@I_NPEAPEAV1@@Z @ 0x180010C04 (-Create@CHwLightCollectionBuffer@@SAJPEBULightInfo@@I_NPEAPEAV1@@Z.c)
 *     ??1CLightStack@@QEAA@XZ @ 0x180049AB0 (--1CLightStack@@QEAA@XZ.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x1801051D0 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall ReleaseInterface<CHwLightCollectionBuffer>(__int64 *a1)
{
  __int64 v2; // rcx
  __int64 result; // rax

  v2 = *a1;
  if ( v2 )
  {
    result = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v2 + 8LL))(v2);
    *a1 = 0LL;
  }
  return result;
}
