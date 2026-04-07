/*
 * XREFs of ?CloneVisualTree@CVisual@@UEAAJPEAPEAV1@W4CloneOptions@@@Z @ 0x180032710
 * Callers:
 *     ?CloneVisualTree@UdwmTopVisual@@UEAAJPEAPEAVCVisual@@W4CloneOptions@@@Z @ 0x180032640 (-CloneVisualTree@UdwmTopVisual@@UEAAJPEAPEAVCVisual@@W4CloneOptions@@@Z.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180006618 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x180017894 (-Release@CBaseObject@@QEAAKXZ.c)
 *     ?InitializeVisualTreeClone@CVisual@@IEAAJPEAV1@W4CloneOptions@@@Z @ 0x18001CF14 (-InitializeVisualTreeClone@CVisual@@IEAAJPEAV1@W4CloneOptions@@@Z.c)
 *     ?Create@CVisual@@SAJPEAPEAV1@@Z @ 0x18003279C (-Create@CVisual@@SAJPEAPEAV1@@Z.c)
 */

__int64 __fastcall CVisual::CloneVisualTree(__int64 a1, CBaseObject **a2, unsigned int a3)
{
  int v6; // eax
  CBaseObject *v7; // rbx
  unsigned int v8; // edi
  CBaseObject *v9; // rax
  __int64 v11; // rdx
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  struct CVisual *v13; // [rsp+48h] [rbp+10h] BYREF

  v13 = 0LL;
  *a2 = 0LL;
  v6 = CVisual::Create(&v13);
  v7 = v13;
  v8 = v6;
  if ( v6 < 0 )
  {
    v11 = 1109LL;
  }
  else
  {
    v6 = CVisual::InitializeVisualTreeClone(a1, (__int64 *)v13, a3);
    v8 = v6;
    if ( v6 >= 0 )
    {
      v9 = v7;
      v7 = 0LL;
      v8 = 0;
      *a2 = v9;
      goto LABEL_4;
    }
    v11 = 1110LL;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v11,
    (__int64)"clientcore\\windows\\dwm\\udwm\\visual.cpp",
    (const char *)(unsigned int)v6);
LABEL_4:
  if ( v7 )
    CBaseObject::Release(v7);
  return v8;
}
