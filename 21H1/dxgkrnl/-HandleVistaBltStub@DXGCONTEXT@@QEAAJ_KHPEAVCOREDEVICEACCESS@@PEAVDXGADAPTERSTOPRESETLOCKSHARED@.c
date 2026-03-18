/*
 * XREFs of ?HandleVistaBltStub@DXGCONTEXT@@QEAAJ_KHPEAVCOREDEVICEACCESS@@PEAVDXGADAPTERSTOPRESETLOCKSHARED@@IPEAIPEAPEAV1@@Z @ 0x1C027B800
 * Callers:
 *     DxgkRender @ 0x1C00F2C60 (DxgkRender.c)
 *     ?DxgkSubmitCommandInternal@@YAJPEBU_D3DKMT_SUBMITCOMMAND@@PEAVDXGPROCESS@@@Z @ 0x1C00F95F0 (-DxgkSubmitCommandInternal@@YAJPEBU_D3DKMT_SUBMITCOMMAND@@PEAVDXGPROCESS@@@Z.c)
 * Callees:
 *     ?Release@COREDEVICEACCESS@@QEAAXXZ @ 0x1C000A1D4 (-Release@COREDEVICEACCESS@@QEAAXXZ.c)
 *     ??_V@YAXPEAX@Z @ 0x1C000A43C (--_V@YAXPEAX@Z.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C000A650 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ @ 0x1C000A6B4 (-IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ.c)
 *     ??_U@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C000A840 (--_U@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 *     ??1CVidSchSubmitData@@QEAA@XZ @ 0x1C000A8F8 (--1CVidSchSubmitData@@QEAA@XZ.c)
 *     ?AcquireSharedUncheck@COREDEVICEACCESS@@QEAAXPEAD@Z @ 0x1C000AA18 (-AcquireSharedUncheck@COREDEVICEACCESS@@QEAAXPEAD@Z.c)
 *     ?Acquire@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ @ 0x1C000D3D0 (-Acquire@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ.c)
 *     ?Release@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ @ 0x1C000D42C (-Release@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ.c)
 *     ?AcquireShared@COREDEVICEACCESS@@QEAAJPEAD@Z @ 0x1C000E890 (-AcquireShared@COREDEVICEACCESS@@QEAAJPEAD@Z.c)
 *     ?InitializeSubmitData@CVidSchSubmitData@@QEAAXXZ @ 0x1C0016FF4 (-InitializeSubmitData@CVidSchSubmitData@@QEAAXXZ.c)
 *     ?Lock@CWin32kLocks@@QEAAJPEAUHWND__@@HHH@Z @ 0x1C001B804 (-Lock@CWin32kLocks@@QEAAJPEAUHWND__@@HHH@Z.c)
 *     __security_check_cookie @ 0x1C0024300 (__security_check_cookie.c)
 *     ?Unlock@CWin32kLocks@@QEAAXXZ @ 0x1C0025BF4 (-Unlock@CWin32kLocks@@QEAAXXZ.c)
 *     ?vUnlock@DXGSTABLEVISRGNANDSPRITE@@QEAAXXZ @ 0x1C0025C64 (-vUnlock@DXGSTABLEVISRGNANDSPRITE@@QEAAXXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C0026570 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C0026840 (memset.c)
 *     ?CopyPresentArgs@DXGCONTEXT@@QEAAJPEAU_D3DKMT_PRESENT@@PEAVDXGPROCESS@@@Z @ 0x1C00450C4 (-CopyPresentArgs@DXGCONTEXT@@QEAAJPEAU_D3DKMT_PRESENT@@PEAVDXGPROCESS@@@Z.c)
 *     ?GetVistaBltStubInfo@DXGDEVICE@@QEAAPEAUVISTABLTSTUBINFO@@H@Z @ 0x1C0046380 (-GetVistaBltStubInfo@DXGDEVICE@@QEAAPEAUVISTABLTSTUBINFO@@H@Z.c)
 *     ?Present@DXGCONTEXT@@QEAAJPEBUDXGK_PRESENT_PARAMS@@PEAVCOREDEVICEACCESS@@PEAVDXGADAPTERSTOPRESETLOCKSHARED@@PEAVCWin32kLocks@@PEAPEAV1@PEAUVIDSCH_SUBMIT_DATA_BASE@@@Z @ 0x1C00FD870 (-Present@DXGCONTEXT@@QEAAJPEBUDXGK_PRESENT_PARAMS@@PEAVCOREDEVICEACCESS@@PEAVDXGADAPTERSTOPRESET.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C0119460 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?DestroyAllocation@DXGCONTEXT@@QEAAJIPEAVCOREDEVICEACCESS@@@Z @ 0x1C027B58C (-DestroyAllocation@DXGCONTEXT@@QEAAJIPEAVCOREDEVICEACCESS@@@Z.c)
 *     ?OpenResourceFromSharedHandle@DXGCONTEXT@@QEAAJPEAXPEAVCOREDEVICEACCESS@@PEAIIPEAPEAV1@22@Z @ 0x1C027C6DC (-OpenResourceFromSharedHandle@DXGCONTEXT@@QEAAJPEAXPEAVCOREDEVICEACCESS@@PEAIIPEAPEAV1@22@Z.c)
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
  __int64 v12; // rax
  struct _SLIST_ENTRY *v13; // r13
  HWND v14; // rbx
  unsigned int *v15; // r12
  struct DXGPROCESS *Current; // rax
  __int64 v17; // rcx
  __int64 v18; // rdi
  __int64 v19; // rdx
  char *v20; // rdx
  int v21; // edi
  SIZE_T v23; // rax
  SIZE_T v24; // rax
  struct DXGCONTEXT **v25; // rdi
  unsigned int v26; // eax
  unsigned int v27; // edi
  DXGDEVICE *v28; // rcx
  struct VISTABLTSTUBINFO *VistaBltStubInfo; // rax
  __int64 v31; // rax
  struct DXGGLOBAL *Global; // rax
  char *v33; // rbx
  PSLIST_ENTRY v34; // rdi
  __int64 v35; // rdx
  __int64 (__fastcall *v36)(__int64, __int64, __int64, char *); // rax
  __int64 v37; // r8
  __int64 v38; // rcx
  __int64 v39; // rdx
  __int64 v40; // rcx
  __int64 v41; // r8
  __int64 v42; // r9
  __int64 v43; // rax
  __int64 v44; // rdx
  __int64 v45; // rcx
  __int64 v46; // rcx
  __int64 v47; // rdx
  __int64 v48; // rcx
  struct _SLIST_ENTRY v49; // xmm0
  unsigned int v50; // eax
  __int64 v51; // r8
  struct DXGCONTEXT **v52; // rbx
  struct DXGPROCESS *v53; // rax
  __int64 v54; // rdx
  __int64 v55; // rcx
  struct DXGGLOBAL *v56; // rax
  union _SLIST_HEADER *v57; // r13
  DXGADAPTERSTOPRESETLOCKSHARED *v58; // rdi
  char *v59; // rdx
  struct _SLIST_ENTRY *v60; // rdi
  __int64 v61; // r13
  __int64 Next_low; // rdx
  unsigned int *v63; // rdi
  __int64 v64; // rdx
  unsigned int v65; // [rsp+40h] [rbp-C0h]
  unsigned int v66; // [rsp+44h] [rbp-BCh] BYREF
  unsigned int v67; // [rsp+48h] [rbp-B8h] BYREF
  unsigned int v68; // [rsp+4Ch] [rbp-B4h] BYREF
  int v69; // [rsp+50h] [rbp-B0h]
  unsigned int v70; // [rsp+54h] [rbp-ACh] BYREF
  __int64 v71; // [rsp+58h] [rbp-A8h] BYREF
  __int64 v72; // [rsp+60h] [rbp-A0h]
  DXGADAPTERSTOPRESETLOCKSHARED *v73; // [rsp+68h] [rbp-98h]
  __int128 v74; // [rsp+70h] [rbp-90h] BYREF
  struct VIDSCH_SUBMIT_DATA_BASE *v75[2]; // [rsp+80h] [rbp-80h] BYREF
  HWND v76; // [rsp+90h] [rbp-70h]
  struct DXGCONTEXT **v77; // [rsp+98h] [rbp-68h]
  __int128 v78; // [rsp+A0h] [rbp-60h] BYREF
  __int64 v79; // [rsp+B0h] [rbp-50h]
  __int64 v80; // [rsp+B8h] [rbp-48h]
  __int128 v81; // [rsp+C0h] [rbp-40h] BYREF
  __int64 v82; // [rsp+D0h] [rbp-30h]
  __int64 v83; // [rsp+D8h] [rbp-28h]
  __int128 v84; // [rsp+E0h] [rbp-20h] BYREF
  struct _SLIST_ENTRY v85; // [rsp+F0h] [rbp-10h] BYREF
  __int128 v86; // [rsp+100h] [rbp+0h] BYREF

  v8 = a6;
  v73 = a5;
  v77 = a8;
  v69 = a3;
  v11 = 0;
  v85.Next = (struct _SLIST_ENTRY *)a2;
  if ( a2 < 0 )
  {
    v75[0] = (struct VIDSCH_SUBMIT_DATA_BASE *)(unsigned int)a2;
    v12 = *((_QWORD *)this + 2);
    v14 = (HWND)HIDWORD(a2);
    v13 = 0LL;
    LODWORD(v14) = HIDWORD(a2) & 0x7FFFFFFF;
    v84 = 0LL;
    v71 = 0LL;
    v15 = 0LL;
    v86 = 0LL;
    v72 = *(_QWORD *)(v12 + 1848);
    v76 = v14;
    v67 = 0;
    v65 = 0;
    v68 = 0;
    v74 = 0uLL;
    v70 = 0;
    v66 = 0;
    Current = DXGPROCESS::GetCurrent(0LL, v72);
    v17 = *((_QWORD *)this + 2);
    v18 = *((_QWORD *)Current + 11);
    if ( v72 )
      v19 = v72;
    else
      v19 = *(_QWORD *)(*(_QWORD *)(v17 + 16) + 16LL);
    v80 = *(_QWORD *)(*(_QWORD *)(v17 + 40) + 88LL);
    v78 = 0LL;
    v79 = 0LL;
    v81 = 0LL;
    v82 = 0LL;
    v83 = v19;
    DXGADAPTERSTOPRESETLOCKSHARED::Release(v73);
    COREDEVICEACCESS::Release((COREDEVICEACCESS *)a4);
    v11 = CWin32kLocks::Lock((CWin32kLocks *)&v78, v14, 1, 1, 0);
    if ( v11 >= 0 )
    {
      (*(void (__fastcall **)(_QWORD, char *))(v18 + 232))(v78, (char *)&v74 + 8);
      if ( !(*(unsigned int (__fastcall **)(_QWORD, __int128 *))(v18 + 72))(v78, &v84) )
        v11 = -1073741811;
      if ( v11 >= 0 )
      {
        if ( !(*(unsigned int (__fastcall **)(HWND, __int128 *))(v18 + 360))(v76, &v86) )
          v11 = -1073741811;
        if ( v11 >= 0 && !(*(unsigned int (__fastcall **)(_QWORD, __int64 *))(v18 + 312))(v78, &v71) )
          v11 = -1073741811;
      }
    }
    CWin32kLocks::Unlock((CWin32kLocks *)&v78);
    DXGSTABLEVISRGNANDSPRITE::vUnlock((DXGSTABLEVISRGNANDSPRITE *)&v81);
    DXGADAPTERSTOPRESETLOCKSHARED::Acquire(v73);
    v21 = COREDEVICEACCESS::AcquireShared((COREDEVICEACCESS *)a4, 0LL);
    if ( v21 < 0 )
    {
      COREDEVICEACCESS::AcquireSharedUncheck((COREDEVICEACCESS *)a4, v20);
      return (unsigned int)v21;
    }
    if ( v11 < 0 )
    {
      v11 = 0;
    }
    else
    {
      if ( a6 )
      {
        v23 = 4LL * a6;
        if ( !is_mul_ok(a6, 4uLL) )
          v23 = -1LL;
        v13 = (struct _SLIST_ENTRY *)operator new[](v23, 0x4B677844u, PagedPool);
        *(_QWORD *)&v74 = v13;
        if ( !v13 )
          v11 = -1073741670;
        if ( v11 < 0 )
          goto LABEL_73;
        memset(v13, 0, 4LL * a6);
        v24 = 4LL * a6;
        if ( !is_mul_ok(a6, 4uLL) )
          v24 = -1LL;
        v15 = (unsigned int *)operator new[](v24, 0x4B677844u, PagedPool);
        if ( !v15 )
          v11 = -1073741670;
        if ( v11 < 0 )
          goto LABEL_73;
        memset(v15, 0, 4LL * a6);
      }
      v25 = v77;
      v11 = DXGCONTEXT::OpenResourceFromSharedHandle(
              this,
              v75[0],
              (struct COREDEVICEACCESS *)a4,
              &v67,
              a6,
              v77,
              (unsigned int *)v13,
              &v70);
      if ( v11 >= 0 )
      {
        if ( *((_QWORD *)&v74 + 1)
          && ((v11 = DXGCONTEXT::OpenResourceFromSharedHandle(
                       this,
                       *((void **)&v74 + 1),
                       (struct COREDEVICEACCESS *)a4,
                       &v68,
                       a6,
                       v25,
                       v15,
                       &v66),
               v11 >= 0)
            ? (v26 = v68)
            : (v26 = 0, v11 = 0),
              (v65 = v26) != 0) )
        {
          if ( !a6 )
          {
            v27 = v66;
            if ( v66 > 1 )
            {
              v28 = (DXGDEVICE *)*((_QWORD *)this + 2);
              if ( *(_DWORD *)(*(_QWORD *)(*((_QWORD *)v28 + 2) + 16LL) + 324LL) == 4318 )
              {
                VistaBltStubInfo = DXGDEVICE::GetVistaBltStubInfo(v28, v69);
                if ( VistaBltStubInfo )
                {
                  if ( v69 )
                  {
                    *(_QWORD *)VistaBltStubInfo = v85.Next;
                    *((_DWORD *)VistaBltStubInfo + 2) = v27 - 1;
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
            goto LABEL_47;
          }
        }
        else if ( !a6 )
        {
LABEL_47:
          v31 = *((_QWORD *)this + 2);
          v75[0] = 0LL;
          v75[1] = *(struct VIDSCH_SUBMIT_DATA_BASE **)(v31 + 16);
          CVidSchSubmitData::InitializeSubmitData((CVidSchSubmitData *)v75);
          if ( !v75[0] )
            v11 = -1073741801;
          if ( v11 >= 0 )
          {
            LODWORD(v84) = v71 + v84;
            DWORD1(v84) += HIDWORD(v71);
            DWORD2(v84) += v71;
            HIDWORD(v84) += HIDWORD(v71);
            LODWORD(v85.Next) = v84 - v86;
            HIDWORD(v85.Next) = DWORD1(v84) - DWORD1(v86);
            *((_DWORD *)&v85.Next + 2) = DWORD2(v84) - v86;
            *((_DWORD *)&v85.Next + 3) = HIDWORD(v84) - DWORD1(v86);
            Global = DXGGLOBAL::GetGlobal((unsigned int)(DWORD2(v84) - v86), (unsigned int)(DWORD1(v84) - DWORD1(v86)));
            v33 = (char *)Global + 912;
            ++*((_DWORD *)Global + 233);
            v34 = ExpInterlockedPopEntrySList((PSLIST_HEADER)Global + 57);
            if ( v34
              || (v35 = *((unsigned int *)v33 + 11),
                  v36 = (__int64 (__fastcall *)(__int64, __int64, __int64, char *))*((_QWORD *)v33 + 6),
                  v37 = *((unsigned int *)v33 + 10),
                  v38 = *((unsigned int *)v33 + 9),
                  ++*((_DWORD *)v33 + 6),
                  (v34 = (PSLIST_ENTRY)v36(v38, v35, v37, v33)) != 0LL) )
            {
              v44 = v72;
              v45 = *((_QWORD *)this + 2);
              if ( !v72 )
                v44 = *(_QWORD *)(*(_QWORD *)(v45 + 16) + 16LL);
              v46 = *(_QWORD *)(*(_QWORD *)(v45 + 40) + 88LL);
              v82 = 0LL;
              v80 = v46;
              v83 = v44;
              v78 = 0LL;
              v79 = 0LL;
              v81 = 0LL;
              memset(v34, 0, 0x5F8uLL);
              v48 = *(unsigned int *)(*((_QWORD *)this + 2) + 436LL);
              LODWORD(v34->Next) = v48;
              LODWORD(v34->Next) = *((_DWORD *)this + 6);
              *((_QWORD *)&v34->Next + 1) = v76;
              HIDWORD(v34[1].Next) = v67;
              *((_DWORD *)&v34[1].Next + 2) = v65;
              LODWORD(v34[1].Next) = 0;
              v49 = v85;
              v34[5].Next = 0LL;
              *((_QWORD *)&v34[4].Next + 1) = &v85;
              v50 = *(_DWORD *)(&v34[5].Next + 1) & 0xFFFFEFFF;
              LODWORD(v34[4].Next) = 1;
              *((_DWORD *)&v34[22].Next + 2) = 3;
              *((_DWORD *)&v34[5].Next + 2) = v50 | 0x10081;
              v34[3] = v49;
              v34[24].Next = (struct _SLIST_ENTRY *)*((_QWORD *)&v74 + 1);
              *((_QWORD *)&v34[24].Next + 1) = 0LL;
              *((_DWORD *)&v34[5].Next + 3) = v8;
              if ( (_DWORD)v8 )
              {
                v48 = (__int64)a7;
                v47 = (char *)v34 - (char *)a7;
                v51 = (unsigned int)v8;
                do
                {
                  *(_DWORD *)(v47 + v48 + 96) = *(_DWORD *)v48;
                  v48 += 4LL;
                  --v51;
                }
                while ( v51 );
              }
              v52 = v77;
              *((_QWORD *)&v34[93].Next + 1) = v77;
              v34[91].Next = v13;
              *((_QWORD *)&v34[91].Next + 1) = v15;
              *((_BYTE *)&v34[94].Next + 8) = 1;
              v53 = DXGPROCESS::GetCurrent(v48, v47);
              DXGCONTEXT::CopyPresentArgs((DXGPRESENT **)this, (struct _D3DKMT_PRESENT *)v34, v53);
              v11 = DXGCONTEXT::Present(
                      this,
                      (struct _D3DKMT_PRESENT *)v34,
                      (struct COREDEVICEACCESS *)a4,
                      v73,
                      (struct CWin32kLocks *)&v78,
                      v52,
                      v75[0]);
              v56 = DXGGLOBAL::GetGlobal(v55, v54);
              v57 = (union _SLIST_HEADER *)((char *)v56 + 912);
              ++*((_DWORD *)v56 + 235);
              if ( ExQueryDepthSList((PSLIST_HEADER)v56 + 57) < *((_WORD *)v56 + 464) )
              {
                ExpInterlockedPushEntrySList(v57, v34);
              }
              else
              {
                ++LODWORD(v57[2].Alignment);
                ((void (__fastcall *)(PSLIST_ENTRY, union _SLIST_HEADER *))v57[3].Region)(v34, v57);
              }
              if ( DXGADAPTER::IsCoreResourceSharedOwner(a4[3]) )
                COREDEVICEACCESS::Release((COREDEVICEACCESS *)a4);
              v58 = v73;
              if ( *((_BYTE *)v73 + 16) )
                DXGADAPTERSTOPRESETLOCKSHARED::Release(v73);
              CWin32kLocks::Unlock((CWin32kLocks *)&v78);
              DXGSTABLEVISRGNANDSPRITE::vUnlock((DXGSTABLEVISRGNANDSPRITE *)&v81);
              DXGADAPTERSTOPRESETLOCKSHARED::Acquire(v58);
              if ( (int)COREDEVICEACCESS::AcquireShared((COREDEVICEACCESS *)a4, 0LL) < 0 )
              {
                v11 = -1073741130;
                COREDEVICEACCESS::AcquireSharedUncheck((COREDEVICEACCESS *)a4, v59);
              }
            }
            else
            {
              v43 = WdLogNewEntry5_WdLowResource(v40, v39, v41, v42);
              *(_QWORD *)(v43 + 24) = 6235LL;
              WdLogEvent5_WdLowResource(v43);
              v11 = -1073741801;
            }
          }
          CVidSchSubmitData::~CVidSchSubmitData((struct _SLIST_ENTRY **)v75);
          v13 = (struct _SLIST_ENTRY *)v74;
          goto LABEL_69;
        }
        if ( v70 <= 1 && v66 <= 1 )
        {
          v8 = 0LL;
          operator delete[](v13);
          operator delete[](v15);
          v13 = 0LL;
          *(_QWORD *)&v74 = 0LL;
          v15 = 0LL;
        }
        goto LABEL_47;
      }
    }
LABEL_69:
    if ( v67 )
      DXGCONTEXT::DestroyAllocation(this, v67, (char **)a4);
    if ( v65 )
      DXGCONTEXT::DestroyAllocation(this, v65, (char **)a4);
LABEL_73:
    if ( v13 )
    {
      if ( (_DWORD)v8 )
      {
        v60 = v13;
        v61 = (unsigned int)v8;
        do
        {
          Next_low = LODWORD(v60->Next);
          if ( (_DWORD)Next_low )
            DXGCONTEXT::DestroyAllocation(this, Next_low, (char **)a4);
          v60 = (struct _SLIST_ENTRY *)((char *)v60 + 4);
          --v61;
        }
        while ( v61 );
        v13 = (struct _SLIST_ENTRY *)v74;
      }
      operator delete[](v13);
    }
    if ( v15 )
    {
      if ( (_DWORD)v8 )
      {
        v63 = v15;
        do
        {
          v64 = *v63;
          if ( (_DWORD)v64 )
            DXGCONTEXT::DestroyAllocation(this, v64, (char **)a4);
          ++v63;
          --v8;
        }
        while ( v8 );
      }
      operator delete[](v15);
    }
  }
  return (unsigned int)v11;
}
