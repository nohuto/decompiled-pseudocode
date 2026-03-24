/*
 * XREFs of ?DxgkCddPresent@@YAJPEAU_D3DKMT_SUBMITPRESENTTOHWQUEUE@@IPEAD@Z @ 0x1C022D090
 * Callers:
 *     <none>
 * Callees:
 *     ??0DXGCONTEXTBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGCONTEXT@@_N@Z @ 0x1C0001E14 (--0DXGCONTEXTBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGCONTEXT@@_N@Z.c)
 *     ??0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z @ 0x1C00022BC (--0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z.c)
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x1C0002CE8 (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     ??1COREACCESS@@QEAA@XZ @ 0x1C00040C0 (--1COREACCESS@@QEAA@XZ.c)
 *     ??1DXGCONTEXTBYHANDLE@@QEAA@XZ @ 0x1C0004200 (--1DXGCONTEXTBYHANDLE@@QEAA@XZ.c)
 *     ?PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z @ 0x1C0006318 (-PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z.c)
 *     ?Acquire@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ @ 0x1C00065B8 (-Acquire@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ.c)
 *     ?Release@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ @ 0x1C0006614 (-Release@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ.c)
 *     ?AcquireShared@COREDEVICEACCESS@@QEAAJPEAD@Z @ 0x1C0006CE0 (-AcquireShared@COREDEVICEACCESS@@QEAAJPEAD@Z.c)
 *     ??0DXGDEVICEACCESSLOCKEXCLUSIVECDD@@QEAA@PEAVDXGDEVICE@@@Z @ 0x1C0006F9C (--0DXGDEVICEACCESSLOCKEXCLUSIVECDD@@QEAA@PEAVDXGDEVICE@@@Z.c)
 *     ?AcquireShared@DXGPUSHLOCK@@QEAAXXZ @ 0x1C0007018 (-AcquireShared@DXGPUSHLOCK@@QEAAXXZ.c)
 *     ?Release@DXGDEVICEACCESSLOCKEXCLUSIVECDD@@QEAAXXZ @ 0x1C001A29C (-Release@DXGDEVICEACCESSLOCKEXCLUSIVECDD@@QEAAXXZ.c)
 *     ??0?$DXGPOINTERARRAYORDEREDACQUIRE@VDXGCONTEXT@@$1?AcquireContextLock@@YAXPEAV1@@Z$1?ReleaseContextLock@@YAX0@Z$03@@QEAA@PEAPEAVDXGCONTEXT@@IE@Z @ 0x1C001A500 (--0-$DXGPOINTERARRAYORDEREDACQUIRE@VDXGCONTEXT@@$1-AcquireContextLock@@YAXPEAV1@@Z$1-ReleaseCont.c)
 *     ??1?$DXGPOINTERARRAYORDEREDACQUIRE@VDXGCONTEXT@@$1?AcquireContextLock@@YAXPEAV1@@Z$1?ReleaseContextLock@@YAX0@Z$03@@QEAA@XZ @ 0x1C001A824 (--1-$DXGPOINTERARRAYORDEREDACQUIRE@VDXGCONTEXT@@$1-AcquireContextLock@@YAXPEAV1@@Z$1-ReleaseCont.c)
 *     __security_check_cookie @ 0x1C0024910 (__security_check_cookie.c)
 *     McTemplateK0q_EtwWriteTransfer @ 0x1C0024B10 (McTemplateK0q_EtwWriteTransfer.c)
 *     memset @ 0x1C0028F00 (memset.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C0115560 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?PresentFromCdd@DXGCONTEXT@@QEAAJPEAU_D3DKMT_SUBMITPRESENTTOHWQUEUE@@IPEAVCOREDEVICEACCESS@@PEAVDXGADAPTERSTOPRESETLOCKSHARED@@PEAPEAV1@@Z @ 0x1C015B24C (-PresentFromCdd@DXGCONTEXT@@QEAAJPEAU_D3DKMT_SUBMITPRESENTTOHWQUEUE@@IPEAVCOREDEVICEACCESS@@PEAV.c)
 */

__int64 __fastcall DxgkCddPresent(struct _D3DKMT_SUBMITPRESENTTOHWQUEUE *a1, unsigned int a2, char *a3)
{
  char *v3; // r13
  unsigned int v4; // r12d
  __int64 v6; // rdx
  __int64 v7; // rcx
  struct DXGPROCESS *Current; // rax
  __int64 v9; // rdx
  __int64 v10; // rcx
  struct DXGPROCESS *v11; // r14
  __int64 v12; // rdi
  __int64 v13; // rbx
  __int64 v14; // rdx
  __int64 v15; // rcx
  __int64 v16; // rdx
  D3DKMT_HANDLE hDevice; // edx
  __int64 v18; // rdx
  __int64 v19; // rcx
  __int64 *v20; // rbx
  _QWORD *v21; // rbx
  __int64 v22; // rdx
  __int64 v23; // rcx
  unsigned __int64 v24; // rdx
  __int64 v25; // rcx
  __int64 v26; // r8
  ULONG BroadcastContextCount; // r15d
  __int64 v28; // rax
  unsigned int v29; // r15d
  _BYTE *PoolWithTag; // rax
  unsigned int v31; // edi
  D3DKMT_HANDLE v32; // r15d
  __int64 v33; // rax
  __int64 v34; // r8
  int v35; // ecx
  __int64 v36; // rcx
  __int64 v37; // rax
  __int64 v38; // r15
  __int64 v39; // rcx
  __int64 v40; // r8
  PVOID v41; // rdx
  __int64 v42; // r9
  _QWORD *v43; // rax
  __int64 v44; // rcx
  __int64 v45; // rdx
  __int64 v46; // rcx
  __int64 v47; // r8
  __int64 v48; // rax
  __int64 v49; // r9
  int v50; // eax
  __int64 v51; // rdx
  __int64 v52; // rcx
  _QWORD *v53; // rax
  int v54; // eax
  __int64 v55; // rdx
  __int64 v56; // rcx
  _QWORD *v57; // rax
  __int64 v58; // rax
  __int64 v59; // rcx
  __int64 v60; // r8
  int v63; // [rsp+38h] [rbp-C8h] BYREF
  __int64 v64; // [rsp+40h] [rbp-C0h]
  char v65; // [rsp+48h] [rbp-B8h]
  PVOID P; // [rsp+50h] [rbp-B0h]
  _BYTE v67[32]; // [rsp+58h] [rbp-A8h] BYREF
  unsigned int v68; // [rsp+78h] [rbp-88h]
  struct DXGCONTEXT *v69[2]; // [rsp+80h] [rbp-80h] BYREF
  char *v70; // [rsp+90h] [rbp-70h]
  _BYTE v71[8]; // [rsp+98h] [rbp-68h] BYREF
  __int64 v72; // [rsp+A0h] [rbp-60h]
  char v73; // [rsp+A8h] [rbp-58h]
  _BYTE v74[16]; // [rsp+B0h] [rbp-50h] BYREF
  _QWORD v75[8]; // [rsp+C0h] [rbp-40h] BYREF
  _BYTE v76[8]; // [rsp+100h] [rbp+0h] BYREF
  _BYTE v77[64]; // [rsp+108h] [rbp+8h] BYREF
  _BYTE v78[88]; // [rsp+148h] [rbp+48h] BYREF

  v63 = -1;
  v3 = a3;
  v70 = a3;
  v4 = a2;
  v64 = 0LL;
  if ( (qword_1C00B19B0 & 2) != 0 )
  {
    v65 = 1;
    v63 = 3008;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      McTemplateK0q_EtwWriteTransfer((__int64)a1, &EventProfilerEnter, (__int64)a3, 3008);
  }
  else
  {
    v65 = 0;
  }
  DXGETWPROFILER_BASE::PushProfilerEntry((__int64)&v63, 3008LL);
  Current = DXGPROCESS::GetCurrent(v7, v6);
  v11 = Current;
  if ( !Current )
  {
    LODWORD(v12) = -1073741811;
    v13 = WdLogNewEntry5_WdError(v10, v9);
    *(_QWORD *)(v13 + 24) = -1073741811LL;
    *(_QWORD *)(v13 + 32) = PsGetCurrentProcess(v15, v14);
    WdLogEvent5_WdError(v13);
    goto LABEL_52;
  }
  hDevice = a1->PrivatePresentData.hDevice;
  v69[0] = 0LL;
  DXGCONTEXTBYHANDLE::DXGCONTEXTBYHANDLE((DXGCONTEXTBYHANDLE *)v74, hDevice, Current, v69, 0);
  v20 = (__int64 *)v69[0];
  if ( !v69[0] )
  {
    LODWORD(v12) = -1073741811;
    v21 = (_QWORD *)WdLogNewEntry5_WdError(v19, v18);
    v21[3] = -1073741811LL;
    v21[4] = PsGetCurrentProcess(v23, v22);
    v21[5] = a1->PrivatePresentData.hDevice;
    WdLogEvent5_WdError(v21);
    goto LABEL_51;
  }
  DXGDEVICEACCESSLOCKEXCLUSIVECDD::DXGDEVICEACCESSLOCKEXCLUSIVECDD(
    (DXGDEVICEACCESSLOCKEXCLUSIVECDD *)v69,
    *((struct DXGDEVICE **)v69[0] + 2));
  BroadcastContextCount = a1->PrivatePresentData.BroadcastContextCount;
  if ( BroadcastContextCount > 0x40 )
  {
    v28 = WdLogNewEntry5_WdWarning(v25, v24, v26);
    LODWORD(v12) = -1073741811;
    *(_QWORD *)(v28 + 24) = v20;
    *(_QWORD *)(v28 + 32) = -1073741811LL;
    WdLogEvent5_WdWarning(v28);
    goto LABEL_50;
  }
  P = 0LL;
  v29 = BroadcastContextCount + 1;
  v68 = 0;
  if ( v29 <= 4 )
  {
    PoolWithTag = v67;
  }
  else
  {
    v24 = 0xFFFFFFFFFFFFFFFFuLL % v29;
    if ( 0xFFFFFFFFFFFFFFFFuLL / v29 < 8 )
    {
LABEL_45:
      v58 = WdLogNewEntry5_WdWarning(v25, v24, v26);
      *(_QWORD *)(v58 + 24) = 2194LL;
      WdLogEvent5_WdWarning(v58);
      LODWORD(v12) = -1073741801;
      goto LABEL_46;
    }
    PoolWithTag = ExAllocatePoolWithTag(PagedPool, 8LL * v29, 0x4B677844u);
  }
  v68 = v29;
  P = PoolWithTag;
  if ( !PoolWithTag )
    goto LABEL_45;
  memset(PoolWithTag, 0, 8LL * v29);
  if ( !P )
    goto LABEL_45;
  *(_QWORD *)P = v20;
  v31 = 0;
  if ( !a1->PrivatePresentData.BroadcastContextCount )
  {
    v41 = P;
LABEL_32:
    DXGPOINTERARRAYORDEREDACQUIRE<DXGCONTEXT,&void AcquireContextLock(DXGCONTEXT *),&void ReleaseContextLock(DXGCONTEXT *),4>::DXGPOINTERARRAYORDEREDACQUIRE<DXGCONTEXT,&void AcquireContextLock(DXGCONTEXT *),&void ReleaseContextLock(DXGCONTEXT *),4>(
      (__int64)v75,
      v41,
      v68);
    if ( !v75[0] )
    {
      v48 = WdLogNewEntry5_WdWarning(v46, v45, v47);
      *(_QWORD *)(v48 + 24) = 2233LL;
      WdLogEvent5_WdWarning(v48);
      LODWORD(v12) = -1073741801;
LABEL_44:
      DXGPOINTERARRAYORDEREDACQUIRE<DXGCONTEXT,&void AcquireContextLock(DXGCONTEXT *),&void ReleaseContextLock(DXGCONTEXT *),4>::~DXGPOINTERARRAYORDEREDACQUIRE<DXGCONTEXT,&void AcquireContextLock(DXGCONTEXT *),&void ReleaseContextLock(DXGCONTEXT *),4>((__int64)v75);
      goto LABEL_46;
    }
    v72 = *(_QWORD *)(*(_QWORD *)(v20[2] + 16) + 16LL);
    v73 = 0;
    DXGADAPTERSTOPRESETLOCKSHARED::Acquire((DXGADAPTERSTOPRESETLOCKSHARED *)v71);
    COREDEVICEACCESS::COREDEVICEACCESS((__int64)v76, v20[2], 2, v49, 0);
    v50 = COREDEVICEACCESS::AcquireShared((COREDEVICEACCESS *)v76, v3);
    v12 = v50;
    if ( v50 >= 0 )
    {
      v54 = DXGCONTEXT::PresentFromCdd(
              (DXGCONTEXT *)v20,
              a1,
              v4,
              (struct COREDEVICEACCESS *)v76,
              (struct DXGADAPTERSTOPRESETLOCKSHARED *)v71,
              (struct DXGCONTEXT **)P);
      v12 = v54;
      if ( v54 >= 0 )
        goto LABEL_42;
      if ( v54 != -1071775482 )
      {
        if ( v54 != -1071774910 )
        {
          v57 = (_QWORD *)WdLogNewEntry5_WdError(v56, v55);
          v57[3] = v12;
          v57[4] = v20;
          v57[5] = v11;
          WdLogEvent5_WdError(v57);
        }
        goto LABEL_42;
      }
      v53 = (_QWORD *)WdLogNewEntry5_WdEvent(v56, v55);
      v53[3] = -1071775482LL;
    }
    else
    {
      v53 = (_QWORD *)WdLogNewEntry5_WdEvent(v52, v51);
      v53[3] = v12;
    }
    v53[4] = v20;
    v53[5] = v11;
    WdLogEvent5_WdEvent(v53);
LABEL_42:
    COREACCESS::~COREACCESS((COREACCESS *)v78);
    COREACCESS::~COREACCESS((COREACCESS *)v77);
    if ( v73 )
      DXGADAPTERSTOPRESETLOCKSHARED::Release((DXGADAPTERSTOPRESETLOCKSHARED *)v71);
    goto LABEL_44;
  }
  while ( 1 )
  {
    v32 = a1->PrivatePresentData.BroadcastContext[v31];
    DXGPUSHLOCK::AcquireShared((struct DXGPROCESS *)((char *)v11 + 208));
    v33 = (v32 >> 6) & 0xFFFFFF;
    if ( (unsigned int)v33 < *((_DWORD *)v11 + 64) )
    {
      v34 = *((_QWORD *)v11 + 30);
      v35 = *(_DWORD *)(v34 + 16 * v33 + 8);
      if ( ((v32 >> 25) & 0x60) == (*(_BYTE *)(v34 + 16 * v33 + 8) & 0x60) && (v35 & 0x2000) == 0 && (v35 & 0x1F) != 0 )
      {
        v36 = v35 & 0x1F;
        if ( (_BYTE)v36 == 7 )
        {
          v38 = *(_QWORD *)(v34 + 16LL * (unsigned int)v33);
          goto LABEL_25;
        }
        v37 = WdLogNewEntry5_WdError(v36, 2LL * (unsigned int)v33);
        *(_QWORD *)(v37 + 24) = 316LL;
        WdLogEvent5_WdError(v37);
      }
    }
    v38 = 0LL;
LABEL_25:
    ExReleasePushLockSharedEx((char *)v11 + 208, 0LL);
    KeLeaveCriticalRegion();
    v40 = v31 + 1;
    *((_QWORD *)P + v40) = v38;
    v41 = P;
    v42 = *((_QWORD *)P + v40);
    if ( !v42 || *(_QWORD *)(v42 + 16) != v20[2] )
      break;
    ++v31;
    if ( (unsigned int)v40 >= a1->PrivatePresentData.BroadcastContextCount )
    {
      v4 = a2;
      v3 = v70;
      goto LABEL_32;
    }
  }
  v43 = (_QWORD *)WdLogNewEntry5_WdError(v39, P);
  v43[3] = v20;
  v43[4] = a1->PrivatePresentData.BroadcastContext[v31];
  v44 = v31;
  LODWORD(v12) = -1073741811;
  v43[5] = v44;
  v43[6] = -1073741811LL;
  WdLogEvent5_WdError(v43);
LABEL_46:
  if ( P != v67 && P )
    ExFreePoolWithTag(P, 0);
  P = 0LL;
  v68 = 0;
LABEL_50:
  DXGDEVICEACCESSLOCKEXCLUSIVECDD::Release((DXGDEVICEACCESSLOCKEXCLUSIVECDD *)v69);
LABEL_51:
  DXGCONTEXTBYHANDLE::~DXGCONTEXTBYHANDLE((DXGCONTEXTBYHANDLE *)v74);
LABEL_52:
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v63, v16);
  if ( v65 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    McTemplateK0q_EtwWriteTransfer(v59, &EventProfilerExit, v60, v63);
  return (unsigned int)v12;
}
