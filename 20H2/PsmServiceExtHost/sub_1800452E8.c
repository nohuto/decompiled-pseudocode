/*
 * XREFs of sub_1800452E8 @ 0x1800452E8
 * Callers:
 *     sub_1800293D0 @ 0x1800293D0 (sub_1800293D0.c)
 * Callees:
 *     __raise_securityfailure @ 0x18004512C (__raise_securityfailure.c)
 */

BOOL sub_1800452E8()
{
  struct _RUNTIME_FUNCTION *FunctionEntry; // [rsp+40h] [rbp-38h]
  DWORD64 ControlPc; // [rsp+48h] [rbp-30h]
  unsigned __int64 ImageBase; // [rsp+50h] [rbp-28h] BYREF
  unsigned __int64 EstablisherFrame; // [rsp+58h] [rbp-20h] BYREF
  PVOID HandlerData; // [rsp+60h] [rbp-18h] BYREF

  RtlCaptureContext(&ContextRecord);
  ControlPc = ContextRecord.Rip;
  FunctionEntry = RtlLookupFunctionEntry(ContextRecord.Rip, &ImageBase, 0LL);
  if ( FunctionEntry )
  {
    RtlVirtualUnwind(0, ImageBase, ControlPc, FunctionEntry, &ContextRecord, &HandlerData, &EstablisherFrame, 0LL);
  }
  else
  {
    ContextRecord.Rip = *(_QWORD *)ContextRecord.Rsp;
    ContextRecord.Rsp += 8LL;
  }
  qword_1800B36A0 = ContextRecord.Rip;
  dword_1800B3690 = -1073740791;
  dword_1800B3694 = 1;
  dword_1800B36A8 = 1;
  qword_1800B36B0[0] = 8LL;
  return _raise_securityfailure((struct _EXCEPTION_POINTERS *)&ExceptionInfo);
}
