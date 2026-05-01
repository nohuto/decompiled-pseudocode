/*
 * XREFs of ?HitTest@LightDismissElement@@UEAA_NAEBUCPoint@Geometry@@@Z @ 0x1803BCA80
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800EEEF0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall LightDismissElement::HitTest(LightDismissElement *this, const struct Geometry::CPoint *a2)
{
  __int64 v3; // rdi
  _DWORD *v4; // rax
  int v5; // edx
  __int64 v7; // [rsp+30h] [rbp+8h] BYREF
  char v8; // [rsp+38h] [rbp+10h] BYREF

  v3 = *((_QWORD *)this + 29);
  v4 = (_DWORD *)(*(__int64 (__fastcall **)(_QWORD, char *))(**((_QWORD **)this + 10) + 120LL))(
                   *((_QWORD *)this + 10),
                   &v8);
  v7 = *(_QWORD *)a2;
  v5 = v4[1];
  LODWORD(v4) = *v4;
  HIDWORD(v7) -= v5;
  LODWORD(v7) = v7 - (_DWORD)v4;
  return (*(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v3 + 24LL))(v3, &v7);
}
