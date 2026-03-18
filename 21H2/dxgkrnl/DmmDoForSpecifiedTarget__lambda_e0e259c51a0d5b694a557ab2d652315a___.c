/*
 * XREFs of DmmDoForSpecifiedTarget__lambda_e0e259c51a0d5b694a557ab2d652315a___ @ 0x1C0398834
 * Callers:
 *     ?DmmSetTargetForceableState@@YAJQEAXIE@Z @ 0x1C039D12C (-DmmSetTargetForceableState@@YAJQEAXIE@Z.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x1C0008E10 (DxgkLogInternalTriageEvent.c)
 *     ?IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ @ 0x1C000C10C (-IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ.c)
 *     ?Release@ReferenceCounted@@QEBA_KXZ @ 0x1C000D514 (-Release@ReferenceCounted@@QEBA_KXZ.c)
 *     ?Release@DXGFASTMUTEX@@QEAAXXZ @ 0x1C000E420 (-Release@DXGFASTMUTEX@@QEAAXXZ.c)
 *     ?GetTargetById@DMMVIDEOPRESENTTARGETSET@@QEBAPEAVDMMVIDEOPRESENTTARGET@@I@Z @ 0x1C000F0C8 (-GetTargetById@DMMVIDEOPRESENTTARGETSET@@QEBAPEAVDMMVIDEOPRESENTTARGET@@I@Z.c)
 *     ??0?$EXCLUSIVEACCESS@VVIDPN_MGR@@@@QEAA@QEAVVIDPN_MGR@@@Z @ 0x1C000F13C (--0-$EXCLUSIVEACCESS@VVIDPN_MGR@@@@QEAA@QEAVVIDPN_MGR@@@Z.c)
 *     ?IsAnalogueVideoOutput@@YAEW4_D3DKMDT_VIDEO_OUTPUT_TECHNOLOGY@@@Z @ 0x1C0027054 (-IsAnalogueVideoOutput@@YAEW4_D3DKMDT_VIDEO_OUTPUT_TECHNOLOGY@@@Z.c)
 */

__int64 __fastcall DmmDoForSpecifiedTarget__lambda_e0e259c51a0d5b694a557ab2d652315a_(
        DXGADAPTER *a1,
        unsigned int a2,
        _BYTE *a3)
{
  __int64 v3; // rbp
  __int64 v7; // rax
  __int64 v8; // rsi
  __int64 v9; // rbx
  struct DMMVIDEOPRESENTTARGET *TargetById; // rax
  unsigned int v11; // edi
  __int64 v12; // rdx
  __int64 v13; // [rsp+60h] [rbp+8h] BYREF

  v3 = a2;
  if ( !a1 )
  {
    WdLogSingleEntry1(2LL, 0LL);
    return 3223191554LL;
  }
  if ( !DXGADAPTER::IsCoreResourceSharedOwner(a1) )
    WdLogSingleEntry0(1LL);
  v7 = *((_QWORD *)a1 + 349);
  if ( !v7 )
  {
    WdLogSingleEntry1(2LL, a1);
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      -1,
      (__int64)L"Caller specified adapter handle 0x%I64x is a render only adapter.",
      (__int64)a1,
      0LL,
      0LL,
      0LL,
      0LL);
    return 3223191554LL;
  }
  v8 = *(_QWORD *)(v7 + 104);
  if ( v8 )
  {
    EXCLUSIVEACCESS<VIDPN_MGR>::EXCLUSIVEACCESS<VIDPN_MGR>(&v13, *(_QWORD *)(v7 + 104));
    _InterlockedIncrement((volatile signed __int32 *)(*(_QWORD *)(v8 + 120) + 72LL));
    v9 = *(_QWORD *)(v8 + 120);
    TargetById = DMMVIDEOPRESENTTARGETSET::GetTargetById((DMMVIDEOPRESENTTARGETSET *)v9, v3);
    if ( TargetById )
    {
      if ( IsAnalogueVideoOutput(*((_DWORD *)TargetById + 20)) )
        *(_DWORD *)(v12 + 408) = *a3 != 0;
      v11 = 0;
    }
    else
    {
      WdLogSingleEntry1(2LL, v3);
      v11 = -1071774971;
    }
    if ( v9 )
      ReferenceCounted::Release((ReferenceCounted *)(v9 + 64));
    DXGFASTMUTEX::Release((struct _KTHREAD **)(v13 + 40));
    return v11;
  }
  else
  {
    WdLogSingleEntry1(2LL, a1);
    return 3223192373LL;
  }
}
