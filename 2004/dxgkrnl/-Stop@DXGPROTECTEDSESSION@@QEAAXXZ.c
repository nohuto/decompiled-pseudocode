/*
 * XREFs of ?Stop@DXGPROTECTEDSESSION@@QEAAXXZ @ 0x1C0288620
 * Callers:
 *     ?Stop@ADAPTER_DISPLAY@@QEAAXE@Z @ 0x1C0215178 (-Stop@ADAPTER_DISPLAY@@QEAAXE@Z.c)
 *     ?DestroyProtectedSession@ADAPTER_DISPLAY@@QEAAXPEAVDXGPROTECTEDSESSION@@@Z @ 0x1C0287F3C (-DestroyProtectedSession@ADAPTER_DISPLAY@@QEAAXPEAVDXGPROTECTEDSESSION@@@Z.c)
 * Callees:
 *     ?IsCoreResourceExclusiveOwner@DXGADAPTER@@QEBAEXZ @ 0x1C000B3EC (-IsCoreResourceExclusiveOwner@DXGADAPTER@@QEBAEXZ.c)
 *     ?SetSessionStatus@DXGPROTECTEDSESSION@@QEAAJW4_DXGK_PROTECTED_SESSION_STATUS@@@Z @ 0x1C0047FA0 (-SetSessionStatus@DXGPROTECTEDSESSION@@QEAAJW4_DXGK_PROTECTED_SESSION_STATUS@@@Z.c)
 *     ?DdiDestroyProtectedSession@ADAPTER_DISPLAY@@QEAAJPEAX@Z @ 0x1C021A3D0 (-DdiDestroyProtectedSession@ADAPTER_DISPLAY@@QEAAJPEAX@Z.c)
 */

void __fastcall DXGPROTECTEDSESSION::Stop(DXGPROTECTEDSESSION *this)
{
  __int64 v2; // rdx
  __int64 v3; // rcx
  __int64 v4; // rax
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // r8
  __int64 v8; // rax
  void *v9; // rdx

  if ( !DXGADAPTER::IsCoreResourceExclusiveOwner(*(PERESOURCE **)(*((_QWORD *)this + 2) + 16LL)) )
  {
    v4 = WdLogNewEntry5_WdAssertion(v3, v2);
    *(_QWORD *)(v4 + 24) = 1174LL;
    WdLogEvent5_WdAssertion(v4);
  }
  if ( !DXGADAPTER::IsCoreResourceExclusiveOwner(*(PERESOURCE **)(*((_QWORD *)this + 2) + 16LL)) )
  {
    v8 = WdLogNewEntry5_WdAssertion(v6, v5);
    *(_QWORD *)(v8 + 24) = 1063LL;
    WdLogEvent5_WdAssertion(v8);
  }
  v9 = (void *)*((_QWORD *)this + 18);
  if ( v9 )
  {
    ADAPTER_DISPLAY::DdiDestroyProtectedSession(*((ADAPTER_DISPLAY **)this + 2), v9, v7);
    *((_QWORD *)this + 18) = 0LL;
  }
  *((_DWORD *)this + 6) = 3;
  DXGPROTECTEDSESSION::SetSessionStatus(this, DXGK_PROTECTED_SESSION_STATUS_INVALID);
}
