/*
 * XREFs of ?DestroyCoreAllocations@DXGSHAREDRESOURCE@@QEAAXPEAPEAXI@Z @ 0x1C01197D8
 * Callers:
 *     ?Destroy@DXGSHAREDRESOURCE@@IEAAXPEAPEAXI@Z @ 0x1C011A8D0 (-Destroy@DXGSHAREDRESOURCE@@IEAAXPEAPEAXI@Z.c)
 *     ?Stop@ADAPTER_RENDER@@QEAAXEE@Z @ 0x1C0212D6C (-Stop@ADAPTER_RENDER@@QEAAXEE@Z.c)
 * Callees:
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C000A650 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?Release@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C000CF20 (-Release@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C000D070 (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ??0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z @ 0x1C000DBC4 (--0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z.c)
 *     McTemplateK0q_EtwWriteTransfer @ 0x1C0024408 (McTemplateK0q_EtwWriteTransfer.c)
 *     _guard_dispatch_icall_nop @ 0x1C0026570 (_guard_dispatch_icall_nop.c)
 *     ?FreeHandle@HMGRTABLE@@QEAAXI@Z @ 0x1C010E240 (-FreeHandle@HMGRTABLE@@QEAAXI@Z.c)
 *     ?DdiDestroyAllocation@ADAPTER_RENDER@@QEAAJPEBU_DXGKARG_DESTROYALLOCATION@@E@Z @ 0x1C011A4B0 (-DdiDestroyAllocation@ADAPTER_RENDER@@QEAAJPEBU_DXGKARG_DESTROYALLOCATION@@E@Z.c)
 */

void __fastcall DXGSHAREDRESOURCE::DestroyCoreAllocations(DXGSHAREDRESOURCE *this, void **a2, unsigned int a3)
{
  void **v3; // r14
  unsigned int v4; // r12d
  char *v6; // rsi
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // r8
  struct DXGGLOBAL *Global; // rax
  unsigned int v11; // r15d
  __int64 v12; // rdx
  __int64 v13; // rcx
  struct DXGGLOBAL *v14; // rax
  __int64 v15; // rdx
  struct _KTHREAD *CurrentThread; // rcx
  struct DXGGLOBAL *v17; // rdi
  _QWORD *v18; // rdi
  __int64 v19; // r8
  UINT v20; // r15d
  unsigned __int8 v21; // r13
  void *v22; // rdx
  int v23; // ecx
  const HANDLE *pAllocationList; // rax
  ADAPTER_RENDER *v25; // rcx
  __int64 v26; // rax
  int v27; // r9d
  __int64 v28; // rax
  __int64 v29; // rax
  __int64 v30; // rax
  __int64 v31; // rax
  _BYTE v32[16]; // [rsp+20h] [rbp-30h] BYREF
  struct _DXGKARG_DESTROYALLOCATION v33; // [rsp+30h] [rbp-20h] BYREF

  v3 = (void **)*((_QWORD *)this + 21);
  v4 = 0;
  if ( a2 && a3 >= *((_DWORD *)this + 33) )
    v3 = a2;
  if ( v3 )
  {
    v6 = (char *)this + 32;
    KeEnterCriticalRegion();
    if ( !(unsigned __int8)ExTryAcquirePushLockExclusiveEx(v6, 0LL) )
    {
      if ( bTracingEnabled )
      {
        v27 = *((_DWORD *)v6 + 6);
        if ( v27 != -1 && (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
          McTemplateK0q_EtwWriteTransfer(v8, &EventBlockThread, v9, v27);
      }
      ExAcquirePushLockExclusiveEx(v6, 0LL);
    }
    *((_QWORD *)v6 + 1) = KeGetCurrentThread();
    if ( *((_DWORD *)this + 6) )
    {
      if ( (*((_DWORD *)this + 3) & 8) != 0 )
      {
        v28 = WdLogNewEntry5_WdAssertion(v8, v7);
        *(_QWORD *)(v28 + 24) = 12174LL;
        WdLogEvent5_WdAssertion(v28);
      }
      Global = DXGGLOBAL::GetGlobal(v8, v7);
      DXGAUTOMUTEX::DXGAUTOMUTEX((DXGAUTOMUTEX *)v32, (struct DXGGLOBAL *)((char *)Global + 136), 0);
      DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v32);
      v11 = *((_DWORD *)this + 6);
      v14 = DXGGLOBAL::GetGlobal(v13, v12);
      CurrentThread = KeGetCurrentThread();
      v17 = v14;
      if ( *((struct _KTHREAD **)v14 + 19) != CurrentThread )
      {
        v29 = WdLogNewEntry5_WdAssertion(CurrentThread, v15);
        *(_QWORD *)(v29 + 24) = 1095LL;
        WdLogEvent5_WdAssertion(v29);
      }
      HMGRTABLE::FreeHandle((struct DXGGLOBAL *)((char *)v17 + 176), v11);
      *((_DWORD *)this + 6) = 0;
      if ( v32[8] )
        DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v32, v7);
    }
    if ( (*((_DWORD *)this + 3) & 8) != 0 && *((_DWORD *)this + 7) )
    {
      v30 = WdLogNewEntry5_WdAssertion(v8, v7);
      *(_QWORD *)(v30 + 24) = 12184LL;
      WdLogEvent5_WdAssertion(v30);
    }
    v18 = (_QWORD *)*((_QWORD *)this + 17);
    v19 = 0LL;
    v20 = 0;
    v21 = 0;
    if ( *((_DWORD *)this + 33) )
    {
      do
      {
        v19 = *(v18 - 5);
        if ( v19 )
        {
          (*(void (__fastcall **)(_QWORD, _QWORD))(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 10) + 640LL) + 8LL) + 136LL))(
            0LL,
            *(_QWORD *)(*((_QWORD *)this + 10) + 648LL));
          v19 = 0LL;
          *(v18 - 5) = 0LL;
        }
        if ( (*((_BYTE *)v18 - 44) & 2) != 0 )
          v21 = 1;
        v3[v4] = (void *)*(v18 - 4);
        if ( *(v18 - 4) != v19 )
        {
          if ( v20 != v4 )
          {
            v31 = WdLogNewEntry5_WdAssertion(v4, 1LL);
            *(_QWORD *)(v31 + 24) = 12219LL;
            WdLogEvent5_WdAssertion(v31);
            v19 = 0LL;
          }
          ++v20;
        }
        *(v18 - 4) = v19;
        ++v4;
        v18 = (_QWORD *)*v18;
      }
      while ( v4 < *((_DWORD *)this + 33) );
      if ( v20 )
        goto LABEL_25;
    }
    if ( *((_QWORD *)this + 2) != v19 )
    {
LABEL_25:
      v22 = (void *)*((_QWORD *)this + 2);
      v23 = v19;
      *(_QWORD *)(&v33.NumAllocations + 1) = v19;
      HIDWORD(v33.pAllocationList) = v19;
      LOBYTE(v23) = v22 != 0LL;
      *((_DWORD *)&v33.Flags + 1) = HIDWORD(v19);
      v33.hResource = v22;
      v33.NumAllocations = v20;
      pAllocationList = v33.pAllocationList;
      v33.Flags.Value = v19 & 0xFFFFFFFE | v23;
      v25 = (ADAPTER_RENDER *)*((_QWORD *)this + 10);
      if ( v20 )
        pAllocationList = v3;
      v33.pAllocationList = pAllocationList;
      ADAPTER_RENDER::DdiDestroyAllocation(v25, &v33, v21);
      v19 = 0LL;
      *((_QWORD *)this + 2) = 0LL;
    }
    *((_DWORD *)this + 33) = v19;
    *((_QWORD *)v6 + 1) = v19;
    ExReleasePushLockExclusiveEx(v6, 0LL);
    KeLeaveCriticalRegion();
  }
  else
  {
    v26 = WdLogNewEntry5_WdAssertion(this, a2);
    *(_QWORD *)(v26 + 24) = 12166LL;
    WdLogEvent5_WdAssertion(v26);
  }
}
