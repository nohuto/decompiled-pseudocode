/*
 * XREFs of DmmDoForSpecifiedTarget__lambda_e0e259c51a0d5b694a557ab2d652315a___ @ 0x1C02D9190
 * Callers:
 *     ?DmmSetTargetForceableState@@YAJQEAXIE@Z @ 0x1C02DDB8C (-DmmSetTargetForceableState@@YAJQEAXIE@Z.c)
 * Callees:
 *     ?Release@DXGFASTMUTEX@@QEAAXXZ @ 0x1C0002C20 (-Release@DXGFASTMUTEX@@QEAAXXZ.c)
 *     ?IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ @ 0x1C0004298 (-IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ.c)
 *     ?Release@ReferenceCounted@@QEBA_KXZ @ 0x1C0005424 (-Release@ReferenceCounted@@QEBA_KXZ.c)
 *     ?GetTargetById@DMMVIDEOPRESENTTARGETSET@@QEBAPEAVDMMVIDEOPRESENTTARGET@@I@Z @ 0x1C0007B74 (-GetTargetById@DMMVIDEOPRESENTTARGETSET@@QEBAPEAVDMMVIDEOPRESENTTARGET@@I@Z.c)
 *     ??0?$EXCLUSIVEACCESS@VVIDPN_MGR@@@@QEAA@QEAVVIDPN_MGR@@@Z @ 0x1C0007EFC (--0-$EXCLUSIVEACCESS@VVIDPN_MGR@@@@QEAA@QEAVVIDPN_MGR@@@Z.c)
 *     ?IsAnalogueVideoOutput@@YAEW4_D3DKMDT_VIDEO_OUTPUT_TECHNOLOGY@@@Z @ 0x1C0009BB8 (-IsAnalogueVideoOutput@@YAEW4_D3DKMDT_VIDEO_OUTPUT_TECHNOLOGY@@@Z.c)
 */

__int64 __fastcall DmmDoForSpecifiedTarget__lambda_e0e259c51a0d5b694a557ab2d652315a_(
        DXGADAPTER *a1,
        __int64 a2,
        _BYTE *a3)
{
  __int64 v3; // rbp
  __int64 v6; // rax
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // rax
  __int64 v11; // rax
  __int64 v12; // rsi
  __int64 v13; // rax
  __int64 v14; // rbx
  struct DMMVIDEOPRESENTTARGET *TargetById; // rax
  __int64 v16; // rcx
  __int64 v17; // rax
  __int64 v18; // rdx
  unsigned int v19; // edi
  __int64 v20; // [rsp+30h] [rbp+8h] BYREF

  v3 = (unsigned int)a2;
  if ( !a1 )
  {
    v6 = WdLogNewEntry5_WdError(0LL, a2);
    *(_QWORD *)(v6 + 24) = 0LL;
LABEL_3:
    WdLogEvent5_WdError(v6);
    return 3223191554LL;
  }
  if ( !DXGADAPTER::IsCoreResourceSharedOwner(a1) )
  {
    v10 = WdLogNewEntry5_WdAssertion(v9, v8);
    WdLogEvent5_WdAssertion(v10);
  }
  v11 = *((_QWORD *)a1 + 337);
  if ( !v11 )
  {
    v6 = WdLogNewEntry5_WdError(v9, v8);
    *(_QWORD *)(v6 + 24) = a1;
    goto LABEL_3;
  }
  v12 = *(_QWORD *)(v11 + 88);
  if ( v12 )
  {
    EXCLUSIVEACCESS<VIDPN_MGR>::EXCLUSIVEACCESS<VIDPN_MGR>(&v20, *(_QWORD *)(v11 + 88));
    _InterlockedIncrement((volatile signed __int32 *)(*(_QWORD *)(v12 + 80) + 72LL));
    v14 = *(_QWORD *)(v12 + 80);
    TargetById = DMMVIDEOPRESENTTARGETSET::GetTargetById((DMMVIDEOPRESENTTARGETSET *)v14, (unsigned int)v3);
    if ( TargetById )
    {
      if ( IsAnalogueVideoOutput(*((_DWORD *)TargetById + 20)) )
        *(_DWORD *)(v18 + 408) = *a3 != 0;
      v19 = 0;
    }
    else
    {
      v17 = WdLogNewEntry5_WdError(v16, 0LL);
      *(_QWORD *)(v17 + 24) = v3;
      WdLogEvent5_WdError(v17);
      v19 = -1071774971;
    }
    if ( v14 )
      ReferenceCounted::Release((ReferenceCounted *)(v14 + 64), v18);
    DXGFASTMUTEX::Release(*(struct _KTHREAD ***)(v20 + 40), v18);
    return v19;
  }
  else
  {
    v13 = WdLogNewEntry5_WdError(v9, v8);
    *(_QWORD *)(v13 + 24) = a1;
    WdLogEvent5_WdError(v13);
    return 3223192373LL;
  }
}
