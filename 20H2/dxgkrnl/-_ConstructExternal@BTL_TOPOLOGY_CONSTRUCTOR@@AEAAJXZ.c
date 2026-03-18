/*
 * XREFs of ?_ConstructExternal@BTL_TOPOLOGY_CONSTRUCTOR@@AEAAJXZ @ 0x1C02EE418
 * Callers:
 *     ??RBTL_TOPOLOGY_CONSTRUCTOR@@QEAAJW4CCD_TOPOLOGY_CLASS@@PEAVCCD_TOPOLOGY@@PEAG@Z @ 0x1C02EC588 (--RBTL_TOPOLOGY_CONSTRUCTOR@@QEAAJW4CCD_TOPOLOGY_CLASS@@PEAVCCD_TOPOLOGY@@PEAG@Z.c)
 *     ?_ConstructDefault@BTL_TOPOLOGY_CONSTRUCTOR@@AEAAJAEAI@Z @ 0x1C02EDC94 (-_ConstructDefault@BTL_TOPOLOGY_CONSTRUCTOR@@AEAAJAEAI@Z.c)
 * Callees:
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C0004010 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?IterateAdaptersWithCallback@DXGGLOBAL@@QEAAJP6AJPEAVDXGADAPTER@@PEAX@Z1W4_ITERATE_ADAPTER_FLAGS@@@Z @ 0x1C012F53C (-IterateAdaptersWithCallback@DXGGLOBAL@@QEAAJP6AJPEAVDXGADAPTER@@PEAX@Z1W4_ITERATE_ADAPTER_FLAGS.c)
 *     ?_AddSecondaryPathToTopology@BTL_TOPOLOGY_CONSTRUCTOR@@AEAAJ_NAEBU_LUID@@I@Z @ 0x1C02ED360 (-_AddSecondaryPathToTopology@BTL_TOPOLOGY_CONSTRUCTOR@@AEAAJ_NAEBU_LUID@@I@Z.c)
 */

__int64 __fastcall BTL_TOPOLOGY_CONSTRUCTOR::_ConstructExternal(BTL_TOPOLOGY_CONSTRUCTOR *this, __int64 a2)
{
  struct DXGGLOBAL *Global; // rax
  int v4; // eax
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // rdi
  int v8; // eax
  _QWORD *v9; // rax

  *((_WORD *)this + 5) = 0;
  Global = DXGGLOBAL::GetGlobal((__int64)this, a2);
  v4 = DXGGLOBAL::IterateAdaptersWithCallback(
         (__int64)Global,
         (__int64 (__fastcall *)(_QWORD *, __int64))BtlPreAcquireSharedAccess__BTL_TOPOLOGY_CONSTRUCTOR::_AddExternalPathsAdaptersCallback_0_1_,
         (__int64)this,
         4);
  v7 = v4;
  if ( v4 < 0
    || !*((_WORD *)this + 4)
    && (LOBYTE(v5) = 1,
        v8 = BTL_TOPOLOGY_CONSTRUCTOR::_AddSecondaryPathToTopology(
               (CCD_TOPOLOGY **)this,
               v5,
               (const struct _LUID *)((char *)this + 12),
               0xFFFFFFFF),
        v7 = v8,
        v8 < 0) )
  {
    v9 = (_QWORD *)WdLogNewEntry5_WdError(v6, v5);
    v9[3] = v7;
    v9[4] = *(_QWORD *)this;
    v9[5] = *(_QWORD *)(*(_QWORD *)this + 64LL);
    WdLogEvent5_WdError(v9);
  }
  return (unsigned int)v7;
}
