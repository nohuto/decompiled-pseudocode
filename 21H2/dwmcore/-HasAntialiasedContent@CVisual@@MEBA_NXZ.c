/*
 * XREFs of ?HasAntialiasedContent@CVisual@@MEBA_NXZ @ 0x1800BE990
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800F4800 (_guard_dispatch_icall_nop.c)
 */

char __fastcall CVisual::HasAntialiasedContent(CVisual *this)
{
  __int64 v1; // rcx
  char v2; // bl

  v1 = *((_QWORD *)this + 31);
  v2 = 0;
  if ( v1 )
    return (*(unsigned __int8 (__fastcall **)(__int64))(*(_QWORD *)v1 + 216LL))(v1) != 0;
  return v2;
}
