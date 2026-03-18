/*
 * XREFs of ?DrawBitmap@CRenderDataBounds@@UEAAJPEAVCResource@@@Z @ 0x1800E2A80
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$com_ptr_t@VIRenderTargetBitmap@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x18001C320 (--1-$com_ptr_t@VIRenderTargetBitmap@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ??$Transform2DBoundsHelper@$00@CMILMatrix@@AEBAXAEBUMilRectF@@AEAU1@@Z @ 0x1800AE2E0 (--$Transform2DBoundsHelper@$00@CMILMatrix@@AEBAXAEBUMilRectF@@AEAU1@@Z.c)
 *     ?AddBounds@CRenderDataBounds@@IEAAXAEBV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x1800E2B78 (-AddBounds@CRenderDataBounds@@IEAAXAEBV-$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@U.c)
 *     __security_check_cookie @ 0x180100650 (__security_check_cookie.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801051D0 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall CRenderDataBounds::DrawBitmap(CRenderDataBounds *this, struct CResource *a2)
{
  __int64 *v4; // rcx
  __int64 v5; // rax
  char v6; // al
  __int64 v7; // r9
  __int128 *v8; // rdx
  _QWORD v10[2]; // [rsp+20h] [rbp-39h] BYREF
  _BYTE v11[64]; // [rsp+30h] [rbp-29h] BYREF
  int v12; // [rsp+70h] [rbp+17h]
  __int128 v13; // [rsp+80h] [rbp+27h] BYREF
  __int128 v14; // [rsp+90h] [rbp+37h] BYREF

  if ( (*(unsigned __int8 (__fastcall **)(struct CResource *, __int64))(*(_QWORD *)a2 + 56LL))(a2, 83LL) )
  {
    v4 = (__int64 *)((char *)a2 + *(int *)(*((_QWORD *)a2 + 8) + 8LL) + 64);
    v5 = *v4;
    v10[0] = 0LL;
    if ( (*(int (__fastcall **)(__int64 *, _QWORD *))(v5 + 56))(v4, v10) >= 0 )
    {
      v12 = 0;
      v13 = 0LL;
      v6 = (*(__int64 (__fastcall **)(_QWORD, _BYTE *, __int128 *))(*(_QWORD *)v10[0] + 8LL))(v10[0], v11, &v13);
      v8 = &v13;
      if ( v6 )
      {
        v14 = 0LL;
        CMILMatrix::Transform2DBoundsHelper<1>((__int64)v11, (__int64)&v13, (float *)&v14, v7);
        v8 = &v14;
      }
      CRenderDataBounds::AddBounds(this, v8);
    }
    wil::com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>::~com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>((__int64)v10);
  }
  return 0LL;
}
