/*
 * XREFs of ?OpenResourceFromSharedHandle@DXGCONTEXT@@QEAAJPEAXPEAVCOREDEVICEACCESS@@PEAIIPEAPEAV1@22@Z @ 0x1C0331510
 * Callers:
 *     ?HandleVistaBltStub@DXGCONTEXT@@QEAAJ_KHPEAVCOREDEVICEACCESS@@PEAVDXGADAPTERSTOPRESETLOCKSHARED@@IPEAIPEAPEAV1@@Z @ 0x1C03304A4 (-HandleVistaBltStub@DXGCONTEXT@@QEAAJ_KHPEAVCOREDEVICEACCESS@@PEAVDXGADAPTERSTOPRESETLOCKSHARED@.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x1C0008E10 (DxgkLogInternalTriageEvent.c)
 *     ??_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z @ 0x1C000CD40 (--_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z.c)
 *     ??_V@YAXPEAX@Z @ 0x1C000D990 (--_V@YAXPEAX@Z.c)
 *     ?UmdManagesResidency@DXGDEVICE@@QEBAEXZ @ 0x1C000D9FC (-UmdManagesResidency@DXGDEVICE@@QEBAEXZ.c)
 *     __security_check_cookie @ 0x1C002B170 (__security_check_cookie.c)
 *     McTemplateK0q_EtwWriteTransfer @ 0x1C002B284 (McTemplateK0q_EtwWriteTransfer.c)
 *     _guard_dispatch_icall_nop @ 0x1C002CCC0 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C002CFC0 (memset.c)
 *     ??0DXGALLOCATIONREFERENCE@@QEAA@PEAVDXGALLOCATION@@@Z @ 0x1C017D4D0 (--0DXGALLOCATIONREFERENCE@@QEAA@PEAVDXGALLOCATION@@@Z.c)
 *     ??1DXGALLOCATIONREFERENCE@@QEAA@XZ @ 0x1C017EAE0 (--1DXGALLOCATIONREFERENCE@@QEAA@XZ.c)
 *     ??$OpenResource@U_D3DKMT_OPENRESOURCE@@@DXGDEVICE@@QEAAJPEAU_D3DKMT_OPENRESOURCE@@IPEAU_DXGSHAREDALLOCOBJECT@@IPEAVCOREDEVICEACCESS@@HPEAU_EPROCESS@@PEAIPEA_K@Z @ 0x1C0185854 (--$OpenResource@U_D3DKMT_OPENRESOURCE@@@DXGDEVICE@@QEAAJPEAU_D3DKMT_OPENRESOURCE@@IPEAU_DXGSHARE.c)
 *     ??$QueryResourceInfo@U_D3DKMT_QUERYRESOURCEINFO@@@DXGDEVICE@@QEAAJPEAU_D3DKMT_QUERYRESOURCEINFO@@IPEAU_DXGSHAREDALLOCOBJECT@@@Z @ 0x1C0185C5C (--$QueryResourceInfo@U_D3DKMT_QUERYRESOURCEINFO@@@DXGDEVICE@@QEAAJPEAU_D3DKMT_QUERYRESOURCEINFO@.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C0186AA0 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 */

__int64 __fastcall DXGCONTEXT::OpenResourceFromSharedHandle(
        DXGCONTEXT *this,
        void *a2,
        struct COREDEVICEACCESS *a3,
        unsigned int *a4,
        unsigned int a5,
        struct DXGCONTEXT **a6,
        unsigned int *a7,
        unsigned int *a8)
{
  unsigned int v8; // r12d
  __int64 v10; // rcx
  __int64 v11; // rdi
  __int64 v12; // r9
  _DWORD *v13; // r12
  unsigned int v14; // r13d
  unsigned __int64 v15; // rax
  __int64 v16; // rdx
  __int64 v17; // rcx
  __int64 v18; // r8
  __int64 v19; // r9
  int v20; // r15d
  int v21; // r14d
  int v22; // edi
  DXGDEVICE *v23; // rbx
  struct _EPROCESS *CurrentProcess; // rax
  int v25; // eax
  __int64 v26; // rdx
  __int64 v27; // rcx
  __int64 v28; // r8
  __int64 v29; // r9
  struct DXGPROCESS *Current; // rax
  __int64 v31; // rcx
  struct DXGPROCESS *v32; // r15
  __int64 v33; // rax
  char *v34; // r14
  unsigned int v35; // ebx
  __int64 v36; // rcx
  __int64 v37; // r8
  int v38; // r9d
  __int64 v39; // rax
  __int64 v40; // r8
  int v41; // ecx
  int v42; // r15d
  struct _EX_RUNDOWN_REF *v43; // rdx
  struct _EX_RUNDOWN_REF *v44; // rbx
  unsigned int v45; // r14d
  ULONG_PTR Count; // r8
  __int64 v47; // rbx
  int v48; // eax
  __int64 v49; // rdx
  __int64 v50; // r10
  __int64 v51; // rax
  int v52; // eax
  unsigned int v53; // ecx
  int v55; // [rsp+20h] [rbp-E0h]
  __int64 v56; // [rsp+50h] [rbp-B0h]
  int v57; // [rsp+50h] [rbp-B0h]
  struct _EX_RUNDOWN_REF *v58; // [rsp+58h] [rbp-A8h] BYREF
  int v59; // [rsp+60h] [rbp-A0h]
  struct COREDEVICEACCESS *v60; // [rsp+68h] [rbp-98h] BYREF
  void *v61; // [rsp+70h] [rbp-90h]
  void *v62; // [rsp+78h] [rbp-88h]
  void *v63; // [rsp+80h] [rbp-80h]
  __int64 v64; // [rsp+88h] [rbp-78h]
  __int64 v65; // [rsp+90h] [rbp-70h] BYREF
  __int64 v66; // [rsp+98h] [rbp-68h] BYREF
  __int128 v67; // [rsp+A0h] [rbp-60h] BYREF
  __int128 v68; // [rsp+B0h] [rbp-50h]
  __int64 v69; // [rsp+C0h] [rbp-40h] BYREF
  __int64 v70; // [rsp+C8h] [rbp-38h]
  unsigned int *v71; // [rsp+D0h] [rbp-30h]
  unsigned int *v72; // [rsp+D8h] [rbp-28h]
  char *v73; // [rsp+E0h] [rbp-20h]
  struct DXGPROCESS *v74; // [rsp+E8h] [rbp-18h]
  unsigned int *v75; // [rsp+F0h] [rbp-10h]
  _QWORD v76[10]; // [rsp+100h] [rbp+0h] BYREF
  _QWORD v77[14]; // [rsp+150h] [rbp+50h] BYREF

  v72 = a7;
  v8 = (unsigned int)a2;
  v60 = a3;
  v71 = a4;
  v75 = a8;
  v61 = 0LL;
  v62 = 0LL;
  v63 = 0LL;
  v67 = 0LL;
  v68 = 0LL;
  memset(v76, 0, 0x48uLL);
  v10 = *((_QWORD *)this + 2);
  DWORD1(v67) = v8;
  LODWORD(v67) = *(_DWORD *)(v10 + 436);
  LODWORD(v11) = DXGDEVICE::QueryResourceInfo<_D3DKMT_QUERYRESOURCEINFO>(v10, &v67, v8);
  if ( (int)v11 < 0 )
  {
    WdLogSingleEntry2(3LL, *((_QWORD *)this + 2), -1073741811LL);
    v13 = 0LL;
    goto LABEL_57;
  }
  v14 = HIDWORD(v68);
  v15 = 80LL * HIDWORD(v68);
  if ( !is_mul_ok(HIDWORD(v68), 0x50uLL) )
    v15 = -1LL;
  v56 = operator new[](v15, 0x4B677844u, 256LL, v12);
  if ( !v56 )
  {
    LODWORD(v11) = -1073741670;
    v13 = 0LL;
    goto LABEL_57;
  }
  v20 = DWORD1(v68);
  if ( DWORD1(v68) && (v61 = (void *)operator new[](DWORD1(v68), 0x4B677844u, 256LL, v19)) == 0LL
    || (v21 = DWORD2(v68)) != 0 && (v62 = (void *)operator new[](DWORD2(v68), 0x4B677844u, 256LL, v19)) == 0LL
    || (v22 = v68) != 0 && (v63 = (void *)operator new[]((unsigned int)v68, 0x4B677844u, 256LL, v19)) == 0LL )
  {
    WdLogSingleEntry1(6LL, *((_QWORD *)this + 2));
    DxgkLogInternalTriageEvent(
      0LL,
      262145,
      -1,
      (__int64)L"Device 0x%I64x: Failed memory allocation",
      *((_QWORD *)this + 2),
      0LL,
      0LL,
      0LL,
      0LL);
    v13 = (_DWORD *)v56;
    LODWORD(v11) = -1073741670;
    goto LABEL_57;
  }
  v23 = (DXGDEVICE *)*((_QWORD *)this + 2);
  LODWORD(v76[0]) = *((_DWORD *)v23 + 109);
  v76[7] = v61;
  v76[5] = v62;
  HIDWORD(v76[0]) = v8;
  v13 = (_DWORD *)v56;
  v76[3] = v63;
  LODWORD(v76[1]) = v14;
  v76[2] = v56;
  LODWORD(v76[8]) = v20;
  LODWORD(v76[6]) = v21;
  LODWORD(v76[4]) = v22;
  CurrentProcess = (struct _EPROCESS *)PsGetCurrentProcess(v17, v16, v18, v19);
  v25 = DXGDEVICE::OpenResource<_D3DKMT_OPENRESOURCE>(
          v23,
          (__int64)v76,
          HIDWORD(v76[0]),
          0LL,
          0,
          v60,
          0,
          CurrentProcess,
          0LL,
          0LL);
  LODWORD(v11) = v25;
  if ( v25 < 0 )
  {
    WdLogSingleEntry1(3LL, v25);
    goto LABEL_57;
  }
  Current = DXGPROCESS::GetCurrent(v27, v26, v28, v29);
  v31 = *((_QWORD *)this + 2);
  v32 = Current;
  v74 = Current;
  LODWORD(v11) = -1073741275;
  v33 = 0LL;
  v57 = 0;
  v64 = *(_QWORD *)(v31 + 16);
  if ( !v14 )
    goto LABEL_57;
  v34 = (char *)v32 + 248;
  v73 = (char *)v32 + 248;
  while ( 1 )
  {
    v70 = 80 * v33;
    v35 = v13[20 * v33];
    KeEnterCriticalRegion();
    if ( !(unsigned __int8)ExTryAcquirePushLockSharedEx(v34, 0LL) )
    {
      if ( bTracingEnabled )
      {
        v38 = *((_DWORD *)v34 + 6);
        if ( v38 != -1 && (Microsoft_Windows_DxgKrnlEnableBits & 0x100) != 0 )
          McTemplateK0q_EtwWriteTransfer(v36, (const EVENT_DESCRIPTOR *)"g", v37, v38);
      }
      ExAcquirePushLockSharedEx(v34, 0LL);
    }
    v39 = (v35 >> 6) & 0xFFFFFF;
    if ( (unsigned int)v39 < *((_DWORD *)v32 + 74)
      && (v40 = *((_QWORD *)v32 + 35),
          v41 = *(_DWORD *)(v40 + 16 * v39 + 8),
          ((v35 >> 25) & 0x60) == (*(_BYTE *)(v40 + 16 * v39 + 8) & 0x60))
      && (v41 & 0x2000) == 0
      && (v41 & 0x1F) != 0 )
    {
      if ( (v41 & 0x1F) == 5 )
      {
        v43 = *(struct _EX_RUNDOWN_REF **)(v40 + 16LL * (unsigned int)v39);
        v42 = 0;
        goto LABEL_34;
      }
      WdLogSingleEntry1(2LL, 267LL);
      v42 = 0;
      DxgkLogInternalTriageEvent(0LL, 0x40000, -1, (__int64)L"Handle type mismatch", 267LL, 0LL, 0LL, 0LL, 0LL);
    }
    else
    {
      v42 = 0;
    }
    v43 = 0LL;
LABEL_34:
    DXGALLOCATIONREFERENCE::DXGALLOCATIONREFERENCE((DXGALLOCATIONREFERENCE *)&v58, v43);
    ExReleasePushLockSharedEx(v34, 0LL);
    KeLeaveCriticalRegion();
    v44 = v58;
    if ( !v58 )
    {
      WdLogSingleEntry1(1LL, 6709LL);
      DxgkLogInternalTriageEvent(
        0LL,
        262146,
        -1,
        (__int64)L"AllocRef.m_pAllocation != NULL",
        6709LL,
        0LL,
        0LL,
        0LL,
        0LL);
      v44 = v58;
    }
    v45 = (LODWORD(v44[9].Count) >> 12) & 0x3F;
    v59 = 0;
    if ( v45 == *((_DWORD *)this + 100) )
    {
      v59 = 1;
    }
    else
    {
      v42 = 0;
      if ( !a5 )
        goto LABEL_53;
      while ( 1 )
      {
        v49 = (unsigned int)(v42 + 1);
        if ( v45 == *((_DWORD *)a6[v49] + 100) )
          break;
        ++v42;
        if ( (unsigned int)v49 >= a5 )
          goto LABEL_53;
      }
    }
    LODWORD(v11) = 0;
    if ( *((_BYTE *)this + 440) )
    {
      memset(v77, 0, 0x68uLL);
      v77[7] = 1LL;
      Count = v44[3].Count;
      v47 = v64;
      LOBYTE(v55) = 0;
      v48 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, ULONG_PTR, _QWORD *, int, unsigned int))(*(_QWORD *)(*(_QWORD *)(v64 + 648) + 8LL)
                                                                                              + 808LL))(
              *(_QWORD *)(v64 + 656),
              0LL,
              Count,
              v77,
              v55,
              v45);
      v11 = v48;
      if ( v48 < 0 )
        goto LABEL_40;
    }
    else
    {
      v47 = v64;
    }
    if ( DXGDEVICE::UmdManagesResidency(*((DXGDEVICE **)this + 2)) )
    {
      v65 = 0LL;
      v60 = 0LL;
      (*(void (__fastcall **)(_QWORD, _QWORD, __int64 *, struct COREDEVICEACCESS **))(*(_QWORD *)(*(_QWORD *)(v47 + 648)
                                                                                                + 8LL)
                                                                                    + 992LL))(
        *(_QWORD *)(v50 + 760),
        v45,
        &v65,
        &v60);
      v51 = *(_QWORD *)(v47 + 648);
      v66 = 0LL;
      v69 = 0LL;
      v52 = (*(__int64 (__fastcall **)(_QWORD, __int64, struct _EX_RUNDOWN_REF *, __int64, int, __int64 *, __int64 *))(*(_QWORD *)(v51 + 8) + 784LL))(
              *(_QWORD *)(v47 + 656),
              v65,
              v58 + 3,
              1LL,
              3,
              &v66,
              &v69);
      v11 = v52;
      if ( v52 < 0 )
      {
LABEL_40:
        WdLogSingleEntry1(3LL, v11);
        DXGALLOCATIONREFERENCE::~DXGALLOCATIONREFERENCE(&v58);
        goto LABEL_57;
      }
      if ( v52 == 259 )
      {
        (*(void (__fastcall **)(_QWORD, struct COREDEVICEACCESS **, __int64 *, __int64))(*(_QWORD *)(*(_QWORD *)(v47 + 648) + 8LL)
                                                                                       + 1000LL))(
          *(_QWORD *)(v47 + 656),
          &v60,
          &v66,
          1LL);
        LODWORD(v11) = 0;
      }
    }
    v53 = v13[(unsigned __int64)v70 / 4];
    if ( v59 )
      *v71 = v53;
    else
      v72[v42] = v53;
LABEL_53:
    DXGALLOCATIONREFERENCE::~DXGALLOCATIONREFERENCE(&v58);
    v33 = (unsigned int)(v57 + 1);
    v57 = v33;
    if ( (unsigned int)v33 >= v14 )
      break;
    v34 = v73;
    v32 = v74;
  }
  if ( (int)v11 >= 0 )
    *v75 = v14;
LABEL_57:
  operator delete[](v13);
  operator delete[](v61);
  operator delete[](v62);
  operator delete[](v63);
  return (unsigned int)v11;
}
