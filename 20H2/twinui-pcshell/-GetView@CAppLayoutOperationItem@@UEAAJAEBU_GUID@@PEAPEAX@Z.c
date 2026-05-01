/*
 * XREFs of ?GetView@CAppLayoutOperationItem@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x180485560
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800F0410 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CAppLayoutOperationItem::GetView(CAppLayoutOperationItem *this, const struct _GUID *a2, void **a3)
{
  __int64 result; // rax
  __int64 (__fastcall ***v4)(_QWORD, const struct _GUID *); // rcx

  *a3 = 0LL;
  result = 2147943568LL;
  v4 = (__int64 (__fastcall ***)(_QWORD, const struct _GUID *))*((_QWORD *)this + 2);
  if ( v4 )
    return (**v4)(v4, a2);
  return result;
}
