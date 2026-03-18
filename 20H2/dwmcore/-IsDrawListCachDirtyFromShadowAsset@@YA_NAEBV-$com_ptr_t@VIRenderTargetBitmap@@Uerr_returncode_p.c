/*
 * XREFs of ?IsDrawListCachDirtyFromShadowAsset@@YA_NAEBV?$com_ptr_t@VIRenderTargetBitmap@@Uerr_returncode_policy@wil@@@wil@@_K@Z @ 0x1801E3284
 * Callers:
 *     ?IsDrawListCacheDirty@CProjectedShadow@@UEAA_NPEAVCDrawListCache@@PEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEBVCMILMatrix@@@Z @ 0x1801E3330 (-IsDrawListCacheDirty@CProjectedShadow@@UEAA_NPEAVCDrawListCache@@PEAVCDrawingContext@@AEBUD2D_S.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800EE9F0 (_guard_dispatch_icall_nop.c)
 */

bool __fastcall IsDrawListCachDirtyFromShadowAsset(__int64 *a1, unsigned __int64 a2)
{
  __int64 v2; // r8
  bool v4; // bl
  int (__fastcall ***v5)(_QWORD, GUID *, _QWORD **); // rcx
  __int64 v6; // rcx
  _QWORD *v8; // [rsp+30h] [rbp+8h] BYREF

  v2 = *a1;
  v8 = 0LL;
  v4 = 0;
  v5 = (int (__fastcall ***)(_QWORD, GUID *, _QWORD **))(v2 + 8 + *(int *)(*(_QWORD *)(v2 + 8) + 4LL));
  if ( (**v5)(v5, &GUID_93cf258b_6b62_4f00_89f1_7bf8602fdadb, &v8) >= 0 )
    v4 = (*(__int64 (__fastcall **)(_QWORD *))(*v8 + 8LL))(v8) > a2;
  if ( v8 )
  {
    v6 = (__int64)v8 + *(int *)(v8[1] + 4LL) + 8;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v6 + 16LL))(v6);
  }
  return v4;
}
