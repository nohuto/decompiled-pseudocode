/*
 * XREFs of ?AtlHresultFromLastError@ATL@@YAJXZ @ 0x18003BB9C
 * Callers:
 *     ??0CSid@ATL@@QEAA@AEBU_SID_IDENTIFIER_AUTHORITY@@EZZ @ 0x180038A6C (--0CSid@ATL@@QEAA@AEBU_SID_IDENTIFIER_AUTHORITY@@EZZ.c)
 *     ??4CSid@ATL@@QEAAAEAV01@AEBU_SID@@@Z @ 0x180038CF8 (--4CSid@ATL@@QEAAAEAV01@AEBU_SID@@@Z.c)
 *     ?GetPACL@CAcl@ATL@@QEBAPEBU_ACL@@XZ @ 0x180038E40 (-GetPACL@CAcl@ATL@@QEBAPEBU_ACL@@XZ.c)
 *     ??0CAccessAce@CDacl@ATL@@QEAA@AEBVCSid@2@KE_N@Z @ 0x180039AC0 (--0CAccessAce@CDacl@ATL@@QEAA@AEBVCSid@2@KE_N@Z.c)
 *     ??4CSecurityDesc@ATL@@QEAAAEAV01@AEBU_SECURITY_DESCRIPTOR@@@Z @ 0x18003A230 (--4CSecurityDesc@ATL@@QEAAAEAV01@AEBU_SECURITY_DESCRIPTOR@@@Z.c)
 *     ?SetDacl@CSecurityDesc@ATL@@QEAAXAEBVCDacl@2@_N@Z @ 0x18003A334 (-SetDacl@CSecurityDesc@ATL@@QEAAXAEBVCDacl@2@_N@Z.c)
 *     ?MakeSelfRelative@CSecurityDesc@ATL@@QEAAXXZ @ 0x18003A650 (-MakeSelfRelative@CSecurityDesc@ATL@@QEAAXXZ.c)
 *     ?MakeAbsolute@CSecurityDesc@ATL@@QEAAXXZ @ 0x18003A750 (-MakeAbsolute@CSecurityDesc@ATL@@QEAAXXZ.c)
 * Callees:
 *     <none>
 */

__int64 ATL::AtlHresultFromLastError(void)
{
  signed int LastError; // ecx
  __int64 result; // rax

  LastError = GetLastError();
  result = (unsigned __int16)LastError | 0x80070000;
  if ( LastError <= 0 )
    return (unsigned int)LastError;
  return result;
}
