/*
 * XREFs of ?CollectNonIntrusiveDriverData@DRIVERWHITEBOXINFO@@QEAAJPEAVDXGADAPTER@@@Z @ 0x1C02B5CEC
 * Callers:
 *     ?AddDriverWhiteboxInfo@DISPLAYDIAGNOSTICADAPTERDATA@@AEAAJXZ @ 0x1C02B4DE8 (-AddDriverWhiteboxInfo@DISPLAYDIAGNOSTICADAPTERDATA@@AEAAJXZ.c)
 * Callees:
 *     ??_V@YAXPEAX@Z @ 0x1C000A43C (--_V@YAXPEAX@Z.c)
 *     ?IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ @ 0x1C000A6B4 (-IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ.c)
 *     ??_U@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C000A840 (--_U@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 *     ?Release@ReferenceCounted@@QEBA_KXZ @ 0x1C000BDF4 (-Release@ReferenceCounted@@QEBA_KXZ.c)
 *     ??0?$EXCLUSIVEACCESS@VVIDPN_MGR@@@@QEAA@QEAVVIDPN_MGR@@@Z @ 0x1C000C5B8 (--0-$EXCLUSIVEACCESS@VVIDPN_MGR@@@@QEAA@QEAVVIDPN_MGR@@@Z.c)
 *     ?Release@DXGFASTMUTEX@@QEAAXXZ @ 0x1C000CEC0 (-Release@DXGFASTMUTEX@@QEAAXXZ.c)
 *     ?GetNextTarget@DMMVIDEOPRESENTTARGETSET@@QEBAPEBVDMMVIDEOPRESENTTARGET@@QEBV2@@Z @ 0x1C000F2C0 (-GetNextTarget@DMMVIDEOPRESENTTARGETSET@@QEBAPEBVDMMVIDEOPRESENTTARGET@@QEBV2@@Z.c)
 *     memset @ 0x1C0026840 (memset.c)
 *     ?DdiGetDisplayStateNonIntrusive@ADAPTER_DISPLAY@@QEAAJPEAU_DXGKARG_GETDISPLAYSTATE_NONINTRUSIVE@@@Z @ 0x1C02176C4 (-DdiGetDisplayStateNonIntrusive@ADAPTER_DISPLAY@@QEAAJPEAU_DXGKARG_GETDISPLAYSTATE_NONINTRUSIVE@.c)
 */

__int64 __fastcall DRIVERWHITEBOXINFO::CollectNonIntrusiveDriverData(DRIVERWHITEBOXINFO *this, ADAPTER_DISPLAY **a2)
{
  __int64 v4; // rax
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // rax
  __int64 v8; // rdi
  _QWORD *v9; // rdi
  unsigned int v10; // esi
  _QWORD *v11; // rdx
  const struct DMMVIDEOPRESENTTARGET *i; // rdx
  __int64 v13; // rcx
  DRIVERWHITEBOXINFO **v14; // rax
  __int64 v15; // rdx
  __int64 v16; // rcx
  __int64 v17; // r8
  __int64 v18; // r9
  DRIVERWHITEBOXINFO **v19; // rbx
  __int64 v20; // rax
  __int64 v21; // rdx
  int DisplayStateNonIntrusive; // ebp
  __int64 v23; // r8
  DRIVERWHITEBOXINFO **v24; // rax
  __int64 v25; // rdx
  DRIVERWHITEBOXINFO *v26; // rcx
  ADAPTER_DISPLAY *v27; // rcx
  __int64 v28; // rdx
  _DWORD v30[2]; // [rsp+20h] [rbp-28h] BYREF
  DRIVERWHITEBOXINFO **v31; // [rsp+28h] [rbp-20h]
  __int64 v32; // [rsp+58h] [rbp+10h] BYREF

  if ( !a2 )
  {
    v4 = WdLogNewEntry5_WdAssertion(this, 0LL);
    *(_QWORD *)(v4 + 24) = 1307LL;
    WdLogEvent5_WdAssertion(v4);
  }
  if ( !DXGADAPTER::IsCoreResourceSharedOwner((DXGADAPTER *)a2) )
  {
    v7 = WdLogNewEntry5_WdAssertion(v6, v5);
    *(_QWORD *)(v7 + 24) = 1308LL;
    WdLogEvent5_WdAssertion(v7);
  }
  v8 = *((_QWORD *)a2[334] + 11);
  EXCLUSIVEACCESS<VIDPN_MGR>::EXCLUSIVEACCESS<VIDPN_MGR>(&v32, v8);
  _InterlockedIncrement((volatile signed __int32 *)(*(_QWORD *)(v8 + 80) + 72LL));
  v9 = *(_QWORD **)(v8 + 80);
  v10 = 0;
  v11 = (_QWORD *)v9[3];
  if ( v11 != v9 + 3 )
  {
    for ( i = (const struct DMMVIDEOPRESENTTARGET *)(v11 - 1);
          i;
          i = DMMVIDEOPRESENTTARGETSET::GetNextTarget((DMMVIDEOPRESENTTARGETSET *)v9, i) )
    {
      if ( v10 >= 8 )
        break;
      if ( *((_QWORD *)i + 14) )
      {
        v13 = 28LL * v10++;
        *(_DWORD *)((char *)this + v13) = *((_DWORD *)i + 6);
      }
    }
  }
  v14 = (DRIVERWHITEBOXINFO **)operator new[](8 * v10, 0x4B677844u, PagedPool);
  v19 = v14;
  if ( v14 )
  {
    memset(v14, 0, 8 * v10);
    if ( v10 )
    {
      v24 = v19;
      v25 = v10;
      v26 = this;
      do
      {
        *v24 = v26;
        v26 = (DRIVERWHITEBOXINFO *)((char *)v26 + 28);
        ++v24;
        --v25;
      }
      while ( v25 );
    }
    v27 = a2[334];
    v30[0] = v10;
    v30[1] = 28;
    v31 = v19;
    DisplayStateNonIntrusive = ADAPTER_DISPLAY::DdiGetDisplayStateNonIntrusive(
                                 v27,
                                 (struct _DXGKARG_GETDISPLAYSTATE_NONINTRUSIVE *)v30,
                                 v23);
    if ( DisplayStateNonIntrusive >= 0 )
      *((_DWORD *)this + 56) = v10;
    operator delete[](v19);
  }
  else
  {
    v20 = WdLogNewEntry5_WdLowResource(v16, v15, v17, v18);
    *(_QWORD *)(v20 + 24) = 8 * v10;
    WdLogEvent5_WdLowResource(v20);
    DisplayStateNonIntrusive = -1073741801;
  }
  ReferenceCounted::Release((ReferenceCounted *)(v9 + 8), v21);
  DXGFASTMUTEX::Release(*(struct _KTHREAD ***)(v32 + 40), v28);
  return (unsigned int)DisplayStateNonIntrusive;
}
