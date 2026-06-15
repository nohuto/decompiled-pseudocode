/*
 * XREFs of sub_1800C4ED0 @ 0x1800C4ED0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x180074470 (_guard_dispatch_icall_nop.c)
 */

void __fastcall sub_1800C4ED0(_QWORD *a1)
{
  __int64 v1; // rcx

  v1 = a1[3];
  if ( v1 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v1 + 16LL))(v1);
}
