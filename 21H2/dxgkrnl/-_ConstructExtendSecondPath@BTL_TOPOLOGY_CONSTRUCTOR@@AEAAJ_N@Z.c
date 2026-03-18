/*
 * XREFs of ?_ConstructExtendSecondPath@BTL_TOPOLOGY_CONSTRUCTOR@@AEAAJ_N@Z @ 0x1C03AEB50
 * Callers:
 *     ?_ConstructClone@BTL_TOPOLOGY_CONSTRUCTOR@@AEAAJ_N@Z @ 0x1C03AE3F0 (-_ConstructClone@BTL_TOPOLOGY_CONSTRUCTOR@@AEAAJ_N@Z.c)
 *     ?_ConstructDefault@BTL_TOPOLOGY_CONSTRUCTOR@@AEAAJAEAI@Z @ 0x1C03AE4D0 (-_ConstructDefault@BTL_TOPOLOGY_CONSTRUCTOR@@AEAAJAEAI@Z.c)
 *     ?_ConstructExtend@BTL_TOPOLOGY_CONSTRUCTOR@@AEAAJ_N@Z @ 0x1C03AEB14 (-_ConstructExtend@BTL_TOPOLOGY_CONSTRUCTOR@@AEAAJ_N@Z.c)
 * Callees:
 *     ?DXGGLOBAL_GetGlobal@@YAPEAVDXGGLOBAL@@XZ @ 0x1C000BBD0 (-DXGGLOBAL_GetGlobal@@YAPEAVDXGGLOBAL@@XZ.c)
 *     ?IterateAdaptersWithCallback@DXGGLOBAL@@QEAAJP6AJPEAVDXGADAPTER@@PEAX@Z1W4_ITERATE_ADAPTER_FLAGS@@@Z @ 0x1C01985C4 (-IterateAdaptersWithCallback@DXGGLOBAL@@QEAAJP6AJPEAVDXGADAPTER@@PEAX@Z1W4_ITERATE_ADAPTER_FLAGS.c)
 *     ?_AddSecondaryPathToTopology@BTL_TOPOLOGY_CONSTRUCTOR@@AEAAJ_NAEBU_LUID@@I@Z @ 0x1C03ADCB8 (-_AddSecondaryPathToTopology@BTL_TOPOLOGY_CONSTRUCTOR@@AEAAJ_NAEBU_LUID@@I@Z.c)
 */

__int64 __fastcall BTL_TOPOLOGY_CONSTRUCTOR::_ConstructExtendSecondPath(BTL_TOPOLOGY_CONSTRUCTOR *this, char a2)
{
  struct DXGGLOBAL *Global; // rax
  int v5; // eax
  __int64 v6; // rbx
  int v7; // eax

  Global = DXGGLOBAL_GetGlobal();
  v5 = DXGGLOBAL::IterateAdaptersWithCallback(
         (__int64)Global,
         (__int64 (__fastcall *)(_QWORD *, __int64))BtlPreAcquireSharedAccess__BTL_TOPOLOGY_CONSTRUCTOR::_AddExternalPathsAdaptersCallback_0_1_,
         (__int64)this,
         4LL);
  v6 = v5;
  if ( v5 < 0
    || *((_WORD *)this + 4) < 2u
    && a2
    && (v7 = BTL_TOPOLOGY_CONSTRUCTOR::_AddSecondaryPathToTopology(
               (CCD_TOPOLOGY **)this,
               1,
               (const struct _LUID *)((char *)this + 12),
               0xFFFFFFFF),
        v6 = v7,
        v7 < 0) )
  {
    WdLogSingleEntry3(2LL, v6, *(_QWORD *)this, *(_QWORD *)(*(_QWORD *)this + 64LL));
  }
  return (unsigned int)v6;
}
