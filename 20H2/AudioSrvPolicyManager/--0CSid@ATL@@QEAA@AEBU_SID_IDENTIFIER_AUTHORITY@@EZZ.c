/*
 * XREFs of ??0CSid@ATL@@QEAA@AEBU_SID_IDENTIFIER_AUTHORITY@@EZZ @ 0x1800331AC
 * Callers:
 *     ?DetermineLowRightsKeySecurityDescriptor@@YAJPEAUHKEY__@@PEAPEAX@Z @ 0x180035970 (-DetermineLowRightsKeySecurityDescriptor@@YAJPEAUHKEY__@@PEAPEAX@Z.c)
 * Callees:
 *     ?AtlThrowImpl@ATL@@YAXJ@Z @ 0x18000A174 (-AtlThrowImpl@ATL@@YAXJ@Z.c)
 *     ?AtlHresultFromLastError@ATL@@YAJXZ @ 0x1800362DC (-AtlHresultFromLastError@ATL@@YAJXZ.c)
 *     ?AtlThrowLastWin32@ATL@@YAXXZ @ 0x180036308 (-AtlThrowLastWin32@ATL@@YAXXZ.c)
 *     __security_check_cookie @ 0x1800396C0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x18003AE40 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=4
ATL::CSid *ATL::CSid::CSid(ATL::CSid *this, struct _SID_IDENTIFIER_AUTHORITY *a2, UCHAR a3, ...)
{
  DWORD v5; // esi
  UCHAR *p_nSubAuthorityCount; // r14
  DWORD v7; // ebx
  DWORD LengthSid; // eax
  int Error; // eax
  _BYTE Sid[80]; // [rsp+30h] [rbp-29h] BYREF
  UCHAR nSubAuthorityCount; // [rsp+D0h] [rbp+77h] BYREF

  nSubAuthorityCount = a3;
  *(_QWORD *)this = &ATL::CSid::`vftable';
  *((_BYTE *)this + 76) = 0;
  *((_DWORD *)this + 20) = 7;
  *((_QWORD *)this + 11) = ((__int64 (__fastcall *)(void ***))ATL::g_strmgr[3])(&ATL::g_strmgr) + 24;
  *((_QWORD *)this + 12) = ((__int64 (__fastcall *)(void ***))ATL::g_strmgr[3])(&ATL::g_strmgr) + 24;
  *((_QWORD *)this + 13) = ((__int64 (__fastcall *)(void ***))ATL::g_strmgr[3])(&ATL::g_strmgr) + 24;
  *((_QWORD *)this + 14) = ((__int64 (__fastcall *)(void ***))ATL::g_strmgr[3])(&ATL::g_strmgr) + 24;
  if ( !nSubAuthorityCount || GetSidLengthRequired(nSubAuthorityCount) > 0x44 )
    goto LABEL_12;
  if ( !InitializeSid(Sid, a2, nSubAuthorityCount) )
    ATL::AtlThrowLastWin32();
  v5 = 0;
  if ( nSubAuthorityCount )
  {
    p_nSubAuthorityCount = &nSubAuthorityCount;
    do
    {
      p_nSubAuthorityCount += 8;
      v7 = *(_DWORD *)p_nSubAuthorityCount;
      *GetSidSubAuthority(Sid, v5++) = v7;
    }
    while ( v5 < nSubAuthorityCount );
  }
  if ( !IsValidSid(Sid) || (LengthSid = GetLengthSid(Sid), LengthSid > 0x44) )
LABEL_12:
    ATL::AtlThrowImpl(-2147024809);
  *((_BYTE *)this + 76) = 1;
  if ( !CopySid(LengthSid, (char *)this + 8, Sid) )
  {
    Error = ATL::AtlHresultFromLastError();
    *((_BYTE *)this + 76) = 0;
    ATL::AtlThrowImpl(Error);
  }
  *((_DWORD *)this + 20) = 8;
  return this;
}
