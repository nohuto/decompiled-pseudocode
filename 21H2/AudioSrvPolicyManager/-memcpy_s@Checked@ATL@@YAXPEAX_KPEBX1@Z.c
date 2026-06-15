/*
 * XREFs of ?memcpy_s@Checked@ATL@@YAXPEAX_KPEBX1@Z @ 0x180036244
 * Callers:
 *     ?GetACE@CAccessAce@CDacl@ATL@@UEBAPEAXXZ @ 0x1800343E0 (-GetACE@CAccessAce@CDacl@ATL@@UEBAPEAXXZ.c)
 *     ?GetACE@CAccessObjectAce@CDacl@ATL@@UEBAPEAXXZ @ 0x1800346C0 (-GetACE@CAccessObjectAce@CDacl@ATL@@UEBAPEAXXZ.c)
 *     ??4CSecurityDesc@ATL@@QEAAAEAV01@AEBU_SECURITY_DESCRIPTOR@@@Z @ 0x180034970 (--4CSecurityDesc@ATL@@QEAAAEAV01@AEBU_SECURITY_DESCRIPTOR@@@Z.c)
 *     ?SetDacl@CSecurityDesc@ATL@@QEAAXAEBVCDacl@2@_N@Z @ 0x180034A74 (-SetDacl@CSecurityDesc@ATL@@QEAAXAEBVCDacl@2@_N@Z.c)
 * Callees:
 *     ?AtlThrowImpl@ATL@@YAXJ@Z @ 0x18000A174 (-AtlThrowImpl@ATL@@YAXJ@Z.c)
 *     _invalid_parameter_noinfo @ 0x18003A752 (_invalid_parameter_noinfo.c)
 *     memset_0 @ 0x18003A7D8 (memset_0.c)
 *     memcpy_0 @ 0x18003AE0F (memcpy_0.c)
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
