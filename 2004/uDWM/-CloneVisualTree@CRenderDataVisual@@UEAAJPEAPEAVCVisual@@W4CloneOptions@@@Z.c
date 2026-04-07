/*
 * XREFs of ?CloneVisualTree@CRenderDataVisual@@UEAAJPEAPEAVCVisual@@W4CloneOptions@@@Z @ 0x180040020
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180006618 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Create@CRenderDataVisual@@SAJPEAPEAV1@@Z @ 0x180013D68 (-Create@CRenderDataVisual@@SAJPEAPEAV1@@Z.c)
 *     ?InitializeVisualTreeClone@CRenderDataVisual@@IEAAJPEAV1@W4CloneOptions@@@Z @ 0x180015A6C (-InitializeVisualTreeClone@CRenderDataVisual@@IEAAJPEAV1@W4CloneOptions@@@Z.c)
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x180017894 (-Release@CBaseObject@@QEAAKXZ.c)
 */

__int64 __fastcall CRenderDataVisual::CloneVisualTree(__int64 a1, CBaseObject **a2, unsigned int a3)
{
  int v6; // eax
  CBaseObject *v7; // rbx
  unsigned int v8; // edi
  CBaseObject *v9; // rax
  __int64 v11; // rdx
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  struct CRenderDataVisual *v13; // [rsp+48h] [rbp+10h] BYREF

  v13 = 0LL;
  *a2 = 0LL;
  v6 = CRenderDataVisual::Create(&v13);
  v7 = v13;
  v8 = v6;
  if ( v6 < 0 )
  {
    v11 = 164LL;
  }
  else
  {
    v6 = CRenderDataVisual::InitializeVisualTreeClone(a1, v13, a3);
    v8 = v6;
    if ( v6 >= 0 )
    {
      v9 = v7;
      v7 = 0LL;
      v8 = 0;
      *a2 = v9;
      goto LABEL_4;
    }
    v11 = 165LL;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v11,
    (__int64)"clientcore\\windows\\dwm\\udwm\\renderdatavisual.cpp",
    (const char *)(unsigned int)v6);
LABEL_4:
  if ( v7 )
    CBaseObject::Release(v7);
  return v8;
}
