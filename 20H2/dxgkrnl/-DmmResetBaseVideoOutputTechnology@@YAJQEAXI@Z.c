/*
 * XREFs of ?DmmResetBaseVideoOutputTechnology@@YAJQEAXI@Z @ 0x1C02DDA48
 * Callers:
 *     DpiPdoRemovePdo @ 0x1C02D8330 (DpiPdoRemovePdo.c)
 * Callees:
 *     ?Release@DXGFASTMUTEX@@QEAAXXZ @ 0x1C0002C20 (-Release@DXGFASTMUTEX@@QEAAXXZ.c)
 *     ?IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ @ 0x1C0004298 (-IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ.c)
 *     ?Release@ReferenceCounted@@QEBA_KXZ @ 0x1C0005424 (-Release@ReferenceCounted@@QEBA_KXZ.c)
 *     ?FindById@?$IndexedSet@VDMMVIDEOPRESENTTARGET@@@@QEBAPEAVDMMVIDEOPRESENTTARGET@@I@Z @ 0x1C0007B08 (-FindById@-$IndexedSet@VDMMVIDEOPRESENTTARGET@@@@QEBAPEAVDMMVIDEOPRESENTTARGET@@I@Z.c)
 *     ??0?$EXCLUSIVEACCESS@VVIDPN_MGR@@@@QEAA@QEAVVIDPN_MGR@@@Z @ 0x1C0007EFC (--0-$EXCLUSIVEACCESS@VVIDPN_MGR@@@@QEAA@QEAVVIDPN_MGR@@@Z.c)
 */

__int64 __fastcall DmmResetBaseVideoOutputTechnology(DXGADAPTER *a1, __int64 a2)
{
  __int64 v2; // rsi
  __int64 v4; // rax
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // rax
  __int64 v9; // rax
  __int64 v10; // rdi
  __int64 v11; // rax
  __int64 v12; // rbx
  __int64 v13; // rax
  __int64 v14; // rdx
  __int64 v15; // rcx
  __int64 v16; // rax
  unsigned int v17; // edi
  __int64 v18; // [rsp+30h] [rbp+8h] BYREF

  v2 = (unsigned int)a2;
  if ( !a1 )
  {
    v4 = WdLogNewEntry5_WdError(0LL, a2);
    *(_QWORD *)(v4 + 24) = 0LL;
LABEL_3:
    WdLogEvent5_WdError(v4);
    return 3223191554LL;
  }
  if ( !DXGADAPTER::IsCoreResourceSharedOwner(a1) )
  {
    v8 = WdLogNewEntry5_WdAssertion(v7, v6);
    WdLogEvent5_WdAssertion(v8);
  }
  v9 = *((_QWORD *)a1 + 337);
  if ( !v9 )
  {
    v4 = WdLogNewEntry5_WdError(v7, v6);
    *(_QWORD *)(v4 + 24) = a1;
    goto LABEL_3;
  }
  v10 = *(_QWORD *)(v9 + 88);
  if ( v10 )
  {
    EXCLUSIVEACCESS<VIDPN_MGR>::EXCLUSIVEACCESS<VIDPN_MGR>(&v18, *(_QWORD *)(v9 + 88));
    _InterlockedIncrement((volatile signed __int32 *)(*(_QWORD *)(v10 + 80) + 72LL));
    v12 = *(_QWORD *)(v10 + 80);
    v13 = IndexedSet<DMMVIDEOPRESENTTARGET>::FindById(v12, v2);
    if ( v13 )
    {
      v17 = 0;
      *(_DWORD *)(v13 + 80) = *(_DWORD *)(v13 + 84);
    }
    else
    {
      v16 = WdLogNewEntry5_WdError(v15, v14);
      *(_QWORD *)(v16 + 24) = v2;
      WdLogEvent5_WdError(v16);
      v17 = -1071774971;
    }
    if ( v12 )
      ReferenceCounted::Release((ReferenceCounted *)(v12 + 64), v14);
    DXGFASTMUTEX::Release(*(struct _KTHREAD ***)(v18 + 40), v14);
    return v17;
  }
  else
  {
    v11 = WdLogNewEntry5_WdError(v7, v6);
    *(_QWORD *)(v11 + 24) = a1;
    WdLogEvent5_WdError(v11);
    return 3223192373LL;
  }
}
