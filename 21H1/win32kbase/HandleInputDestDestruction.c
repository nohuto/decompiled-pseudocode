/*
 * XREFs of HandleInputDestDestruction @ 0x1C007166C
 * Callers:
 *     HandleFullWindowDestruction @ 0x1C00715C0 (HandleFullWindowDestruction.c)
 *     HandleBaseWindowDestruction @ 0x1C01B1630 (HandleBaseWindowDestruction.c)
 * Callees:
 *     ??0?$CLockDomainSharedAllowAllRecursion@VDLT_HANDLEMANAGER@@@@QEAA@XZ @ 0x1C0071754 (--0-$CLockDomainSharedAllowAllRecursion@VDLT_HANDLEMANAGER@@@@QEAA@XZ.c)
 *     ?SetEmpty@CInputDest@@QEAAXXZ @ 0x1C0071780 (-SetEmpty@CInputDest@@QEAAXXZ.c)
 *     ??8CInputDest@@QEBA_NAEBUtagINPUTDEST@@@Z @ 0x1C00717D8 (--8CInputDest@@QEBA_NAEBUtagINPUTDEST@@@Z.c)
 *     ??1UserAtomicCheck@@QEAA@XZ @ 0x1C0071838 (--1UserAtomicCheck@@QEAA@XZ.c)
 *     _anonymous_namespace_::GetMouseProcessor @ 0x1C00718AC (_anonymous_namespace_--GetMouseProcessor.c)
 *     ??0CInputDest@@QEAA@AEBUtagINPUTDEST@@@Z @ 0x1C00718E0 (--0CInputDest@@QEAA@AEBUtagINPUTDEST@@@Z.c)
 *     ??0UserAtomicCheck@@QEAA@XZ @ 0x1C0071A08 (--0UserAtomicCheck@@QEAA@XZ.c)
 *     __security_check_cookie @ 0x1C00CC180 (__security_check_cookie.c)
 */

void __fastcall HandleInputDestDestruction(struct tagINPUTDEST *a1)
{
  _DWORD *v1; // rbx
  char v3; // bl
  __int64 MouseProcessor; // rax
  volatile __int32 *v5; // rbx
  _BYTE v6[8]; // [rsp+20h] [rbp-B8h] BYREF
  _BYTE v7[24]; // [rsp+28h] [rbp-B0h] BYREF
  _BYTE v8[128]; // [rsp+40h] [rbp-98h] BYREF

  v1 = (_DWORD *)*((_QWORD *)a1 + 10);
  CLockDomainSharedAllowAllRecursion<DLT_HANDLEMANAGER>::CLockDomainSharedAllowAllRecursion<DLT_HANDLEMANAGER>(v7);
  if ( (*((_BYTE *)qword_1C0250D48 + dword_1C0250D50 * (unsigned int)(unsigned __int16)*v1 + 25) & 1) == 0 )
  {
    UserAtomicCheck::UserAtomicCheck((UserAtomicCheck *)v6);
    CInputDest::CInputDest((CInputDest *)v8, a1);
    v3 = CInputDest::operator==(gpForegroundInfo, v8);
    CInputDest::SetEmpty((CInputDest *)v8);
    if ( v3 )
      CInputDest::SetEmpty(gpForegroundInfo);
    MouseProcessor = anonymous_namespace_::GetMouseProcessor();
    if ( MouseProcessor )
    {
      v5 = (volatile __int32 *)(MouseProcessor + 3640);
      if ( (unsigned __int8)CInputDest::operator==(MouseProcessor + 3640, a1) )
      {
        CInputDest::SetEmpty((CInputDest *)v5);
        _InterlockedExchange(v5 + 30, 0);
      }
    }
    UserAtomicCheck::~UserAtomicCheck((UserAtomicCheck *)v6);
  }
}
