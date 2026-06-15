/*
 * XREFs of ?RemoveAt@?$CAtlList@PEAVCApplication@@V?$CElementTraits@PEAVCApplication@@@ATL@@@ATL@@QEAAXPEAU__POSITION@@@Z @ 0x180017FBC
 * Callers:
 *     ?DelinkProcess@CApplication@@QEAAJPEAVCProcess@@@Z @ 0x18001058C (-DelinkProcess@CApplication@@QEAAJPEAVCProcess@@@Z.c)
 *     ?RemoveProcess@CApplicationManager@@QEAAJPEAVCProcess@@@Z @ 0x18001DA44 (-RemoveProcess@CApplicationManager@@QEAAJPEAVCProcess@@@Z.c)
 *     ?RemoveApplication@CApplicationManager@@QEAAJAEAPEAVCApplication@@@Z @ 0x18001E024 (-RemoveApplication@CApplicationManager@@QEAAJAEAPEAVCApplication@@@Z.c)
 *     ?TsSessionDeleteAppManagerClient@@YAJPEAVTSSession@@PEAVCProcess@@@Z @ 0x180028784 (-TsSessionDeleteAppManagerClient@@YAJPEAVTSSession@@PEAVCProcess@@@Z.c)
 *     ?TsSessionIdRemoveActiveMediaApp@@YAJKPEAVCApplication@@@Z @ 0x180029028 (-TsSessionIdRemoveActiveMediaApp@@YAJKPEAVCApplication@@@Z.c)
 * Callees:
 *     ?AtlThrowImpl@ATL@@YAXJ@Z @ 0x18000A174 (-AtlThrowImpl@ATL@@YAXJ@Z.c)
 *     ?RemoveAll@?$CAtlList@PEAVCPickerHostContext@@V?$CElementTraits@PEAVCPickerHostContext@@@ATL@@@ATL@@QEAAXXZ @ 0x180017F24 (-RemoveAll@-$CAtlList@PEAVCPickerHostContext@@V-$CElementTraits@PEAVCPickerHostContext@@@ATL@@@A.c)
 */

void __fastcall ATL::CAtlList<CApplication *,ATL::CElementTraits<CApplication *>>::RemoveAt(__int64 **a1, __int64 *a2)
{
  __int64 *v2; // r8
  __int64 *v3; // r8
  bool v4; // zf

  if ( !a2 )
    ATL::AtlThrowImpl(-2147467259);
  v2 = (__int64 *)*a2;
  if ( a2 == *a1 )
    *a1 = v2;
  else
    *(_QWORD *)a2[1] = v2;
  v3 = (__int64 *)a2[1];
  if ( a2 == a1[1] )
    a1[1] = v3;
  else
    *(_QWORD *)(*a2 + 8) = v3;
  *a2 = (__int64)a1[4];
  v4 = a1[2] == (__int64 *)1;
  a1[2] = (__int64 *)((char *)a1[2] - 1);
  a1[4] = a2;
  if ( v4 )
    ATL::CAtlList<CPickerHostContext *,ATL::CElementTraits<CPickerHostContext *>>::RemoveAll((__int64)a1);
}
