/*
 * XREFs of HandleInputDestDestruction @ 0x1C005527C
 * Callers:
 *     HandleFullWindowDestruction @ 0x1C00551D0 (HandleFullWindowDestruction.c)
 *     HandleBaseWindowDestruction @ 0x1C01A9550 (HandleBaseWindowDestruction.c)
 * Callees:
 *     ??0?$CLockDomainSharedAllowAllRecursion@VDLT_HANDLEMANAGER@@@@QEAA@XZ @ 0x1C005219C (--0-$CLockDomainSharedAllowAllRecursion@VDLT_HANDLEMANAGER@@@@QEAA@XZ.c)
 *     ?SetEmpty@CInputDest@@QEAAXXZ @ 0x1C0055364 (-SetEmpty@CInputDest@@QEAAXXZ.c)
 *     ??8CInputDest@@QEBA_NAEBUtagINPUTDEST@@@Z @ 0x1C00553BC (--8CInputDest@@QEBA_NAEBUtagINPUTDEST@@@Z.c)
 *     ??0UserAtomicCheck@@QEAA@XZ @ 0x1C005541C (--0UserAtomicCheck@@QEAA@XZ.c)
 *     ??1UserAtomicCheck@@QEAA@XZ @ 0x1C0055474 (--1UserAtomicCheck@@QEAA@XZ.c)
 *     _anonymous_namespace_::GetMouseProcessor @ 0x1C00554EC (_anonymous_namespace_--GetMouseProcessor.c)
 *     ??0CInputDest@@QEAA@AEBUtagINPUTDEST@@@Z @ 0x1C0055520 (--0CInputDest@@QEAA@AEBUtagINPUTDEST@@@Z.c)
 *     __security_check_cookie @ 0x1C00CBC40 (__security_check_cookie.c)
 */

void __fastcall HandleInputDestDestruction(struct tagINPUTDEST *a1, __int64 a2, __int64 a3, __int64 a4)
{
  _DWORD *v4; // rbx
  char v6; // bl
  __int64 MouseProcessor; // rax
  volatile __int32 *v8; // rbx
  _BYTE v9[8]; // [rsp+20h] [rbp-B8h] BYREF
  _BYTE v10[24]; // [rsp+28h] [rbp-B0h] BYREF
  _BYTE v11[128]; // [rsp+40h] [rbp-98h] BYREF

  v4 = (_DWORD *)*((_QWORD *)a1 + 10);
  CLockDomainSharedAllowAllRecursion<DLT_HANDLEMANAGER>::CLockDomainSharedAllowAllRecursion<DLT_HANDLEMANAGER>(
    (__int64)v10,
    a2,
    a3,
    a4);
  if ( (*((_BYTE *)qword_1C0248D48 + dword_1C0248D50 * (unsigned int)(unsigned __int16)*v4 + 25) & 1) == 0 )
  {
    UserAtomicCheck::UserAtomicCheck((UserAtomicCheck *)v9);
    CInputDest::CInputDest((CInputDest *)v11, a1);
    v6 = CInputDest::operator==(gpForegroundInfo, v11);
    CInputDest::SetEmpty((CInputDest *)v11);
    if ( v6 )
      CInputDest::SetEmpty(gpForegroundInfo);
    MouseProcessor = anonymous_namespace_::GetMouseProcessor();
    if ( MouseProcessor )
    {
      v8 = (volatile __int32 *)(MouseProcessor + 3568);
      if ( (unsigned __int8)CInputDest::operator==(MouseProcessor + 3568, a1) )
      {
        CInputDest::SetEmpty((CInputDest *)v8);
        _InterlockedExchange(v8 + 30, 0);
      }
    }
    UserAtomicCheck::~UserAtomicCheck((UserAtomicCheck *)v9);
  }
}
