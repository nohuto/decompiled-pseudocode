/*
 * XREFs of ?InitializeRIM@RIMDeviceCollection@@IEAAJKPEAPEAX@Z @ 0x180022CEC
 * Callers:
 *     ?Initialize@HIDDeviceCollection@@QEAAJKQEAU_RIM_USAGE_ANDPAGE@@KKPEAPEAX@Z @ 0x180022BC8 (-Initialize@HIDDeviceCollection@@QEAAJKQEAU_RIM_USAGE_ANDPAGE@@KKPEAPEAX@Z.c)
 *     ?Initialize@RIMDeviceCollection@@UEAAJKKPEAPEAX@Z @ 0x1800906A8 (-Initialize@RIMDeviceCollection@@UEAAJKKPEAPEAX@Z.c)
 * Callees:
 *     ?ReadInputReportFromRIM@RIMDeviceCollection@@AEAAJXZ @ 0x180022DA8 (-ReadInputReportFromRIM@RIMDeviceCollection@@AEAAJXZ.c)
 *     ?CreateReadBuffer@RIMDeviceCollection@@AEAAJK@Z @ 0x180022E14 (-CreateReadBuffer@RIMDeviceCollection@@AEAAJK@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180035760 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z @ 0x1800675D4 (-Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall RIMDeviceCollection::InitializeRIM(HANDLE *this, unsigned int a2, void **a3)
{
  HANDLE CurrentProcess; // rax
  char v7; // si
  const char *v8; // r9
  int Buffer; // eax
  unsigned int LastError; // ebx
  __int64 v12; // rdx
  int v13; // [rsp+20h] [rbp-38h]
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+0h]

  CurrentProcess = GetCurrentProcess();
  v7 = 1;
  if ( !DuplicateHandle(CurrentProcess, this[5], CurrentProcess, a3, 0, 0, 2u) )
  {
    LastError = wil::details::in1diag3::Return_GetLastError(
                  retaddr,
                  (void *)0x2E9,
                  (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\rim\\lib\\rimdevicecollection.cpp",
                  v8);
    goto LABEL_5;
  }
  Buffer = RIMDeviceCollection::CreateReadBuffer((RIMDeviceCollection *)this, a2);
  LastError = Buffer;
  if ( Buffer < 0 )
  {
    v12 = 751LL;
LABEL_10:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v12,
      (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\rim\\lib\\rimdevicecollection.cpp",
      (const char *)(unsigned int)Buffer,
      v13);
    goto LABEL_5;
  }
  Buffer = RIMDeviceCollection::ReadInputReportFromRIM((RIMDeviceCollection *)this);
  LastError = Buffer;
  if ( Buffer < 0 )
  {
    v12 = 753LL;
    goto LABEL_10;
  }
  LastError = 0;
  v7 = 0;
LABEL_5:
  if ( v7 && this[10] )
  {
    RIMUnregisterForInput();
    CloseHandle(this[10]);
    this[10] = 0LL;
  }
  return LastError;
}
