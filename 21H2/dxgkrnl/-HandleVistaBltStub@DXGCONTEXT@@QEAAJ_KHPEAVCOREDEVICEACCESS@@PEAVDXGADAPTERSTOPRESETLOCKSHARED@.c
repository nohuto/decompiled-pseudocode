/*
 * XREFs of ?HandleVistaBltStub@DXGCONTEXT@@QEAAJ_KHPEAVCOREDEVICEACCESS@@PEAVDXGADAPTERSTOPRESETLOCKSHARED@@IPEAIPEAPEAV1@@Z @ 0x1C027FF20
 * Callers:
 *     DxgkRender @ 0x1C00E9810 (DxgkRender.c)
 *     ?DxgkSubmitCommandInternal@@YAJPEBU_D3DKMT_SUBMITCOMMAND@@PEAVDXGPROCESS@@@Z @ 0x1C00F0B10 (-DxgkSubmitCommandInternal@@YAJPEBU_D3DKMT_SUBMITCOMMAND@@PEAVDXGPROCESS@@@Z.c)
 * Callees:
 *     ??_V@YAXPEAX@Z @ 0x1C0002CC0 (--_V@YAXPEAX@Z.c)
 *     ??_U@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C0002D2C (--_U@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C00041C0 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ @ 0x1C0004448 (-IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ.c)
 *     ??1CVidSchSubmitData@@QEAA@XZ @ 0x1C0004534 (--1CVidSchSubmitData@@QEAA@XZ.c)
 *     ?AcquireSharedUncheck@COREDEVICEACCESS@@QEAAXPEAD@Z @ 0x1C0005898 (-AcquireSharedUncheck@COREDEVICEACCESS@@QEAAXPEAD@Z.c)
 *     ?Acquire@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ @ 0x1C00065B8 (-Acquire@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ.c)
 *     ?Release@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ @ 0x1C0006614 (-Release@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ.c)
 *     ?AcquireShared@COREDEVICEACCESS@@QEAAJPEAD@Z @ 0x1C0006CE0 (-AcquireShared@COREDEVICEACCESS@@QEAAJPEAD@Z.c)
 *     ?Release@COREDEVICEACCESS@@QEAAXXZ @ 0x1C0009C58 (-Release@COREDEVICEACCESS@@QEAAXXZ.c)
 *     ?InitializeSubmitData@CVidSchSubmitData@@QEAAXXZ @ 0x1C0017134 (-InitializeSubmitData@CVidSchSubmitData@@QEAAXXZ.c)
 *     ?Lock@CWin32kLocks@@QEAAJPEAUHWND__@@HHH@Z @ 0x1C001BC04 (-Lock@CWin32kLocks@@QEAAJPEAUHWND__@@HHH@Z.c)
 *     __security_check_cookie @ 0x1C0024910 (__security_check_cookie.c)
 *     ?Unlock@CWin32kLocks@@QEAAXXZ @ 0x1C0027B48 (-Unlock@CWin32kLocks@@QEAAXXZ.c)
 *     ?vUnlock@DXGSTABLEVISRGNANDSPRITE@@QEAAXXZ @ 0x1C0027BB8 (-vUnlock@DXGSTABLEVISRGNANDSPRITE@@QEAAXXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C0028C00 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C0028F00 (memset.c)
 *     ?CopyPresentArgs@DXGCONTEXT@@QEAAJPEAU_D3DKMT_PRESENT@@PEAVDXGPROCESS@@@Z @ 0x1C0046F74 (-CopyPresentArgs@DXGCONTEXT@@QEAAJPEAU_D3DKMT_PRESENT@@PEAVDXGPROCESS@@@Z.c)
 *     ?GetVistaBltStubInfo@DXGDEVICE@@QEAAPEAUVISTABLTSTUBINFO@@H@Z @ 0x1C0048198 (-GetVistaBltStubInfo@DXGDEVICE@@QEAAPEAUVISTABLTSTUBINFO@@H@Z.c)
 *     ?Present@DXGCONTEXT@@QEAAJPEBUDXGK_PRESENT_PARAMS@@PEAVCOREDEVICEACCESS@@PEAVDXGADAPTERSTOPRESETLOCKSHARED@@PEAVCWin32kLocks@@PEAPEAV1@PEAUVIDSCH_SUBMIT_DATA_BASE@@@Z @ 0x1C00FDFA0 (-Present@DXGCONTEXT@@QEAAJPEBUDXGK_PRESENT_PARAMS@@PEAVCOREDEVICEACCESS@@PEAVDXGADAPTERSTOPRESET.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C0115560 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?DestroyAllocation@DXGCONTEXT@@QEAAJIPEAVCOREDEVICEACCESS@@@Z @ 0x1C027FCAC (-DestroyAllocation@DXGCONTEXT@@QEAAJIPEAVCOREDEVICEACCESS@@@Z.c)
 *     ?OpenResourceFromSharedHandle@DXGCONTEXT@@QEAAJPEAXPEAVCOREDEVICEACCESS@@PEAIIPEAPEAV1@22@Z @ 0x1C0280E70 (-OpenResourceFromSharedHandle@DXGCONTEXT@@QEAAJPEAXPEAVCOREDEVICEACCESS@@PEAIIPEAPEAV1@22@Z.c)
 */

__int64 __fastcall DXGCONTEXT::HandleVistaBltStub(
        DXGCONTEXT *this,
        __int64 a2,
        int a3,
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
  struct _SLIST_ENTRY *v14; // r12
  unsigned int *v15; // r13
  __int64 v16; // rbx
  __int64 v17; // rdi
  __int64 v19; // rcx
  __int64 v20; // rdx
  __int64 v21; // rdx
  char *v22; // rdx
  int v23; // edi
  SIZE_T v24; // rax
  SIZE_T v25; // rax
  struct DXGCONTEXT **v26; // rdi
  unsigned int v27; // eax
  unsigned int v28; // edi
  DXGDEVICE *v29; // rcx
  struct VISTABLTSTUBINFO *VistaBltStubInfo; // rax
  __int64 v32; // rax
  struct DXGGLOBAL *Global; // rax
  char *v34; // rbx
  PSLIST_ENTRY v35; // rdi
  __int64 v36; // rdx
  __int64 (__fastcall *v37)(__int64, __int64, __int64, char *); // rax
  __int64 v38; // r8
  __int64 v39; // rcx
  __int64 v40; // rdx
  __int64 v41; // rcx
  __int64 v42; // r8
  __int64 v43; // r9
  __int64 v44; // rax
  __int64 v45; // rdx
  __int64 v46; // rcx
  __int64 v47; // rcx
  __int64 v48; // rdx
  __int64 v49; // rcx
  struct _SLIST_ENTRY v50; // xmm0
  unsigned int v51; // eax
  __int64 v52; // r8
  struct DXGCONTEXT **v53; // rbx
  struct DXGPROCESS *Current; // rax
  __int64 v55; // rdx
  __int64 v56; // rcx
  struct DXGGLOBAL *v57; // rax
  union _SLIST_HEADER *v58; // r13
  __int64 v59; // rdx
  DXGADAPTERSTOPRESETLOCKSHARED *v60; // rdi
  char *v61; // rdx
  struct _SLIST_ENTRY *v62; // rdi
  __int64 v63; // r12
  __int64 Next_low; // rdx
  unsigned int *v65; // rdi
  __int64 v66; // rdx
  unsigned int v67; // [rsp+40h] [rbp-C0h]
  unsigned int v68; // [rsp+44h] [rbp-BCh] BYREF
  unsigned int v69; // [rsp+48h] [rbp-B8h] BYREF
  unsigned int v70; // [rsp+4Ch] [rbp-B4h] BYREF
  int v71; // [rsp+50h] [rbp-B0h]
  unsigned int v72; // [rsp+54h] [rbp-ACh] BYREF
  __int64 v73; // [rsp+58h] [rbp-A8h] BYREF
  DXGADAPTERSTOPRESETLOCKSHARED *v74; // [rsp+60h] [rbp-A0h]
  unsigned int *v75; // [rsp+68h] [rbp-98h]
  HWND v76; // [rsp+70h] [rbp-90h]
  void *v77; // [rsp+78h] [rbp-88h] BYREF
  struct _SLIST_ENTRY *v78; // [rsp+80h] [rbp-80h]
  struct VIDSCH_SUBMIT_DATA_BASE *v79[2]; // [rsp+88h] [rbp-78h] BYREF
  __int64 v80; // [rsp+98h] [rbp-68h]
  struct DXGCONTEXT **v81; // [rsp+A0h] [rbp-60h]
  __int128 v82; // [rsp+B0h] [rbp-50h] BYREF
  __int64 v83; // [rsp+C0h] [rbp-40h]
  __int64 v84; // [rsp+C8h] [rbp-38h]
  __int128 v85; // [rsp+D0h] [rbp-30h] BYREF
  __int64 v86; // [rsp+E0h] [rbp-20h]
  __int64 v87; // [rsp+E8h] [rbp-18h]
  __int64 v88; // [rsp+F0h] [rbp-10h]
  __int128 v89; // [rsp+F8h] [rbp-8h] BYREF
  struct _SLIST_ENTRY v90; // [rsp+108h] [rbp+8h] BYREF
  __int128 v91; // [rsp+118h] [rbp+18h] BYREF

  v8 = a6;
  v90.Next = (struct _SLIST_ENTRY *)a2;
  v74 = a5;
  v11 = 0;
  v81 = a8;
  v71 = a3;
  if ( a2 < 0 )
  {
    v77 = 0LL;
    v12 = HIDWORD(a2);
    v79[0] = (struct VIDSCH_SUBMIT_DATA_BASE *)(unsigned int)a2;
    LODWORD(v12) = HIDWORD(a2) & 0x7FFFFFFF;
    v13 = *((_QWORD *)this + 2);
    v14 = 0LL;
    v89 = 0LL;
    v73 = 0LL;
    v15 = 0LL;
    v91 = 0LL;
    v16 = *(_QWORD *)(v13 + 1848);
    v88 = v16;
    v76 = (HWND)v12;
    v69 = 0;
    v67 = 0;
    v70 = 0;
    v78 = 0LL;
    v75 = 0LL;
    v72 = 0;
    v68 = 0;
    v17 = *((_QWORD *)DXGPROCESS::GetCurrent(v12, 0LL) + 11);
    v80 = v17;
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
    DXGADAPTERSTOPRESETLOCKSHARED::Release(v74);
    COREDEVICEACCESS::Release((COREDEVICEACCESS *)a4, v21);
    v11 = CWin32kLocks::Lock((CWin32kLocks *)&v82, v76, 1, 1, 0);
    if ( v11 >= 0 )
    {
      (*(void (__fastcall **)(_QWORD, void **))(v17 + 232))(v82, &v77);
      if ( !(*(unsigned int (__fastcall **)(_QWORD, __int128 *))(v17 + 72))(v82, &v89) )
        v11 = -1073741811;
      if ( v11 >= 0 )
      {
        if ( !(*(unsigned int (__fastcall **)(HWND, __int128 *))(v80 + 360))(v76, &v91) )
          v11 = -1073741811;
        if ( v11 >= 0 && !(*(unsigned int (__fastcall **)(_QWORD, __int64 *))(v80 + 312))(v82, &v73) )
          v11 = -1073741811;
      }
    }
    CWin32kLocks::Unlock((CWin32kLocks *)&v82);
    DXGSTABLEVISRGNANDSPRITE::vUnlock((DXGSTABLEVISRGNANDSPRITE *)&v85);
    DXGADAPTERSTOPRESETLOCKSHARED::Acquire(v74);
    v23 = COREDEVICEACCESS::AcquireShared((COREDEVICEACCESS *)a4, 0LL);
    if ( v23 < 0 )
    {
      COREDEVICEACCESS::AcquireSharedUncheck((COREDEVICEACCESS *)a4, v22);
      return (unsigned int)v23;
    }
    if ( v11 < 0 )
    {
      v11 = 0;
    }
    else
    {
      if ( a6 )
      {
        v24 = 4LL * a6;
        if ( !is_mul_ok(a6, 4uLL) )
          v24 = -1LL;
        v14 = (struct _SLIST_ENTRY *)operator new[](v24, 0x4B677844u, PagedPool);
        v78 = v14;
        if ( !v14 )
          v11 = -1073741670;
        if ( v11 < 0 )
          goto LABEL_76;
        memset(v14, 0, 4LL * a6);
        v25 = 4LL * a6;
        if ( !is_mul_ok(a6, 4uLL) )
          v25 = -1LL;
        v75 = (unsigned int *)operator new[](v25, 0x4B677844u, PagedPool);
        v15 = v75;
        if ( !v75 )
          v11 = -1073741670;
        if ( v11 < 0 )
          goto LABEL_76;
        memset(v75, 0, 4LL * a6);
      }
      v26 = v81;
      v11 = DXGCONTEXT::OpenResourceFromSharedHandle(
              this,
              v79[0],
              (struct COREDEVICEACCESS *)a4,
              &v69,
              a6,
              v81,
              (unsigned int *)v14,
              &v72);
      if ( v11 >= 0 )
      {
        if ( v77
          && ((v11 = DXGCONTEXT::OpenResourceFromSharedHandle(
                       this,
                       v77,
                       (struct COREDEVICEACCESS *)a4,
                       &v70,
                       a6,
                       v26,
                       v15,
                       &v68),
               v11 >= 0)
            ? (v27 = v70)
            : (v27 = 0, v11 = 0),
              (v67 = v27) != 0) )
        {
          if ( !a6 )
          {
            v28 = v68;
            if ( v68 > 1 )
            {
              v29 = (DXGDEVICE *)*((_QWORD *)this + 2);
              if ( *(_DWORD *)(*(_QWORD *)(*((_QWORD *)v29 + 2) + 16LL) + 324LL) == 4318 )
              {
                VistaBltStubInfo = DXGDEVICE::GetVistaBltStubInfo(v29, v71);
                if ( VistaBltStubInfo )
                {
                  if ( v71 )
                  {
                    *(_QWORD *)VistaBltStubInfo = v90.Next;
                    *((_DWORD *)VistaBltStubInfo + 2) = v28 - 1;
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
            goto LABEL_49;
          }
        }
        else if ( !a6 )
        {
LABEL_49:
          v32 = *((_QWORD *)this + 2);
          v79[0] = 0LL;
          v79[1] = *(struct VIDSCH_SUBMIT_DATA_BASE **)(v32 + 16);
          CVidSchSubmitData::InitializeSubmitData((CVidSchSubmitData *)v79);
          if ( !v79[0] )
            v11 = -1073741801;
          if ( v11 >= 0 )
          {
            LODWORD(v89) = v73 + v89;
            DWORD1(v89) += HIDWORD(v73);
            DWORD2(v89) += v73;
            HIDWORD(v89) += HIDWORD(v73);
            LODWORD(v90.Next) = v89 - v91;
            HIDWORD(v90.Next) = DWORD1(v89) - DWORD1(v91);
            *((_DWORD *)&v90.Next + 2) = DWORD2(v89) - v91;
            *((_DWORD *)&v90.Next + 3) = HIDWORD(v89) - DWORD1(v91);
            Global = DXGGLOBAL::GetGlobal((unsigned int)(DWORD2(v89) - v91), (unsigned int)(DWORD1(v89) - DWORD1(v91)));
            v34 = (char *)Global + 1024;
            ++*((_DWORD *)Global + 261);
            v35 = ExpInterlockedPopEntrySList((PSLIST_HEADER)Global + 64);
            if ( v35
              || (v36 = *((unsigned int *)v34 + 11),
                  v37 = (__int64 (__fastcall *)(__int64, __int64, __int64, char *))*((_QWORD *)v34 + 6),
                  v38 = *((unsigned int *)v34 + 10),
                  v39 = *((unsigned int *)v34 + 9),
                  ++*((_DWORD *)v34 + 6),
                  (v35 = (PSLIST_ENTRY)v37(v39, v36, v38, v34)) != 0LL) )
            {
              v45 = v88;
              v46 = *((_QWORD *)this + 2);
              if ( !v88 )
                v45 = *(_QWORD *)(*(_QWORD *)(v46 + 16) + 16LL);
              v47 = *(_QWORD *)(*(_QWORD *)(v46 + 40) + 88LL);
              v86 = 0LL;
              v84 = v47;
              v87 = v45;
              v82 = 0LL;
              v83 = 0LL;
              v85 = 0LL;
              memset(v35, 0, 0x5F8uLL);
              v49 = *(unsigned int *)(*((_QWORD *)this + 2) + 436LL);
              LODWORD(v35->Next) = v49;
              LODWORD(v35->Next) = *((_DWORD *)this + 6);
              *((_QWORD *)&v35->Next + 1) = v76;
              HIDWORD(v35[1].Next) = v69;
              *((_DWORD *)&v35[1].Next + 2) = v67;
              LODWORD(v35[1].Next) = 0;
              v50 = v90;
              v35[5].Next = 0LL;
              *((_QWORD *)&v35[4].Next + 1) = &v90;
              v51 = *(_DWORD *)(&v35[5].Next + 1) & 0xFFFFEFFF;
              LODWORD(v35[4].Next) = 1;
              *((_DWORD *)&v35[22].Next + 2) = 3;
              *((_DWORD *)&v35[5].Next + 2) = v51 | 0x10081;
              v35[3] = v50;
              v35[24].Next = (struct _SLIST_ENTRY *)v77;
              *((_QWORD *)&v35[24].Next + 1) = 0LL;
              *((_DWORD *)&v35[5].Next + 3) = v8;
              if ( (_DWORD)v8 )
              {
                v49 = (__int64)a7;
                v48 = (char *)v35 - (char *)a7;
                v52 = (unsigned int)v8;
                do
                {
                  *(_DWORD *)(v48 + v49 + 96) = *(_DWORD *)v49;
                  v49 += 4LL;
                  --v52;
                }
                while ( v52 );
              }
              v53 = v81;
              *((_QWORD *)&v35[93].Next + 1) = v81;
              v35[91].Next = v14;
              *((_QWORD *)&v35[91].Next + 1) = v15;
              *((_BYTE *)&v35[94].Next + 8) = 1;
              Current = DXGPROCESS::GetCurrent(v49, v48);
              DXGCONTEXT::CopyPresentArgs((DXGPRESENT **)this, (struct _D3DKMT_PRESENT *)v35, Current);
              v11 = DXGCONTEXT::Present(
                      this,
                      (struct _D3DKMT_PRESENT *)v35,
                      (struct COREDEVICEACCESS *)a4,
                      v74,
                      (struct CWin32kLocks *)&v82,
                      v53,
                      v79[0]);
              v57 = DXGGLOBAL::GetGlobal(v56, v55);
              v58 = (union _SLIST_HEADER *)((char *)v57 + 1024);
              ++*((_DWORD *)v57 + 263);
              if ( ExQueryDepthSList((PSLIST_HEADER)v57 + 64) < *((_WORD *)v57 + 520) )
              {
                ExpInterlockedPushEntrySList(v58, v35);
              }
              else
              {
                ++LODWORD(v58[2].Alignment);
                ((void (__fastcall *)(PSLIST_ENTRY, union _SLIST_HEADER *))v58[3].Region)(v35, v58);
              }
              if ( DXGADAPTER::IsCoreResourceSharedOwner(a4[3]) )
                COREDEVICEACCESS::Release((COREDEVICEACCESS *)a4, v59);
              v60 = v74;
              if ( *((_BYTE *)v74 + 16) )
                DXGADAPTERSTOPRESETLOCKSHARED::Release(v74);
              CWin32kLocks::Unlock((CWin32kLocks *)&v82);
              DXGSTABLEVISRGNANDSPRITE::vUnlock((DXGSTABLEVISRGNANDSPRITE *)&v85);
              DXGADAPTERSTOPRESETLOCKSHARED::Acquire(v60);
              if ( (int)COREDEVICEACCESS::AcquireShared((COREDEVICEACCESS *)a4, 0LL) < 0 )
              {
                v11 = -1073741130;
                COREDEVICEACCESS::AcquireSharedUncheck((COREDEVICEACCESS *)a4, v61);
              }
              v15 = v75;
            }
            else
            {
              v44 = WdLogNewEntry5_WdLowResource(v41, v40, v42, v43);
              *(_QWORD *)(v44 + 24) = 6236LL;
              WdLogEvent5_WdLowResource(v44);
              v11 = -1073741801;
            }
          }
          CVidSchSubmitData::~CVidSchSubmitData((struct _SLIST_ENTRY **)v79);
          goto LABEL_72;
        }
        if ( v72 <= 1 && v68 <= 1 )
        {
          v8 = 0LL;
          operator delete[](v14);
          operator delete[](v15);
          v14 = 0LL;
          v15 = 0LL;
          v78 = 0LL;
          v75 = 0LL;
        }
        goto LABEL_49;
      }
    }
LABEL_72:
    if ( v69 )
      DXGCONTEXT::DestroyAllocation(this, v69, (struct COREDEVICEACCESS *)a4);
    if ( v67 )
      DXGCONTEXT::DestroyAllocation(this, v67, (struct COREDEVICEACCESS *)a4);
LABEL_76:
    if ( v14 )
    {
      if ( (_DWORD)v8 )
      {
        v62 = v14;
        v63 = (unsigned int)v8;
        do
        {
          Next_low = LODWORD(v62->Next);
          if ( (_DWORD)Next_low )
            DXGCONTEXT::DestroyAllocation(this, Next_low, (struct COREDEVICEACCESS *)a4);
          v62 = (struct _SLIST_ENTRY *)((char *)v62 + 4);
          --v63;
        }
        while ( v63 );
        v14 = v78;
      }
      operator delete[](v14);
    }
    if ( v15 )
    {
      if ( (_DWORD)v8 )
      {
        v65 = v15;
        do
        {
          v66 = *v65;
          if ( (_DWORD)v66 )
            DXGCONTEXT::DestroyAllocation(this, v66, (struct COREDEVICEACCESS *)a4);
          ++v65;
          --v8;
        }
        while ( v8 );
      }
      operator delete[](v15);
    }
  }
  return (unsigned int)v11;
}
