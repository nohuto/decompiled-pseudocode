/*
 * XREFs of ?OpenResourceFromSharedHandle@DXGCONTEXT@@QEAAJPEAXPEAVCOREDEVICEACCESS@@PEAIIPEAPEAV1@22@Z @ 0x1C027C6DC
 * Callers:
 *     ?HandleVistaBltStub@DXGCONTEXT@@QEAAJ_KHPEAVCOREDEVICEACCESS@@PEAVDXGADAPTERSTOPRESETLOCKSHARED@@IPEAIPEAPEAV1@@Z @ 0x1C027B800 (-HandleVistaBltStub@DXGCONTEXT@@QEAAJ_KHPEAVCOREDEVICEACCESS@@PEAVDXGADAPTERSTOPRESETLOCKSHARED@.c)
 * Callees:
 *     ??_V@YAXPEAX@Z @ 0x1C000A43C (--_V@YAXPEAX@Z.c)
 *     ?UmdManagesResidency@DXGDEVICE@@QEBAEXZ @ 0x1C000A6F4 (-UmdManagesResidency@DXGDEVICE@@QEBAEXZ.c)
 *     ??_U@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C000A840 (--_U@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 *     __security_check_cookie @ 0x1C0024300 (__security_check_cookie.c)
 *     McTemplateK0q_EtwWriteTransfer @ 0x1C0024408 (McTemplateK0q_EtwWriteTransfer.c)
 *     _guard_dispatch_icall_nop @ 0x1C0026570 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C0026840 (memset.c)
 *     ??1DXGALLOCATIONREFERENCE@@QEAA@XZ @ 0x1C00FD6D0 (--1DXGALLOCATIONREFERENCE@@QEAA@XZ.c)
 *     ??0DXGALLOCATIONREFERENCE@@QEAA@PEAVDXGALLOCATION@@@Z @ 0x1C00FEE50 (--0DXGALLOCATIONREFERENCE@@QEAA@PEAVDXGALLOCATION@@@Z.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C0119460 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ??$QueryResourceInfo@U_D3DKMT_QUERYRESOURCEINFO@@@DXGDEVICE@@QEAAJPEAU_D3DKMT_QUERYRESOURCEINFO@@IPEAU_DXGSHAREDALLOCOBJECT@@@Z @ 0x1C011E92C (--$QueryResourceInfo@U_D3DKMT_QUERYRESOURCEINFO@@@DXGDEVICE@@QEAAJPEAU_D3DKMT_QUERYRESOURCEINFO@.c)
 *     ??$OpenResource@U_D3DKMT_OPENRESOURCE@@@DXGDEVICE@@QEAAJPEAU_D3DKMT_OPENRESOURCE@@IPEAU_DXGSHAREDALLOCOBJECT@@IPEAVCOREDEVICEACCESS@@HPEAU_EPROCESS@@PEAIPEA_K@Z @ 0x1C011ECF4 (--$OpenResource@U_D3DKMT_OPENRESOURCE@@@DXGDEVICE@@QEAAJPEAU_D3DKMT_OPENRESOURCE@@IPEAU_DXGSHARE.c)
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
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // rdi
  __int64 v14; // r8
  __int64 v15; // rax
  _DWORD *v16; // r12
  unsigned int v17; // r13d
  SIZE_T v18; // rax
  __int64 v19; // rdx
  __int64 v20; // rcx
  int v21; // r15d
  __int64 v22; // r8
  __int64 v23; // r9
  __int64 v24; // rax
  int v25; // r14d
  int v26; // edi
  DXGDEVICE *v27; // rbx
  struct _EPROCESS *CurrentProcess; // rax
  int v29; // eax
  __int64 v30; // rdx
  __int64 v31; // rcx
  __int64 v32; // r8
  __int64 v33; // rax
  struct DXGPROCESS *Current; // rax
  __int64 v35; // rcx
  struct DXGPROCESS *v36; // r15
  __int64 v37; // rax
  char *v38; // r14
  unsigned int v39; // ebx
  __int64 v40; // rcx
  __int64 v41; // r8
  int v42; // r9d
  __int64 v43; // rax
  __int64 v44; // r8
  int v45; // ecx
  __int64 v46; // rcx
  __int64 v47; // rax
  struct _EX_RUNDOWN_REF *v48; // rdx
  __int64 v49; // rdx
  __int64 v50; // rcx
  struct _EX_RUNDOWN_REF *v51; // rbx
  __int64 v52; // rax
  unsigned int Count; // r14d
  int v54; // r15d
  unsigned int v55; // r14d
  int v56; // eax
  __int64 v57; // rcx
  __int64 v58; // r8
  __int64 v59; // r10
  __int64 v60; // rbx
  __int64 v61; // rdx
  int v62; // eax
  unsigned int v63; // ecx
  __int64 v64; // rax
  __int64 v65; // rdx
  unsigned int v67; // [rsp+20h] [rbp-E0h]
  _DWORD *v68; // [rsp+50h] [rbp-B0h]
  int v69; // [rsp+50h] [rbp-B0h]
  struct _EX_RUNDOWN_REF *v70; // [rsp+58h] [rbp-A8h] BYREF
  int v71; // [rsp+60h] [rbp-A0h]
  struct COREDEVICEACCESS *v72; // [rsp+68h] [rbp-98h] BYREF
  void *v73; // [rsp+70h] [rbp-90h]
  void *v74; // [rsp+78h] [rbp-88h]
  void *v75; // [rsp+80h] [rbp-80h]
  __int64 v76; // [rsp+88h] [rbp-78h]
  __int64 v77; // [rsp+90h] [rbp-70h] BYREF
  __int64 v78; // [rsp+98h] [rbp-68h] BYREF
  __int128 v79; // [rsp+A0h] [rbp-60h] BYREF
  unsigned __int64 v80[2]; // [rsp+B0h] [rbp-50h]
  __int64 v81; // [rsp+C0h] [rbp-40h] BYREF
  __int64 v82; // [rsp+C8h] [rbp-38h]
  unsigned int *v83; // [rsp+D0h] [rbp-30h]
  unsigned int *v84; // [rsp+D8h] [rbp-28h]
  char *v85; // [rsp+E0h] [rbp-20h]
  struct DXGPROCESS *v86; // [rsp+E8h] [rbp-18h]
  unsigned int *v87; // [rsp+F0h] [rbp-10h]
  _QWORD v88[10]; // [rsp+100h] [rbp+0h] BYREF
  _QWORD v89[14]; // [rsp+150h] [rbp+50h] BYREF

  v73 = 0LL;
  v8 = (unsigned int)a2;
  v68 = 0LL;
  v74 = 0LL;
  v75 = 0LL;
  v84 = a7;
  v72 = a3;
  v83 = a4;
  v87 = a8;
  v79 = 0LL;
  *(_OWORD *)v80 = 0LL;
  memset(v88, 0, 0x48uLL);
  v10 = *((_QWORD *)this + 2);
  DWORD1(v79) = v8;
  LODWORD(v79) = *(_DWORD *)(v10 + 436);
  LODWORD(v13) = DXGDEVICE::QueryResourceInfo<_D3DKMT_QUERYRESOURCEINFO>(v10, &v79, v8);
  if ( (int)v13 < 0 )
  {
    v15 = WdLogNewEntry5_WdWarning(v12, v11, v14);
    *(_QWORD *)(v15 + 24) = *((_QWORD *)this + 2);
    *(_QWORD *)(v15 + 32) = -1073741811LL;
    WdLogEvent5_WdWarning(v15);
LABEL_3:
    v16 = v68;
    goto LABEL_56;
  }
  v17 = HIDWORD(v80[1]);
  v18 = 80LL * HIDWORD(v80[1]);
  if ( !is_mul_ok(HIDWORD(v80[1]), 0x50uLL) )
    v18 = -1LL;
  v68 = operator new[](v18, 0x4B677844u, PagedPool);
  if ( !v68 )
  {
    LODWORD(v13) = -1073741670;
    v16 = 0LL;
    goto LABEL_56;
  }
  v21 = HIDWORD(v80[0]);
  if ( HIDWORD(v80[0]) && (v73 = operator new[](HIDWORD(v80[0]), 0x4B677844u, PagedPool)) == 0LL
    || (v25 = v80[1]) != 0 && (v74 = operator new[](LODWORD(v80[1]), 0x4B677844u, PagedPool)) == 0LL
    || (v26 = v80[0]) != 0 && (v75 = operator new[](LODWORD(v80[0]), 0x4B677844u, PagedPool)) == 0LL )
  {
    v24 = WdLogNewEntry5_WdLowResource(v20, v19, v22, v23);
    *(_QWORD *)(v24 + 24) = *((_QWORD *)this + 2);
    WdLogEvent5_WdLowResource(v24);
    LODWORD(v13) = -1073741670;
    goto LABEL_3;
  }
  v27 = (DXGDEVICE *)*((_QWORD *)this + 2);
  LODWORD(v88[0]) = *((_DWORD *)v27 + 109);
  v88[7] = v73;
  v88[5] = v74;
  HIDWORD(v88[0]) = v8;
  v16 = v68;
  v88[3] = v75;
  LODWORD(v88[1]) = v17;
  v88[2] = v68;
  LODWORD(v88[8]) = v21;
  LODWORD(v88[6]) = v25;
  LODWORD(v88[4]) = v26;
  CurrentProcess = (struct _EPROCESS *)PsGetCurrentProcess(v20, v19);
  v29 = DXGDEVICE::OpenResource<_D3DKMT_OPENRESOURCE>(
          v27,
          (__int64)v88,
          HIDWORD(v88[0]),
          0LL,
          0,
          v72,
          0,
          CurrentProcess,
          0LL,
          0LL);
  v13 = v29;
  if ( v29 < 0 )
  {
    v33 = WdLogNewEntry5_WdWarning(v31, v30, v32);
    *(_QWORD *)(v33 + 24) = v13;
    WdLogEvent5_WdWarning(v33);
    goto LABEL_56;
  }
  Current = DXGPROCESS::GetCurrent(v31, v30);
  v35 = *((_QWORD *)this + 2);
  v36 = Current;
  v86 = Current;
  LODWORD(v13) = -1073741275;
  v37 = 0LL;
  v69 = 0;
  v76 = *(_QWORD *)(v35 + 16);
  if ( !v17 )
    goto LABEL_56;
  v38 = (char *)v36 + 208;
  v85 = (char *)v36 + 208;
  while ( 1 )
  {
    v82 = 80 * v37;
    v39 = v16[20 * v37];
    KeEnterCriticalRegion();
    if ( !(unsigned __int8)ExTryAcquirePushLockSharedEx(v38, 0LL) )
    {
      if ( bTracingEnabled )
      {
        v42 = *((_DWORD *)v38 + 6);
        if ( v42 != -1 && (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
          McTemplateK0q_EtwWriteTransfer(v40, &EventBlockThread, v41, v42);
      }
      ExAcquirePushLockSharedEx(v38, 0LL);
    }
    v43 = (v39 >> 6) & 0xFFFFFF;
    if ( (unsigned int)v43 >= *((_DWORD *)v36 + 64) )
      goto LABEL_31;
    v44 = *((_QWORD *)v36 + 30);
    v45 = *(_DWORD *)(v44 + 16 * v43 + 8);
    if ( ((v39 >> 25) & 0x60) != (*(_BYTE *)(v44 + 16 * v43 + 8) & 0x60) || (v45 & 0x2000) != 0 || (v45 & 0x1F) == 0 )
      goto LABEL_31;
    v46 = v45 & 0x1F;
    if ( (_BYTE)v46 != 5 )
    {
      v47 = WdLogNewEntry5_WdError(v46, 2LL * (unsigned int)v43);
      *(_QWORD *)(v47 + 24) = 267LL;
      WdLogEvent5_WdError(v47);
LABEL_31:
      v48 = 0LL;
      goto LABEL_32;
    }
    v48 = *(struct _EX_RUNDOWN_REF **)(v44 + 16LL * (unsigned int)v43);
LABEL_32:
    DXGALLOCATIONREFERENCE::DXGALLOCATIONREFERENCE((DXGALLOCATIONREFERENCE *)&v70, v48);
    ExReleasePushLockSharedEx(v38, 0LL);
    KeLeaveCriticalRegion();
    v51 = v70;
    if ( !v70 )
    {
      v52 = WdLogNewEntry5_WdAssertion(v50, v49);
      *(_QWORD *)(v52 + 24) = 6495LL;
      WdLogEvent5_WdAssertion(v52);
      v51 = v70;
    }
    Count = v51[9].Count;
    v54 = 0;
    v71 = 0;
    v55 = (Count >> 12) & 0x3F;
    if ( v55 == *((_DWORD *)this + 104) )
    {
      v71 = 1;
    }
    else
    {
      if ( !a5 )
        goto LABEL_51;
      while ( 1 )
      {
        v49 = (unsigned int)(v54 + 1);
        if ( v55 == *((_DWORD *)a6[v49] + 104) )
          break;
        ++v54;
        if ( (unsigned int)v49 >= a5 )
          goto LABEL_51;
      }
    }
    LODWORD(v13) = 0;
    if ( *((_BYTE *)this + 456) )
    {
      memset(v89, 0, 0x68uLL);
      v89[7] = 1LL;
      LOBYTE(v67) = 0;
      v56 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, ULONG_PTR, _QWORD *, unsigned int, unsigned int))(*(_QWORD *)(*(_QWORD *)(v76 + 640) + 8LL) + 800LL))(
              *(_QWORD *)(v76 + 648),
              0LL,
              v51[3].Count,
              v89,
              v67,
              v55);
      v13 = v56;
      if ( v56 < 0 )
      {
LABEL_53:
        v64 = WdLogNewEntry5_WdWarning(v57, v49, v58);
        *(_QWORD *)(v64 + 24) = v13;
        WdLogEvent5_WdWarning(v64);
        DXGALLOCATIONREFERENCE::~DXGALLOCATIONREFERENCE(&v70, v65);
        goto LABEL_56;
      }
    }
    if ( DXGDEVICE::UmdManagesResidency(*((DXGDEVICE **)this + 2)) )
    {
      v77 = 0LL;
      v72 = 0LL;
      v60 = v76;
      (*(void (__fastcall **)(_QWORD, _QWORD, __int64 *, struct COREDEVICEACCESS **))(*(_QWORD *)(*(_QWORD *)(v76 + 640)
                                                                                                + 8LL)
                                                                                    + 984LL))(
        *(_QWORD *)(v59 + 760),
        v55,
        &v77,
        &v72);
      v61 = *(_QWORD *)(v60 + 640);
      v78 = 0LL;
      v81 = 0LL;
      v62 = (*(__int64 (__fastcall **)(_QWORD, __int64, struct _EX_RUNDOWN_REF *, __int64, int, __int64 *, __int64 *))(*(_QWORD *)(v61 + 8) + 776LL))(
              *(_QWORD *)(v60 + 648),
              v77,
              v70 + 3,
              1LL,
              3,
              &v78,
              &v81);
      v13 = v62;
      if ( v62 < 0 )
        goto LABEL_53;
      if ( v62 == 259 )
      {
        (*(void (__fastcall **)(_QWORD, struct COREDEVICEACCESS **, __int64 *, __int64))(*(_QWORD *)(*(_QWORD *)(v60 + 640) + 8LL)
                                                                                       + 992LL))(
          *(_QWORD *)(v60 + 648),
          &v72,
          &v78,
          1LL);
        LODWORD(v13) = 0;
      }
    }
    if ( (int)v13 >= 0 )
    {
      v63 = v16[(unsigned __int64)v82 / 4];
      if ( v71 )
      {
        *v83 = v63;
      }
      else
      {
        v49 = (__int64)v84;
        v84[v54] = v63;
      }
    }
LABEL_51:
    DXGALLOCATIONREFERENCE::~DXGALLOCATIONREFERENCE(&v70, v49);
    v37 = (unsigned int)(v69 + 1);
    v69 = v37;
    if ( (unsigned int)v37 >= v17 )
      break;
    v38 = v85;
    v36 = v86;
  }
  if ( (int)v13 >= 0 )
    *v87 = v17;
LABEL_56:
  operator delete[](v16);
  operator delete[](v73);
  operator delete[](v74);
  operator delete[](v75);
  return (unsigned int)v13;
}
