/*
 * XREFs of ?HasRenderingIntermediate@CClipBrush@@UEBA_NXZ @ 0x1801B8150
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800F4800 (_guard_dispatch_icall_nop.c)
 */

char __fastcall CClipBrush::HasRenderingIntermediate(CClipBrush *this)
{
  __int64 v1; // rcx
  char v2; // bl

  v1 = *((_QWORD *)this + 10);
  v2 = 0;
  if ( v1 )
    return (*(unsigned __int8 (__fastcall **)(__int64))(*(_QWORD *)v1 + 272LL))(v1) != 0;
  return v2;
}
