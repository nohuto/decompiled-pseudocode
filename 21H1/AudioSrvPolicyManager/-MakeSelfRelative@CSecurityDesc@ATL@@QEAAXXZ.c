/*
 * XREFs of ?MakeSelfRelative@CSecurityDesc@ATL@@QEAAXXZ @ 0x18003A650
 * Callers:
 *     ?DetermineLowRightsKeySecurityDescriptor@@YAJPEAUHKEY__@@PEAPEAX@Z @ 0x18003B230 (-DetermineLowRightsKeySecurityDescriptor@@YAJPEAUHKEY__@@PEAPEAX@Z.c)
 * Callees:
 *     ?AtlThrowImpl@ATL@@YAXJ@Z @ 0x18000F974 (-AtlThrowImpl@ATL@@YAXJ@Z.c)
 *     ?Clear@CSecurityDesc@ATL@@MEAAXXZ @ 0x18003A9D0 (-Clear@CSecurityDesc@ATL@@MEAAXXZ.c)
 *     ?AtlHresultFromLastError@ATL@@YAJXZ @ 0x18003BB9C (-AtlHresultFromLastError@ATL@@YAJXZ.c)
 *     ?AtlThrowLastWin32@ATL@@YAXXZ @ 0x18003BBC8 (-AtlThrowLastWin32@ATL@@YAXXZ.c)
 */

void __fastcall ATL::CSecurityDesc::MakeSelfRelative(ATL::CSecurityDesc *this)
{
  void *v2; // rcx
  void *v3; // rcx
  void *v4; // rax
  void *v5; // rdi
  int Error; // ebx
  WORD pControl; // [rsp+48h] [rbp+10h] BYREF
  DWORD dwBufferLength; // [rsp+50h] [rbp+18h] BYREF
  DWORD dwRevision; // [rsp+58h] [rbp+20h] BYREF

  v2 = (void *)*((_QWORD *)this + 1);
  pControl = 0;
  if ( !v2 || !GetSecurityDescriptorControl(v2, &pControl, &dwRevision) )
    ATL::AtlThrowImpl(-2147467259);
  if ( (pControl & 0x8000u) == 0 )
  {
    v3 = (void *)*((_QWORD *)this + 1);
    dwBufferLength = 0;
    MakeSelfRelativeSD(v3, 0LL, &dwBufferLength);
    if ( GetLastError() != 122 )
      ATL::AtlThrowLastWin32();
    v4 = malloc(dwBufferLength);
    v5 = v4;
    if ( !v4 )
      ATL::AtlThrowImpl(-2147024882);
    if ( !MakeSelfRelativeSD(*((PSECURITY_DESCRIPTOR *)this + 1), v4, &dwBufferLength) )
    {
      Error = ATL::AtlHresultFromLastError();
      free(v5);
      ATL::AtlThrowImpl(Error);
    }
    ATL::CSecurityDesc::Clear(this);
    *((_QWORD *)this + 1) = v5;
  }
}
