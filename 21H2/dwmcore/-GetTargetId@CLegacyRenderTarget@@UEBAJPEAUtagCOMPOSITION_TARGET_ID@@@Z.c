/*
 * XREFs of ?GetTargetId@CLegacyRenderTarget@@UEBAJPEAUtagCOMPOSITION_TARGET_ID@@@Z @ 0x1800BC200
 * Callers:
 *     ?GetStats@CLegacyRenderTarget@@UEAA_NPEAUtagCOMPOSITION_TARGET_ID@@PEAUtagCOMPOSITION_TARGET_STATS@@@Z @ 0x1800BBE9C (-GetStats@CLegacyRenderTarget@@UEAA_NPEAUtagCOMPOSITION_TARGET_ID@@PEAUtagCOMPOSITION_TARGET_STA.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x1801051D0 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall CLegacyRenderTarget::GetTargetId(CLegacyRenderTarget *this, struct tagCOMPOSITION_TARGET_ID *a2)
{
  __int64 v4; // rcx
  char v6; // [rsp+30h] [rbp+8h] BYREF

  v4 = *((_QWORD *)this + 4);
  if ( !v4 )
    return 2291662854LL;
  *(_QWORD *)a2 = *(_QWORD *)(*(__int64 (__fastcall **)(__int64, char *))(*(_QWORD *)v4 + 48LL))(v4, &v6);
  *((_QWORD *)a2 + 1) = *((_QWORD *)this + 2285);
  *((_DWORD *)a2 + 4) = (*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)this + 4) + 56LL))(*((_QWORD *)this + 4));
  *((_DWORD *)a2 + 5) = (*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)this + 4) + 64LL))(*((_QWORD *)this + 4));
  *((_DWORD *)a2 + 6) = *((_DWORD *)this + 4568);
  return 0LL;
}
