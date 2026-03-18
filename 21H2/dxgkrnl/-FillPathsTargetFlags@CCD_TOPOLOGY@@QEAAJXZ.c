/*
 * XREFs of ?FillPathsTargetFlags@CCD_TOPOLOGY@@QEAAJXZ @ 0x1C01ABA20
 * Callers:
 *     ?RetrieveActive@CCD_TOPOLOGY@@QEAAJ_N00PEAG@Z @ 0x1C01AB974 (-RetrieveActive@CCD_TOPOLOGY@@QEAAJ_N00PEAG@Z.c)
 *     DxgkGetPathsModality @ 0x1C01AE940 (DxgkGetPathsModality.c)
 *     ?RetrievePersisted@CCD_TOPOLOGY@@QEAAJIPEAG@Z @ 0x1C01B6AE8 (-RetrievePersisted@CCD_TOPOLOGY@@QEAAJIPEAG@Z.c)
 *     ?RetrieveAllPaths@CCD_TOPOLOGY@@QEAAJPEAG@Z @ 0x1C01E8700 (-RetrieveAllPaths@CCD_TOPOLOGY@@QEAAJPEAG@Z.c)
 * Callees:
 *     ?DXGGLOBAL_GetGlobal@@YAPEAVDXGGLOBAL@@XZ @ 0x1C000BBD0 (-DXGGLOBAL_GetGlobal@@YAPEAVDXGGLOBAL@@XZ.c)
 *     ?IterateAdaptersWithCallback@DXGGLOBAL@@QEAAJP6AJPEAVDXGADAPTER@@PEAX@Z1W4_ITERATE_ADAPTER_FLAGS@@@Z @ 0x1C01985C4 (-IterateAdaptersWithCallback@DXGGLOBAL@@QEAAJP6AJPEAVDXGADAPTER@@PEAX@Z1W4_ITERATE_ADAPTER_FLAGS.c)
 */

__int64 __fastcall CCD_TOPOLOGY::FillPathsTargetFlags(CCD_TOPOLOGY *this)
{
  struct DXGGLOBAL *Global; // rax
  int v3; // eax
  unsigned int v4; // ebx

  Global = DXGGLOBAL_GetGlobal();
  v3 = DXGGLOBAL::IterateAdaptersWithCallback(
         (__int64)Global,
         (__int64 (__fastcall *)(_QWORD *, __int64))CCD_TOPOLOGY::_FillTargetInfoAdaptersCallback,
         (__int64)this,
         4LL);
  v4 = v3;
  if ( v3 < 0 )
    WdLogSingleEntry3(2LL, v3, this, *((_QWORD *)this + 8));
  return v4;
}
