/*
 * XREFs of ?NotifyProcessThaw@DXGDEVICE@@QEAAXXZ @ 0x1C00E11E4
 * Callers:
 *     ?NotifyProcessThaw@DXGPROCESS@@QEAAXXZ @ 0x1C00E1068 (-NotifyProcessThaw@DXGPROCESS@@QEAAXXZ.c)
 * Callees:
 *     ?TryAcquire@DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAAHXZ @ 0x1C0001F1C (-TryAcquire@DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAAHXZ.c)
 *     ?NotifyContextCreation@DXGADAPTER@@QEAAXPEAVDXGCONTEXT@@EI@Z @ 0x1C0002550 (-NotifyContextCreation@DXGADAPTER@@QEAAXPEAVDXGCONTEXT@@EI@Z.c)
 *     ??0DXGAUTOPUSHLOCK@@QEAA@QEAVDXGPUSHLOCK@@_N@Z @ 0x1C0002B54 (--0DXGAUTOPUSHLOCK@@QEAA@QEAVDXGPUSHLOCK@@_N@Z.c)
 *     ?Release@DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAAXXZ @ 0x1C00041C0 (-Release@DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAAXXZ.c)
 *     ?Release@DXGAUTOPUSHLOCK@@QEAAXXZ @ 0x1C00042F0 (-Release@DXGAUTOPUSHLOCK@@QEAAXXZ.c)
 *     ?Acquire@DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAAXXZ @ 0x1C0006954 (-Acquire@DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAAXXZ.c)
 *     ?AcquireShared@DXGPUSHLOCK@@QEAAXXZ @ 0x1C0006D68 (-AcquireShared@DXGPUSHLOCK@@QEAAXXZ.c)
 *     ?IsDxgmms2@DXGADAPTER@@QEBAEXZ @ 0x1C0007264 (-IsDxgmms2@DXGADAPTER@@QEBAEXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C0027100 (_guard_dispatch_icall_nop.c)
 */

void __fastcall DXGDEVICE::NotifyProcessThaw(DXGDEVICE *this)
{
  DXGADAPTER *v2; // rcx
  bool v3; // si
  __int64 v4; // rbp
  int *i; // rbx
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // r8
  __int64 v9; // rdx
  __int64 v10; // r8
  __int64 v11; // rax
  DXGDEVICE *v12; // [rsp+20h] [rbp-38h] BYREF
  int v13; // [rsp+28h] [rbp-30h]
  _BYTE v14[8]; // [rsp+30h] [rbp-28h] BYREF
  DXGPUSHLOCK *v15; // [rsp+38h] [rbp-20h]
  int v16; // [rsp+40h] [rbp-18h]

  v2 = *(DXGADAPTER **)(*((_QWORD *)this + 2) + 16LL);
  if ( !*((_BYTE *)v2 + 209) )
  {
    v12 = this;
    v13 = 0;
    if ( DXGADAPTER::IsDxgmms2(v2) )
    {
      v3 = (unsigned int)DXGDEVICEACCESSLOCKEXCLUSIVE::TryAcquire((DXGDEVICEACCESSLOCKEXCLUSIVE *)&v12) != 0;
    }
    else
    {
      DXGDEVICEACCESSLOCKEXCLUSIVE::Acquire((DXGDEVICEACCESSLOCKEXCLUSIVE *)&v12);
      v3 = 1;
    }
    v4 = *(_QWORD *)(*((_QWORD *)this + 2) + 16LL);
    KeEnterCriticalRegion();
    ExAcquirePushLockSharedEx(v4 + 136, 0LL);
    if ( *((_DWORD *)this + 144) == 1 )
    {
      DXGAUTOPUSHLOCK::DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v14, (struct _KTHREAD **)this + 50, 0);
      DXGPUSHLOCK::AcquireShared(v15);
      v16 = 1;
      for ( i = (int *)*((_QWORD *)this + 58); i != (int *)((char *)this + 464) && i; i = *(int **)i )
      {
        DXGADAPTER::NotifyContextCreation(
          *(DXGADAPTER **)(*((_QWORD *)this + 2) + 16LL),
          (struct DXGCONTEXT *)i,
          1,
          i[102]);
        *((_BYTE *)i + 453) = 0;
      }
      DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v14);
      if ( v3 )
      {
        if ( DXGADAPTER::IsDxgmms2(*(DXGADAPTER **)(*((_QWORD *)this + 2) + 16LL)) )
        {
          LOBYTE(v10) = 1;
          (*(void (__fastcall **)(_QWORD, _QWORD, __int64))(*(_QWORD *)(*(_QWORD *)(v9 + 640) + 8LL) + 1120LL))(
            *((_QWORD *)this + 95),
            0LL,
            v10);
        }
      }
      else
      {
        v11 = WdLogNewEntry5_WdWarning(v7, v6, v8);
        *(_QWORD *)(v11 + 24) = this;
        WdLogEvent5_WdWarning(v11);
      }
    }
    ExReleasePushLockSharedEx(v4 + 136, 0LL);
    KeLeaveCriticalRegion();
    if ( v12 )
      DXGDEVICEACCESSLOCKEXCLUSIVE::Release((DXGDEVICEACCESSLOCKEXCLUSIVE *)&v12);
  }
}
