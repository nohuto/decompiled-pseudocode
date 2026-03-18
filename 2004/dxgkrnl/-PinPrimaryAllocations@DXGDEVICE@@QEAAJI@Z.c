/*
 * XREFs of ?PinPrimaryAllocations@DXGDEVICE@@QEAAJI@Z @ 0x1C014AE18
 * Callers:
 *     ?RestoreManagedPrimaryState@MANAGEDPRIMARIESTRACKER@@QEAAJH@Z @ 0x1C0141348 (-RestoreManagedPrimaryState@MANAGEDPRIMARIESTRACKER@@QEAAJH@Z.c)
 *     DxgkSetDisplayMode @ 0x1C0148DC0 (DxgkSetDisplayMode.c)
 * Callees:
 *     ?AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ @ 0x1C0002ADC (-AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ.c)
 *     ??0DXGAUTOPUSHLOCK@@QEAA@QEAVDXGPUSHLOCK@@_N@Z @ 0x1C0002B54 (--0DXGAUTOPUSHLOCK@@QEAA@QEAVDXGPUSHLOCK@@_N@Z.c)
 *     ?Release@DXGAUTOPUSHLOCK@@QEAAXXZ @ 0x1C00042F0 (-Release@DXGAUTOPUSHLOCK@@QEAAXXZ.c)
 *     ?IsCoreResourceExclusiveOwner@DXGADAPTER@@QEBAEXZ @ 0x1C000B3EC (-IsCoreResourceExclusiveOwner@DXGADAPTER@@QEBAEXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C00271E0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall DXGDEVICE::PinPrimaryAllocations(DXGDEVICE *this, __int64 a2)
{
  __int64 v3; // rdi
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // rsi
  __int64 v9; // rdx
  __int64 v10; // rax
  __int64 v11; // rcx
  int v12; // ebp
  __int64 v14; // rax
  __int64 v15; // rax
  __int64 v16; // rax
  __int64 v17; // rax
  __int64 v18; // rax
  __int64 v19; // r14
  __int64 v20; // rdx
  _BYTE v21[8]; // [rsp+40h] [rbp-28h] BYREF
  DXGPUSHLOCK *v22; // [rsp+48h] [rbp-20h]
  int v23; // [rsp+50h] [rbp-18h]

  v3 = (unsigned int)a2;
  if ( (unsigned int)a2 >= *((_DWORD *)this + 464) )
  {
    v14 = WdLogNewEntry5_WdAssertion(this, a2);
    *(_QWORD *)(v14 + 24) = 3735LL;
    WdLogEvent5_WdAssertion(v14);
  }
  if ( !DXGADAPTER::IsCoreResourceExclusiveOwner(*(PERESOURCE **)(*((_QWORD *)this + 2) + 16LL)) )
  {
    v15 = WdLogNewEntry5_WdAssertion(v5, v4);
    *(_QWORD *)(v15 + 24) = 3736LL;
    WdLogEvent5_WdAssertion(v15);
  }
  if ( !DXGADAPTER::IsCoreResourceExclusiveOwner(*((PERESOURCE **)this + 231)) )
  {
    v16 = WdLogNewEntry5_WdAssertion(v7, v6);
    *(_QWORD *)(v16 + 24) = 3737LL;
    WdLogEvent5_WdAssertion(v16);
  }
  if ( *((_DWORD *)this + 108) != 1 )
  {
    v17 = WdLogNewEntry5_WdAssertion(v7, v6);
    *(_QWORD *)(v17 + 24) = 3738LL;
    WdLogEvent5_WdAssertion(v17);
  }
  if ( (*((_DWORD *)this + v3 + 302) & 0x100) != 0 )
    return 0LL;
  if ( *((_QWORD *)this + 231) != *(_QWORD *)(*((_QWORD *)this + 2) + 16LL) )
  {
LABEL_18:
    DXGAUTOPUSHLOCK::DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v21, (struct _KTHREAD **)this + 42, 0);
    DXGPUSHLOCK::AcquireExclusive(v22);
    *((_DWORD *)this + v3 + 302) |= 0x100u;
    v23 = 2;
    DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v21);
    return 0LL;
  }
  DXGAUTOPUSHLOCK::DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v21, (struct _KTHREAD **)this + 42, 0);
  DXGPUSHLOCK::AcquireExclusive(v22);
  v8 = 0LL;
  v23 = 2;
  if ( !*((_DWORD *)this + v3 + 238) )
  {
LABEL_17:
    DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v21);
    goto LABEL_18;
  }
  while ( 1 )
  {
    v9 = *((_QWORD *)this + v3 + 103);
    v10 = *(_QWORD *)(v9 + 8 * v8);
    if ( v10 )
    {
      v11 = *(unsigned int *)(*(_QWORD *)(v10 + 48) + 4LL);
      if ( (v11 & 1) == 0 )
      {
        v18 = WdLogNewEntry5_WdAssertion(v11, v9);
        *(_QWORD *)(v18 + 24) = 3751LL;
        WdLogEvent5_WdAssertion(v18);
        v9 = *((_QWORD *)this + v3 + 103);
      }
      v12 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD))(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 640LL)
                                                                                                  + 8LL)
                                                                                      + 232LL))(
              *(_QWORD *)(*((_QWORD *)this + 2) + 648LL),
              *(_QWORD *)(*(_QWORD *)(v9 + 8 * v8) + 24LL),
              0LL,
              0LL,
              0LL,
              0LL);
      if ( v12 < 0 )
        break;
    }
    v8 = (unsigned int)(v8 + 1);
    if ( (unsigned int)v8 >= *((_DWORD *)this + v3 + 238) )
      goto LABEL_17;
  }
  if ( (_DWORD)v8 )
  {
    v19 = 0LL;
    do
    {
      v20 = *(_QWORD *)(v19 + *((_QWORD *)this + v3 + 103));
      if ( v20 )
        (*(void (__fastcall **)(_QWORD, _QWORD))(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 640LL) + 8LL) + 240LL))(
          *(_QWORD *)(*((_QWORD *)this + 2) + 648LL),
          *(_QWORD *)(v20 + 24));
      v19 += 8LL;
      --v8;
    }
    while ( v8 );
  }
  DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v21);
  return (unsigned int)v12;
}
