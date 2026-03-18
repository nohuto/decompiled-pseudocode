/*
 * XREFs of ?CollectIntrusiveDriverData@DRIVERWHITEBOXINFO@@QEAAJPEAVDXGADAPTER@@@Z @ 0x1C02EE1F0
 * Callers:
 *     ?AddDriverWhiteboxInfo@DISPLAYDIAGNOSTICADAPTERDATA@@AEAAJXZ @ 0x1C02ED2D0 (-AddDriverWhiteboxInfo@DISPLAYDIAGNOSTICADAPTERDATA@@AEAAJXZ.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x1C0008E10 (DxgkLogInternalTriageEvent.c)
 *     ?IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ @ 0x1C000C10C (-IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ.c)
 *     ??_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z @ 0x1C000CD40 (--_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z.c)
 *     ?Release@ReferenceCounted@@QEBA_KXZ @ 0x1C000D514 (-Release@ReferenceCounted@@QEBA_KXZ.c)
 *     ??_V@YAXPEAX@Z @ 0x1C000D990 (--_V@YAXPEAX@Z.c)
 *     ?Release@DXGFASTMUTEX@@QEAAXXZ @ 0x1C000E420 (-Release@DXGFASTMUTEX@@QEAAXXZ.c)
 *     ??0?$EXCLUSIVEACCESS@VVIDPN_MGR@@@@QEAA@QEAVVIDPN_MGR@@@Z @ 0x1C000F13C (--0-$EXCLUSIVEACCESS@VVIDPN_MGR@@@@QEAA@QEAVVIDPN_MGR@@@Z.c)
 *     ?GetNextTarget@DMMVIDEOPRESENTTARGETSET@@QEBAPEBVDMMVIDEOPRESENTTARGET@@QEBV2@@Z @ 0x1C0012B30 (-GetNextTarget@DMMVIDEOPRESENTTARGETSET@@QEBAPEBVDMMVIDEOPRESENTTARGET@@QEBV2@@Z.c)
 *     ?DdiGetDisplayStateIntrusive@ADAPTER_DISPLAY@@QEAAJPEAU_DXGKARG_GETDISPLAYSTATE_INTRUSIVE@@@Z @ 0x1C02C9D68 (-DdiGetDisplayStateIntrusive@ADAPTER_DISPLAY@@QEAAJPEAU_DXGKARG_GETDISPLAYSTATE_INTRUSIVE@@@Z.c)
 */

__int64 __fastcall DRIVERWHITEBOXINFO::CollectIntrusiveDriverData(DRIVERWHITEBOXINFO *this, ADAPTER_DISPLAY **a2)
{
  __int64 v4; // rdi
  __int64 v5; // r9
  _QWORD *v6; // rdi
  unsigned int v7; // esi
  _QWORD *v8; // rdx
  const struct DMMVIDEOPRESENTTARGET *i; // rdx
  __int64 v10; // rcx
  _QWORD *v11; // rax
  void *v12; // rbx
  char *v13; // rcx
  __int64 v14; // rdx
  ADAPTER_DISPLAY *v15; // rcx
  int DisplayStateIntrusive; // ebp
  _DWORD v18[2]; // [rsp+50h] [rbp-38h] BYREF
  void *v19; // [rsp+58h] [rbp-30h]
  __int64 v20; // [rsp+98h] [rbp+10h] BYREF

  if ( !a2 )
  {
    WdLogSingleEntry1(1LL, 1517LL);
    DxgkLogInternalTriageEvent(0LL, 262146, -1, (__int64)L"pDisplayAdapter != nullptr", 1517LL, 0LL, 0LL, 0LL, 0LL);
  }
  if ( !DXGADAPTER::IsCoreResourceSharedOwner((DXGADAPTER *)a2) )
  {
    WdLogSingleEntry1(1LL, 1518LL);
    DxgkLogInternalTriageEvent(
      0LL,
      262146,
      -1,
      (__int64)L"pDisplayAdapter->IsCoreResourceSharedOwner()",
      1518LL,
      0LL,
      0LL,
      0LL,
      0LL);
  }
  v4 = *((_QWORD *)a2[349] + 13);
  EXCLUSIVEACCESS<VIDPN_MGR>::EXCLUSIVEACCESS<VIDPN_MGR>(&v20, v4);
  _InterlockedIncrement((volatile signed __int32 *)(*(_QWORD *)(v4 + 120) + 72LL));
  v6 = *(_QWORD **)(v4 + 120);
  v7 = 0;
  v8 = (_QWORD *)v6[3];
  if ( v8 != v6 + 3 )
  {
    for ( i = (const struct DMMVIDEOPRESENTTARGET *)(v8 - 1);
          i;
          i = DMMVIDEOPRESENTTARGETSET::GetNextTarget((DMMVIDEOPRESENTTARGETSET *)v6, i) )
    {
      if ( v7 >= 4 )
        break;
      if ( *((_QWORD *)i + 14) )
      {
        v10 = 264LL * v7++;
        *(_DWORD *)((char *)this + v10 + 228) = *((_DWORD *)i + 6);
        *(_DWORD *)((char *)this + v10 + 472) = -1;
        *(_DWORD *)((char *)this + v10 + 476) = -1;
      }
    }
  }
  v11 = (_QWORD *)operator new[](8 * v7, 0x4B677844u, 256LL, v5);
  v12 = v11;
  if ( v11 )
  {
    if ( v7 )
    {
      v13 = (char *)this + 228;
      v14 = v7;
      do
      {
        *v11 = v13;
        v13 += 264;
        ++v11;
        --v14;
      }
      while ( v14 );
    }
    v15 = a2[349];
    v18[0] = v7;
    v18[1] = 264;
    v19 = v12;
    DisplayStateIntrusive = ADAPTER_DISPLAY::DdiGetDisplayStateIntrusive(
                              v15,
                              (struct _DXGKARG_GETDISPLAYSTATE_INTRUSIVE *)v18,
                              264LL);
    if ( DisplayStateIntrusive >= 0 )
      *((_DWORD *)this + 321) = v7;
    operator delete[](v12);
  }
  else
  {
    WdLogSingleEntry1(6LL, 8 * v7);
    DxgkLogInternalTriageEvent(
      0LL,
      262145,
      -1,
      (__int64)L"Out of memory allocating black screen intrusive data (size 0x%I64x)",
      8 * v7,
      0LL,
      0LL,
      0LL,
      0LL);
    DisplayStateIntrusive = -1073741801;
  }
  ReferenceCounted::Release((ReferenceCounted *)(v6 + 8));
  DXGFASTMUTEX::Release((struct _KTHREAD **)(v20 + 40));
  return (unsigned int)DisplayStateIntrusive;
}
