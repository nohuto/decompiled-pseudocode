/*
 * XREFs of ?ValidateVisual@CText@@UEAAJXZ @ 0x180018E00
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180006658 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?ValidateResources@CText@@AEAAJXZ @ 0x180016924 (-ValidateResources@CText@@AEAAJXZ.c)
 *     ?ValidateVisual@CVisual@@UEAAJXZ @ 0x1800193D0 (-ValidateVisual@CVisual@@UEAAJXZ.c)
 *     _guard_dispatch_icall_nop @ 0x180056410 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CText::ValidateVisual(CText *this)
{
  int v2; // eax
  int v3; // ebx
  __int64 v5; // rdx
  __int64 v6; // rdx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  if ( (*((_BYTE *)this + 80) & 2) == 0 )
  {
    v3 = CText::ValidateResources(this);
    if ( v3 < 0 )
    {
      v5 = 243LL;
      goto LABEL_12;
    }
  }
  v2 = CVisual::ValidateVisual(this);
  v3 = v2;
  if ( v2 < 0 )
  {
    v6 = 144LL;
    goto LABEL_15;
  }
  if ( (*((_BYTE *)this + 80) & 4) != 0 )
  {
    v2 = (*(__int64 (__fastcall **)(CText *))(*(_QWORD *)this + 192LL))(this);
    v3 = v2;
    if ( v2 >= 0 )
    {
      *((_DWORD *)this + 20) &= ~4u;
      goto LABEL_6;
    }
    v6 = 148LL;
LABEL_15:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v6,
      (__int64)"clientcore\\windows\\dwm\\udwm\\renderdatavisual.cpp",
      (const char *)(unsigned int)v2);
    goto LABEL_7;
  }
LABEL_6:
  v3 = 0;
LABEL_7:
  if ( v3 >= 0 )
    return 0LL;
  v5 = 245LL;
LABEL_12:
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v5,
    (__int64)"clientcore\\windows\\dwm\\udwm\\text.cpp",
    (const char *)(unsigned int)v3);
  return (unsigned int)v3;
}
