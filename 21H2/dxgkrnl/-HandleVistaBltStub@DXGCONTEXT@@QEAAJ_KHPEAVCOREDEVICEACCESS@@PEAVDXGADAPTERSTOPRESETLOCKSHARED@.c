/*
 * XREFs of ?HandleVistaBltStub@DXGCONTEXT@@QEAAJ_KHPEAVCOREDEVICEACCESS@@PEAVDXGADAPTERSTOPRESETLOCKSHARED@@IPEAIPEAPEAV1@@Z @ 0x1C03304A4
 * Callers:
 *     DxgkRender @ 0x1C01592B0 (DxgkRender.c)
 *     ?DxgkSubmitCommandInternal@@YAJPEBU_D3DKMT_SUBMITCOMMAND@@PEAVDXGPROCESS@@@Z @ 0x1C018F6E0 (-DxgkSubmitCommandInternal@@YAJPEBU_D3DKMT_SUBMITCOMMAND@@PEAVDXGPROCESS@@@Z.c)
 * Callees:
 *     ?InitializeSubmitData@CVidSchSubmitData@@QEAAXXZ @ 0x1C00019F8 (-InitializeSubmitData@CVidSchSubmitData@@QEAAXXZ.c)
 *     ??1CVidSchSubmitData@@QEAA@XZ @ 0x1C0001B60 (--1CVidSchSubmitData@@QEAA@XZ.c)
 *     DxgkLogInternalTriageEvent @ 0x1C0008E10 (DxgkLogInternalTriageEvent.c)
 *     ?DXGGLOBAL_GetGlobal@@YAPEAVDXGGLOBAL@@XZ @ 0x1C000BBD0 (-DXGGLOBAL_GetGlobal@@YAPEAVDXGGLOBAL@@XZ.c)
 *     ?AcquireShared@COREDEVICEACCESS@@QEAAJPEAD@Z @ 0x1C000C040 (-AcquireShared@COREDEVICEACCESS@@QEAAJPEAD@Z.c)
 *     ?IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ @ 0x1C000C10C (-IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ.c)
 *     ??_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z @ 0x1C000CD40 (--_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z.c)
 *     ??_V@YAXPEAX@Z @ 0x1C000D990 (--_V@YAXPEAX@Z.c)
 *     ?AcquireSharedUncheck@COREDEVICEACCESS@@QEAAXPEAD@Z @ 0x1C000EE78 (-AcquireSharedUncheck@COREDEVICEACCESS@@QEAAXPEAD@Z.c)
 *     ?Release@COREDEVICEACCESS@@QEAAXXZ @ 0x1C000EEA8 (-Release@COREDEVICEACCESS@@QEAAXXZ.c)
 *     ?Acquire@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ @ 0x1C000F3A0 (-Acquire@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ.c)
 *     ?Release@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ @ 0x1C000F3FC (-Release@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ.c)
 *     ?Lock@CWin32kLocks@@QEAAJPEAUHWND__@@HHH@Z @ 0x1C0020C00 (-Lock@CWin32kLocks@@QEAAJPEAUHWND__@@HHH@Z.c)
 *     __security_check_cookie @ 0x1C002B170 (__security_check_cookie.c)
 *     ?Unlock@CWin32kLocks@@QEAAXXZ @ 0x1C002C6E4 (-Unlock@CWin32kLocks@@QEAAXXZ.c)
 *     ?vUnlock@DXGSTABLEVISRGNANDSPRITE@@QEAAXXZ @ 0x1C002C754 (-vUnlock@DXGSTABLEVISRGNANDSPRITE@@QEAAXXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C002CCC0 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C002CFC0 (memset.c)
 *     ?CopyPresentArgs@DXGCONTEXT@@QEAAJPEAU_D3DKMT_PRESENT@@PEAVDXGPROCESS@@@Z @ 0x1C002EDD6 (-CopyPresentArgs@DXGCONTEXT@@QEAAJPEAU_D3DKMT_PRESENT@@PEAVDXGPROCESS@@@Z.c)
 *     ?GetVistaBltStubInfo@DXGDEVICE@@QEAAPEAUVISTABLTSTUBINFO@@H@Z @ 0x1C0057434 (-GetVistaBltStubInfo@DXGDEVICE@@QEAAPEAUVISTABLTSTUBINFO@@H@Z.c)
 *     ?Present@DXGCONTEXT@@QEAAJPEBUDXGK_PRESENT_PARAMS@@PEAVCOREDEVICEACCESS@@PEAVDXGADAPTERSTOPRESETLOCKSHARED@@PEAVCWin32kLocks@@PEAPEAV1@PEAUVIDSCH_SUBMIT_DATA_BASE@@@Z @ 0x1C017D520 (-Present@DXGCONTEXT@@QEAAJPEBUDXGK_PRESENT_PARAMS@@PEAVCOREDEVICEACCESS@@PEAVDXGADAPTERSTOPRESET.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C0186AA0 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?DestroyAllocation@DXGCONTEXT@@QEAAJIPEAVCOREDEVICEACCESS@@@Z @ 0x1C03301AC (-DestroyAllocation@DXGCONTEXT@@QEAAJIPEAVCOREDEVICEACCESS@@@Z.c)
 *     ?OpenResourceFromSharedHandle@DXGCONTEXT@@QEAAJPEAXPEAVCOREDEVICEACCESS@@PEAIIPEAPEAV1@22@Z @ 0x1C0331510 (-OpenResourceFromSharedHandle@DXGCONTEXT@@QEAAJPEAXPEAVCOREDEVICEACCESS@@PEAIIPEAPEAV1@22@Z.c)
 */

__int64 __fastcall DXGCONTEXT::HandleVistaBltStub(
        DXGCONTEXT *this,
        __int64 a2,
        __int64 a3,
        DXGADAPTER **a4,
        struct DXGADAPTERSTOPRESETLOCKSHARED *a5,
        unsigned int a6,
        unsigned int *a7,
        struct DXGCONTEXT **a8)
{
  __int64 v8; // r15
  int v11; // ebx
  __int64 v12; // rcx
  __int64 v13; // rax
  unsigned int v14; // r12d
  unsigned int *v15; // r13
  __int64 v16; // rbx
  __int64 v17; // rdi
  __int64 v19; // rcx
  __int64 v20; // rdx
  int v21; // ebx
  int v22; // eax
  int v23; // ecx
  char *v24; // rdx
  int v25; // edi
  __int64 v26; // r9
  unsigned __int64 v27; // rax
  __int64 v28; // r9
  unsigned int *v29; // rdi
  unsigned __int64 v30; // rax
  struct DXGCONTEXT **v31; // r12
  __int64 v32; // r8
  __int64 v33; // r9
  unsigned int v34; // eax
  unsigned int v35; // edi
  DXGDEVICE *v36; // rcx
  int v37; // r12d
  struct VISTABLTSTUBINFO *VistaBltStubInfo; // rax
  __int64 v40; // rax
  struct DXGGLOBAL *Global; // rax
  char *v42; // rbx
  PSLIST_ENTRY v43; // rdi
  __int64 (__fastcall *v44)(__int64, __int64, __int64, char *); // rax
  __int64 v45; // rdx
  __int64 v46; // r8
  __int64 v47; // rcx
  __int64 v48; // rdx
  __int64 v49; // rcx
  __int64 v50; // rcx
  __int64 v51; // rdx
  __int64 v52; // r8
  __int64 v53; // r9
  __int64 v54; // rcx
  struct _SLIST_ENTRY v55; // xmm0
  unsigned int v56; // eax
  struct DXGCONTEXT **v57; // rbx
  struct DXGPROCESS *Current; // rax
  __int64 v59; // r9
  struct DXGGLOBAL *v60; // rax
  union _SLIST_HEADER *v61; // r13
  DXGADAPTERSTOPRESETLOCKSHARED *v62; // rdi
  char *v63; // rdx
  __int64 v64; // r12
  __int64 v65; // rdx
  unsigned int *v66; // rdi
  __int64 v67; // rdx
  unsigned int v68; // [rsp+50h] [rbp-B0h]
  unsigned int v69; // [rsp+54h] [rbp-ACh] BYREF
  unsigned int v70; // [rsp+58h] [rbp-A8h] BYREF
  __int64 v71; // [rsp+60h] [rbp-A0h]
  unsigned int v72; // [rsp+68h] [rbp-98h] BYREF
  unsigned int v73; // [rsp+6Ch] [rbp-94h] BYREF
  __int64 v74; // [rsp+70h] [rbp-90h] BYREF
  DXGADAPTERSTOPRESETLOCKSHARED *v75; // [rsp+78h] [rbp-88h]
  __int64 v76; // [rsp+80h] [rbp-80h]
  int v77; // [rsp+88h] [rbp-78h]
  HWND v78; // [rsp+90h] [rbp-70h]
  void *v79; // [rsp+98h] [rbp-68h] BYREF
  struct VIDSCH_SUBMIT_DATA_BASE *v80[2]; // [rsp+A0h] [rbp-60h] BYREF
  struct DXGCONTEXT **v81; // [rsp+B0h] [rbp-50h]
  __int128 v82; // [rsp+C0h] [rbp-40h] BYREF
  __int64 v83; // [rsp+D0h] [rbp-30h]
  __int64 v84; // [rsp+D8h] [rbp-28h]
  __int128 v85; // [rsp+E0h] [rbp-20h] BYREF
  __int64 v86; // [rsp+F0h] [rbp-10h]
  __int64 v87; // [rsp+F8h] [rbp-8h]
  __int64 v88; // [rsp+100h] [rbp+0h]
  __int128 v89; // [rsp+108h] [rbp+8h] BYREF
  struct _SLIST_ENTRY v90; // [rsp+118h] [rbp+18h] BYREF
  __int128 v91; // [rsp+128h] [rbp+28h] BYREF

  v8 = a6;
  v90.Next = (struct _SLIST_ENTRY *)a2;
  v75 = a5;
  v11 = 0;
  v81 = a8;
  v77 = a3;
  if ( a2 >= 0 )
    return (unsigned int)v11;
  v79 = 0LL;
  v12 = HIDWORD(a2);
  v80[0] = (struct VIDSCH_SUBMIT_DATA_BASE *)(unsigned int)a2;
  LODWORD(v12) = HIDWORD(a2) & 0x7FFFFFFF;
  v13 = *((_QWORD *)this + 2);
  v14 = 0;
  v89 = 0LL;
  v74 = 0LL;
  v15 = 0LL;
  v91 = 0LL;
  v16 = *(_QWORD *)(v13 + 1848);
  v88 = v16;
  v78 = (HWND)v12;
  v70 = 0;
  v68 = 0;
  v72 = 0;
  v71 = 0LL;
  v76 = 0LL;
  v73 = 0;
  v69 = 0;
  v17 = *((_QWORD *)DXGPROCESS::GetCurrent(v12, 0LL, a3, (__int64)a4) + 11);
  if ( !v17 )
    return 3221225485LL;
  v19 = *((_QWORD *)this + 2);
  if ( v16 )
    v20 = v16;
  else
    v20 = *(_QWORD *)(*(_QWORD *)(v19 + 16) + 16LL);
  v84 = *(_QWORD *)(*(_QWORD *)(v19 + 40) + 88LL);
  v82 = 0LL;
  v83 = 0LL;
  v85 = 0LL;
  v86 = 0LL;
  v87 = v20;
  DXGADAPTERSTOPRESETLOCKSHARED::Release(v75);
  COREDEVICEACCESS::Release((COREDEVICEACCESS *)a4);
  v21 = CWin32kLocks::Lock((CWin32kLocks *)&v82, v78, 1, 1, 0);
  if ( v21 >= 0 )
  {
    (*(void (__fastcall **)(_QWORD, void **))(v17 + 232))(v82, &v79);
    if ( (*(unsigned int (__fastcall **)(_QWORD, __int128 *))(v17 + 72))(v82, &v89)
      && (*(unsigned int (__fastcall **)(HWND, __int128 *))(v17 + 360))(v78, &v91) )
    {
      v22 = (*(__int64 (__fastcall **)(_QWORD, __int64 *))(v17 + 312))(v82, &v74);
      v23 = v21;
      if ( !v22 )
        v23 = -1073741811;
      v21 = v23;
    }
    else
    {
      v21 = -1073741811;
    }
  }
  CWin32kLocks::Unlock((CWin32kLocks *)&v82);
  DXGSTABLEVISRGNANDSPRITE::vUnlock((DXGSTABLEVISRGNANDSPRITE *)&v85);
  DXGADAPTERSTOPRESETLOCKSHARED::Acquire(v75);
  v25 = COREDEVICEACCESS::AcquireShared((COREDEVICEACCESS *)a4, 0LL);
  if ( v25 < 0 )
  {
    COREDEVICEACCESS::AcquireSharedUncheck((COREDEVICEACCESS *)a4, v24);
    return (unsigned int)v25;
  }
  if ( v21 < 0 )
  {
    v11 = 0;
    v29 = 0LL;
    goto LABEL_68;
  }
  if ( !a6 )
  {
    v29 = 0LL;
    goto LABEL_27;
  }
  v27 = 4LL * a6;
  if ( !is_mul_ok(a6, 4uLL) )
    v27 = -1LL;
  v71 = operator new[](v27, 0x4B677844u, 256LL, v26);
  v29 = (unsigned int *)v71;
  if ( v71 )
  {
    v30 = 4LL * a6;
    if ( !is_mul_ok(a6, 4uLL) )
      v30 = -1LL;
    v76 = operator new[](v30, 0x4B677844u, 256LL, v28);
    v15 = (unsigned int *)v76;
    if ( !v76 )
    {
      v11 = -1073741670;
LABEL_72:
      if ( v29 )
      {
        if ( (_DWORD)v8 )
        {
          v64 = (unsigned int)v8;
          do
          {
            v65 = *v29;
            if ( (_DWORD)v65 )
              DXGCONTEXT::DestroyAllocation(this, v65, (struct COREDEVICEACCESS *)a4, v26);
            ++v29;
            --v64;
          }
          while ( v64 );
          v29 = (unsigned int *)v71;
        }
        operator delete[](v29);
      }
      if ( v15 )
      {
        if ( (_DWORD)v8 )
        {
          v66 = v15;
          do
          {
            v67 = *v66;
            if ( (_DWORD)v67 )
              DXGCONTEXT::DestroyAllocation(this, v67, (struct COREDEVICEACCESS *)a4, v26);
            ++v66;
            --v8;
          }
          while ( v8 );
        }
        operator delete[](v15);
      }
      return (unsigned int)v11;
    }
LABEL_27:
    v31 = v81;
    v11 = DXGCONTEXT::OpenResourceFromSharedHandle(
            this,
            v80[0],
            (struct COREDEVICEACCESS *)a4,
            &v70,
            a6,
            v81,
            v29,
            &v73);
    if ( v11 < 0 )
    {
      v14 = v70;
      goto LABEL_68;
    }
    if ( v79
      && ((int)DXGCONTEXT::OpenResourceFromSharedHandle(
                 this,
                 v79,
                 (struct COREDEVICEACCESS *)a4,
                 &v72,
                 a6,
                 v31,
                 v15,
                 &v69) >= 0
        ? (v34 = v72)
        : (v34 = 0),
          (v68 = v34) != 0) )
    {
      if ( !a6 )
      {
        v35 = v69;
        if ( v69 > 1 )
        {
          v36 = (DXGDEVICE *)*((_QWORD *)this + 2);
          if ( *(_DWORD *)(*(_QWORD *)(*((_QWORD *)v36 + 2) + 16LL) + 412LL) == 4318 )
          {
            v37 = v77;
            VistaBltStubInfo = DXGDEVICE::GetVistaBltStubInfo(v36, v77, v32, v33);
            if ( VistaBltStubInfo )
            {
              if ( v37 )
              {
                *(_QWORD *)VistaBltStubInfo = v90.Next;
                *((_DWORD *)VistaBltStubInfo + 2) = v35 - 1;
                *((_DWORD *)VistaBltStubInfo + 3) = *((_DWORD *)this + 6);
              }
              else if ( (*((_DWORD *)VistaBltStubInfo + 2))-- == 1 )
              {
                *(_QWORD *)VistaBltStubInfo = 0LL;
                *((_DWORD *)VistaBltStubInfo + 3) = 0;
              }
            }
          }
        }
        goto LABEL_45;
      }
    }
    else if ( !a6 )
    {
      goto LABEL_45;
    }
    if ( v73 <= 1 && v69 <= 1 )
    {
      v8 = 0LL;
      operator delete[](v29);
      operator delete[](v15);
      v71 = 0LL;
      v15 = 0LL;
      v76 = 0LL;
    }
LABEL_45:
    v40 = *((_QWORD *)this + 2);
    v80[0] = 0LL;
    v80[1] = *(struct VIDSCH_SUBMIT_DATA_BASE **)(v40 + 16);
    CVidSchSubmitData::InitializeSubmitData((CVidSchSubmitData *)v80);
    v14 = v70;
    if ( v80[0] )
    {
      LODWORD(v89) = v74 + v89;
      DWORD1(v89) += HIDWORD(v74);
      DWORD2(v89) += v74;
      HIDWORD(v89) += HIDWORD(v74);
      LODWORD(v90.Next) = v89 - v91;
      HIDWORD(v90.Next) = DWORD1(v89) - DWORD1(v91);
      *((_DWORD *)&v90.Next + 2) = DWORD2(v89) - v91;
      *((_DWORD *)&v90.Next + 3) = HIDWORD(v89) - DWORD1(v91);
      Global = DXGGLOBAL_GetGlobal();
      v42 = (char *)Global + 1168;
      ++*((_DWORD *)Global + 297);
      v43 = ExpInterlockedPopEntrySList((PSLIST_HEADER)Global + 73);
      if ( v43
        || (v44 = (__int64 (__fastcall *)(__int64, __int64, __int64, char *))*((_QWORD *)v42 + 6),
            v45 = *((unsigned int *)v42 + 11),
            v46 = *((unsigned int *)v42 + 10),
            v47 = *((unsigned int *)v42 + 9),
            ++*((_DWORD *)v42 + 6),
            (v43 = (PSLIST_ENTRY)v44(v47, v45, v46, v42)) != 0LL) )
      {
        v48 = v88;
        v49 = *((_QWORD *)this + 2);
        if ( !v88 )
          v48 = *(_QWORD *)(*(_QWORD *)(v49 + 16) + 16LL);
        v50 = *(_QWORD *)(*(_QWORD *)(v49 + 40) + 88LL);
        v86 = 0LL;
        v84 = v50;
        v87 = v48;
        v82 = 0LL;
        v83 = 0LL;
        v85 = 0LL;
        memset(v43, 0, 0x5F8uLL);
        v54 = *(unsigned int *)(*((_QWORD *)this + 2) + 436LL);
        LODWORD(v43->Next) = v54;
        LODWORD(v43->Next) = *((_DWORD *)this + 6);
        *((_QWORD *)&v43->Next + 1) = v78;
        *((_DWORD *)&v43[1].Next + 2) = v68;
        LODWORD(v43[1].Next) = 0;
        HIDWORD(v43[1].Next) = v14;
        v55 = v90;
        v43[5].Next = 0LL;
        *((_QWORD *)&v43[4].Next + 1) = &v90;
        v56 = *(_DWORD *)(&v43[5].Next + 1) & 0xFFFFEFFF;
        LODWORD(v43[4].Next) = 1;
        *((_DWORD *)&v43[22].Next + 2) = 3;
        *((_DWORD *)&v43[5].Next + 2) = v56 | 0x10081;
        v43[3] = v55;
        v43[24].Next = (struct _SLIST_ENTRY *)v79;
        *((_QWORD *)&v43[24].Next + 1) = 0LL;
        *((_DWORD *)&v43[5].Next + 3) = v8;
        if ( (_DWORD)v8 )
        {
          v54 = (__int64)a7;
          v51 = (char *)v43 - (char *)a7;
          v52 = (unsigned int)v8;
          do
          {
            *(_DWORD *)(v51 + v54 + 96) = *(_DWORD *)v54;
            v54 += 4LL;
            --v52;
          }
          while ( v52 );
        }
        v57 = v81;
        v43[91].Next = (struct _SLIST_ENTRY *)v71;
        *((_QWORD *)&v43[93].Next + 1) = v57;
        *((_QWORD *)&v43[91].Next + 1) = v15;
        *((_BYTE *)&v43[94].Next + 8) = 1;
        Current = DXGPROCESS::GetCurrent(v54, v51, v52, v53);
        DXGCONTEXT::CopyPresentArgs(this, (struct _D3DKMT_PRESENT *)v43, Current, v59);
        v11 = DXGCONTEXT::Present(
                this,
                (struct _D3DKMT_PRESENT *)v43,
                (struct COREDEVICEACCESS *)a4,
                v75,
                (struct CWin32kLocks *)&v82,
                v57,
                v80[0]);
        v60 = DXGGLOBAL_GetGlobal();
        v61 = (union _SLIST_HEADER *)((char *)v60 + 1168);
        ++*((_DWORD *)v60 + 299);
        if ( ExQueryDepthSList((PSLIST_HEADER)v60 + 73) < *((_WORD *)v60 + 592) )
        {
          ExpInterlockedPushEntrySList(v61, v43);
        }
        else
        {
          ++LODWORD(v61[2].Alignment);
          ((void (__fastcall *)(PSLIST_ENTRY, union _SLIST_HEADER *))v61[3].Region)(v43, v61);
        }
        if ( DXGADAPTER::IsCoreResourceSharedOwner(a4[3]) )
          COREDEVICEACCESS::Release((COREDEVICEACCESS *)a4);
        v62 = v75;
        if ( *((_BYTE *)v75 + 16) )
          DXGADAPTERSTOPRESETLOCKSHARED::Release(v75);
        CWin32kLocks::Unlock((CWin32kLocks *)&v82);
        DXGSTABLEVISRGNANDSPRITE::vUnlock((DXGSTABLEVISRGNANDSPRITE *)&v85);
        DXGADAPTERSTOPRESETLOCKSHARED::Acquire(v62);
        if ( (int)COREDEVICEACCESS::AcquireShared((COREDEVICEACCESS *)a4, 0LL) < 0 )
        {
          v11 = -1073741130;
          COREDEVICEACCESS::AcquireSharedUncheck((COREDEVICEACCESS *)a4, v63);
        }
        v15 = (unsigned int *)v76;
        goto LABEL_65;
      }
      WdLogSingleEntry1(6LL, 6449LL);
      DxgkLogInternalTriageEvent(
        0LL,
        262145,
        -1,
        (__int64)L"Failed to allocate memory for present parameters.",
        6449LL,
        0LL,
        0LL,
        0LL,
        0LL);
    }
    v11 = -1073741801;
LABEL_65:
    CVidSchSubmitData::~CVidSchSubmitData((struct _SLIST_ENTRY **)v80);
    v29 = (unsigned int *)v71;
LABEL_68:
    if ( v14 )
      DXGCONTEXT::DestroyAllocation(this, v14, (struct COREDEVICEACCESS *)a4, v26);
    if ( v68 )
      DXGCONTEXT::DestroyAllocation(this, v68, (struct COREDEVICEACCESS *)a4, v26);
    goto LABEL_72;
  }
  return (unsigned int)-1073741670;
}
