/*
 * XREFs of ?GetPathFromTargetInClientVidPn@VIDPN_MGR@@QEAAPEBVDMMVIDPNPRESENTPATH@@I@Z @ 0x1C039D530
 * Callers:
 *     ?BmlPreparePathOrderAndVidPn@@YAJPEAPEAUBML_VIDPN_PATH_ORDER@@PEAVDMMVIDPN@@PEBUD3DKMT_GETPATHSMODALITY@@GGW4DXGK_DIAG_CCD_BML_ORIGIN@@I@Z @ 0x1C01B1560 (-BmlPreparePathOrderAndVidPn@@YAJPEAPEAUBML_VIDPN_PATH_ORDER@@PEAVDMMVIDPN@@PEBUD3DKMT_GETPATHSM.c)
 * Callees:
 *     ?reset@?$auto_rc@$$CBVDMMVIDPN@@@@QEAAXPEBVDMMVIDPN@@@Z @ 0x1C000F08C (-reset@-$auto_rc@$$CBVDMMVIDPN@@@@QEAAXPEBVDMMVIDPN@@@Z.c)
 *     ?FindPath@DMMVIDPNTOPOLOGY@@QEBAPEAVDMMVIDPNPRESENTPATH@@II@Z @ 0x1C0010B98 (-FindPath@DMMVIDPNTOPOLOGY@@QEBAPEAVDMMVIDPNPRESENTPATH@@II@Z.c)
 *     ?GetPathSourceFromTarget@DMMVIDPNTOPOLOGY@@QEBAII@Z @ 0x1C01A8564 (-GetPathSourceFromTarget@DMMVIDPNTOPOLOGY@@QEBAII@Z.c)
 */

const struct DMMVIDPNPRESENTPATH *__fastcall VIDPN_MGR::GetPathFromTargetInClientVidPn(
        struct _KTHREAD **this,
        unsigned int a2)
{
  __int64 v3; // rsi
  struct _KTHREAD *v4; // rax
  struct DMMVIDPNPRESENTPATH *v5; // rbx
  __int64 v6; // rdx
  struct _KTHREAD *v7; // rdx
  __int64 v8; // rdx
  DMMVIDPNTOPOLOGY *v9; // rdi
  int PathSourceFromTarget; // eax
  struct DMMVIDPNPRESENTPATH *Path; // rdi
  __int64 v13; // [rsp+30h] [rbp+8h] BYREF

  v3 = a2;
  if ( this[8] != KeGetCurrentThread() )
    WdLogSingleEntry0(1LL);
  v4 = this[16];
  v5 = 0LL;
  v13 = 0LL;
  if ( v4 )
  {
    _InterlockedIncrement((volatile signed __int32 *)v4 + 8);
    v6 = (__int64)this[16];
  }
  else
  {
    v6 = 0LL;
  }
  auto_rc<DMMVIDPN const>::reset(&v13, v6);
  if ( !v13 )
  {
    v7 = this[1];
    if ( !v7 )
    {
      WdLogSingleEntry0((unsigned int)(v13 + 1));
      v7 = this[1];
    }
    v8 = *((_QWORD *)v7 + 2);
    goto LABEL_14;
  }
  v9 = (DMMVIDPNTOPOLOGY *)(v13 + 96);
  if ( v13 == -96 )
    WdLogSingleEntry0(1LL);
  PathSourceFromTarget = DMMVIDPNTOPOLOGY::GetPathSourceFromTarget(v9, (unsigned int)v3);
  if ( PathSourceFromTarget == -1 )
  {
    v8 = v3;
LABEL_14:
    WdLogSingleEntry1(7LL, v8);
    goto LABEL_18;
  }
  Path = DMMVIDPNTOPOLOGY::FindPath(v9, PathSourceFromTarget, v3);
  if ( !Path )
    WdLogSingleEntry0(1LL);
  v5 = Path;
LABEL_18:
  auto_rc<DMMVIDPN const>::reset(&v13, 0LL);
  return v5;
}
