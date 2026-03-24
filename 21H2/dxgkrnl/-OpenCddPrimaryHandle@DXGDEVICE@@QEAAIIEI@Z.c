/*
 * XREFs of ?OpenCddPrimaryHandle@DXGDEVICE@@QEAAIIEI@Z @ 0x1C0280854
 * Callers:
 *     ?Present@DXGCONTEXT@@QEAAJPEBUDXGK_PRESENT_PARAMS@@PEAVCOREDEVICEACCESS@@PEAVDXGADAPTERSTOPRESETLOCKSHARED@@PEAVCWin32kLocks@@PEAPEAV1@PEAUVIDSCH_SUBMIT_DATA_BASE@@@Z @ 0x1C00FDFA0 (-Present@DXGCONTEXT@@QEAAJPEBUDXGK_PRESENT_PARAMS@@PEAVCOREDEVICEACCESS@@PEAVDXGADAPTERSTOPRESET.c)
 * Callees:
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0002848 (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ??1DXGPROCESSCOPYPROTECTIONMUTEX@@QEAA@XZ @ 0x1C0002BD4 (--1DXGPROCESSCOPYPROTECTIONMUTEX@@QEAA@XZ.c)
 *     ??_V@YAXPEAX@Z @ 0x1C0002CC0 (--_V@YAXPEAX@Z.c)
 *     ??_U@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C0002D2C (--_U@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 *     ?IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ @ 0x1C0004448 (-IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ.c)
 *     ??0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z @ 0x1C0006910 (--0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z.c)
 *     __security_check_cookie @ 0x1C0024910 (__security_check_cookie.c)
 *     Feature_253710648__private_IsEnabledDeviceUsage @ 0x1C00260E4 (Feature_253710648__private_IsEnabledDeviceUsage.c)
 *     _guard_dispatch_icall_nop @ 0x1C0028C00 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C0028F00 (memset.c)
 *     ??$QueryResourceInfo@U_D3DKMT_QUERYRESOURCEINFO@@@DXGDEVICE@@QEAAJPEAU_D3DKMT_QUERYRESOURCEINFO@@IPEAU_DXGSHAREDALLOCOBJECT@@@Z @ 0x1C0117C10 (--$QueryResourceInfo@U_D3DKMT_QUERYRESOURCEINFO@@@DXGDEVICE@@QEAAJPEAU_D3DKMT_QUERYRESOURCEINFO@.c)
 *     ??$OpenResource@U_D3DKMT_OPENRESOURCE@@@DXGDEVICE@@QEAAJPEAU_D3DKMT_OPENRESOURCE@@IPEAU_DXGSHAREDALLOCOBJECT@@IPEAVCOREDEVICEACCESS@@HPEAU_EPROCESS@@PEAIPEA_K@Z @ 0x1C0117FD8 (--$OpenResource@U_D3DKMT_OPENRESOURCE@@@DXGDEVICE@@QEAAJPEAU_D3DKMT_OPENRESOURCE@@IPEAU_DXGSHARE.c)
 *     ?GetCddPrimaryShareResourceHandle@ADAPTER_DISPLAY@@QEBAII@Z @ 0x1C0212848 (-GetCddPrimaryShareResourceHandle@ADAPTER_DISPLAY@@QEBAII@Z.c)
 *     ?CloseInternalCddPrimaryHandle@DXGDEVICE@@QEAAXPEAVCOREDEVICEACCESS@@@Z @ 0x1C027FAB4 (-CloseInternalCddPrimaryHandle@DXGDEVICE@@QEAAXPEAVCOREDEVICEACCESS@@@Z.c)
 */

__int64 __fastcall DXGDEVICE::OpenCddPrimaryHandle(DXGDEVICE *this, unsigned int a2, char a3, int a4)
{
  unsigned int v4; // ebx
  int v5; // r13d
  char v6; // r12
  __int64 v8; // r15
  DXGADAPTER **v9; // r14
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // rax
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // rax
  __int64 v16; // rdx
  __int64 v17; // rcx
  __int64 v18; // rax
  __int64 v19; // rdx
  __int64 v20; // rsi
  __int64 v21; // rdx
  __int64 v22; // rcx
  __int64 v23; // rax
  __int64 v24; // rax
  unsigned int CddPrimaryShareResourceHandle; // eax
  unsigned int v26; // r14d
  __int64 v27; // r13
  SIZE_T v28; // rcx
  __int64 v29; // r15
  __int64 v30; // rdx
  __int64 v31; // rcx
  __int64 v32; // r8
  __int64 v33; // r9
  char *v34; // r12
  unsigned __int64 v35; // rdx
  _BYTE *PoolWithTag; // rcx
  __int64 v37; // r8
  __int64 v38; // r9
  __int64 v39; // r15
  __int64 v40; // rax
  __int64 v41; // rdx
  __int64 v42; // rcx
  __int64 v43; // rax
  __int64 v44; // rax
  __int64 v45; // rax
  __int64 v47; // rax
  __int64 v48; // rdx
  __int64 v49; // rdx
  __int64 v50; // rcx
  __int64 v51; // rax
  __int64 v52; // rax
  _QWORD *v53; // rdx
  __int64 v54; // rax
  int v55; // eax
  __int64 v56; // rdx
  __int64 v57; // rcx
  __int64 v58; // r8
  __int64 v59; // r14
  __int64 v60; // rax
  unsigned int v61; // [rsp+20h] [rbp-E0h]
  __int128 v64; // [rsp+60h] [rbp-A0h] BYREF
  __int128 v65; // [rsp+70h] [rbp-90h]
  _QWORD v66[14]; // [rsp+80h] [rbp-80h] BYREF
  PVOID P; // [rsp+F0h] [rbp-10h]
  _BYTE v68[320]; // [rsp+F8h] [rbp-8h] BYREF
  int v69; // [rsp+238h] [rbp+138h]

  v4 = 0;
  v5 = a4;
  v6 = a3;
  v8 = a2;
  v9 = *(DXGADAPTER ***)(*((_QWORD *)this + 231) + 2696LL);
  if ( !*((_DWORD *)this + 18) && !ExIsResourceAcquiredExclusiveLite(*((PERESOURCE *)this + 17)) )
  {
    v12 = WdLogNewEntry5_WdAssertion(v11, v10);
    *(_QWORD *)(v12 + 24) = 9498LL;
    WdLogEvent5_WdAssertion(v12);
  }
  if ( !DXGADAPTER::IsCoreResourceSharedOwner(*(DXGADAPTER **)(*((_QWORD *)this + 2) + 16LL)) )
  {
    v15 = WdLogNewEntry5_WdAssertion(v14, v13);
    *(_QWORD *)(v15 + 24) = 9499LL;
    WdLogEvent5_WdAssertion(v15);
  }
  if ( !DXGADAPTER::IsCoreResourceSharedOwner(v9[2]) )
  {
    v18 = WdLogNewEntry5_WdAssertion(v17, v16);
    *(_QWORD *)(v18 + 24) = 9500LL;
    WdLogEvent5_WdAssertion(v18);
  }
  v19 = *((_QWORD *)this + v8 + 79);
  v20 = v8;
  if ( v19 && *((_DWORD *)this + 108) == 1 )
  {
    DXGAUTOMUTEX::DXGAUTOMUTEX((DXGAUTOMUTEX *)&v64, (struct DXGFASTMUTEX *const)(v19 + 80), 0);
    if ( (unsigned int)Feature_253710648__private_IsEnabledDeviceUsage() )
      DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)&v64);
    v22 = *((_QWORD *)this + v8 + 79);
    if ( (*(_DWORD *)(v22 + 4) & 1) == 0 )
    {
      v23 = WdLogNewEntry5_WdAssertion(v22, v21);
      *(_QWORD *)(v23 + 24) = 9514LL;
      WdLogEvent5_WdAssertion(v23);
      v22 = *((_QWORD *)this + v8 + 79);
    }
    if ( !*(_DWORD *)(*(_QWORD *)(v22 + 24) + 16LL) )
    {
      v24 = WdLogNewEntry5_WdAssertion(v22, v21);
      *(_QWORD *)(v24 + 24) = 9515LL;
      WdLogEvent5_WdAssertion(v24);
      v22 = *((_QWORD *)this + v8 + 79);
    }
    if ( (*(_DWORD *)(*(_QWORD *)(*(_QWORD *)(v22 + 24) + 48LL) + 4LL) & 0x10) != 0 )
      DXGDEVICE::CloseInternalCddPrimaryHandle(this, 0LL);
    DXGPROCESSCOPYPROTECTIONMUTEX::~DXGPROCESSCOPYPROTECTIONMUTEX((DXGPROCESSCOPYPROTECTIONMUTEX *)&v64);
  }
  if ( !*((_QWORD *)this + v8 + 79) )
  {
    CddPrimaryShareResourceHandle = ADAPTER_DISPLAY::GetCddPrimaryShareResourceHandle(v9, (unsigned int)v8);
    v26 = CddPrimaryShareResourceHandle;
    if ( CddPrimaryShareResourceHandle )
    {
      v64 = 0LL;
      DWORD1(v64) = CddPrimaryShareResourceHandle;
      v65 = 0LL;
      if ( (int)DXGDEVICE::QueryResourceInfo<_D3DKMT_QUERYRESOURCEINFO>(
                  (__int64)this,
                  &v64,
                  CddPrimaryShareResourceHandle) >= 0 )
      {
        v27 = DWORD1(v65);
        v28 = (unsigned int)(DWORD1(v65) + DWORD2(v65));
        if ( (unsigned int)v28 < DWORD1(v65) )
        {
LABEL_48:
          v5 = a4;
          goto LABEL_49;
        }
        v29 = (unsigned int)v28;
        v34 = (char *)operator new[](v28, 0x4B677844u, PagedPool);
        if ( !v34 )
        {
          v47 = WdLogNewEntry5_WdLowResource(v31, v30, v32, v33);
          *(_QWORD *)(v47 + 24) = this;
          *(_QWORD *)(v47 + 32) = v29;
          WdLogEvent5_WdLowResource(v47);
LABEL_47:
          v6 = a3;
          goto LABEL_48;
        }
        memset(v66, 0, 0x48uLL);
        v39 = HIDWORD(v65);
        P = 0LL;
        v69 = 0;
        if ( HIDWORD(v65) <= 4 )
        {
          PoolWithTag = v68;
          P = v68;
        }
        else
        {
          v35 = 0xFFFFFFFFFFFFFFFFuLL % HIDWORD(v65);
          if ( 0xFFFFFFFFFFFFFFFFuLL / HIDWORD(v65) < 0x50 )
            goto LABEL_42;
          PoolWithTag = ExAllocatePoolWithTag(PagedPool, 80LL * HIDWORD(v65), 0x4B677844u);
          P = PoolWithTag;
        }
        v69 = v39;
        if ( PoolWithTag )
        {
          memset(PoolWithTag, 0, 80 * v39);
          if ( P )
          {
            HIDWORD(v66[0]) = v26;
            LODWORD(v66[1]) = v39;
            v66[2] = P;
            if ( DWORD2(v65) )
              v66[5] = &v34[v27];
            else
              v66[5] = 0LL;
            LODWORD(v66[6]) = DWORD2(v65);
            v66[7] = v34;
            LODWORD(v66[8]) = v27;
            if ( (_DWORD)v65 )
            {
              v40 = WdLogNewEntry5_WdAssertion(DWORD2(v65), v35);
              *(_QWORD *)(v40 + 24) = 9578LL;
              WdLogEvent5_WdAssertion(v40);
              v26 = HIDWORD(v66[0]);
            }
            if ( (int)DXGDEVICE::OpenResource<_D3DKMT_OPENRESOURCE>(
                        this,
                        (__int64)v66,
                        v26,
                        0LL,
                        0,
                        0LL,
                        0,
                        0LL,
                        0LL,
                        0LL) < 0 )
            {
              v44 = WdLogNewEntry5_WdEvent(v42, v41);
              *(_QWORD *)(v44 + 24) = this;
              *(_QWORD *)(v44 + 32) = (unsigned int)v20;
              WdLogEvent5_WdEvent(v44);
            }
            else
            {
              *((_BYTE *)this + (unsigned int)v20 + 616) = 1;
              if ( !*((_QWORD *)this + v20 + 79) )
              {
                v43 = WdLogNewEntry5_WdAssertion(v42, v41);
                *(_QWORD *)(v43 + 24) = 9589LL;
                WdLogEvent5_WdAssertion(v43);
              }
            }
            operator delete[](v34);
            if ( P != v68 && P )
              ExFreePoolWithTag(P, 0);
            goto LABEL_47;
          }
        }
LABEL_42:
        v45 = WdLogNewEntry5_WdLowResource(PoolWithTag, v35, v37, v38);
        *(_QWORD *)(v45 + 24) = 9556LL;
        WdLogEvent5_WdLowResource(v45);
        operator delete[](v34);
        if ( P != v68 && P )
          ExFreePoolWithTag(P, 0);
        return 0LL;
      }
    }
  }
LABEL_49:
  v48 = *((_QWORD *)this + v20 + 79);
  if ( !v48 )
    return 0LL;
  DXGAUTOMUTEX::DXGAUTOMUTEX((DXGAUTOMUTEX *)&v64, (struct DXGFASTMUTEX *const)(v48 + 80), 0);
  if ( (unsigned int)Feature_253710648__private_IsEnabledDeviceUsage() )
    DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)&v64);
  v50 = *((_QWORD *)this + v20 + 79);
  if ( (*(_DWORD *)(v50 + 4) & 1) == 0 )
  {
    v51 = WdLogNewEntry5_WdAssertion(v50, v49);
    *(_QWORD *)(v51 + 24) = 9615LL;
    WdLogEvent5_WdAssertion(v51);
    v50 = *((_QWORD *)this + v20 + 79);
  }
  if ( !*(_DWORD *)(*(_QWORD *)(v50 + 24) + 16LL) )
  {
    v52 = WdLogNewEntry5_WdAssertion(v50, v49);
    *(_QWORD *)(v52 + 24) = 9616LL;
    WdLogEvent5_WdAssertion(v52);
  }
  if ( !v6 )
    goto LABEL_59;
  memset(v66, 0, 0x68uLL);
  v53 = (_QWORD *)*((_QWORD *)this + 2);
  v66[7] = 1LL;
  LOBYTE(v61) = 0;
  v66[2] = *(_QWORD *)(v53[2] + 2544LL);
  v54 = *((_QWORD *)this + v20 + 79);
  v66[3] = *(_QWORD *)(v53[2] + 2552LL);
  v55 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD, _QWORD *, unsigned int, int))(*(_QWORD *)(v53[80] + 8LL)
                                                                                       + 800LL))(
          v53[81],
          0LL,
          *(_QWORD *)(*(_QWORD *)(v54 + 24) + 24LL),
          v66,
          v61,
          v5);
  v59 = v55;
  if ( v55 < 0 )
  {
    v60 = WdLogNewEntry5_WdWarning(v57, v56, v58);
    *(_QWORD *)(v60 + 24) = v59;
    WdLogEvent5_WdWarning(v60);
    DXGDEVICE::CloseInternalCddPrimaryHandle(this, 0LL);
  }
  else
  {
LABEL_59:
    v4 = *(_DWORD *)(*(_QWORD *)(*((_QWORD *)this + v20 + 79) + 24LL) + 16LL);
  }
  DXGPROCESSCOPYPROTECTIONMUTEX::~DXGPROCESSCOPYPROTECTIONMUTEX((DXGPROCESSCOPYPROTECTIONMUTEX *)&v64);
  return v4;
}
