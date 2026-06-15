/*
 * XREFs of ?memcpy_s@Checked@ATL@@YAXPEAX_KPEBX1@Z @ 0x18003BB04
 * Callers:
 *     ?GetACE@CAccessAce@CDacl@ATL@@UEBAPEAXXZ @ 0x180039CA0 (-GetACE@CAccessAce@CDacl@ATL@@UEBAPEAXXZ.c)
 *     ?GetACE@CAccessObjectAce@CDacl@ATL@@UEBAPEAXXZ @ 0x180039F80 (-GetACE@CAccessObjectAce@CDacl@ATL@@UEBAPEAXXZ.c)
 *     ??4CSecurityDesc@ATL@@QEAAAEAV01@AEBU_SECURITY_DESCRIPTOR@@@Z @ 0x18003A230 (--4CSecurityDesc@ATL@@QEAAAEAV01@AEBU_SECURITY_DESCRIPTOR@@@Z.c)
 *     ?SetDacl@CSecurityDesc@ATL@@QEAAXAEBVCDacl@2@_N@Z @ 0x18003A334 (-SetDacl@CSecurityDesc@ATL@@QEAAXAEBVCDacl@2@_N@Z.c)
 * Callees:
 *     ?AtlThrowImpl@ATL@@YAXJ@Z @ 0x18000F974 (-AtlThrowImpl@ATL@@YAXJ@Z.c)
 *     _invalid_parameter_noinfo @ 0x180040012 (_invalid_parameter_noinfo.c)
 *     memset_0 @ 0x180040098 (memset_0.c)
 *     memcpy_0 @ 0x1800406DB (memcpy_0.c)
 */

void __fastcall ATL::Checked::memcpy_s(ATL::Checked *this, void *a2, const void *a3, void *a4)
{
  if ( a4 )
  {
    if ( !this )
      goto LABEL_3;
    if ( !a3 || a2 < a4 )
    {
      memset_0(this, 0, (size_t)a2);
      if ( a3 )
      {
        if ( a2 >= a4 )
          goto LABEL_12;
        *(_DWORD *)_o__errno(this, a2) = 34;
LABEL_11:
        invalid_parameter_noinfo();
LABEL_12:
        ATL::AtlThrowImpl(-2147024809);
      }
LABEL_3:
      *(_DWORD *)_o__errno(this, a2) = 22;
      goto LABEL_11;
    }
    memcpy_0(this, a3, (size_t)a4);
  }
}
