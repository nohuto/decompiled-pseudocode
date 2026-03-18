/*
 * XREFs of FxUninitializeBugCheckDriverInfo @ 0x1C008FFF8
 * Callers:
 *     FxLibraryCommonDecommission @ 0x1C0041070 (FxLibraryCommonDecommission.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C001CA60 (_guard_dispatch_icall_nop.c)
 */

void FxUninitializeBugCheckDriverInfo()
{
  void (__fastcall *SystemRoutineAddress)(_OWORD *); // rax
  _UNICODE_STRING funcName; // [rsp+20h] [rbp-18h] BYREF

  funcName = 0LL;
  if ( unk_1C00A9F40 )
  {
    RtlInitUnicodeString(&funcName, L"KeDeregisterBugCheckReasonCallback");
    SystemRoutineAddress = (void (__fastcall *)(_OWORD *))MmGetSystemRoutineAddress(&funcName);
    if ( SystemRoutineAddress )
    {
      SystemRoutineAddress(&xmmword_1C00A9F30);
      unk_1C00A9F40 = 0LL;
      if ( P )
      {
        dword_1C00A9F20 = 0;
        dword_1C00A9F24 = 0;
        ExFreePoolWithTag(P, 0);
        P = 0LL;
      }
    }
  }
}
