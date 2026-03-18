/*
 * XREFs of ?ReducesToFillImage@CImageLegacyMilBrush@@QEBA_NXZ @ 0x18005BD74
 * Callers:
 *     ?TryDrawCommandAsDrawList@CRenderData@@AEAAJPEAVCDrawingContext@@PEAVCDrawListCache@@PEAVCDrawListEntryBuilder@@IV?$span@$$CBE$0?0@gsl@@PEA_N@Z @ 0x18005B470 (-TryDrawCommandAsDrawList@CRenderData@@AEAAJPEAVCDrawingContext@@PEAVCDrawListCache@@PEAVCDrawLi.c)
 * Callees:
 *     ??1?$com_ptr_t@VIRenderTargetBitmap@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x18001C320 (--1-$com_ptr_t@VIRenderTargetBitmap@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801051D0 (_guard_xfg_dispatch_icall_nop.c)
 */

bool __fastcall CImageLegacyMilBrush::ReducesToFillImage(CImageLegacyMilBrush *this)
{
  __int64 v1; // rdx
  bool v2; // bl
  __int64 *v3; // rcx
  __int64 v4; // rax
  _BYTE v6[64]; // [rsp+20h] [rbp-58h] BYREF
  int v7; // [rsp+60h] [rbp-18h]
  __int64 v8; // [rsp+80h] [rbp+8h] BYREF

  v1 = *((_QWORD *)this + 31);
  v2 = 0;
  if ( v1
    && *((float *)this + 32) == 1.0
    && !*((_DWORD *)this + 41)
    && *((_DWORD *)this + 40) == 1
    && *((float *)this + 42) == 0.0
    && *((float *)this + 43) == 0.0
    && *((float *)this + 44) == 1.0
    && *((float *)this + 45) == 1.0
    && *((_DWORD *)this + 54) == 1
    && !*((_QWORD *)this + 17)
    && !*((_QWORD *)this + 19)
    && !*((_QWORD *)this + 18)
    && !*((_QWORD *)this + 26)
    && !*((_QWORD *)this + 23) )
  {
    v3 = (__int64 *)(v1 + 64 + *(int *)(*(_QWORD *)(v1 + 64) + 8LL));
    v4 = *v3;
    v8 = 0LL;
    if ( (*(int (__fastcall **)(__int64 *, __int64 *))(v4 + 56))(v3, &v8) >= 0 )
    {
      v7 = 0;
      v2 = (*(unsigned __int8 (__fastcall **)(__int64, _BYTE *, _QWORD))(*(_QWORD *)v8 + 8LL))(v8, v6, 0LL) == 0;
    }
    wil::com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>::~com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>((__int64)&v8);
  }
  return v2;
}
