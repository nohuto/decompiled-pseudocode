/*
 * XREFs of ?IsNavigable@CMultitaskingViewElementBase@@UEAA_NW4NavigationType@@@Z @ 0x1803A2DF0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800F0410 (_guard_dispatch_icall_nop.c)
 */

char __fastcall CMultitaskingViewElementBase::IsNavigable(_BYTE *a1, int a2)
{
  char v2; // bl

  if ( !a1[72] )
    return 0;
  v2 = 1;
  if ( a2 == 1 && !(*(unsigned __int8 (__fastcall **)(_BYTE *))(*(_QWORD *)a1 + 168LL))(a1) )
    return 0;
  return v2;
}
