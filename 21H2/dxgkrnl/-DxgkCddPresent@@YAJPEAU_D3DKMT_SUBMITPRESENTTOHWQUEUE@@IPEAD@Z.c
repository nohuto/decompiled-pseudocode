/*
 * XREFs of ?DxgkCddPresent@@YAJPEAU_D3DKMT_SUBMITPRESENTTOHWQUEUE@@IPEAD@Z @ 0x1C02DC4C0
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$DXGPOINTERARRAYORDEREDACQUIRE@VDXGCONTEXT@@$1?AcquireContextLock@@YAXPEAV1@@Z$1?ReleaseContextLock@@YAX0@Z$03@@QEAA@XZ @ 0x1C0001960 (--1-$DXGPOINTERARRAYORDEREDACQUIRE@VDXGCONTEXT@@$1-AcquireContextLock@@YAXPEAV1@@Z$1-ReleaseCont.c)
 *     ??0?$DXGPOINTERARRAYORDEREDACQUIRE@VDXGCONTEXT@@$1?AcquireContextLock@@YAXPEAV1@@Z$1?ReleaseContextLock@@YAX0@Z$03@@QEAA@PEAPEAVDXGCONTEXT@@IEE@Z @ 0x1C0001DB4 (--0-$DXGPOINTERARRAYORDEREDACQUIRE@VDXGCONTEXT@@$1-AcquireContextLock@@YAXPEAV1@@Z$1-ReleaseCont.c)
 *     DxgkLogInternalTriageEvent @ 0x1C0008E10 (DxgkLogInternalTriageEvent.c)
 *     ??0DXGCONTEXTBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGCONTEXT@@_N2@Z @ 0x1C0008FF0 (--0DXGCONTEXTBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGCONTEXT@@_N2@Z.c)
 *     ??1DXGCONTEXTBYHANDLE@@QEAA@XZ @ 0x1C0009178 (--1DXGCONTEXTBYHANDLE@@QEAA@XZ.c)
 *     ??0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z @ 0x1C000955C (--0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z.c)
 *     ?PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z @ 0x1C000B780 (-PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z.c)
 *     ??1COREACCESS@@QEAA@XZ @ 0x1C000BC90 (--1COREACCESS@@QEAA@XZ.c)
 *     ?AcquireShared@COREDEVICEACCESS@@QEAAJPEAD@Z @ 0x1C000C040 (-AcquireShared@COREDEVICEACCESS@@QEAAJPEAD@Z.c)
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x1C000D9B8 (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     ?Acquire@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ @ 0x1C000F3A0 (-Acquire@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ.c)
 *     ?Release@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ @ 0x1C000F3FC (-Release@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ.c)
 *     ?AcquireShared@DXGPUSHLOCK@@QEAAXXZ @ 0x1C000FA80 (-AcquireShared@DXGPUSHLOCK@@QEAAXXZ.c)
 *     ??0DXGDEVICEACCESSLOCKEXCLUSIVECDD@@QEAA@PEAVDXGDEVICE@@@Z @ 0x1C00137F4 (--0DXGDEVICEACCESSLOCKEXCLUSIVECDD@@QEAA@PEAVDXGDEVICE@@@Z.c)
 *     ?Release@DXGDEVICEACCESSLOCKEXCLUSIVECDD@@QEAAXXZ @ 0x1C001E30C (-Release@DXGDEVICEACCESSLOCKEXCLUSIVECDD@@QEAAXXZ.c)
 *     __security_check_cookie @ 0x1C002B170 (__security_check_cookie.c)
 *     McTemplateK0q_EtwWriteTransfer @ 0x1C002B284 (McTemplateK0q_EtwWriteTransfer.c)
 *     memset @ 0x1C002CFC0 (memset.c)
 *     ?PresentFromCdd@DXGCONTEXT@@QEAAJPEAU_D3DKMT_SUBMITPRESENTTOHWQUEUE@@IPEAVCOREDEVICEACCESS@@PEAVDXGADAPTERSTOPRESETLOCKSHARED@@PEAPEAV1@@Z @ 0x1C0159A40 (-PresentFromCdd@DXGCONTEXT@@QEAAJPEAU_D3DKMT_SUBMITPRESENTTOHWQUEUE@@IPEAVCOREDEVICEACCESS@@PEAV.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C0186AA0 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 */

__int64 __fastcall DxgkCddPresent(struct _D3DKMT_SUBMITPRESENTTOHWQUEUE *a1, unsigned int a2, char *a3)
{
  unsigned int v4; // edi
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // r8
  __int64 v9; // r9
  struct DXGPROCESS *Current; // rax
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // r8
  __int64 v14; // r9
  __int64 v15; // r15
  __int64 v16; // rax
  __int64 v17; // rdi
  __int64 v18; // rdx
  __int64 v19; // rcx
  __int64 v20; // r8
  __int64 v21; // r9
  __int64 v22; // rax
  D3DKMT_HANDLE hDevice; // edx
  __int64 v24; // rdx
  __int64 v25; // rcx
  __int64 v26; // r8
  __int64 v27; // r9
  __int64 *v28; // rsi
  D3DKMT_HANDLE v29; // ebx
  __int64 CurrentProcess; // rax
  __int64 v31; // rbx
  __int64 v32; // rdx
  __int64 v33; // rcx
  __int64 v34; // r8
  __int64 v35; // r9
  __int64 v36; // rax
  __int64 v37; // r9
  ULONG BroadcastContextCount; // ebx
  __int64 v39; // rbx
  _QWORD *Pool2; // rax
  __int64 v41; // rbx
  D3DKMT_HANDLE v42; // edi
  __int64 v43; // rax
  __int64 v44; // r8
  int v45; // ecx
  __int64 v46; // rdi
  __int64 v47; // r8
  PVOID v48; // rdx
  __int64 v49; // r9
  int v50; // eax
  int v51; // ebx
  int v52; // eax
  __int64 v53; // rcx
  __int64 v54; // r8
  int v57; // [rsp+58h] [rbp-A8h] BYREF
  __int64 v58; // [rsp+60h] [rbp-A0h]
  char v59; // [rsp+68h] [rbp-98h]
  PVOID P; // [rsp+70h] [rbp-90h]
  _BYTE v61[32]; // [rsp+78h] [rbp-88h] BYREF
  unsigned int v62; // [rsp+98h] [rbp-68h]
  struct DXGCONTEXT *v63[3]; // [rsp+A0h] [rbp-60h] BYREF
  _BYTE v64[8]; // [rsp+B8h] [rbp-48h] BYREF
  __int64 v65; // [rsp+C0h] [rbp-40h]
  char v66; // [rsp+C8h] [rbp-38h]
  _BYTE v67[16]; // [rsp+D0h] [rbp-30h] BYREF
  _QWORD v68[8]; // [rsp+E0h] [rbp-20h] BYREF
  _BYTE v69[8]; // [rsp+120h] [rbp+20h] BYREF
  _BYTE v70[64]; // [rsp+128h] [rbp+28h] BYREF
  _BYTE v71[88]; // [rsp+168h] [rbp+68h] BYREF

  v57 = -1;
  v4 = a2;
  v58 = 0LL;
  if ( (qword_1C012F870 & 2) != 0 )
  {
    v59 = 1;
    v57 = 3008;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) != 0 )
      McTemplateK0q_EtwWriteTransfer((__int64)a1, &EventProfilerEnter, (__int64)a3, 3008);
  }
  else
  {
    v59 = 0;
  }
  DXGETWPROFILER_BASE::PushProfilerEntry((__int64)&v57, 3008);
  Current = DXGPROCESS::GetCurrent(v7, v6, v8, v9);
  v15 = (__int64)Current;
  if ( Current )
  {
    hDevice = a1->PrivatePresentData.hDevice;
    v63[0] = 0LL;
    DXGCONTEXTBYHANDLE::DXGCONTEXTBYHANDLE((DXGCONTEXTBYHANDLE *)v67, hDevice, Current, v63, 0, 1);
    v28 = (__int64 *)v63[0];
    if ( !v63[0] )
    {
      v29 = a1->PrivatePresentData.hDevice;
      CurrentProcess = PsGetCurrentProcess(v25, v24, v26, v27);
      LODWORD(v17) = -1073741811;
      WdLogSingleEntry3(2LL, -1073741811LL, CurrentProcess, v29);
      v31 = a1->PrivatePresentData.hDevice;
      v36 = PsGetCurrentProcess(v33, v32, v34, v35);
      DxgkLogInternalTriageEvent(
        0LL,
        0x40000,
        -1,
        (__int64)L"Invalid context handle 0x%I64x 0x%I64x 0x%I64x",
        -1073741811LL,
        v36,
        v31,
        0LL,
        0LL);
LABEL_50:
      DXGCONTEXTBYHANDLE::~DXGCONTEXTBYHANDLE((DXGCONTEXTBYHANDLE *)v67);
      goto LABEL_51;
    }
    DXGDEVICEACCESSLOCKEXCLUSIVECDD::DXGDEVICEACCESSLOCKEXCLUSIVECDD(
      (DXGDEVICEACCESSLOCKEXCLUSIVECDD *)v63,
      *((struct DXGDEVICE **)v63[0] + 2));
    BroadcastContextCount = a1->PrivatePresentData.BroadcastContextCount;
    if ( BroadcastContextCount > 0x40 )
    {
      LODWORD(v17) = -1073741811;
      WdLogSingleEntry2(3LL, v28, -1073741811LL);
LABEL_49:
      DXGDEVICEACCESSLOCKEXCLUSIVECDD::Release((DXGDEVICEACCESSLOCKEXCLUSIVECDD *)v63);
      goto LABEL_50;
    }
    v39 = BroadcastContextCount + 1;
    P = 0LL;
    v62 = 0;
    if ( (unsigned int)v39 <= 4 )
    {
      Pool2 = v61;
      P = v61;
      if ( (_DWORD)v39 )
      {
        memset(v61, 0, 8LL * (unsigned int)v39);
        Pool2 = P;
      }
    }
    else
    {
      if ( 0xFFFFFFFFFFFFFFFFuLL / (unsigned int)v39 < 8 )
        goto LABEL_17;
      Pool2 = (_QWORD *)ExAllocatePool2(256LL, 8 * v39, 1265072196LL, v37);
      P = Pool2;
    }
    v62 = v39;
    if ( Pool2 )
    {
      *Pool2 = v28;
      v41 = 0LL;
      if ( a1->PrivatePresentData.BroadcastContextCount )
      {
        while ( 1 )
        {
          v42 = a1->PrivatePresentData.BroadcastContext[v41];
          DXGPUSHLOCK::AcquireShared((DXGPUSHLOCK *)(v15 + 248));
          v43 = (v42 >> 6) & 0xFFFFFF;
          if ( (unsigned int)v43 < *(_DWORD *)(v15 + 296)
            && (v44 = *(_QWORD *)(v15 + 280),
                v45 = *(_DWORD *)(v44 + 16 * v43 + 8),
                ((v42 >> 25) & 0x60) == (*(_BYTE *)(v44 + 16 * v43 + 8) & 0x60))
            && (v45 & 0x2000) == 0
            && (v45 & 0x1F) != 0 )
          {
            if ( (v45 & 0x1F) == 7 )
            {
              v46 = *(_QWORD *)(v44 + 16LL * (unsigned int)v43);
            }
            else
            {
              WdLogSingleEntry1(2LL, 267LL);
              v46 = 0LL;
              DxgkLogInternalTriageEvent(0LL, 0x40000, -1, (__int64)L"Handle type mismatch", 267LL, 0LL, 0LL, 0LL, 0LL);
            }
          }
          else
          {
            v46 = 0LL;
          }
          ExReleasePushLockSharedEx(v15 + 248, 0LL);
          KeLeaveCriticalRegion();
          v47 = (unsigned int)(v41 + 1);
          *((_QWORD *)P + v47) = v46;
          v48 = P;
          v37 = *((_QWORD *)P + v47);
          if ( !v37 || *(_QWORD *)(v37 + 16) != v28[2] )
            break;
          v41 = (unsigned int)v47;
          if ( (unsigned int)v47 >= a1->PrivatePresentData.BroadcastContextCount )
          {
            v4 = a2;
            goto LABEL_33;
          }
        }
        LODWORD(v17) = -1073741811;
        WdLogSingleEntry4(2LL, v28, a1->PrivatePresentData.BroadcastContext[v41], v41, -1073741811LL);
        DxgkLogInternalTriageEvent(
          0LL,
          0x40000,
          -1,
          (__int64)L"0x%I64x failed with invalid broadcast context 0x%I64x at index %I64d returning 0x%I64x",
          (__int64)v28,
          a1->PrivatePresentData.BroadcastContext[v41],
          v41,
          -1073741811LL,
          0LL);
      }
      else
      {
        v48 = P;
LABEL_33:
        DXGPOINTERARRAYORDEREDACQUIRE<DXGCONTEXT,&void AcquireContextLock(DXGCONTEXT *),&void ReleaseContextLock(DXGCONTEXT *),4>::DXGPOINTERARRAYORDEREDACQUIRE<DXGCONTEXT,&void AcquireContextLock(DXGCONTEXT *),&void ReleaseContextLock(DXGCONTEXT *),4>(
          (__int64)v68,
          v48,
          v62,
          v37,
          1);
        if ( v68[0] )
        {
          v65 = *(_QWORD *)(*(_QWORD *)(v28[2] + 16) + 16LL);
          v66 = 0;
          DXGADAPTERSTOPRESETLOCKSHARED::Acquire((DXGADAPTERSTOPRESETLOCKSHARED *)v64);
          COREDEVICEACCESS::COREDEVICEACCESS((__int64)v69, v28[2], 2, v49, 0);
          v50 = COREDEVICEACCESS::AcquireShared((COREDEVICEACCESS *)v69, a3);
          v51 = v50;
          if ( v50 >= 0 )
          {
            v52 = DXGCONTEXT::PresentFromCdd(
                    (DXGCONTEXT *)v28,
                    a1,
                    v4,
                    (struct COREDEVICEACCESS *)v69,
                    (struct DXGADAPTERSTOPRESETLOCKSHARED *)v64,
                    (struct DXGCONTEXT **)P);
            v17 = v52;
            if ( v52 < 0 )
            {
              if ( v52 == -1071775482 )
              {
                WdLogSingleEntry3(4LL, -1071775482LL, v28, v15);
              }
              else if ( v52 != -1071774910 )
              {
                WdLogSingleEntry3(2LL, v52, v28, v15);
                DxgkLogInternalTriageEvent(
                  0LL,
                  0x40000,
                  -1,
                  (__int64)L"0x%I64x PresentFromCdd failed 0x%I64x 0x%I64x",
                  v17,
                  (__int64)v28,
                  v15,
                  0LL,
                  0LL);
              }
            }
          }
          else
          {
            WdLogSingleEntry3(4LL, v50, v28, v15);
            LODWORD(v17) = v51;
          }
          COREACCESS::~COREACCESS((COREACCESS *)v71);
          COREACCESS::~COREACCESS((COREACCESS *)v70);
          if ( v66 )
            DXGADAPTERSTOPRESETLOCKSHARED::Release((DXGADAPTERSTOPRESETLOCKSHARED *)v64);
        }
        else
        {
          WdLogSingleEntry1(3LL, 2286LL);
          LODWORD(v17) = -1073741801;
        }
        DXGPOINTERARRAYORDEREDACQUIRE<DXGCONTEXT,&void AcquireContextLock(DXGCONTEXT *),&void ReleaseContextLock(DXGCONTEXT *),4>::~DXGPOINTERARRAYORDEREDACQUIRE<DXGCONTEXT,&void AcquireContextLock(DXGCONTEXT *),&void ReleaseContextLock(DXGCONTEXT *),4>((__int64)v68);
      }
      goto LABEL_45;
    }
LABEL_17:
    WdLogSingleEntry1(3LL, 2247LL);
    LODWORD(v17) = -1073741801;
LABEL_45:
    if ( P != v61 && P )
      ExFreePoolWithTag(P, 0);
    P = 0LL;
    v62 = 0;
    goto LABEL_49;
  }
  v16 = PsGetCurrentProcess(v12, v11, v13, v14);
  LODWORD(v17) = -1073741811;
  WdLogSingleEntry2(2LL, -1073741811LL, v16);
  v22 = PsGetCurrentProcess(v19, v18, v20, v21);
  DxgkLogInternalTriageEvent(
    0LL,
    0x40000,
    -1,
    (__int64)L"Presenting from unexpected process 0x%I64x 0x%I64x",
    -1073741811LL,
    v22,
    0LL,
    0LL,
    0LL);
LABEL_51:
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v57);
  if ( v59 )
  {
    LOBYTE(v53) = BYTE1(Microsoft_Windows_DxgKrnlEnableBits);
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) != 0 )
      McTemplateK0q_EtwWriteTransfer(v53, &EventProfilerExit, v54, v57);
  }
  return (unsigned int)v17;
}
