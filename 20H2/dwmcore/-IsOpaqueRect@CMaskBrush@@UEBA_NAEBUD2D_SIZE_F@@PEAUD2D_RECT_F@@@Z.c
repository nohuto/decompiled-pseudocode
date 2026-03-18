/*
 * XREFs of ?IsOpaqueRect@CMaskBrush@@UEBA_NAEBUD2D_SIZE_F@@PEAUD2D_RECT_F@@@Z @ 0x1800C0FF0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800EE9F0 (_guard_dispatch_icall_nop.c)
 */

char __fastcall CMaskBrush::IsOpaqueRect(CMaskBrush *this, const struct D2D_SIZE_F *a2, struct D2D_RECT_F *a3)
{
  char v3; // bl
  __int64 v5; // rcx

  v3 = 0;
  if ( !*((_QWORD *)this + 10) )
  {
    v5 = *((_QWORD *)this + 11);
    if ( v5 )
      return (*(unsigned __int8 (__fastcall **)(__int64, const struct D2D_SIZE_F *, struct D2D_RECT_F *))(*(_QWORD *)v5 + 304LL))(
               v5,
               a2,
               a3) != 0;
  }
  return v3;
}
