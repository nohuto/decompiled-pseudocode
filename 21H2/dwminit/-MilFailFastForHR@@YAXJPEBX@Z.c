/*
 * XREFs of ?MilFailFastForHR@@YAXJPEBX@Z @ 0x18000A9D8
 * Callers:
 *     ModuleFailFastForHRESULT @ 0x18000A7A8 (ModuleFailFastForHRESULT.c)
 * Callees:
 *     ?IsOOM@@YA_NJ@Z @ 0x18000AAF8 (-IsOOM@@YA_NJ@Z.c)
 *     memset_0 @ 0x18000D0A8 (memset_0.c)
 */

void __fastcall MilFailFastForHR(int a1, const void *a2)
{
  ULONG_PTR v2; // rbx
  _EXCEPTION_RECORD pExceptionRecord; // [rsp+20h] [rbp-A8h] BYREF

  v2 = a1;
  if ( IsOOM(a1) )
    TerminateProcessOnMemoryExhaustion(0LL);
  memset_0(&pExceptionRecord, 0, sizeof(pExceptionRecord));
  pExceptionRecord.ExceptionAddress = 0LL;
  pExceptionRecord.ExceptionCode = -532265403;
  pExceptionRecord.NumberParameters = 1;
  pExceptionRecord.ExceptionInformation[0] = v2;
  RaiseFailFastException(&pExceptionRecord, 0LL, 0);
  MEMORY[0] = 0;
}
