/*
 * XREFs of ?GetEffectsListRemote@CAPOWrapperSrv@@UEAAJPEAPEAU_GUID@@PEAI_K@Z @ 0x18012F420
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x180074C80 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CAPOWrapperSrv::GetEffectsListRemote(CAPOWrapperSrv *this, struct _GUID **a2, unsigned int *a3)
{
  return (*(__int64 (__fastcall **)(char *, struct _GUID **, unsigned int *))(*((_QWORD *)this + 2) + 24LL))(
           (char *)this + 16,
           a2,
           a3);
}
