/*
 * XREFs of ?FillPathsTargetFlags@CCD_TOPOLOGY@@QEAAJXZ @ 0x1C012DF40
 * Callers:
 *     ?RetrieveActive@CCD_TOPOLOGY@@QEAAJ_N00PEAG@Z @ 0x1C012D5B4 (-RetrieveActive@CCD_TOPOLOGY@@QEAAJ_N00PEAG@Z.c)
 *     DxgkGetPathsModality @ 0x1C0131D50 (DxgkGetPathsModality.c)
 *     ?RetrievePersisted@CCD_TOPOLOGY@@QEAAJIPEAG@Z @ 0x1C0132DA4 (-RetrievePersisted@CCD_TOPOLOGY@@QEAAJIPEAG@Z.c)
 *     ?RetrieveAllPaths@CCD_TOPOLOGY@@QEAAJPEAG@Z @ 0x1C0167550 (-RetrieveAllPaths@CCD_TOPOLOGY@@QEAAJPEAG@Z.c)
 * Callees:
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C0004010 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?IterateAdaptersWithCallback@DXGGLOBAL@@QEAAJP6AJPEAVDXGADAPTER@@PEAX@Z1W4_ITERATE_ADAPTER_FLAGS@@@Z @ 0x1C012F53C (-IterateAdaptersWithCallback@DXGGLOBAL@@QEAAJP6AJPEAVDXGADAPTER@@PEAX@Z1W4_ITERATE_ADAPTER_FLAGS.c)
 */

__int64 __fastcall CCD_TOPOLOGY::FillPathsTargetFlags(CCD_TOPOLOGY *this, __int64 a2)
{
  struct DXGGLOBAL *Global; // rax
  int v4; // eax
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // rbx
  _QWORD *v9; // rax

  Global = DXGGLOBAL::GetGlobal((__int64)this, a2);
  v4 = DXGGLOBAL::IterateAdaptersWithCallback(Global, CCD_TOPOLOGY::_FillTargetInfoAdaptersCallback, this, 4LL);
  v7 = v4;
  if ( v4 < 0 )
  {
    v9 = (_QWORD *)WdLogNewEntry5_WdError(v6, v5);
    v9[3] = v7;
    v9[4] = this;
    v9[5] = *((_QWORD *)this + 8);
    WdLogEvent5_WdError(v9);
  }
  return (unsigned int)v7;
}
