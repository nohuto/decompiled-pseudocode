/*
 * XREFs of ?Initialize@DXGSYNCOBJECT@@QEAAJPEAVDXGPAGINGQUEUE@@@Z @ 0x1C0112488
 * Callers:
 *     ?CreateSyncObject@DXGGLOBAL@@QEAAJPEAVADAPTER_RENDER@@PEAVDXGDEVICE@@IPEAU_D3DDDI_SYNCHRONIZATIONOBJECTINFO2@@U_VIDSCH_SYNC_OBJECT_CLIENTHINT@@_NPEAVDXGPAGINGQUEUE@@PEAPEAVDXGSYNCOBJECT@@PEAPEAVDXGDEVICESYNCOBJECT@@PEAIPEAPEAVDXGADAPTERSYNCOBJECT@@@Z @ 0x1C01120E0 (-CreateSyncObject@DXGGLOBAL@@QEAAJPEAVADAPTER_RENDER@@PEAVDXGDEVICE@@IPEAU_D3DDDI_SYNCHRONIZATIO.c)
 * Callees:
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C000A650 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?Release@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C000CF20 (-Release@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C000D070 (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ??0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z @ 0x1C000DBC4 (--0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z.c)
 *     ?AllocHandleSafe@DXGPROCESS@@QEAAIPEAXW4_HMGRENTRY_TYPE@@@Z @ 0x1C000F100 (-AllocHandleSafe@DXGPROCESS@@QEAAIPEAXW4_HMGRENTRY_TYPE@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C0026570 (_guard_dispatch_icall_nop.c)
 *     ?GetCurrent@DXGTHREAD@@SAPEAV1@XZ @ 0x1C00FBEF0 (-GetCurrent@DXGTHREAD@@SAPEAV1@XZ.c)
 *     ?AllocHandle@HMGRTABLE@@QEAAIPEAXW4_HMGRENTRY_TYPE@@IH@Z @ 0x1C0104280 (-AllocHandle@HMGRTABLE@@QEAAIPEAXW4_HMGRENTRY_TYPE@@IH@Z.c)
 *     ?InitializeAdapterObject@DXGADAPTERSYNCOBJECT@@QEAAJPEAVDXGSYNCOBJECT@@@Z @ 0x1C01126EC (-InitializeAdapterObject@DXGADAPTERSYNCOBJECT@@QEAAJPEAVDXGSYNCOBJECT@@@Z.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C0119460 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?Initialize@DXGSYNCOBJECTCA@@QEAAJXZ @ 0x1C028C560 (-Initialize@DXGSYNCOBJECTCA@@QEAAJXZ.c)
 */

__int64 __fastcall DXGSYNCOBJECT::Initialize(DXGSYNCOBJECT *this, struct DXGPAGINGQUEUE *a2)
{
  DXGSYNCOBJECT *v3; // rsi
  __int64 result; // rax
  __int64 v5; // rdx
  __int64 v6; // rcx
  int v7; // eax
  _QWORD *v8; // rbx
  __int64 v9; // rcx
  __int64 v10; // rdx
  __int64 CurrentProcess; // rax
  __int64 ProcessDxgProcess; // rax
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // rdi
  __int64 v16; // rcx
  int v17; // eax
  bool v18; // bp
  __int64 v19; // r15
  char v20; // bl
  int v21; // edi
  struct DXGGLOBAL *Global; // rax
  __int64 v23; // r8
  __int64 v24; // rdx
  __int64 v25; // rax
  struct DXGGLOBAL *v26; // rax
  __int64 v27; // rdx
  __int64 v28; // rcx
  __int64 v29; // rbx
  int v30; // eax
  __int64 v31; // r8
  __int64 v32; // r9
  bool v33; // zf
  int v34; // eax
  unsigned __int64 Current; // rax
  char v36; // cl
  __int64 v37; // rcx
  __int64 v38; // rax
  __int64 v39; // rax
  struct DXGTHREAD *v40; // rax
  _BYTE v41[16]; // [rsp+40h] [rbp-28h] BYREF

  v3 = this;
  if ( !*((_BYTE *)this + 277) && (unsigned int)(*((_DWORD *)this + 48) - 5) <= 1 )
  {
    v17 = *((_DWORD *)this + 49);
    if ( (v17 & 0x80u) != 0 )
    {
      v18 = 1;
    }
    else if ( (v17 & 4) != 0 )
    {
      v18 = 0;
    }
    else
    {
      this = *(DXGSYNCOBJECT **)(*((_QWORD *)this + 39) + 16LL);
      v18 = (*((_DWORD *)this + 508) & 0x20) == 0;
    }
    *((_BYTE *)v3 + 276) = v18;
    if ( *((_DWORD *)v3 + 48) == 6 )
      v19 = 0LL;
    else
      v19 = *((_QWORD *)v3 + 25);
    v20 = *((_BYTE *)v3 + 280);
    v21 = *((_DWORD *)v3 + 49);
    Global = DXGGLOBAL::GetGlobal((__int64)this, (__int64)a2);
    LOBYTE(v23) = v20 != 0;
    LOBYTE(v24) = v21 & 1;
    result = (*(__int64 (__fastcall **)(__int64, __int64, __int64, _QWORD, __int64, bool))(*(_QWORD *)(*((_QWORD *)Global + 14) + 8LL)
                                                                                         + 920LL))(
               (__int64)v3 + 120,
               v24,
               v23,
               0LL,
               v19,
               v18);
    if ( (int)result < 0 )
      return result;
    if ( a2 )
      v25 = *((_QWORD *)a2 + 4);
    else
      v25 = 0LL;
    *((_QWORD *)v3 + 18) = v25;
  }
  if ( (*((_DWORD *)v3 + 49) & 4) != 0 )
    result = DXGSYNCOBJECTCA::Initialize(v3);
  else
    result = DXGADAPTERSYNCOBJECT::InitializeAdapterObject((DXGSYNCOBJECT *)((char *)v3 + 296), v3);
  if ( (int)result >= 0 )
  {
    v7 = *((_DWORD *)v3 + 49);
    if ( (v7 & 1) != 0 && ((v7 & 2) == 0 || *((_BYTE *)v3 + 279)) )
    {
      if ( *((_BYTE *)v3 + 279) )
      {
        Current = (unsigned __int64)DXGPROCESS::GetCurrent();
        v36 = *(_BYTE *)(Current + 347);
        if ( (v36 & 0x20) != 0 )
          v37 = *(_QWORD *)(Current + 496);
        else
          v37 = Current & -(__int64)((v36 & 0x10) != 0);
        *((_DWORD *)v3 + 18) = DXGPROCESS::AllocHandleSafe(v37, (__int64)v3, 8u);
      }
      else
      {
        v26 = DXGGLOBAL::GetGlobal(v6, v5);
        DXGAUTOMUTEX::DXGAUTOMUTEX((DXGAUTOMUTEX *)v41, (struct DXGGLOBAL *)((char *)v26 + 136), 0);
        DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v41);
        v29 = *((_QWORD *)v3 + 2);
        if ( *(struct _KTHREAD **)(v29 + 152) != KeGetCurrentThread() )
        {
          v38 = WdLogNewEntry5_WdAssertion(v28, v27);
          *(_QWORD *)(v38 + 24) = 1088LL;
          WdLogEvent5_WdAssertion(v38);
        }
        v30 = HMGRTABLE::AllocHandle((unsigned int *)(v29 + 176), (__int64)v3, 8, 2, 0);
        v33 = v41[8] == 0;
        *((_DWORD *)v3 + 18) = v30;
        if ( !v33 )
          DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v41, v5);
      }
      v34 = *((_DWORD *)v3 + 18);
      if ( !v34 )
      {
        v39 = WdLogNewEntry5_WdLowResource(v6, v5, v31, v32);
        *(_QWORD *)(v39 + 24) = v3;
        *(_QWORD *)(v39 + 32) = -1073741801LL;
        WdLogEvent5_WdLowResource(v39);
        return 3221225495LL;
      }
      *((_DWORD *)v3 + 66) = v34;
    }
    v8 = (_QWORD *)WdLogNewEntry5_WdEvent(v6, v5);
    v8[3] = v3;
    v9 = *((unsigned int *)v3 + 18);
    v8[4] = v9;
    CurrentProcess = PsGetCurrentProcess(v9, v10);
    ProcessDxgProcess = PsGetProcessDxgProcess(CurrentProcess);
    v15 = ProcessDxgProcess;
    if ( ProcessDxgProcess && (*(_BYTE *)(ProcessDxgProcess + 347) & 0x10) == 0
      || (v40 = DXGTHREAD::GetCurrent(v14, v13)) == 0LL
      || (v16 = *((_QWORD *)v40 + 1)) == 0 )
    {
      v16 = v15;
    }
    v8[5] = v16;
    WdLogEvent5_WdEvent(v8);
    return 0LL;
  }
  return result;
}
