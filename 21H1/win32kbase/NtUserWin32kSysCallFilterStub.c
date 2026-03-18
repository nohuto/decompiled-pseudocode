/*
 * XREFs of NtUserWin32kSysCallFilterStub @ 0x1C0141360
 * Callers:
 *     <none>
 * Callees:
 *     _tlgKeywordOn @ 0x1C0069BE0 (_tlgKeywordOn.c)
 *     Win32FreePool @ 0x1C008C9A0 (Win32FreePool.c)
 *     __security_check_cookie @ 0x1C00CC180 (__security_check_cookie.c)
 *     memset @ 0x1C00D2E00 (memset.c)
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U?$_tlgWrapSz@D@@U?$_tlgWrapSz@G@@U3@U?$_tlgWrapperByVal@$03@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBX1IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteAgg@@YAJ011I2@ZPEBX@@SAJPEBU_tlgProvider_t@@PEBX1AEBU?$_tlgWrapperByVal@$07@@AEBU?$_tlgWrapSz@D@@AEBU?$_tlgWrapSz@G@@4AEBU?$_tlgWrapperByVal@$03@@@Z @ 0x1C01331B4 (--$Write@U-$_tlgWrapperByVal@$07@@U-$_tlgWrapSz@D@@U-$_tlgWrapSz@G@@U3@U-$_tlgWrapperByVal@$03@@.c)
 *     ?GetProcessAppContainerSid@@YAPEAGXZ @ 0x1C013346C (-GetProcessAppContainerSid@@YAPEAGXZ.c)
 *     ?GetProcessCommandLine@@YAPEAGXZ @ 0x1C0133594 (-GetProcessCommandLine@@YAPEAGXZ.c)
 *     ?_ShouldCaptureWerReport@@YAHK@Z @ 0x1C0133944 (-_ShouldCaptureWerReport@@YAHK@Z.c)
 *     EtwSyscallFilterMessage @ 0x1C0156140 (EtwSyscallFilterMessage.c)
 */

void __fastcall NtUserWin32kSysCallFilterStub(const char *a1, unsigned int a2)
{
  __int64 v4; // rdx
  __int64 v5; // rcx
  unsigned __int16 *ProcessAppContainerSid; // rsi
  unsigned __int16 *ProcessCommandLine; // rdi
  __int64 v8; // rcx
  __int64 Win32KFilterSet; // r14
  const WCHAR *v10; // r12
  const WCHAR *v11; // rax
  const char *v12; // r13
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 CurrentProcess; // rax
  const char *ProcessImageFileName; // rax
  __int64 v17; // rcx
  __int64 v18; // rdx
  __int64 v19; // r8
  __int64 v20; // rcx
  int v21; // [rsp+40h] [rbp-C0h] BYREF
  const WCHAR *v22; // [rsp+48h] [rbp-B8h] BYREF
  const WCHAR *v23; // [rsp+50h] [rbp-B0h] BYREF
  const char *v24; // [rsp+58h] [rbp-A8h] BYREF
  __int64 v25; // [rsp+60h] [rbp-A0h] BYREF
  _QWORD v26[20]; // [rsp+70h] [rbp-90h] BYREF

  memset(v26, 0, 0x98uLL);
  ProcessAppContainerSid = GetProcessAppContainerSid(v5, v4);
  ProcessCommandLine = GetProcessCommandLine();
  Win32KFilterSet = (unsigned int)PsGetWin32KFilterSet(v8);
  v10 = &word_1C0211C10;
  v11 = &word_1C0211C10;
  v12 = (const char *)&unk_1C0225CC8;
  if ( ProcessAppContainerSid )
    v11 = ProcessAppContainerSid;
  v22 = v11;
  if ( ProcessCommandLine )
    v10 = ProcessCommandLine;
  if ( a1 )
    v12 = a1;
  EtwSyscallFilterMessage(v12, v11, v10, Win32KFilterSet);
  CurrentProcess = PsGetCurrentProcess(v14, v13);
  ProcessImageFileName = (const char *)PsGetProcessImageFileName(CurrentProcess);
  DbgPrintEx(0x70u, 4u, "NtUserWin32kSysCallFilterStub: SyscallName='%s', Process='%s'\n", v12, ProcessImageFileName);
  if ( (unsigned __int8)PsIsWin32KFilterAuditEnabled(v17) )
  {
    if ( !HIDWORD(qword_1C0251C58[2 * (unsigned int)Win32KFilterSet]) && (unsigned int)_ShouldCaptureWerReport(a2) )
    {
      LODWORD(v26[0]) = -1073740791;
      LODWORD(v26[3]) = 3;
      v26[2] = a2;
      v26[4] = 41LL;
      v26[5] = a2;
      v26[6] = Win32KFilterSet;
      WerSubmitUserCrashReport(-2LL, v26, 0LL, 30LL, 3);
    }
    if ( (unsigned int)dword_1C024B1E0 > 5 && tlgKeywordOn((__int64)&dword_1C024B1E0, 0x800000000000LL) )
    {
      v21 = Win32KFilterSet;
      v23 = v10;
      v24 = v12;
      v25 = 1LL;
      _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,void const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteAgg(_tlgProvider_t const *,void const *,void const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),void const *>::Write<_tlgWrapperByVal<8>,_tlgWrapSz<char>,_tlgWrapSz<unsigned short>,_tlgWrapSz<unsigned short>,_tlgWrapperByVal<4>>(
        v20,
        byte_1C021A65B,
        v19,
        (__int64)&v25,
        (void **)&v24,
        &v22,
        &v23,
        (__int64)&v21);
    }
  }
  if ( ProcessAppContainerSid )
    Win32FreePool((__int64)ProcessAppContainerSid, v18, v19);
  if ( ProcessCommandLine )
    Win32FreePool((__int64)ProcessCommandLine, v18, v19);
}
