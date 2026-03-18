/*
 * XREFs of ?PinPrimaryAllocations@DXGDEVICE@@QEAAJI@Z @ 0x1C01C5CE4
 * Callers:
 *     ?RestoreManagedPrimaryState@MANAGEDPRIMARIESTRACKER@@QEAAJH@Z @ 0x1C01BB50C (-RestoreManagedPrimaryState@MANAGEDPRIMARIESTRACKER@@QEAAJH@Z.c)
 *     DxgkSetDisplayMode @ 0x1C01C2EF0 (DxgkSetDisplayMode.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x1C0008E10 (DxgkLogInternalTriageEvent.c)
 *     ?AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ @ 0x1C000EE00 (-AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ.c)
 *     ??0DXGAUTOPUSHLOCK@@QEAA@QEAVDXGPUSHLOCK@@_N@Z @ 0x1C000EF08 (--0DXGAUTOPUSHLOCK@@QEAA@QEAVDXGPUSHLOCK@@_N@Z.c)
 *     ?Release@DXGAUTOPUSHLOCK@@QEAAXXZ @ 0x1C000FABC (-Release@DXGAUTOPUSHLOCK@@QEAAXXZ.c)
 *     ?IsCoreResourceExclusiveOwner@DXGADAPTER@@QEBAEXZ @ 0x1C00131F8 (-IsCoreResourceExclusiveOwner@DXGADAPTER@@QEBAEXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C002CCC0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall DXGDEVICE::PinPrimaryAllocations(DXGDEVICE *this, unsigned int a2)
{
  __int64 v2; // rdi
  __int64 v4; // rsi
  __int64 v5; // rdx
  __int64 v6; // rax
  int v7; // ebp
  __int64 v9; // r14
  __int64 v10; // rdx
  _BYTE v11[8]; // [rsp+50h] [rbp-48h] BYREF
  DXGPUSHLOCK *v12; // [rsp+58h] [rbp-40h]
  int v13; // [rsp+60h] [rbp-38h]

  v2 = a2;
  if ( a2 >= *((_DWORD *)this + 464) )
  {
    WdLogSingleEntry1(1LL, 3787LL);
    DxgkLogInternalTriageEvent(
      0LL,
      262146,
      -1,
      (__int64)L"VidPnSourceId < GetNumVidPnSources()",
      3787LL,
      0LL,
      0LL,
      0LL,
      0LL);
  }
  if ( !DXGADAPTER::IsCoreResourceExclusiveOwner(*(PERESOURCE **)(*((_QWORD *)this + 2) + 16LL)) )
  {
    WdLogSingleEntry1(1LL, 3788LL);
    DxgkLogInternalTriageEvent(
      0LL,
      262146,
      -1,
      (__int64)L"GetRenderCore()->IsCoreResourceExclusiveOwner()",
      3788LL,
      0LL,
      0LL,
      0LL,
      0LL);
  }
  if ( !DXGADAPTER::IsCoreResourceExclusiveOwner(*((PERESOURCE **)this + 231)) )
  {
    WdLogSingleEntry1(1LL, 3789LL);
    DxgkLogInternalTriageEvent(
      0LL,
      262146,
      -1,
      (__int64)L"GetDisplayAdapter(VidPnSourceId)->IsCoreResourceExclusiveOwner()",
      3789LL,
      0LL,
      0LL,
      0LL,
      0LL);
  }
  if ( *((_DWORD *)this + 108) != 1 )
  {
    WdLogSingleEntry1(1LL, 3790LL);
    DxgkLogInternalTriageEvent(
      0LL,
      262146,
      -1,
      (__int64)L"DXGDEVICECLIENT_USER == GetClientType()",
      3790LL,
      0LL,
      0LL,
      0LL,
      0LL);
  }
  if ( (*((_DWORD *)this + v2 + 302) & 0x100) != 0 )
    return 0LL;
  if ( *((_QWORD *)this + 231) != *(_QWORD *)(*((_QWORD *)this + 2) + 16LL) )
  {
LABEL_18:
    DXGAUTOPUSHLOCK::DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v11, (struct _KTHREAD **)this + 42, 0);
    DXGPUSHLOCK::AcquireExclusive(v12);
    *((_DWORD *)this + v2 + 302) |= 0x100u;
    v13 = 2;
    DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v11);
    return 0LL;
  }
  DXGAUTOPUSHLOCK::DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v11, (struct _KTHREAD **)this + 42, 0);
  DXGPUSHLOCK::AcquireExclusive(v12);
  v13 = 2;
  v4 = 0LL;
  if ( !*((_DWORD *)this + v2 + 238) )
  {
LABEL_17:
    DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v11);
    goto LABEL_18;
  }
  while ( 1 )
  {
    v5 = *((_QWORD *)this + v2 + 103);
    v6 = *(_QWORD *)(v5 + 8 * v4);
    if ( v6 )
    {
      if ( (*(_DWORD *)(*(_QWORD *)(v6 + 48) + 4LL) & 1) == 0 )
      {
        WdLogSingleEntry1(1LL, 3803LL);
        DxgkLogInternalTriageEvent(
          0LL,
          262146,
          -1,
          (__int64)L"m_PrimaryAllocation[VidPnSourceId][Index]->m_pAllocation->m_Primary",
          3803LL,
          0LL,
          0LL,
          0LL,
          0LL);
        v5 = *((_QWORD *)this + v2 + 103);
      }
      v7 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD))(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 648LL)
                                                                                                 + 8LL)
                                                                                     + 232LL))(
             *(_QWORD *)(*((_QWORD *)this + 2) + 656LL),
             *(_QWORD *)(*(_QWORD *)(v5 + 8 * v4) + 24LL),
             0LL,
             0LL,
             0LL,
             0LL);
      if ( v7 < 0 )
        break;
    }
    v4 = (unsigned int)(v4 + 1);
    if ( (unsigned int)v4 >= *((_DWORD *)this + v2 + 238) )
      goto LABEL_17;
  }
  if ( (_DWORD)v4 )
  {
    v9 = 0LL;
    do
    {
      v10 = *(_QWORD *)(v9 + *((_QWORD *)this + v2 + 103));
      if ( v10 )
        (*(void (__fastcall **)(_QWORD, _QWORD))(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 648LL) + 8LL) + 240LL))(
          *(_QWORD *)(*((_QWORD *)this + 2) + 656LL),
          *(_QWORD *)(v10 + 24));
      v9 += 8LL;
      --v4;
    }
    while ( v4 );
  }
  DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v11);
  return (unsigned int)v7;
}
