/*
 * XREFs of ?Release@ResourceSet@ExecutionModel@@UEAAKXZ @ 0x180033140
 * Callers:
 *     ?Release@ExternalResourceSet@ExecutionModel@@UEAAKXZ @ 0x180003750 (-Release@ExternalResourceSet@ExecutionModel@@UEAAKXZ.c)
 * Callees:
 *     __security_check_cookie @ 0x180044E00 (__security_check_cookie.c)
 *     memset_0 @ 0x18004651A (memset_0.c)
 *     _guard_dispatch_icall_nop @ 0x180046540 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall ExecutionModel::ResourceSet::Release(ExecutionModel::ResourceSet *this)
{
  int v1; // ebx
  _EXCEPTION_RECORD pExceptionRecord; // [rsp+20h] [rbp-B8h] BYREF

  v1 = _InterlockedDecrement((volatile signed __int32 *)this + 9);
  if ( v1 < 0 )
  {
    memset_0(&pExceptionRecord.ExceptionRecord, 0, 0x90uLL);
    pExceptionRecord.ExceptionCode = -1073741675;
    pExceptionRecord.ExceptionFlags = 1;
    RaiseFailFastException(&pExceptionRecord, 0LL, 0);
  }
  else if ( !v1 && this )
  {
    (*(void (__fastcall **)(ExecutionModel::ResourceSet *, __int64))(*(_QWORD *)this + 24LL))(this, 1LL);
  }
  return (unsigned int)v1;
}
