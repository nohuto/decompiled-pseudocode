/*
 * XREFs of ?GetRealization@CComponentTransform2D@@UEAAXPEBUD2D_SIZE_F@@PEAVCMILMatrix@@@Z @ 0x1801B9F10
 * Callers:
 *     <none>
 * Callees:
 *     ?Set2DAffineMatrix@CMILMatrix@@QEAAXMMMMMM@Z @ 0x1800C96BC (-Set2DAffineMatrix@CMILMatrix@@QEAAXMMMMMM@Z.c)
 *     __security_check_cookie @ 0x1800E26A0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800EED40 (_guard_dispatch_icall_nop.c)
 */

void __fastcall CComponentTransform2D::GetRealization(
        CComponentTransform2D *this,
        const struct D2D_SIZE_F *a2,
        struct CMILMatrix *a3)
{
  FLOAT height; // xmm1_4
  __int64 v5; // rax
  __int64 v6; // [rsp+40h] [rbp-30h] BYREF
  __int128 v7; // [rsp+48h] [rbp-28h] BYREF
  __int64 v8; // [rsp+58h] [rbp-18h]

  v6 = 0LL;
  if ( a2 )
  {
    height = a2->height;
    *(FLOAT *)&v6 = a2->width;
    *((FLOAT *)&v6 + 1) = height;
  }
  v8 = 0LL;
  v5 = *(_QWORD *)this;
  v7 = 0LL;
  (*(void (__fastcall **)(CComponentTransform2D *, __int64 *, __int128 *))(v5 + 224))(this, &v6, &v7);
  CMILMatrix::Set2DAffineMatrix(
    a3,
    *(float *)&v7,
    *((float *)&v7 + 1),
    *((float *)&v7 + 2),
    *((float *)&v7 + 3),
    *(float *)&v8,
    *((float *)&v8 + 1));
}
