/*
 * XREFs of HandleInputDestDestruction @ 0x1C00745DC
 * Callers:
 *     HandleFullWindowDestruction @ 0x1C0074530 (HandleFullWindowDestruction.c)
 *     HandleBaseWindowDestruction @ 0x1C01AB8D0 (HandleBaseWindowDestruction.c)
 * Callees:
 *     ??0?$CLockDomainSharedAllowAllRecursion@VDLT_HANDLEMANAGER@@@@QEAA@XZ @ 0x1C0017700 (--0-$CLockDomainSharedAllowAllRecursion@VDLT_HANDLEMANAGER@@@@QEAA@XZ.c)
 *     ?SetEmpty@CInputDest@@QEAAXXZ @ 0x1C00746C4 (-SetEmpty@CInputDest@@QEAAXXZ.c)
 *     ??8CInputDest@@QEBA_NAEBUtagINPUTDEST@@@Z @ 0x1C007471C (--8CInputDest@@QEBA_NAEBUtagINPUTDEST@@@Z.c)
 *     ??1UserAtomicCheck@@QEAA@XZ @ 0x1C007477C (--1UserAtomicCheck@@QEAA@XZ.c)
 *     _anonymous_namespace_::GetMouseProcessor @ 0x1C00747EC (_anonymous_namespace_--GetMouseProcessor.c)
 *     ??0CInputDest@@QEAA@AEBUtagINPUTDEST@@@Z @ 0x1C0074820 (--0CInputDest@@QEAA@AEBUtagINPUTDEST@@@Z.c)
 *     ??0UserAtomicCheck@@QEAA@XZ @ 0x1C0074948 (--0UserAtomicCheck@@QEAA@XZ.c)
 *     __security_check_cookie @ 0x1C00CCA30 (__security_check_cookie.c)
 */

void __fastcall HandleInputDestDestruction(struct tagINPUTDEST *a1)
{
  _DWORD *v1; // rbx
  __int64 v3; // r8
  char v4; // bl
  __int64 MouseProcessor; // rax
  __int64 v6; // r8
  volatile __int32 *v7; // rbx
  _BYTE v8[8]; // [rsp+20h] [rbp-B8h] BYREF
  _BYTE v9[24]; // [rsp+28h] [rbp-B0h] BYREF
  _BYTE v10[128]; // [rsp+40h] [rbp-98h] BYREF

  v1 = (_DWORD *)*((_QWORD *)a1 + 10);
  CLockDomainSharedAllowAllRecursion<DLT_HANDLEMANAGER>::CLockDomainSharedAllowAllRecursion<DLT_HANDLEMANAGER>((__int64)v9);
  if ( (*((_BYTE *)qword_1C024AD48 + dword_1C024AD50 * (unsigned int)(unsigned __int16)*v1 + 25) & 1) == 0 )
  {
    UserAtomicCheck::UserAtomicCheck((UserAtomicCheck *)v8);
    CInputDest::CInputDest((CInputDest *)v10, a1);
    v4 = CInputDest::operator==(gpForegroundInfo, v10, v3);
    CInputDest::SetEmpty((CInputDest *)v10);
    if ( v4 )
      CInputDest::SetEmpty(gpForegroundInfo);
    MouseProcessor = anonymous_namespace_::GetMouseProcessor();
    if ( MouseProcessor )
    {
      v7 = (volatile __int32 *)(MouseProcessor + 3568);
      if ( (unsigned __int8)CInputDest::operator==(MouseProcessor + 3568, a1, v6) )
      {
        CInputDest::SetEmpty((CInputDest *)v7);
        _InterlockedExchange(v7 + 30, 0);
      }
    }
    UserAtomicCheck::~UserAtomicCheck((UserAtomicCheck *)v8);
  }
}
