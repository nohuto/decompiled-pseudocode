/*
 * XREFs of ?CloneVisualTree@CAccent@@UEAAJPEAPEAVCVisual@@W4CloneOptions@@@Z @ 0x18000CA20
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180006618 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InitializeVisualTreeClone@CAccent@@IEAAJPEAV1@@Z @ 0x18000CAA4 (-InitializeVisualTreeClone@CAccent@@IEAAJPEAV1@@Z.c)
 *     ?Create@CAccent@@SAJPEAPEAV1@@Z @ 0x18000D47C (-Create@CAccent@@SAJPEAPEAV1@@Z.c)
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x180017894 (-Release@CBaseObject@@QEAAKXZ.c)
 */

__int64 __fastcall CAccent::CloneVisualTree(CAccent *a1, struct CAccent **a2)
{
  int v4; // eax
  struct CAccent *v5; // rbx
  unsigned int v6; // edi
  struct CAccent *v7; // rax
  __int64 v9; // rdx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  struct CAccent *v11; // [rsp+38h] [rbp+10h] BYREF

  v11 = 0LL;
  *a2 = 0LL;
  v4 = CAccent::Create(&v11);
  v5 = v11;
  v6 = v4;
  if ( v4 < 0 )
  {
    v9 = 600LL;
  }
  else
  {
    v4 = CAccent::InitializeVisualTreeClone(a1, v11);
    v6 = v4;
    if ( v4 >= 0 )
    {
      v7 = v5;
      v5 = 0LL;
      v6 = 0;
      *a2 = v7;
      goto LABEL_4;
    }
    v9 = 601LL;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v9,
    (__int64)"clientcore\\windows\\dwm\\udwm\\accent.cpp",
    (const char *)(unsigned int)v4);
LABEL_4:
  if ( v5 )
    CBaseObject::Release(v5);
  return v6;
}
