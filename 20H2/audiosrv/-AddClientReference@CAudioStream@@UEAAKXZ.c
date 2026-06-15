/*
 * XREFs of ?AddClientReference@CAudioStream@@UEAAKXZ @ 0x180045400
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800741C0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CAudioStream::AddClientReference(CAudioStream *this)
{
  (*(void (__fastcall **)(CAudioStream *))(*(_QWORD *)this + 8LL))(this);
  return (unsigned int)_InterlockedIncrement((volatile signed __int32 *)this + 12);
}
