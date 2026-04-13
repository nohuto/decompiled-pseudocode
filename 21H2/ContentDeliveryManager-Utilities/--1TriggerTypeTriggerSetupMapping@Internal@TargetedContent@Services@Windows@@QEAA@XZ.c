/*
 * XREFs of ??1TriggerTypeTriggerSetupMapping@Internal@TargetedContent@Services@Windows@@QEAA@XZ @ 0x180073F60
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800D0BC0 (_guard_dispatch_icall_nop.c)
 */

void __fastcall Windows::Services::TargetedContent::Internal::TriggerTypeTriggerSetupMapping::~TriggerTypeTriggerSetupMapping(
        Windows::Services::TargetedContent::Internal::TriggerTypeTriggerSetupMapping *this,
        __int64 a2)
{
  char *v3; // rbx
  char *v4; // rcx
  __int64 v5; // rcx

  v3 = (char *)this + 40;
  v4 = (char *)*((_QWORD *)this + 8);
  if ( v4 )
  {
    LOBYTE(a2) = v4 != v3;
    (*(void (__fastcall **)(char *, __int64))(*(_QWORD *)v4 + 32LL))(v4, a2);
    *((_QWORD *)v3 + 3) = 0LL;
  }
  v5 = *((_QWORD *)this + 4);
  if ( v5 )
  {
    LOBYTE(a2) = v5 != (_QWORD)this + 8;
    (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v5 + 32LL))(v5, a2);
    *((_QWORD *)this + 4) = 0LL;
  }
}
