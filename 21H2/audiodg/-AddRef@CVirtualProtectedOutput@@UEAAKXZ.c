/*
 * XREFs of ?AddRef@CVirtualProtectedOutput@@UEAAKXZ @ 0x140048480
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x140029E50 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CVirtualProtectedOutput::AddRef(CVirtualProtectedOutput *this)
{
  (*(void (__fastcall **)(_QWORD))(**((_QWORD **)this + 1) + 8LL))(*((_QWORD *)this + 1));
  return (unsigned int)_InterlockedIncrement((volatile signed __int32 *)this + 4);
}
