/*
 * XREFs of ?GetSize@CColorKeyBitmapRealization@@UEBA?AUD2D_SIZE_U@@XZ @ 0x180263470
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800EBD90 (_guard_dispatch_icall_nop.c)
 */

struct D2D_SIZE_U __fastcall CColorKeyBitmapRealization::GetSize(CColorKeyBitmapRealization *this, __int64 a2)
{
  (**(void (__fastcall ***)(__int64))(*((_QWORD *)this - 6) + 16LL))(*((_QWORD *)this - 6) + 16LL);
  return (struct D2D_SIZE_U)a2;
}
