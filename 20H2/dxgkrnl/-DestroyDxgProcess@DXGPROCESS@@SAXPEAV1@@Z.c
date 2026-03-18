/*
 * XREFs of ?DestroyDxgProcess@DXGPROCESS@@SAXPEAV1@@Z @ 0x1C01142F4
 * Callers:
 *     ?DxgkProcessNotify@@YAXPEAU_EPROCESS@@PEAXPEAU_PS_CREATE_NOTIFY_INFO@@@Z @ 0x1C00066A0 (-DxgkProcessNotify@@YAXPEAU_EPROCESS@@PEAXPEAU_PS_CREATE_NOTIFY_INFO@@@Z.c)
 *     ?VmBusCreateProcessCblt@DXG_HOST_GLOBAL_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z @ 0x1C00D69C0 (-VmBusCreateProcessCblt@DXG_HOST_GLOBAL_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z.c)
 *     ?Destroy@DXGPROCESS@@QEAAXPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@E@Z @ 0x1C0113134 (-Destroy@DXGPROCESS@@QEAAXPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@E@Z.c)
 *     ?SetVirtualGpuVmBus@DXGK_VIRTUAL_GPU_PARAV@@UEAAJPEAU_DXGKARG_SETVIRTUALGPUVMBUS@@@Z @ 0x1C0234E80 (-SetVirtualGpuVmBus@DXGK_VIRTUAL_GPU_PARAV@@UEAAJPEAU_DXGKARG_SETVIRTUALGPUVMBUS@@@Z.c)
 *     ?SetVirtualGpuVmBus@DXGK_VIRTUAL_GPU_GPUP@@UEAAJPEAU_DXGKARG_SETVIRTUALGPUVMBUS@@@Z @ 0x1C02366C0 (-SetVirtualGpuVmBus@DXGK_VIRTUAL_GPU_GPUP@@UEAAJPEAU_DXGKARG_SETVIRTUALGPUVMBUS@@@Z.c)
 *     ?VmBusCreateProcess@DXG_HOST_GLOBAL_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z @ 0x1C023DA90 (-VmBusCreateProcess@DXG_HOST_GLOBAL_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z.c)
 *     ?VmBusDestroyProcess@DXG_HOST_GLOBAL_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z @ 0x1C023F390 (-VmBusDestroyProcess@DXG_HOST_GLOBAL_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z.c)
 *     ??1DXGGLOBAL@@AEAA@XZ @ 0x1C0266F70 (--1DXGGLOBAL@@AEAA@XZ.c)
 *     ?ResetVirtualMachine@DXGVIRTUALMACHINE@@QEAAXE@Z @ 0x1C02848FC (-ResetVirtualMachine@DXGVIRTUALMACHINE@@QEAAXE@Z.c)
 * Callees:
 *     ??0DXGPROCESSCALLOUTMUTEX@@QEAA@XZ @ 0x1C0001FAC (--0DXGPROCESSCALLOUTMUTEX@@QEAA@XZ.c)
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0002808 (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ @ 0x1C0002ADC (-AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ.c)
 *     ??0DXGAUTOPUSHLOCK@@QEAA@QEAVDXGPUSHLOCK@@_N@Z @ 0x1C0002B54 (--0DXGAUTOPUSHLOCK@@QEAA@QEAVDXGPUSHLOCK@@_N@Z.c)
 *     ?Release@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0002BB0 (-Release@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C0004010 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?Release@DXGAUTOPUSHLOCK@@QEAAXXZ @ 0x1C00042F0 (-Release@DXGAUTOPUSHLOCK@@QEAAXXZ.c)
 *     ??0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z @ 0x1C0006598 (--0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z.c)
 *     ?ReleaseReference@DXGPROCESS@@QEAAXXZ @ 0x1C0006654 (-ReleaseReference@DXGPROCESS@@QEAAXXZ.c)
 *     ?Release@DxgkCompositionObject@@QEBA_JXZ @ 0x1C001A170 (-Release@DxgkCompositionObject@@QEBA_JXZ.c)
 *     __security_check_cookie @ 0x1C00243B0 (__security_check_cookie.c)
 *     memset @ 0x1C0027400 (memset.c)
 *     ?DisableVmBusChannel@DXGVAILOBJECT@@QEAAXXZ @ 0x1C0047B64 (-DisableVmBusChannel@DXGVAILOBJECT@@QEAAXXZ.c)
 *     ?OnVmwpDestruction@DXGVIRTUALMACHINE@@QEAAXXZ @ 0x1C0047C04 (-OnVmwpDestruction@DXGVIRTUALMACHINE@@QEAAXXZ.c)
 *     ?Destroy@DXGPROCESS@@QEAAXPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@E@Z @ 0x1C0113134 (-Destroy@DXGPROCESS@@QEAAXPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@E@Z.c)
 *     ?ReferenceVailObject@DXGPROCESS@@QEAAPEAVDXGVAILOBJECT@@XZ @ 0x1C0284790 (-ReferenceVailObject@DXGPROCESS@@QEAAPEAVDXGVAILOBJECT@@XZ.c)
 *     ?ReferenceVailObject@DXGVIRTUALMACHINE@@QEAAPEAVDXGVAILOBJECT@@XZ @ 0x1C02847F8 (-ReferenceVailObject@DXGVIRTUALMACHINE@@QEAAPEAVDXGVAILOBJECT@@XZ.c)
 *     ?SetVailObject@DXGPROCESS@@QEAAXPEAVDXGVAILOBJECT@@@Z @ 0x1C0284F08 (-SetVailObject@DXGPROCESS@@QEAAXPEAVDXGVAILOBJECT@@@Z.c)
 *     ?DestroyVmBusHostSubscribers@DXGVAILOBJECT@@QEAAJXZ @ 0x1C02B3DFC (-DestroyVmBusHostSubscribers@DXGVAILOBJECT@@QEAAJXZ.c)
 */

void __fastcall DXGPROCESS::DestroyDxgProcess(struct DXGPROCESS *this)
{
  struct _KPROCESS *v2; // rcx
  __int64 v3; // rdx
  __int64 v4; // rcx
  struct _KTHREAD *CurrentThread; // rcx
  __int64 v6; // rdx
  __int64 v7; // rdx
  __int64 v8; // rcx
  struct DXGGLOBAL *Global; // rax
  __int64 v10; // rdx
  __int64 v11; // rcx
  struct _KTHREAD *v12; // rcx
  char *v13; // rdi
  struct DXGPROCESS **v14; // rcx
  struct DXGPROCESS **v15; // rax
  __int64 v16; // rdx
  __int64 v17; // rdx
  struct _KTHREAD **v18; // rdi
  struct DXGVAILOBJECT *v19; // rsi
  __int64 v20; // rdi
  __int64 ProcessDxgProcess; // rax
  DXGPROCESS *v22; // rdi
  __int64 v23; // rdx
  struct _KTHREAD **v24; // rdi
  __int64 v25; // rdx
  __int64 v26; // rdx
  __int64 v27; // rdx
  __int64 v28; // rax
  __int64 v29; // rax
  __int64 v30; // rax
  __int64 v31; // rax
  DXGVIRTUALMACHINE *v32; // rcx
  __int64 v33; // [rsp+20h] [rbp-E0h] BYREF
  char v34; // [rsp+28h] [rbp-D8h]
  struct _KTHREAD **v35; // [rsp+30h] [rbp-D0h] BYREF
  char v36; // [rsp+38h] [rbp-C8h]
  _BYTE v37[16]; // [rsp+40h] [rbp-C0h] BYREF
  _BYTE v38[16]; // [rsp+50h] [rbp-B0h] BYREF
  _BYTE v39[16]; // [rsp+60h] [rbp-A0h] BYREF
  _BYTE v40[16]; // [rsp+70h] [rbp-90h] BYREF
  char v41[8]; // [rsp+80h] [rbp-80h] BYREF
  DXGPUSHLOCK *v42; // [rsp+88h] [rbp-78h]
  int v43; // [rsp+90h] [rbp-70h]
  struct _KAPC_STATE ApcState; // [rsp+98h] [rbp-68h] BYREF
  struct _ERESOURCE v45; // [rsp+D0h] [rbp-30h] BYREF

  if ( this )
  {
    memset(&v45, 0, 0x48uLL);
    EtwActivityIdControl(3u, (LPGUID)&v45.SystemResourcesList.Blink);
    v2 = (struct _KPROCESS *)*((_QWORD *)this + 7);
    *(_QWORD *)&v45.ActiveEntries = MEMORY[0xFFFFF78000000014];
    *(_DWORD *)&v45.ActiveCount = 36;
    LOBYTE(v45.OwnerEntry.OwnerThread) = -1;
    memset(&ApcState, 0, sizeof(ApcState));
    KeStackAttachProcess(v2, &ApcState);
    if ( (*((_BYTE *)this + 347) & 0x10) != 0 )
    {
      v18 = (struct _KTHREAD **)*((_QWORD *)this + 62);
      if ( v18 )
      {
        DXGAUTOPUSHLOCK::DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v41, v18 + 8, 0);
        DXGPUSHLOCK::AcquireExclusive(v42);
        v43 = 2;
        v19 = DXGVIRTUALMACHINE::ReferenceVailObject((DXGVIRTUALMACHINE *)v18);
        DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v41);
        if ( v19 )
        {
          DXGPROCESSCALLOUTMUTEX::DXGPROCESSCALLOUTMUTEX((DXGPROCESSCALLOUTMUTEX *)v39);
          DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v39);
          v20 = *((_QWORD *)v19 + 11);
          if ( v20 )
          {
            if ( !(unsigned __int8)PsGetProcessExitProcessCalled(*((_QWORD *)v19 + 11)) )
            {
              ProcessDxgProcess = PsGetProcessDxgProcess(v20);
              v22 = (DXGPROCESS *)ProcessDxgProcess;
              if ( ProcessDxgProcess )
              {
                if ( *(char *)(ProcessDxgProcess + 347) >= 0 )
                {
                  DXGAUTOMUTEX::DXGAUTOMUTEX(
                    (DXGAUTOMUTEX *)v38,
                    *(struct DXGFASTMUTEX *const *)(ProcessDxgProcess + 104),
                    0);
                  DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v38);
                  DXGPROCESS::SetVailObject(v22, 0LL);
                  if ( v38[8] )
                    DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v38, v23);
                }
              }
            }
          }
          DxgkCompositionObject::Release(v19);
          if ( v39[8] )
            DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v39, v3);
        }
      }
    }
    else if ( *((_QWORD *)this + 60) )
    {
      DXGAUTOMUTEX::DXGAUTOMUTEX((DXGAUTOMUTEX *)v37, *((struct DXGFASTMUTEX *const *)this + 13), 0);
      DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v37);
      v24 = (struct _KTHREAD **)DXGPROCESS::ReferenceVailObject(this);
      DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v37, v25);
      if ( v37[8] )
        DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v37, v3);
      if ( v24 )
      {
        DXGAUTOMUTEX::DXGAUTOMUTEX((DXGAUTOMUTEX *)v40, (struct DXGFASTMUTEX *const)(v24 + 5), 0);
        DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v40);
        DXGVAILOBJECT::DisableVmBusChannel(v24, v26);
        DXGVAILOBJECT::DestroyVmBusHostSubscribers((DXGVAILOBJECT *)v24);
        if ( v40[8] )
          DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v40, v27);
        DxgkCompositionObject::Release((DxgkCompositionObject *)v24);
      }
    }
    v33 = *((_QWORD *)this + 13);
    v34 = 0;
    if ( !v33 )
    {
      v28 = WdLogNewEntry5_WdAssertion(v4, v3);
      *(_QWORD *)(v28 + 24) = 762LL;
      WdLogEvent5_WdAssertion(v28);
    }
    CurrentThread = KeGetCurrentThread();
    if ( *(struct _KTHREAD **)(v33 + 16) == CurrentThread )
    {
      v29 = WdLogNewEntry5_WdAssertion(CurrentThread, v3);
      *(_QWORD *)(v29 + 24) = 769LL;
      WdLogEvent5_WdAssertion(v29);
    }
    DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)&v33);
    DXGPROCESS::Destroy(this, &v45, 0);
    DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)&v33, v6);
    KeUnstackDetachProcess(&ApcState);
    Global = DXGGLOBAL::GetGlobal(v8, v7);
    v36 = 0;
    v35 = (struct _KTHREAD **)((char *)Global + 320);
    if ( Global == (struct DXGGLOBAL *)-320LL )
    {
      v30 = WdLogNewEntry5_WdAssertion(v11, v10);
      *(_QWORD *)(v30 + 24) = 762LL;
      WdLogEvent5_WdAssertion(v30);
    }
    v12 = KeGetCurrentThread();
    if ( v35[2] == v12 )
    {
      v31 = WdLogNewEntry5_WdAssertion(v12, v10);
      *(_QWORD *)(v31 + 24) = 769LL;
      WdLogEvent5_WdAssertion(v31);
    }
    if ( (*((_BYTE *)this + 347) & 0x20) == 0 )
    {
      DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)&v35);
      PsSetProcessDxgProcess(*((_QWORD *)this + 7), 0LL);
    }
    v13 = (char *)DXGGLOBAL::GetGlobal((__int64)v12, v10) + 376;
    KeEnterCriticalRegion();
    ExAcquirePushLockExclusiveEx(v13, 0LL);
    *((_QWORD *)v13 + 1) = KeGetCurrentThread();
    v14 = (struct DXGPROCESS **)*((_QWORD *)this + 1);
    if ( v14[1] != (struct DXGPROCESS *)((char *)this + 8)
      || (v15 = (struct DXGPROCESS **)*((_QWORD *)this + 2), *v15 != (struct DXGPROCESS *)((char *)this + 8)) )
    {
      __fastfail(3u);
    }
    *v15 = (struct DXGPROCESS *)v14;
    v14[1] = (struct DXGPROCESS *)v15;
    *((_QWORD *)v13 + 1) = 0LL;
    ExReleasePushLockExclusiveEx(v13, 0LL);
    KeLeaveCriticalRegion();
    if ( (*((_BYTE *)this + 347) & 0x10) != 0 )
    {
      v32 = (DXGVIRTUALMACHINE *)*((_QWORD *)this + 62);
      if ( v32 )
      {
        DXGVIRTUALMACHINE::OnVmwpDestruction(v32);
        *((_QWORD *)this + 62) = 0LL;
      }
    }
    DXGPROCESS::ReleaseReference(this, v16);
    if ( v36 )
      DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)&v35, v17);
    if ( v34 )
      DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)&v33, v17);
  }
}
