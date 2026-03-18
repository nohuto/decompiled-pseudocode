/*
 * XREFs of ?Initialize@DXGSYNCOBJECT@@QEAAJPEAVDXGPAGINGQUEUE@@PEAVDXGDEVICE@@@Z @ 0x1C00DAB08
 * Callers:
 *     ?CreateSyncObject@DXGGLOBAL@@QEAAJPEAVADAPTER_RENDER@@PEAVDXGDEVICE@@IPEAU_D3DDDI_SYNCHRONIZATIONOBJECTINFO2@@U_VIDSCH_SYNC_OBJECT_CLIENTHINT@@_NPEAVDXGPAGINGQUEUE@@PEAPEAVDXGSYNCOBJECT@@PEAPEAVDXGDEVICESYNCOBJECT@@PEAIPEAPEAVDXGADAPTERSYNCOBJECT@@@Z @ 0x1C010C918 (-CreateSyncObject@DXGGLOBAL@@QEAAJPEAVADAPTER_RENDER@@PEAVDXGDEVICE@@IPEAU_D3DDDI_SYNCHRONIZATIO.c)
 * Callees:
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0002808 (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C0004010 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ??0DXGGLOBALSHAREMUTEX@@QEAA@XZ @ 0x1C0006568 (--0DXGGLOBALSHAREMUTEX@@QEAA@XZ.c)
 *     ??1DXGGLOBALSHAREMUTEX@@QEAA@XZ @ 0x1C00065E8 (--1DXGGLOBALSHAREMUTEX@@QEAA@XZ.c)
 *     ?AllocHandle@DXGGLOBAL@@QEAAIPEAXW4_HMGRENTRY_TYPE@@I@Z @ 0x1C0006C68 (-AllocHandle@DXGGLOBAL@@QEAAIPEAXW4_HMGRENTRY_TYPE@@I@Z.c)
 *     ?AllocHandleSafe@DXGPROCESS@@QEAAIPEAXW4_HMGRENTRY_TYPE@@@Z @ 0x1C00078F0 (-AllocHandleSafe@DXGPROCESS@@QEAAIPEAXW4_HMGRENTRY_TYPE@@@Z.c)
 *     ?Feature_WSL_Device_GPU__private_IsEnabled@@YAHXZ @ 0x1C0024978 (-Feature_WSL_Device_GPU__private_IsEnabled@@YAHXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C0027100 (_guard_dispatch_icall_nop.c)
 *     ?InitializeAdapterObject@DXGADAPTERSYNCOBJECT@@QEAAJPEAVDXGSYNCOBJECT@@PEAVDXGDEVICE@@@Z @ 0x1C00DAE14 (-InitializeAdapterObject@DXGADAPTERSYNCOBJECT@@QEAAJPEAVDXGSYNCOBJECT@@PEAVDXGDEVICE@@@Z.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C0111EB0 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?Initialize@DXGSYNCOBJECTCA@@QEAAJXZ @ 0x1C028FA24 (-Initialize@DXGSYNCOBJECTCA@@QEAAJXZ.c)
 */

__int64 __fastcall DXGSYNCOBJECT::Initialize(DXGSYNCOBJECT *this, struct DXGPAGINGQUEUE *a2, struct DXGDEVICE *a3)
{
  __int64 v6; // rdx
  _DWORD *v7; // rcx
  struct DXGPROCESS *Current; // rax
  char v9; // al
  void *v10; // rcx
  NTSTATUS v11; // eax
  __int64 v12; // r8
  __int64 v13; // rbx
  __int64 v14; // rax
  __int64 result; // rax
  int v16; // eax
  bool v17; // bp
  __int64 v18; // r14
  char v19; // bl
  int v20; // edi
  struct DXGGLOBAL *Global; // rax
  __int64 v22; // r8
  __int64 v23; // rdx
  __int64 v24; // rax
  __int64 v25; // rdx
  int v26; // eax
  unsigned __int64 v27; // rax
  char v28; // cl
  __int64 v29; // rcx
  __int64 v30; // rdx
  __int64 v31; // rcx
  __int64 v32; // r8
  __int64 v33; // r9
  __int64 v34; // rdx
  int v35; // eax
  __int64 v36; // rax
  _QWORD *v37; // rbx
  int v38; // [rsp+28h] [rbp-50h]
  _BYTE v39[16]; // [rsp+40h] [rbp-38h] BYREF
  PVOID Object; // [rsp+98h] [rbp+20h] BYREF

  if ( (unsigned int)Feature_WSL_Device_GPU__private_IsEnabled() )
  {
    Current = DXGPROCESS::GetCurrent();
    if ( *((_DWORD *)this + 48) == 4 )
    {
      v9 = *((_BYTE *)Current + 347);
      if ( (v9 & 2) == 0 && (v9 & 0x20) == 0 && (*((_BYTE *)this + 277) || (*((_DWORD *)this + 49) & 0x100) != 0) )
      {
        v10 = (void *)*((_QWORD *)this + 25);
        Object = 0LL;
        v11 = ObReferenceObjectByHandle(v10, 0x1F0003u, (POBJECT_TYPE)ExEventObjectType, 1, &Object, 0LL);
        v7 = Object;
        *((_QWORD *)this + 10) = Object;
        v13 = v11;
        if ( v11 < 0 )
        {
          v14 = WdLogNewEntry5_WdWarning(v7, v6, v12);
          *(_QWORD *)(v14 + 24) = v13;
          WdLogEvent5_WdWarning(v14);
          return (unsigned int)v13;
        }
      }
    }
  }
  if ( !*((_BYTE *)this + 277) && (unsigned int)(*((_DWORD *)this + 48) - 5) <= 1 )
  {
    v16 = *((_DWORD *)this + 49);
    if ( (v16 & 0x80u) == 0 )
    {
      if ( (v16 & 4) != 0 )
      {
        v17 = 0;
      }
      else
      {
        v7 = *(_DWORD **)(*((_QWORD *)this + 39) + 16LL);
        v17 = (v7[514] & 0x20) == 0;
      }
    }
    else
    {
      v17 = 1;
    }
    *((_BYTE *)this + 276) = v17;
    if ( *((_DWORD *)this + 48) == 6 )
      v18 = 0LL;
    else
      v18 = *((_QWORD *)this + 25);
    v19 = *((_BYTE *)this + 280);
    v20 = *((_DWORD *)this + 49);
    Global = DXGGLOBAL::GetGlobal((__int64)v7, v6);
    LOBYTE(v38) = v17;
    LOBYTE(v22) = v19 != 0;
    LOBYTE(v23) = v20 & 1;
    result = (*(__int64 (__fastcall **)(char *, __int64, __int64, _QWORD, __int64, int))(*(_QWORD *)(*((_QWORD *)Global + 28) + 8LL)
                                                                                       + 920LL))(
               (char *)this + 120,
               v23,
               v22,
               0LL,
               v18,
               v38);
    if ( (int)result < 0 )
      return result;
    if ( a2 )
      v24 = *((_QWORD *)a2 + 4);
    else
      v24 = 0LL;
    *((_QWORD *)this + 18) = v24;
  }
  if ( (*((_DWORD *)this + 49) & 4) != 0 )
    result = DXGSYNCOBJECTCA::Initialize(this);
  else
    result = DXGADAPTERSYNCOBJECT::InitializeAdapterObject((DXGSYNCOBJECT *)((char *)this + 296), this, a3);
  if ( (int)result >= 0 )
  {
    v26 = *((_DWORD *)this + 49);
    if ( (v26 & 1) != 0 && ((v26 & 2) == 0 || *((_BYTE *)this + 279)) )
    {
      if ( *((_BYTE *)this + 279) )
      {
        v27 = (unsigned __int64)DXGPROCESS::GetCurrent();
        v28 = *(_BYTE *)(v27 + 347);
        if ( (v28 & 0x20) != 0 )
          v29 = *(_QWORD *)(v27 + 496);
        else
          v29 = v27 & -(__int64)((v28 & 0x10) != 0);
        *((_DWORD *)this + 18) = DXGPROCESS::AllocHandleSafe(v29, (__int64)this, 8u);
      }
      else
      {
        DXGGLOBALSHAREMUTEX::DXGGLOBALSHAREMUTEX((DXGGLOBALSHAREMUTEX *)v39, v25);
        DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v39);
        *((_DWORD *)this + 18) = DXGGLOBAL::AllocHandle(*((_QWORD *)this + 2), (__int64)this, 8u);
        DXGGLOBALSHAREMUTEX::~DXGGLOBALSHAREMUTEX((DXGGLOBALSHAREMUTEX *)v39, v34);
      }
      v35 = *((_DWORD *)this + 18);
      if ( !v35 )
      {
        v36 = WdLogNewEntry5_WdLowResource(v31, v30, v32, v33);
        LODWORD(v13) = -1073741801;
        *(_QWORD *)(v36 + 24) = this;
        *(_QWORD *)(v36 + 32) = -1073741801LL;
        WdLogEvent5_WdLowResource(v36);
        return (unsigned int)v13;
      }
      *((_DWORD *)this + 66) = v35;
    }
    v37 = (_QWORD *)WdLogNewEntry5_WdEvent();
    v37[3] = this;
    v37[4] = *((unsigned int *)this + 18);
    v37[5] = DXGPROCESS::GetCurrent();
    WdLogEvent5_WdEvent(v37);
    return 0LL;
  }
  return result;
}
