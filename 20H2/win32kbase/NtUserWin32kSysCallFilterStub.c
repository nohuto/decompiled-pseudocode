/*
 * XREFs of NtUserWin32kSysCallFilterStub @ 0x1C0139370
 * Callers:
 *     <none>
 * Callees:
 *     Win32FreePool @ 0x1C0057A50 (Win32FreePool.c)
 *     _tlgKeywordOn @ 0x1C0066CD0 (_tlgKeywordOn.c)
 *     __security_check_cookie @ 0x1C00CBC40 (__security_check_cookie.c)
 *     memset @ 0x1C00D3740 (memset.c)
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U?$_tlgWrapSz@D@@U?$_tlgWrapSz@G@@U3@U?$_tlgWrapperByVal@$03@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBX1IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteAgg@@YAJ011I2@ZPEBX@@SAJPEBU_tlgProvider_t@@PEBX1AEBU?$_tlgWrapperByVal@$07@@AEBU?$_tlgWrapSz@D@@AEBU?$_tlgWrapSz@G@@4AEBU?$_tlgWrapperByVal@$03@@@Z @ 0x1C012AE74 (--$Write@U-$_tlgWrapperByVal@$07@@U-$_tlgWrapSz@D@@U-$_tlgWrapSz@G@@U3@U-$_tlgWrapperByVal@$03@@.c)
 *     ?GetProcessAppContainerSid@@YAPEAGXZ @ 0x1C012B12C (-GetProcessAppContainerSid@@YAPEAGXZ.c)
 *     ?GetProcessCommandLine@@YAPEAGXZ @ 0x1C012B254 (-GetProcessCommandLine@@YAPEAGXZ.c)
 *     ?_ShouldCaptureWerReport@@YAHK@Z @ 0x1C012B604 (-_ShouldCaptureWerReport@@YAHK@Z.c)
 *     EtwSyscallFilterMessage @ 0x1C014D840 (EtwSyscallFilterMessage.c)
 */

void __fastcall NtUserWin32kSysCallFilterStub(const char *a1, unsigned int a2)
{
  __int64 v4; // rdx
  __int64 v5; // rcx
  unsigned __int16 *ProcessAppContainerSid; // rsi
  unsigned __int16 *ProcessCommandLine; // rdi
  __int64 Win32KFilterSet; // r14
  const WCHAR *v9; // r12
  const WCHAR *v10; // rax
  const char *v11; // r13
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 CurrentProcess; // rax
  const char *ProcessImageFileName; // rax
  __int64 v16; // rcx
  __int64 v17; // r8
  int v18; // [rsp+40h] [rbp-C0h] BYREF
  const WCHAR *v19; // [rsp+48h] [rbp-B8h] BYREF
  const WCHAR *v20; // [rsp+50h] [rbp-B0h] BYREF
  const char *v21; // [rsp+58h] [rbp-A8h] BYREF
  __int64 v22; // [rsp+60h] [rbp-A0h] BYREF
  _QWORD v23[20]; // [rsp+70h] [rbp-90h] BYREF

  memset(v23, 0, 0x98uLL);
  ProcessAppContainerSid = GetProcessAppContainerSid(v5, v4);
  ProcessCommandLine = GetProcessCommandLine();
  Win32KFilterSet = (unsigned int)PsGetWin32KFilterSet();
  v9 = &word_1C0209C50;
  v10 = &word_1C0209C50;
  v11 = (const char *)&unk_1C021E1A8;
  if ( ProcessAppContainerSid )
    v10 = ProcessAppContainerSid;
  v19 = v10;
  if ( ProcessCommandLine )
    v9 = ProcessCommandLine;
  if ( a1 )
    v11 = a1;
  EtwSyscallFilterMessage(v11, v10, v9, Win32KFilterSet);
  CurrentProcess = PsGetCurrentProcess(v13, v12);
  ProcessImageFileName = (const char *)PsGetProcessImageFileName(CurrentProcess);
  DbgPrintEx(0x70u, 4u, "NtUserWin32kSysCallFilterStub: SyscallName='%s', Process='%s'\n", v11, ProcessImageFileName);
  if ( (unsigned __int8)PsIsWin32KFilterAuditEnabled() )
  {
    if ( !HIDWORD(qword_1C0249C68[2 * (unsigned int)Win32KFilterSet]) && (unsigned int)_ShouldCaptureWerReport(a2) )
    {
      LODWORD(v23[0]) = -1073740791;
      LODWORD(v23[3]) = 3;
      v23[2] = a2;
      v23[4] = 41LL;
      v23[5] = a2;
      v23[6] = Win32KFilterSet;
      WerSubmitUserCrashReport(-2LL, v23, 0LL, 30LL, 3);
    }
    if ( (unsigned int)dword_1C02431E0 > 5 && tlgKeywordOn((__int64)&dword_1C02431E0, 0x800000000000LL) )
    {
      v18 = Win32KFilterSet;
      v20 = v9;
      v21 = v11;
      v22 = 1LL;
      _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,void const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteAgg(_tlgProvider_t const *,void const *,void const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),void const *>::Write<_tlgWrapperByVal<8>,_tlgWrapSz<char>,_tlgWrapSz<unsigned short>,_tlgWrapSz<unsigned short>,_tlgWrapperByVal<4>>(
        v16,
        byte_1C0212AEB,
        v17,
        (__int64)&v22,
        (void **)&v21,
        &v19,
        &v20,
        (__int64)&v18);
    }
  }
  if ( ProcessAppContainerSid )
    Win32FreePool((__int64)ProcessAppContainerSid);
  if ( ProcessCommandLine )
    Win32FreePool((__int64)ProcessCommandLine);
}
