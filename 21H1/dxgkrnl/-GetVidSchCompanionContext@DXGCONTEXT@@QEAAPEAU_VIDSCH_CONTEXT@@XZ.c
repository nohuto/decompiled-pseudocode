/*
 * XREFs of ?GetVidSchCompanionContext@DXGCONTEXT@@QEAAPEAU_VIDSCH_CONTEXT@@XZ @ 0x1C022AA7C
 * Callers:
 *     DxgkUpdateGpuVirtualAddress @ 0x1C0226C10 (DxgkUpdateGpuVirtualAddress.c)
 *     ?GetVidMmCompanionContext@DXGCONTEXT@@QEAAPEAUVIDMM_COMPANION_CONTEXT@@XZ @ 0x1C022AA10 (-GetVidMmCompanionContext@DXGCONTEXT@@QEAAPEAUVIDMM_COMPANION_CONTEXT@@XZ.c)
 * Callees:
 *     __security_check_cookie @ 0x1C0024300 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C0026570 (_guard_dispatch_icall_nop.c)
 */

struct _VIDSCH_CONTEXT *__fastcall DXGCONTEXT::GetVidSchCompanionContext(DXGCONTEXT *this)
{
  struct _VIDSCH_CONTEXT *result; // rax
  __int64 v3; // rax
  __int128 v4; // [rsp+20h] [rbp-38h] BYREF
  __int64 v5; // [rsp+30h] [rbp-28h]
  int v6; // [rsp+38h] [rbp-20h]

  result = (struct _VIDSCH_CONTEXT *)*((_QWORD *)this + 35);
  if ( !result )
  {
    v5 = 0LL;
    v6 = 0;
    v3 = *((_QWORD *)this + 2);
    v4 = 0LL;
    LODWORD(v3) = *(_DWORD *)(*(_QWORD *)(v3 + 40) + 352LL);
    HIDWORD(v4) = 0;
    LODWORD(v4) = 64;
    HIDWORD(v5) = v3;
    DWORD2(v4) = *((_DWORD *)this + 104);
    result = (struct _VIDSCH_CONTEXT *)(*(__int64 (__fastcall **)(DXGCONTEXT *, __int128 *))(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL) + 616LL) + 8LL)
                                                                                           + 216LL))(
                                         this,
                                         &v4);
    *((_QWORD *)this + 35) = result;
  }
  return result;
}
