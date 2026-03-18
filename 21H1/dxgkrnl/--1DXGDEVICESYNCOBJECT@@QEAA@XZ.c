/*
 * XREFs of ??1DXGDEVICESYNCOBJECT@@QEAA@XZ @ 0x1C011B820
 * Callers:
 *     ??_GDXGDEVICESYNCOBJECT@@QEAAPEAXI@Z @ 0x1C0008268 (--_GDXGDEVICESYNCOBJECT@@QEAAPEAXI@Z.c)
 *     ?DxgkDestroySynchronizationObjectImpl@@YAJPEBU_D3DKMT_DESTROYSYNCHRONIZATIONOBJECT@@H@Z @ 0x1C0118FCC (-DxgkDestroySynchronizationObjectImpl@@YAJPEBU_D3DKMT_DESTROYSYNCHRONIZATIONOBJECT@@H@Z.c)
 * Callees:
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C000A650 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ @ 0x1C000A788 (-AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ.c)
 *     ?Release@DXGAUTOPUSHLOCK@@QEAAXXZ @ 0x1C000A89C (-Release@DXGAUTOPUSHLOCK@@QEAAXXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C0026570 (_guard_dispatch_icall_nop.c)
 *     ?FreeHandle@HMGRTABLE@@QEAAXI@Z @ 0x1C010E240 (-FreeHandle@HMGRTABLE@@QEAAXI@Z.c)
 *     ?DestroySyncObject@DXGGLOBAL@@QEAAXPEAVDXGSYNCOBJECT@@I@Z @ 0x1C0116AA0 (-DestroySyncObject@DXGGLOBAL@@QEAAXPEAVDXGSYNCOBJECT@@I@Z.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C0119460 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?DestroyCoreState@DXGDEVICESYNCOBJECT@@QEAAXXZ @ 0x1C011B948 (-DestroyCoreState@DXGDEVICESYNCOBJECT@@QEAAXXZ.c)
 *     ?RemoveDeviceSyncObjectFromList@DXGDEVICE@@QEAAXPEAVDXGDEVICESYNCOBJECT@@@Z @ 0x1C011E660 (-RemoveDeviceSyncObjectFromList@DXGDEVICE@@QEAAXPEAVDXGDEVICESYNCOBJECT@@@Z.c)
 *     ?UnmapCpuVaForParavirtualization@DXGDEVICESYNCOBJECT@@QEAAXXZ @ 0x1C02373B0 (-UnmapCpuVaForParavirtualization@DXGDEVICESYNCOBJECT@@QEAAXXZ.c)
 *     ?VmBusSendDestroySyncObject@DXG_GUEST_GLOBAL_VMBUS@@QEAAXII@Z @ 0x1C0243B58 (-VmBusSendDestroySyncObject@DXG_GUEST_GLOBAL_VMBUS@@QEAAXII@Z.c)
 */

void __fastcall DXGDEVICESYNCOBJECT::~DXGDEVICESYNCOBJECT(DXGDEVICESYNCOBJECT *this)
{
  __int64 v2; // rdx
  __int64 v3; // rcx
  struct DXGPROCESS *Current; // rax
  struct DXGPROCESS *v5; // rbx
  struct _KTHREAD *CurrentThread; // rcx
  __int64 v7; // rdx
  __int64 v8; // rbx
  __int64 v9; // rdx
  __int64 v10; // rcx
  struct DXGSYNCOBJECT *v11; // rbx
  PERESOURCE *Global; // rax
  __int64 v13; // rax
  __int64 v14; // rax
  unsigned int v15; // ebx
  __int64 v16; // rdx
  __int64 v17; // rcx
  struct DXGGLOBAL *v18; // rax
  _BYTE v19[8]; // [rsp+20h] [rbp-28h] BYREF
  DXGPUSHLOCK *v20; // [rsp+28h] [rbp-20h]
  int v21; // [rsp+30h] [rbp-18h]

  if ( (*((_BYTE *)this + 92) & 2) != 0 )
    DXGDEVICE::RemoveDeviceSyncObjectFromList(*((DXGDEVICE **)this + 2), this);
  DXGDEVICESYNCOBJECT::DestroyCoreState(this);
  if ( *((_DWORD *)this + 10) )
  {
    Current = DXGPROCESS::GetCurrent(v3, v2);
    v5 = Current;
    v20 = (struct DXGPROCESS *)((char *)Current + 208);
    if ( Current != (struct DXGPROCESS *)-208LL )
    {
      CurrentThread = KeGetCurrentThread();
      if ( *((struct _KTHREAD **)Current + 27) == CurrentThread )
      {
        v13 = WdLogNewEntry5_WdAssertion(CurrentThread, (char *)Current + 208);
        *(_QWORD *)(v13 + 24) = 1569LL;
        WdLogEvent5_WdAssertion(v13);
      }
    }
    DXGPUSHLOCK::AcquireExclusive(v20);
    v7 = *((unsigned int *)this + 10);
    v21 = 2;
    HMGRTABLE::FreeHandle((struct DXGPROCESS *)((char *)v5 + 240), v7);
    *((_DWORD *)this + 10) = 0;
    DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v19);
  }
  if ( *((_QWORD *)this + 7) )
  {
    v8 = *((_QWORD *)this + 4);
    if ( *(_BYTE *)(v8 + 277) )
    {
      DXGDEVICESYNCOBJECT::UnmapCpuVaForParavirtualization(this);
    }
    else
    {
      if ( (unsigned int)(*(_DWORD *)(v8 + 192) - 5) > 1 )
      {
        v14 = WdLogNewEntry5_WdAssertion(v3, v2);
        *(_QWORD *)(v14 + 24) = 345LL;
        WdLogEvent5_WdAssertion(v14);
      }
      v9 = *((_QWORD *)this + 2);
      v10 = *(_QWORD *)(*(_QWORD *)(v9 + 40) + 64LL);
      if ( v10 )
        v10 = *(_QWORD *)(v10 + 8);
      (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v9 + 16) + 640LL) + 8LL) + 960LL))(
        v10,
        v8 + 120);
    }
  }
  v11 = (struct DXGSYNCOBJECT *)*((_QWORD *)this + 4);
  if ( v11 )
  {
    Global = (PERESOURCE *)DXGGLOBAL::GetGlobal(v3, v2);
    DXGGLOBAL::DestroySyncObject(Global, v11, 0);
  }
  if ( *((_DWORD *)this + 11) )
  {
    v15 = *((_DWORD *)DXGPROCESS::GetCurrent(v3, v2) + 106);
    v18 = DXGGLOBAL::GetGlobal(v17, v16);
    DXG_GUEST_GLOBAL_VMBUS::VmBusSendDestroySyncObject(
      *((DXG_GUEST_GLOBAL_VMBUS **)v18 + 183),
      v15,
      *((_DWORD *)this + 11));
  }
  *((_QWORD *)this + 2) = 0LL;
}
