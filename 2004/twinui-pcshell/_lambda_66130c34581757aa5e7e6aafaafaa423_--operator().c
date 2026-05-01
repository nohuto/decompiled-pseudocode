/*
 * XREFs of _lambda_66130c34581757aa5e7e6aafaafaa423_::operator() @ 0x1801895CC
 * Callers:
 *     Windows::Internal::ComTaskPool::CTaskWrapper__lambda_153d02fd68e04791af94e0f734ac69a8___::Run @ 0x18018A450 (Windows--Internal--ComTaskPool--CTaskWrapper__lambda_153d02fd68e04791af94e0f734ac69a8___--Run.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800EEEF0 (_guard_dispatch_icall_nop.c)
 */

void __fastcall lambda_66130c34581757aa5e7e6aafaafaa423_::operator()(unsigned int *a1)
{
  AcquireSRWLockExclusive(CApplicationManagerUtility::g_pIAMGlobals);
  (*(void (__fastcall **)(PVOID, _QWORD, _QWORD))(*(_QWORD *)CApplicationManagerUtility::g_pIAMGlobals[17].Ptr + 24LL))(
    CApplicationManagerUtility::g_pIAMGlobals[17].Ptr,
    *(_QWORD *)(*(_QWORD *)a1 + 128LL),
    a1[2]);
  ReleaseSRWLockExclusive(CApplicationManagerUtility::g_pIAMGlobals);
}
