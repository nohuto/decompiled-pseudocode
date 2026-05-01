/*
 * XREFs of _lambda_6bdb0a767824ae94d9b9ef25c3406932_::operator() @ 0x180189630
 * Callers:
 *     Windows::Internal::ComTaskPool::CTaskWrapper__lambda_bccacf824c0b35a20e4c1bcfbe66ad1f___::Run @ 0x18018A580 (Windows--Internal--ComTaskPool--CTaskWrapper__lambda_bccacf824c0b35a20e4c1bcfbe66ad1f___--Run.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800EEEF0 (_guard_dispatch_icall_nop.c)
 *     ??$DropForeground@PEBGKAEAPEAUHWND__@@AEBW4DropForegroundOptions@@@IamTraceLogging@@SAX$$QEAPEBG$$QEAKAEAPEAUHWND__@@AEBW4DropForegroundOptions@@@Z @ 0x18018760C (--$DropForeground@PEBGKAEAPEAUHWND__@@AEBW4DropForegroundOptions@@@IamTraceLogging@@SAX$$QEAPEBG.c)
 */

BOOL __fastcall lambda_6bdb0a767824ae94d9b9ef25c3406932_::operator()(int *a1)
{
  __int64 v1; // rdi
  BOOL result; // eax
  int v4; // [rsp+30h] [rbp+8h] BYREF
  __int64 v5; // [rsp+38h] [rbp+10h] BYREF

  v1 = *(_QWORD *)a1;
  v4 = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(*(_QWORD *)a1 + 624LL) + 160LL))(*(_QWORD *)(*(_QWORD *)a1 + 624LL));
  v5 = *(_QWORD *)(*(_QWORD *)a1 + 600LL);
  IamTraceLogging::DropForeground<unsigned short const *,unsigned long,HWND__ * &,enum DropForegroundOptions const &>(
    &v5,
    &v4,
    (__int64 *)(v1 + 128),
    a1 + 2);
  result = ShowWindowAsync(*(HWND *)(*(_QWORD *)a1 + 128LL), 0);
  if ( !a1[2] )
    return ShowWindowAsync(*(HWND *)(*(_QWORD *)a1 + 128LL), 4);
  return result;
}
