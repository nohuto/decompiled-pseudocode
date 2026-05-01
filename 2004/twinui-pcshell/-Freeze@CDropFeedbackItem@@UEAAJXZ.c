/*
 * XREFs of ?Freeze@CDropFeedbackItem@@UEAAJXZ @ 0x18042B030
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800EEEF0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CDropFeedbackItem::Freeze(CDropFeedbackItem *this)
{
  __int64 v1; // rcx
  __int64 result; // rax

  v1 = *((_QWORD *)this + 23);
  result = 0LL;
  if ( v1 )
    return (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v1 + 168LL))(v1);
  return result;
}
