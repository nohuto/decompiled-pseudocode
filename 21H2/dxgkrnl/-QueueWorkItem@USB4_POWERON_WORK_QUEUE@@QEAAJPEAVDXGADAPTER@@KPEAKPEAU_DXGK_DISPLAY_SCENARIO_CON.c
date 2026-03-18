/*
 * XREFs of ?QueueWorkItem@USB4_POWERON_WORK_QUEUE@@QEAAJPEAVDXGADAPTER@@KPEAKPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C0158260
 * Callers:
 *     MonitorEnableDisableMonitor @ 0x1C01F14EC (MonitorEnableDisableMonitor.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x1C0008E10 (DxgkLogInternalTriageEvent.c)
 *     ?IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ @ 0x1C000C10C (-IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ.c)
 *     ??_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z @ 0x1C000CD40 (--_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z.c)
 *     ??0MUTEX_LOCK@@QEAA@AEAVDXGFASTMUTEX@@@Z @ 0x1C0012EA0 (--0MUTEX_LOCK@@QEAA@AEAVDXGFASTMUTEX@@@Z.c)
 *     ??1MUTEX_LOCK@@QEAA@XZ @ 0x1C0012ED0 (--1MUTEX_LOCK@@QEAA@XZ.c)
 *     DXGKCALLONEXIT__lambda_fc7202455dba02ed8d6fa3d1dee33716___ @ 0x1C002C8F0 (DXGKCALLONEXIT__lambda_fc7202455dba02ed8d6fa3d1dee33716___.c)
 *     _DXGKCALLONEXIT__lambda_fc7202455dba02ed8d6fa3d1dee33716____::_2_::DXGKCALLONEXIT::_DXGKCALLONEXIT @ 0x1C002C968 (_DXGKCALLONEXIT__lambda_fc7202455dba02ed8d6fa3d1dee33716____--_2_--DXGKCALLONEXIT--_DXGKCALLONEX.c)
 *     memmove @ 0x1C002CD00 (memmove.c)
 *     ??$reset@PEAK@?$unique_ptr@$$BY0A@KU?$default_delete@$$BY0A@K@wistd@@@wistd@@QEAAXPEAK@Z @ 0x1C006AEAC (--$reset@PEAK@-$unique_ptr@$$BY0A@KU-$default_delete@$$BY0A@K@wistd@@@wistd@@QEAAXPEAK@Z.c)
 *     ??_GUSB4_POWERON_WORK_CONTEXT@@QEAAPEAXI@Z @ 0x1C006B880 (--_GUSB4_POWERON_WORK_CONTEXT@@QEAAPEAXI@Z.c)
 */

__int64 __fastcall USB4_POWERON_WORK_QUEUE::QueueWorkItem(
        USB4_POWERON_WORK_QUEUE *this,
        struct DXGADAPTER *a2,
        unsigned int a3,
        unsigned int *a4,
        struct _DXGK_DISPLAY_SCENARIO_CONTEXT *a5)
{
  __int64 v6; // r9
  __int64 v7; // rax
  __int64 v8; // r9
  char *v9; // rdi
  unsigned __int64 v10; // rax
  void *v11; // rax
  void *v12; // rcx
  __int64 v13; // rbx
  const wchar_t *v14; // r9
  struct _DXGK_DISPLAY_SCENARIO_CONTEXT *v15; // rax
  struct _IO_WORKITEM *WorkItem; // rbx
  unsigned int v17; // ebx
  int v19; // [rsp+58h] [rbp-31h] BYREF
  struct _KTHREAD **v20; // [rsp+60h] [rbp-29h] BYREF
  __int128 v21; // [rsp+68h] [rbp-21h] BYREF
  struct DXGADAPTER **v22; // [rsp+78h] [rbp-11h]
  unsigned int *v23; // [rsp+80h] [rbp-9h]
  _BYTE v24[80]; // [rsp+88h] [rbp-1h] BYREF
  struct DXGADAPTER *v25; // [rsp+F0h] [rbp+67h] BYREF
  unsigned int v26; // [rsp+F8h] [rbp+6Fh] BYREF
  void *Src; // [rsp+100h] [rbp+77h] BYREF

  Src = a4;
  v26 = a3;
  v25 = a2;
  if ( !DXGADAPTER::IsCoreResourceSharedOwner(a2) )
    WdLogSingleEntry0(1LL);
  v19 = 0;
  *(_QWORD *)&v21 = &Src;
  *((_QWORD *)&v21 + 1) = &v19;
  v22 = &v25;
  v23 = &v26;
  DXGKCALLONEXIT__lambda_fc7202455dba02ed8d6fa3d1dee33716_((__int64)v24, &v21);
  if ( !v26 || !Src )
  {
    WdLogSingleEntry0(2LL);
    v17 = -1073741811;
    v19 = -1073741811;
    goto LABEL_17;
  }
  v7 = operator new[](0x68uLL, 0x4D677844u, 256LL, v6);
  v9 = (char *)v7;
  if ( v7 )
  {
    *(_QWORD *)(v7 + 96) = 0LL;
    v10 = 4LL * v26;
    if ( !is_mul_ok(v26, 4uLL) )
      v10 = -1LL;
    v11 = (void *)operator new[](v10, 0x4D677844u, 256LL, v8);
    wistd::unique_ptr<unsigned long [0],wistd::default_delete<unsigned long [0]>>::reset<unsigned long *>(
      (void **)v9 + 12,
      v11);
    v12 = (void *)*((_QWORD *)v9 + 12);
    if ( v12 )
    {
      *(_QWORD *)v9 = this;
      *((_QWORD *)v9 + 10) = *(_QWORD *)((char *)v25 + 404);
      *((_DWORD *)v9 + 22) = v26;
      memmove(v12, Src, 4LL * v26);
      v15 = a5;
      *(_OWORD *)(v9 + 8) = *(_OWORD *)a5;
      *(_OWORD *)(v9 + 24) = *((_OWORD *)v15 + 1);
      *(_OWORD *)(v9 + 40) = *((_OWORD *)v15 + 2);
      *(_OWORD *)(v9 + 56) = *((_OWORD *)v15 + 3);
      *((_QWORD *)v9 + 9) = *((_QWORD *)v15 + 8);
      WorkItem = IoAllocateWorkItem(*((PDEVICE_OBJECT *)v25 + 27));
      if ( WorkItem )
      {
        MUTEX_LOCK::MUTEX_LOCK((MUTEX_LOCK *)&v20, (USB4_POWERON_WORK_QUEUE *)((char *)this + 8));
        ++*(_DWORD *)this;
        KeClearEvent((PRKEVENT)((char *)this + 56));
        MUTEX_LOCK::~MUTEX_LOCK(&v20);
        IoQueueWorkItemEx(WorkItem, USB4_POWERON_WORK_QUEUE::_HandlePowerOn, DelayedWorkQueue, v9);
        v17 = v19;
        goto LABEL_17;
      }
      v13 = 117LL;
      WdLogSingleEntry1(6LL, 117LL);
      v14 = L"Can't allocate memory to hold IO work item.";
    }
    else
    {
      v13 = 101LL;
      WdLogSingleEntry1(6LL, 101LL);
      v14 = L"Failed to allocate memory for Usb4 power on target list";
    }
  }
  else
  {
    v13 = 92LL;
    WdLogSingleEntry1(6LL, 92LL);
    v14 = L"Failed to allocate memory for Usb4 power on context";
    v9 = 0LL;
  }
  DxgkLogInternalTriageEvent(0LL, 262145, -1, (__int64)v14, v13, 0LL, 0LL, 0LL, 0LL);
  v17 = -1073741801;
  v19 = -1073741801;
  if ( v9 )
    USB4_POWERON_WORK_CONTEXT::`scalar deleting destructor'(v9);
LABEL_17:
  DXGKCALLONEXIT__lambda_fc7202455dba02ed8d6fa3d1dee33716____::_2_::DXGKCALLONEXIT::_DXGKCALLONEXIT((__int64)v24);
  return v17;
}
