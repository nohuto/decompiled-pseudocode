/*
 * XREFs of ?AddScrollAsDirty@CCompositionBuffer@@IEAAXAEBUScrollOptimization@@@Z @ 0x1C0064830
 * Callers:
 *     ?NotifyTokenInFrame@CFlipExBuffer@@UEAAJAEBVCToken@@PEA_N@Z @ 0x1C0015820 (-NotifyTokenInFrame@CFlipExBuffer@@UEAAJAEBVCToken@@PEA_N@Z.c)
 *     ?InFrame@CCompositionToken@@UEAAJPEAVCCompositionFrame@@PEA_N@Z @ 0x1C00164C0 (-InFrame@CCompositionToken@@UEAAJPEAVCCompositionFrame@@PEA_N@Z.c)
 *     ?NotifyDirty@CCompositionBuffer@@QEAAXAEBUIRegion@@PEBUScrollOptimization@@@Z @ 0x1C0064BB8 (-NotifyDirty@CCompositionBuffer@@QEAAXAEBUIRegion@@PEBUScrollOptimization@@@Z.c)
 * Callees:
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C000A650 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C0026570 (_guard_dispatch_icall_nop.c)
 */

void __fastcall CCompositionBuffer::AddScrollAsDirty(CCompositionBuffer *this, const struct ScrollOptimization *a2)
{
  struct DXGGLOBAL *Global; // rax
  int v5; // eax
  __int64 *v6; // rcx
  __int64 v7; // rdx
  void (*v8)(void); // rax
  void (***v9)(void); // [rsp+38h] [rbp+10h] BYREF

  v9 = 0LL;
  Global = DXGGLOBAL::GetGlobal((__int64)this, (__int64)a2);
  v5 = (*(__int64 (__fastcall **)(char *, void (****)(void)))(*((_QWORD *)Global + 38033) + 24LL))((char *)a2 + 4, &v9);
  v6 = (__int64 *)*((_QWORD *)this + 31);
  v7 = *v6;
  if ( v5 < 0 )
  {
    v8 = *(void (**)(void))(v7 + 32);
  }
  else
  {
    (*(void (__fastcall **)(__int64 *, void (***)(void), __int64))(v7 + 48))(v6, v9, 2LL);
    v8 = **v9;
  }
  v8();
}
