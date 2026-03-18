/*
 * XREFs of ?DmmSetVidPnTargetPowerComponentIndex@@YAJPEAVVIDPN_MGR@@II@Z @ 0x1C0215CE4
 * Callers:
 *     ?InitializePowerManagement@ADAPTER_DISPLAY@@QEAAJXZ @ 0x1C0215C4C (-InitializePowerManagement@ADAPTER_DISPLAY@@QEAAJXZ.c)
 * Callees:
 *     ?Release@ReferenceCounted@@QEBA_KXZ @ 0x1C000D514 (-Release@ReferenceCounted@@QEBA_KXZ.c)
 *     ?Release@DXGFASTMUTEX@@QEAAXXZ @ 0x1C000E420 (-Release@DXGFASTMUTEX@@QEAAXXZ.c)
 *     ?GetTargetById@DMMVIDEOPRESENTTARGETSET@@QEBAPEAVDMMVIDEOPRESENTTARGET@@I@Z @ 0x1C000F0C8 (-GetTargetById@DMMVIDEOPRESENTTARGETSET@@QEBAPEAVDMMVIDEOPRESENTTARGET@@I@Z.c)
 *     ??0?$EXCLUSIVEACCESS@VVIDPN_MGR@@@@QEAA@QEAVVIDPN_MGR@@@Z @ 0x1C000F13C (--0-$EXCLUSIVEACCESS@VVIDPN_MGR@@@@QEAA@QEAVVIDPN_MGR@@@Z.c)
 *     ??1?$auto_rc@$$CBVDMMVIDEOPRESENTTARGETSET@@@@QEAA@XZ @ 0x1C004D070 (--1-$auto_rc@$$CBVDMMVIDEOPRESENTTARGETSET@@@@QEAA@XZ.c)
 */

__int64 __fastcall DmmSetVidPnTargetPowerComponentIndex(struct VIDPN_MGR *a1, unsigned int a2, int a3)
{
  __int64 v3; // rbp
  __int64 v6; // rbx
  struct DMMVIDEOPRESENTTARGET *TargetById; // rax
  unsigned int v8; // edi
  __int64 v10; // r8
  __int64 v11; // [rsp+40h] [rbp+8h] BYREF
  __int64 v12; // [rsp+58h] [rbp+20h] BYREF

  v3 = a2;
  EXCLUSIVEACCESS<VIDPN_MGR>::EXCLUSIVEACCESS<VIDPN_MGR>(&v12, (__int64)a1);
  _InterlockedIncrement((volatile signed __int32 *)(*((_QWORD *)a1 + 15) + 72LL));
  v6 = *((_QWORD *)a1 + 15);
  v11 = v6;
  TargetById = DMMVIDEOPRESENTTARGETSET::GetTargetById((DMMVIDEOPRESENTTARGETSET *)v6, v3);
  v8 = 0;
  if ( TargetById )
  {
    *((_DWORD *)TargetById + 100) = a3;
    if ( v6 )
      ReferenceCounted::Release((ReferenceCounted *)(v6 + 64));
  }
  else
  {
    v10 = *((_QWORD *)a1 + 1);
    if ( !v10 )
    {
      WdLogSingleEntry0(1LL);
      v10 = *((_QWORD *)a1 + 1);
    }
    WdLogSingleEntry2(2LL, v3, *(_QWORD *)(v10 + 16));
    auto_rc<DMMVIDEOPRESENTTARGETSET const>::~auto_rc<DMMVIDEOPRESENTTARGETSET const>(&v11);
    v8 = -1071774971;
  }
  DXGFASTMUTEX::Release((struct _KTHREAD **)(v12 + 40));
  return v8;
}
