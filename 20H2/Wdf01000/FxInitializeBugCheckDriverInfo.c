/*
 * XREFs of FxInitializeBugCheckDriverInfo @ 0x1C008FCE8
 * Callers:
 *     FxLibraryGlobalsCommission @ 0x1C00568A0 (FxLibraryGlobalsCommission.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C001CA60 (_guard_dispatch_icall_nop.c)
 *     RtlStringCopyWorkerA @ 0x1C002DAB0 (RtlStringCopyWorkerA.c)
 */

void FxInitializeBugCheckDriverInfo()
{
  PVOID SystemRoutineAddress; // rbx
  _QWORD *PoolWithTag; // rax
  unsigned __int64 v2; // rdx
  unsigned __int64 *v3; // r8
  _UNICODE_STRING funcName; // [rsp+30h] [rbp-18h] BYREF

  dword_1C00A9F24 = 0;
  dword_1C00A9F20 = 0;
  P = 0LL;
  funcName = 0LL;
  xmmword_1C00A9F30 = 0LL;
  unk_1C00A9F40 = 0LL;
  unk_1C00A9F50 = 0LL;
  if ( !unk_1C00A9F8A )
  {
    RtlInitUnicodeString(&funcName, L"KeRegisterBugCheckReasonCallback");
    SystemRoutineAddress = MmGetSystemRoutineAddress(&funcName);
    if ( SystemRoutineAddress )
    {
      PoolWithTag = ExAllocatePoolWithTag(ExDefaultNonPagedPoolType, 0x230uLL, 0x72447846u);
      P = PoolWithTag;
      if ( PoolWithTag )
      {
        dword_1C00A9F24 = 10;
        *PoolWithTag = 0LL;
        *((_DWORD *)P + 2) = 1;
        *((_DWORD *)P + 3) = 31;
        *((_DWORD *)P + 4) = 0;
        if ( (int)RtlStringCopyWorkerA((char *)P + 20, v2, v3, "Wdf01000") < 0 )
          *((_BYTE *)P + 20) = 0;
        ++dword_1C00A9F20;
        unk_1C00A9F5C = 0;
        ((void (__fastcall *)(_OWORD *, _QWORD, __int64, const char *))SystemRoutineAddress)(
          &xmmword_1C00A9F30,
          FxpLibraryBugCheckCallback,
          2LL,
          "Wdf01000");
      }
    }
  }
}
