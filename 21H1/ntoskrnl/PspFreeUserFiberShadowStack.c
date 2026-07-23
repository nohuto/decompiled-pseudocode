/*
 * XREFs of PspFreeUserFiberShadowStack @ 0x140905AC4
 * Callers:
 *     NtSetInformationProcess @ 0x14069A210 (NtSetInformationProcess.c)
 * Callees:
 *     KiDispatchException @ 0x14032AA60 (KiDispatchException.c)
 *     __security_check_cookie @ 0x1403CC020 (__security_check_cookie.c)
 *     memset @ 0x140408F80 (memset.c)
 *     PspFreeUserFiberShadowStackInternal @ 0x140905C28 (PspFreeUserFiberShadowStackInternal.c)
 */

__int64 PspFreeUserFiberShadowStack()
{
  unsigned __int64 v0; // rax
  int v1; // ebx
  __int64 v3; // rdi
  unsigned __int64 v4; // rdi
  _QWORD *InitialStack; // rdx
  _QWORD *i; // r8
  EXCEPTION_RECORD ExceptionRecord; // [rsp+40h] [rbp-B8h] BYREF

  memset(&ExceptionRecord, 0, sizeof(ExceptionRecord));
  v0 = __readmsr(0x6A7u);
  if ( (v0 & 7) != 0
    || (_RDX = *(_QWORD *)v0, v3 = *(_QWORD *)(v0 + 8), (v3 & 3) != 3)
    || (v4 = v3 & 0xFFFFFFFFFFFFFFFCuLL, (v4 & 7) != 0) )
  {
    v1 = -1073741823;
  }
  else
  {
    _RDI = v4 - 8;
    __asm { wrussq  qword ptr [rdi], rdx }
    v1 = PspFreeUserFiberShadowStackInternal((PVOID)v0);
    if ( v1 >= 0 )
    {
      __writemsr(0x6A7u, _RDI);
      return (unsigned int)v1;
    }
  }
  ExceptionRecord.ExceptionFlags = 1;
  ExceptionRecord.ExceptionAddress = 0LL;
  ExceptionRecord.ExceptionCode = -1073740791;
  ExceptionRecord.NumberParameters = 1;
  ExceptionRecord.ExceptionRecord = 0LL;
  ExceptionRecord.ExceptionInformation[0] = v1;
  InitialStack = KeGetCurrentThread()->InitialStack;
  for ( i = InitialStack; (i[1] & 1) != 0; i = (_QWORD *)i[5] )
    ;
  if ( (InitialStack[1] & 1LL) != 0 )
  {
    do
      InitialStack = (_QWORD *)InitialStack[5];
    while ( (InitialStack[1] & 1) != 0 );
  }
  KiDispatchException(&ExceptionRecord, (unsigned __int64)(InitialStack - 90), (__int64)(i - 50), 1u, 0);
  return (unsigned int)v1;
}
