/*
 * XREFs of ?Initialize@DXGSYNCOBJECT@@QEAAJPEAVDXGPAGINGQUEUE@@PEAVDXGDEVICE@@@Z @ 0x1C0198FA0
 * Callers:
 *     ?CreateSyncObject@DXGGLOBAL@@QEAAJPEAVADAPTER_RENDER@@PEAVDXGDEVICE@@IPEAU_D3DDDI_SYNCHRONIZATIONOBJECTINFO2@@U_VIDSCH_SYNC_OBJECT_CLIENTHINT@@_NPEAVDXGPAGINGQUEUE@@PEAPEAVDXGSYNCOBJECT@@PEAPEAVDXGDEVICESYNCOBJECT@@PEAIPEAPEAVDXGADAPTERSYNCOBJECT@@@Z @ 0x1C0199294 (-CreateSyncObject@DXGGLOBAL@@QEAAJPEAVADAPTER_RENDER@@PEAVDXGDEVICE@@IPEAU_D3DDDI_SYNCHRONIZATIO.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x1C0008E10 (DxgkLogInternalTriageEvent.c)
 *     ?AllocHandleSafe@DXGPROCESS@@QEAAIPEAXW4_HMGRENTRY_TYPE@@@Z @ 0x1C0009AD4 (-AllocHandleSafe@DXGPROCESS@@QEAAIPEAXW4_HMGRENTRY_TYPE@@@Z.c)
 *     ?DXGGLOBAL_GetGlobal@@YAPEAVDXGGLOBAL@@XZ @ 0x1C000BBD0 (-DXGGLOBAL_GetGlobal@@YAPEAVDXGGLOBAL@@XZ.c)
 *     ??0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z @ 0x1C000C3F8 (--0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z.c)
 *     ?Acquire@DXGFASTMUTEX@@QEAAXXZ @ 0x1C000E350 (-Acquire@DXGFASTMUTEX@@QEAAXXZ.c)
 *     ?Release@DXGFASTMUTEX@@QEAAXXZ @ 0x1C000E420 (-Release@DXGFASTMUTEX@@QEAAXXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C002CCC0 (_guard_dispatch_icall_nop.c)
 *     ?AcquireReference@DXG_SIGNAL_GUEST_CPU_EVENT@@SAXPEAU1@@Z @ 0x1C004B9B0 (-AcquireReference@DXG_SIGNAL_GUEST_CPU_EVENT@@SAXPEAU1@@Z.c)
 *     ?ReleaseReference@DXG_SIGNAL_GUEST_CPU_EVENT@@SAXPEAU1@@Z @ 0x1C004BA80 (-ReleaseReference@DXG_SIGNAL_GUEST_CPU_EVENT@@SAXPEAU1@@Z.c)
 *     ?GetCurrent@DXGTHREAD@@SAPEAV1@XZ @ 0x1C017D000 (-GetCurrent@DXGTHREAD@@SAPEAV1@XZ.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C0186AA0 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?AllocHandle@HMGRTABLE@@QEAAIPEAXW4_HMGRENTRY_TYPE@@IH@Z @ 0x1C0195A00 (-AllocHandle@HMGRTABLE@@QEAAIPEAXW4_HMGRENTRY_TYPE@@IH@Z.c)
 *     ?InitializeAdapterObject@DXGADAPTERSYNCOBJECT@@QEAAJPEAVDXGSYNCOBJECT@@PEAVDXGDEVICE@@@Z @ 0x1C0198DE4 (-InitializeAdapterObject@DXGADAPTERSYNCOBJECT@@QEAAJPEAVDXGSYNCOBJECT@@PEAVDXGDEVICE@@@Z.c)
 *     ?Initialize@DXGSYNCOBJECTCA@@QEAAJXZ @ 0x1C033FF08 (-Initialize@DXGSYNCOBJECTCA@@QEAAJXZ.c)
 */

__int64 __fastcall DXGSYNCOBJECT::Initialize(
        DXGSYNCOBJECT *this,
        struct DXGPAGINGQUEUE *a2,
        struct DXGDEVICE *a3,
        __int64 a4)
{
  __int64 Pool2; // rsi
  __int64 CurrentProcess; // rax
  __int64 ProcessDxgProcess; // rax
  __int64 v10; // r9
  __int64 v11; // rdi
  __int64 v12; // rax
  int v13; // ecx
  int v14; // ecx
  int v15; // eax
  int v16; // eax
  __int64 v17; // rdx
  __int64 v18; // rcx
  __int64 v19; // r8
  __int64 v20; // r9
  unsigned int v21; // edi
  int v22; // eax
  __int64 v23; // rax
  __int64 v24; // rax
  __int64 v25; // rbp
  __int64 v26; // r9
  int v28; // eax
  unsigned int v29; // ecx
  struct DXGGLOBAL *v30; // rax
  __int64 v31; // rdx
  __int64 v32; // r9
  __int64 v33; // rax
  __int64 v34; // r8
  __int64 v35; // rax
  struct DXGGLOBAL *Global; // rax
  __int64 v37; // rbp
  int v38; // eax
  struct DXGTHREAD *Current; // rax
  int v40; // ecx
  void *v41; // rcx
  NTSTATUS v42; // eax
  struct DXGPROCESS *v43; // rax
  int v44; // ecx
  __int64 v45; // rcx
  struct DXGTHREAD *v46; // rax
  int HandleInformation; // [rsp+28h] [rbp-60h]
  DXGFASTMUTEX *v48; // [rsp+50h] [rbp-38h] BYREF
  char v49; // [rsp+58h] [rbp-30h]
  PVOID Object; // [rsp+90h] [rbp+8h] BYREF

  Pool2 = 0LL;
  CurrentProcess = PsGetCurrentProcess(this, a2, a3, a4);
  ProcessDxgProcess = PsGetProcessDxgProcess(CurrentProcess);
  v11 = ProcessDxgProcess;
  if ( (!ProcessDxgProcess || (*(_DWORD *)(ProcessDxgProcess + 424) & 0x80) != 0)
    && (Current = DXGTHREAD::GetCurrent()) != 0LL
    && (v12 = *((_QWORD *)Current + 3)) != 0
    || (v12 = v11) != 0 )
  {
    v13 = *(_DWORD *)(v12 + 424);
    if ( (v13 & 0x10) != 0 && (v13 & 0x100) == 0 )
      *((_DWORD *)this + 71) |= 4u;
  }
  if ( *((_DWORD *)this + 50) == 4 )
  {
    v40 = *(_DWORD *)(v12 + 424);
    if ( (v40 & 0x10) == 0
      && (v40 & 0x100) == 0
      && ((*((_DWORD *)this + 71) & 2) != 0 || (*((_DWORD *)this + 51) & 0x100) != 0) )
    {
      v41 = (void *)*((_QWORD *)this + 26);
      Object = 0LL;
      v42 = ObReferenceObjectByHandle(v41, 0x1F0003u, (POBJECT_TYPE)ExEventObjectType, 1, &Object, 0LL);
      *((_QWORD *)this + 11) = Object;
      v21 = v42;
      if ( v42 < 0 )
      {
        WdLogSingleEntry1(3LL, v42);
        return v21;
      }
    }
  }
  v14 = *((_DWORD *)this + 71);
  if ( (v14 & 2) != 0 )
  {
LABEL_9:
    if ( (*((_DWORD *)this + 51) & 4) != 0 )
      v16 = DXGSYNCOBJECTCA::Initialize(this);
    else
      v16 = DXGADAPTERSYNCOBJECT::InitializeAdapterObject((DXGSYNCOBJECT *)((char *)this + 296), this, a3);
    v21 = v16;
    if ( v16 >= 0 )
    {
      v22 = *((_DWORD *)this + 51);
      if ( (v22 & 1) == 0
        || (v17 = *((unsigned int *)this + 71),
            LOBYTE(v18) = (v22 & 2) != 0,
            ((unsigned __int8)v18 & ((v17 & 0x10) == 0)) != 0) )
      {
LABEL_13:
        v23 = PsGetCurrentProcess(v18, v17, v19, v20);
        v24 = PsGetProcessDxgProcess(v23);
        v25 = v24;
        if ( v24 && (*(_DWORD *)(v24 + 424) & 0x80) == 0
          || (v46 = DXGTHREAD::GetCurrent()) == 0LL
          || (v26 = *((_QWORD *)v46 + 3)) == 0 )
        {
          v26 = v25;
        }
        WdLogSingleEntry3(4LL, this, *((unsigned int *)this + 20), v26);
        goto LABEL_17;
      }
      if ( (v17 & 0x10) != 0 )
      {
        v43 = DXGPROCESS::GetCurrent(v18, v17, v19, v20);
        v44 = *((_DWORD *)v43 + 106);
        if ( (v44 & 0x100) != 0 )
          v45 = *((_QWORD *)v43 + 76);
        else
          v45 = (unsigned __int64)v43 & -(__int64)((v44 & 0x80u) != 0);
        *((_DWORD *)this + 20) = DXGPROCESS::AllocHandleSafe(v45, (__int64)this, 8u);
      }
      else
      {
        Global = DXGGLOBAL_GetGlobal();
        DXGAUTOMUTEX::DXGAUTOMUTEX((DXGAUTOMUTEX *)&v48, (struct DXGGLOBAL *)((char *)Global + 288), 0);
        if ( v49 )
          WdLogSingleEntry5(0LL, 275LL, 4LL, &v48, 0LL, 0LL);
        DXGFASTMUTEX::Acquire(v48);
        v37 = *((_QWORD *)this + 2);
        v49 = 1;
        if ( *(struct _KTHREAD **)(v37 + 312) != KeGetCurrentThread() )
        {
          WdLogSingleEntry1(1LL, 1433LL);
          DxgkLogInternalTriageEvent(0LL, 262146, -1, (__int64)L"m_ShareMutex.IsOwner()", 1433LL, 0LL, 0LL, 0LL, 0LL);
        }
        *((_DWORD *)this + 20) = HMGRTABLE::AllocHandle((unsigned int *)(v37 + 336), (__int64)this, 8, 2, 0);
        if ( v49 )
        {
          v49 = 0;
          DXGFASTMUTEX::Release((struct _KTHREAD **)v48);
        }
      }
      v38 = *((_DWORD *)this + 20);
      if ( v38 )
      {
        *((_DWORD *)this + 68) = v38;
        goto LABEL_13;
      }
      v21 = -1073741801;
      WdLogSingleEntry2(6LL, this, -1073741801LL);
      DxgkLogInternalTriageEvent(
        0LL,
        262145,
        -1,
        (__int64)L"SyncObj 0x%I64x: Unable to create synchronization object handle, returning 0x%I64x",
        (__int64)this,
        -1073741801LL,
        0LL,
        0LL,
        0LL);
    }
LABEL_17:
    if ( Pool2 )
    {
      DXG_SIGNAL_GUEST_CPU_EVENT::ReleaseReference((struct DXG_SIGNAL_GUEST_CPU_EVENT *)Pool2);
      *((_QWORD *)this + 26) = 0LL;
    }
    return v21;
  }
  v15 = *((_DWORD *)this + 50);
  if ( v15 == 4 )
  {
    if ( (v14 & 4) != 0 )
    {
      if ( !*((_QWORD *)this + 26) )
      {
        WdLogSingleEntry1(2LL, 1653LL);
        DxgkLogInternalTriageEvent(0LL, 0x40000, -1, (__int64)L"WSL CPU event is NULL", 1653LL, 0LL, 0LL, 0LL, 0LL);
        return (unsigned int)-1073741811;
      }
      Pool2 = ExAllocatePool2(64LL, 40LL, 1265072196LL, v10);
      if ( !Pool2 )
      {
        WdLogSingleEntry1(6LL, 1660LL);
        DxgkLogInternalTriageEvent(
          0LL,
          262145,
          -1,
          (__int64)L"Failed to allocate memory for DXG_SIGNAL_GUEST_CPU_EVENT",
          1660LL,
          0LL,
          0LL,
          0LL,
          0LL);
        return (unsigned int)-1073741801;
      }
      *(_QWORD *)(Pool2 + 8) = *((_QWORD *)this + 26);
      *(_BYTE *)(Pool2 + 17) = 1;
      *(_BYTE *)(Pool2 + 19) = 1;
      *((_QWORD *)this + 26) = Pool2;
      DXG_SIGNAL_GUEST_CPU_EVENT::AcquireReference((struct DXG_SIGNAL_GUEST_CPU_EVENT *)Pool2);
    }
    goto LABEL_9;
  }
  if ( (unsigned int)(v15 - 5) > 1 )
    goto LABEL_9;
  v28 = *((_DWORD *)this + 51);
  if ( (v28 & 0x80u) != 0 )
  {
    v29 = v14 | 1;
  }
  else
  {
    v29 = v14 & 0xFFFFFFFE;
    if ( (v28 & 4) == 0 )
      v29 |= ((*(_DWORD *)(*(_QWORD *)(*((_QWORD *)this + 39) + 16LL) + 2152LL) >> 5) & 1) == 0;
  }
  *((_DWORD *)this + 71) = v29;
  v30 = DXGGLOBAL_GetGlobal();
  v32 = 0LL;
  v33 = *((_QWORD *)v30 + 33);
  if ( *((_DWORD *)this + 50) != 6 )
    v32 = *((_QWORD *)this + 26);
  v34 = *((_DWORD *)this + 71) >> 5;
  LOBYTE(v31) = *((_BYTE *)this + 204) & 1;
  LOBYTE(HandleInformation) = *((_BYTE *)this + 284) & 1;
  LOBYTE(v34) = (*((_DWORD *)this + 71) & 0x20) != 0;
  v21 = (*(__int64 (__fastcall **)(char *, __int64, __int64, _QWORD, __int64, int))(*(_QWORD *)(v33 + 8) + 928LL))(
          (char *)this + 128,
          v31,
          v34,
          0LL,
          v32,
          HandleInformation);
  if ( (v21 & 0x80000000) == 0 )
  {
    if ( a2 )
      v35 = *((_QWORD *)a2 + 4);
    else
      v35 = 0LL;
    *((_QWORD *)this + 19) = v35;
    goto LABEL_9;
  }
  return v21;
}
