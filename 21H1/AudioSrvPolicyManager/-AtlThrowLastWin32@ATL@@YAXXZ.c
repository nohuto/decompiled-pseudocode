/*
 * XREFs of ?AtlThrowLastWin32@ATL@@YAXXZ @ 0x18003BBC8
 * Callers:
 *     ??0CSid@ATL@@QEAA@AEBU_SID_IDENTIFIER_AUTHORITY@@EZZ @ 0x180038A6C (--0CSid@ATL@@QEAA@AEBU_SID_IDENTIFIER_AUTHORITY@@EZZ.c)
 *     ?Copy@CDacl@ATL@@AEAAXAEBU_ACL@@@Z @ 0x18003941C (-Copy@CDacl@ATL@@AEAAXAEBU_ACL@@@Z.c)
 *     ?SetDacl@CSecurityDesc@ATL@@QEAAXAEBVCDacl@2@_N@Z @ 0x18003A334 (-SetDacl@CSecurityDesc@ATL@@QEAAXAEBVCDacl@2@_N@Z.c)
 *     ?MakeSelfRelative@CSecurityDesc@ATL@@QEAAXXZ @ 0x18003A650 (-MakeSelfRelative@CSecurityDesc@ATL@@QEAAXXZ.c)
 *     ?MakeAbsolute@CSecurityDesc@ATL@@QEAAXXZ @ 0x18003A750 (-MakeAbsolute@CSecurityDesc@ATL@@QEAAXXZ.c)
 * Callees:
 *     ?AtlThrowImpl@ATL@@YAXJ@Z @ 0x18000F974 (-AtlThrowImpl@ATL@@YAXJ@Z.c)
 */

void __noreturn ATL::AtlThrowLastWin32(void)
{
  signed int LastError; // eax
  unsigned int v1; // ecx

  LastError = GetLastError();
  v1 = (unsigned __int16)LastError | 0x80070000;
  if ( LastError <= 0 )
    v1 = LastError;
  ATL::AtlThrowImpl(v1);
}
