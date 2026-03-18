/*
 * XREFs of ?DxgkpDelayPresentCddPrimary@@YAXPEAU_DEVICE_OBJECT@@PEAXPEAU_IO_WORKITEM@@@Z @ 0x1C02113C0
 * Callers:
 *     <none>
 * Callees:
 *     ??0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z @ 0x1C000217C (--0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z.c)
 *     ??_V@YAXPEAX@Z @ 0x1C0002C80 (--_V@YAXPEAX@Z.c)
 *     ??1COREACCESS@@QEAA@XZ @ 0x1C0003F10 (--1COREACCESS@@QEAA@XZ.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C0004010 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?Release@DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAAXXZ @ 0x1C00041C0 (-Release@DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAAXXZ.c)
 *     ?AcquireSharedUncheck@COREDEVICEACCESS@@QEAAXPEAD@Z @ 0x1C00056C8 (-AcquireSharedUncheck@COREDEVICEACCESS@@QEAAXPEAD@Z.c)
 *     ?Acquire@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ @ 0x1C00063E8 (-Acquire@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ.c)
 *     ?Release@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ @ 0x1C0006444 (-Release@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ.c)
 *     ??0DXGDEVICEACCESSLOCKEXCLUSIVECDD@@QEAA@PEAVDXGDEVICE@@@Z @ 0x1C0006CEC (--0DXGDEVICEACCESSLOCKEXCLUSIVECDD@@QEAA@PEAVDXGDEVICE@@@Z.c)
 *     ??0DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAA@PEAVDXGDEVICE@@@Z @ 0x1C00071B4 (--0DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAA@PEAVDXGDEVICE@@@Z.c)
 *     ?IsVidPnSourceVisible@ADAPTER_DISPLAY@@QEBAEI@Z @ 0x1C000A37C (-IsVidPnSourceVisible@ADAPTER_DISPLAY@@QEBAEI@Z.c)
 *     ?IsVidPnSourceActive@ADAPTER_DISPLAY@@QEBAEI@Z @ 0x1C000A3B8 (-IsVidPnSourceActive@ADAPTER_DISPLAY@@QEBAEI@Z.c)
 *     ?AcquireExclusive@COREDEVICEACCESS@@QEAAJW4DXGADAPTER_EXCLUSIVEACCESS_REASON@@PEAD@Z @ 0x1C000B94C (-AcquireExclusive@COREDEVICEACCESS@@QEAAJW4DXGADAPTER_EXCLUSIVEACCESS_REASON@@PEAD@Z.c)
 *     ?GetVidPnSourceOwnerType@ADAPTER_DISPLAY@@QEBA?AW4_D3DKMT_VIDPNSOURCEOWNER_TYPE@@I@Z @ 0x1C000BA54 (-GetVidPnSourceOwnerType@ADAPTER_DISPLAY@@QEBA-AW4_D3DKMT_VIDPNSOURCEOWNER_TYPE@@I@Z.c)
 *     ?Attach@CPROCESSATTACHHELPER@@QEAAXPEAU_EPROCESS@@@Z @ 0x1C000CFF0 (-Attach@CPROCESSATTACHHELPER@@QEAAXPEAU_EPROCESS@@@Z.c)
 *     ?Release@DXGDEVICEACCESSLOCKEXCLUSIVECDD@@QEAAXXZ @ 0x1C001993C (-Release@DXGDEVICEACCESSLOCKEXCLUSIVECDD@@QEAAXXZ.c)
 *     ??0?$DXGPOINTERARRAYORDEREDACQUIRE@VDXGCONTEXT@@$1?AcquireContextLock@@YAXPEAV1@@Z$1?ReleaseContextLock@@YAX0@Z$03@@QEAA@PEAPEAVDXGCONTEXT@@IE@Z @ 0x1C0019BA0 (--0-$DXGPOINTERARRAYORDEREDACQUIRE@VDXGCONTEXT@@$1-AcquireContextLock@@YAXPEAV1@@Z$1-ReleaseCont.c)
 *     ??1?$DXGPOINTERARRAYORDEREDACQUIRE@VDXGCONTEXT@@$1?AcquireContextLock@@YAXPEAV1@@Z$1?ReleaseContextLock@@YAX0@Z$03@@QEAA@XZ @ 0x1C0019EC4 (--1-$DXGPOINTERARRAYORDEREDACQUIRE@VDXGCONTEXT@@$1-AcquireContextLock@@YAXPEAV1@@Z$1-ReleaseCont.c)
 *     __security_check_cookie @ 0x1C00243B0 (__security_check_cookie.c)
 *     ?DestroyDeviceNoLocks@ADAPTER_RENDER@@QEAAXPEAVDXGDEVICE@@@Z @ 0x1C00E2FD4 (-DestroyDeviceNoLocks@ADAPTER_RENDER@@QEAAXPEAVDXGDEVICE@@@Z.c)
 *     ?DestroyContext@DXGDEVICE@@QEAAXPEAVDXGCONTEXT@@PEAVCOREDEVICEACCESS@@@Z @ 0x1C00E4130 (-DestroyContext@DXGDEVICE@@QEAAXPEAVDXGCONTEXT@@PEAVCOREDEVICEACCESS@@@Z.c)
 *     DxgkGetCddDeviceAndContextForCurrentSession @ 0x1C013F06C (DxgkGetCddDeviceAndContextForCurrentSession.c)
 *     ?GetCddPrimaryAllocation@ADAPTER_DISPLAY@@QEBAPEAVDXGADAPTERALLOCATION@@IE@Z @ 0x1C0148430 (-GetCddPrimaryAllocation@ADAPTER_DISPLAY@@QEBAPEAVDXGADAPTERALLOCATION@@IE@Z.c)
 *     ?UsingSetTimingsFromVidPn@DXGADAPTER@@QEBAEXZ @ 0x1C014A2A4 (-UsingSetTimingsFromVidPn@DXGADAPTER@@QEBAEXZ.c)
 *     ?ReleaseConsoleSessionModeChangeLock@DXGSESSIONMGR@@QEAAXPEAVDXGSESSIONDATA@@@Z @ 0x1C016BB8C (-ReleaseConsoleSessionModeChangeLock@DXGSESSIONMGR@@QEAAXPEAVDXGSESSIONDATA@@@Z.c)
 *     ?AcquireConsoleSessionModeChangeLock@DXGSESSIONMGR@@QEAAPEAVDXGSESSIONDATA@@E@Z @ 0x1C016BBC0 (-AcquireConsoleSessionModeChangeLock@DXGSESSIONMGR@@QEAAPEAVDXGSESSIONDATA@@E@Z.c)
 *     ?PresentCddPrimary@ADAPTER_DISPLAY@@QEAAJPEAVDXGCONTEXT@@IPEAVCOREDEVICEACCESS@@@Z @ 0x1C0212958 (-PresentCddPrimary@ADAPTER_DISPLAY@@QEAAJPEAVDXGCONTEXT@@IPEAVCOREDEVICEACCESS@@@Z.c)
 */

void __fastcall DxgkpDelayPresentCddPrimary(__int64 IoObject, struct _LUID *Context, PIO_WORKITEM IoWorkItem)
{
  struct DXGGLOBAL *Global; // rax
  struct DXGSESSIONDATA *v5; // rax
  __int64 v6; // rdx
  __int64 v7; // rcx
  struct DXGSESSIONDATA *v8; // r13
  __int64 v9; // rax
  int CddDeviceAndContextForCurrentSession; // eax
  __int64 v11; // rdx
  __int64 v12; // rcx
  struct DXGDEVICE *v13; // rbx
  __int64 v14; // rsi
  _QWORD *v15; // rax
  __int64 v16; // rdx
  __int64 v17; // rcx
  volatile signed __int64 *v18; // r14
  DXGADAPTER **v19; // rsi
  __int64 v20; // r9
  __int64 v21; // rdx
  __int64 v22; // rcx
  __int64 v23; // r8
  __int64 v24; // r9
  __int64 v25; // rax
  int v26; // eax
  __int64 v27; // rdx
  __int64 v28; // rcx
  __int64 v29; // r15
  _QWORD *v30; // rax
  int v31; // eax
  __int64 v32; // rdx
  __int64 v33; // rcx
  __int64 v34; // r15
  struct DXGGLOBAL *v35; // rax
  struct DXGCONTEXT *v36; // rbx
  __int64 v37; // rsi
  __int64 v38; // rax
  __int64 v39; // r9
  char *v40; // rdx
  struct DXGCONTEXT *v41; // [rsp+38h] [rbp-D0h] BYREF
  struct DXGDEVICE *v42; // [rsp+40h] [rbp-C8h] BYREF
  _QWORD v43[2]; // [rsp+48h] [rbp-C0h] BYREF
  char v44; // [rsp+58h] [rbp-B0h]
  _QWORD v45[2]; // [rsp+68h] [rbp-A0h] BYREF
  __int64 v46; // [rsp+78h] [rbp-90h]
  _QWORD v47[2]; // [rsp+80h] [rbp-88h] BYREF
  _BYTE v48[16]; // [rsp+90h] [rbp-78h] BYREF
  _QWORD v49[7]; // [rsp+A0h] [rbp-68h] BYREF
  _BYTE v50[8]; // [rsp+D8h] [rbp-30h] BYREF
  _BYTE v51[64]; // [rsp+E0h] [rbp-28h] BYREF
  _BYTE v52[88]; // [rsp+120h] [rbp+18h] BYREF
  struct _KAPC_STATE ApcState; // [rsp+178h] [rbp+70h] BYREF
  char v54; // [rsp+1A8h] [rbp+A0h]
  _BYTE v55[8]; // [rsp+1B8h] [rbp+B0h] BYREF
  _BYTE v56[64]; // [rsp+1C0h] [rbp+B8h] BYREF
  _BYTE v57[88]; // [rsp+200h] [rbp+F8h] BYREF

  v42 = 0LL;
  v41 = 0LL;
  Global = DXGGLOBAL::GetGlobal(IoObject, (__int64)Context);
  v5 = DXGSESSIONMGR::AcquireConsoleSessionModeChangeLock(*((DXGSESSIONMGR **)Global + 102));
  v8 = v5;
  if ( !v5 )
  {
    v9 = WdLogNewEntry5_WdError(v7, v6);
    *(_QWORD *)(v9 + 24) = 295LL;
    WdLogEvent5_WdError(v9);
    operator delete[](Context);
    return;
  }
  v54 = 0;
  CPROCESSATTACHHELPER::Attach(&ApcState, *((PRKPROCESS *)v5 + 2329));
  CddDeviceAndContextForCurrentSession = DxgkGetCddDeviceAndContextForCurrentSession(Context, &v42, &v41, 0LL, 0);
  v13 = v42;
  v14 = CddDeviceAndContextForCurrentSession;
  if ( CddDeviceAndContextForCurrentSession >= 0 )
  {
    DXGDEVICEACCESSLOCKEXCLUSIVECDD::DXGDEVICEACCESSLOCKEXCLUSIVECDD((DXGDEVICEACCESSLOCKEXCLUSIVECDD *)v48, v42);
    v19 = *(DXGADAPTER ***)(*((_QWORD *)v13 + 231) + 2696LL);
    DXGPOINTERARRAYORDEREDACQUIRE<DXGCONTEXT,&void AcquireContextLock(DXGCONTEXT *),&void ReleaseContextLock(DXGCONTEXT *),4>::DXGPOINTERARRAYORDEREDACQUIRE<DXGCONTEXT,&void AcquireContextLock(DXGCONTEXT *),&void ReleaseContextLock(DXGCONTEXT *),4>(
      (__int64)v49,
      &v41,
      1u);
    v43[1] = v19[2];
    v44 = 0;
    DXGADAPTERSTOPRESETLOCKSHARED::Acquire((DXGADAPTERSTOPRESETLOCKSHARED *)v43);
    COREDEVICEACCESS::COREDEVICEACCESS((__int64)v50, (__int64)v13, 1, v20, 0);
    v18 = (volatile signed __int64 *)v41;
    if ( v49[0] )
    {
      v26 = COREDEVICEACCESS::AcquireExclusive((__int64)v50, 1u);
      v29 = v26;
      if ( v26 >= 0 )
      {
        if ( !DXGADAPTER::UsingSetTimingsFromVidPn(v19[2])
          || (unsigned int)ADAPTER_DISPLAY::GetVidPnSourceOwnerType((ADAPTER_DISPLAY *)v19, Context[1].LowPart)
          && (unsigned int)ADAPTER_DISPLAY::GetVidPnSourceOwnerType((ADAPTER_DISPLAY *)v19, Context[1].LowPart) != 3 )
        {
          goto LABEL_18;
        }
        if ( !ADAPTER_DISPLAY::GetCddPrimaryAllocation((ADAPTER_DISPLAY *)v19, Context[1].LowPart, 0) )
          goto LABEL_18;
        if ( !ADAPTER_DISPLAY::IsVidPnSourceActive((ADAPTER_DISPLAY *)v19, Context[1].LowPart) )
          goto LABEL_18;
        if ( ADAPTER_DISPLAY::IsVidPnSourceVisible((ADAPTER_DISPLAY *)v19, Context[1].LowPart) )
          goto LABEL_18;
        v31 = ADAPTER_DISPLAY::PresentCddPrimary(
                (ADAPTER_DISPLAY *)v19,
                (struct DXGCONTEXT *)v18,
                Context[1].LowPart,
                (struct COREDEVICEACCESS *)v50);
        v34 = v31;
        if ( v31 >= 0 )
          goto LABEL_18;
        v30 = (_QWORD *)WdLogNewEntry5_WdError(v33, v32);
        v30[3] = Context[1].LowPart;
        v30[4] = v19[2];
        v30[5] = v34;
      }
      else
      {
        v30 = (_QWORD *)WdLogNewEntry5_WdError(v28, v27);
        v30[3] = v13;
        v30[4] = v29;
      }
      WdLogEvent5_WdError(v30);
    }
    else
    {
      v25 = WdLogNewEntry5_WdLowResource(v22, v21, v23, v24);
      *(_QWORD *)(v25 + 24) = 345LL;
      WdLogEvent5_WdLowResource(v25);
    }
LABEL_18:
    COREACCESS::~COREACCESS((COREACCESS *)v52);
    COREACCESS::~COREACCESS((COREACCESS *)v51);
    if ( v44 )
      DXGADAPTERSTOPRESETLOCKSHARED::Release((DXGADAPTERSTOPRESETLOCKSHARED *)v43);
    DXGPOINTERARRAYORDEREDACQUIRE<DXGCONTEXT,&void AcquireContextLock(DXGCONTEXT *),&void ReleaseContextLock(DXGCONTEXT *),4>::~DXGPOINTERARRAYORDEREDACQUIRE<DXGCONTEXT,&void AcquireContextLock(DXGCONTEXT *),&void ReleaseContextLock(DXGCONTEXT *),4>((__int64)v49);
    DXGDEVICEACCESSLOCKEXCLUSIVECDD::Release((DXGDEVICEACCESSLOCKEXCLUSIVECDD *)v48);
    goto LABEL_21;
  }
  v15 = (_QWORD *)WdLogNewEntry5_WdError(v12, v11);
  v15[3] = Context->HighPart;
  v15[4] = Context->LowPart;
  v15[5] = v14;
  WdLogEvent5_WdError(v15);
  v18 = (volatile signed __int64 *)v41;
LABEL_21:
  v35 = DXGGLOBAL::GetGlobal(v17, v16);
  DXGSESSIONMGR::ReleaseConsoleSessionModeChangeLock(*((struct DXGSESSIONDATA ***)v35 + 102), v8);
  if ( v18 )
  {
    if ( _InterlockedExchangeAdd64(v18 + 4, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
    {
      v36 = v41;
      v37 = *((_QWORD *)v41 + 2);
      DXGDEVICEACCESSLOCKEXCLUSIVE::DXGDEVICEACCESSLOCKEXCLUSIVE(
        (DXGDEVICEACCESSLOCKEXCLUSIVE *)v47,
        (struct DXGDEVICE *)v37);
      v38 = *((_QWORD *)v36 + 2);
      LOBYTE(v46) = 0;
      v45[1] = *(_QWORD *)(*(_QWORD *)(v38 + 16) + 16LL);
      DXGADAPTERSTOPRESETLOCKSHARED::Acquire((DXGADAPTERSTOPRESETLOCKSHARED *)v45);
      COREDEVICEACCESS::COREDEVICEACCESS((__int64)v55, v37, 2, v39, 0);
      COREDEVICEACCESS::AcquireSharedUncheck((COREDEVICEACCESS *)v55, v40);
      if ( *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(v37 + 16) + 16LL) + 200LL) != 4 )
        DXGDEVICE::DestroyContext((DXGDEVICE *)v37, v41, (struct COREDEVICEACCESS *)v55);
      COREACCESS::~COREACCESS((COREACCESS *)v57);
      COREACCESS::~COREACCESS((COREACCESS *)v56);
      if ( (_BYTE)v46 )
        DXGADAPTERSTOPRESETLOCKSHARED::Release((DXGADAPTERSTOPRESETLOCKSHARED *)v45);
      if ( v47[0] )
        DXGDEVICEACCESSLOCKEXCLUSIVE::Release((DXGDEVICEACCESSLOCKEXCLUSIVE *)v47);
      if ( _InterlockedExchangeAdd64((volatile signed __int64 *)(v37 + 64), 0xFFFFFFFFFFFFFFFFuLL) == 1 )
        ADAPTER_RENDER::DestroyDeviceNoLocks(*(ADAPTER_RENDER **)(v37 + 16), (struct DXGDEVICE *)v37);
    }
    v13 = v42;
  }
  if ( v13 && _InterlockedExchangeAdd64((volatile signed __int64 *)v13 + 8, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
    ADAPTER_RENDER::DestroyDeviceNoLocks(*((ADAPTER_RENDER **)v42 + 2), v42);
  operator delete[](Context);
  if ( v54 )
    KeUnstackDetachProcess(&ApcState);
}
