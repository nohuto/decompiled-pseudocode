/*
 * XREFs of ?OpenResourceObject@DXGDEVICE@@QEAAJPEAU_D3DKMT_CREATEALLOCATION@@PEAU_D3DDDI_ALLOCATIONINFO2@@EPEAU_EPROCESS@@PEAU_DXGSHAREDALLOCOBJECT@@PEAVDXGRESOURCEREFERENCE@@PEAEPEBU_D3DKM_CREATESTANDARDALLOCATION@@PEAVDXGAUTOMUTEX@@PEAVDXGAUTOPUSHLOCK@@@Z @ 0x1C00D5B2C
 * Callers:
 *     ?CreateAllocation@DXGDEVICE@@QEAAJPEAU_D3DKMT_CREATEALLOCATION@@EEPEAU_DXGSHAREDALLOCOBJECT@@PEBU_D3DKM_CREATESTANDARDALLOCATION@@PEAVCOREDEVICEACCESS@@IPEAU_EPROCESS@@PEAIPEA_K6PEAU_D3DKMT_CREATESTANDARDALLOCATION@@PEAXI@Z @ 0x1C00F28E0 (-CreateAllocation@DXGDEVICE@@QEAAJPEAU_D3DKMT_CREATEALLOCATION@@EEPEAU_DXGSHAREDALLOCOBJECT@@PEB.c)
 * Callees:
 *     ??2?$DXGQUOTAALLOCATOR@$00$0ELGHHIEE@@@SAPEAX_K@Z @ 0x1C0002524 (--2-$DXGQUOTAALLOCATOR@$00$0ELGHHIEE@@@SAPEAX_K@Z.c)
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0002808 (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ @ 0x1C0002ADC (-AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ.c)
 *     ?Release@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0002BB0 (-Release@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ??_V@YAXPEAX@Z @ 0x1C0002C80 (--_V@YAXPEAX@Z.c)
 *     ??_U@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C0002CEC (--_U@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C0004010 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?IsCoreResourceSharedOwner@ADAPTER_RENDER@@QEBAEXZ @ 0x1C0004210 (-IsCoreResourceSharedOwner@ADAPTER_RENDER@@QEBAEXZ.c)
 *     ?CreateResourceHandleSafe@DXGPROCESS@@QEAAXPEAVDXGRESOURCE@@@Z @ 0x1C0004468 (-CreateResourceHandleSafe@DXGPROCESS@@QEAAXPEAVDXGRESOURCE@@@Z.c)
 *     ??0DXGGLOBALSHAREMUTEX@@QEAA@XZ @ 0x1C0006568 (--0DXGGLOBALSHAREMUTEX@@QEAA@XZ.c)
 *     ??1DXGGLOBALSHAREMUTEX@@QEAA@XZ @ 0x1C00065E8 (--1DXGGLOBALSHAREMUTEX@@QEAA@XZ.c)
 *     ?ReleaseReference@DXGSHAREDRESOURCE@@QEAAJPEAPEAXI@Z @ 0x1C00069F8 (-ReleaseReference@DXGSHAREDRESOURCE@@QEAAJPEAPEAXI@Z.c)
 *     ?AcquireShared@DXGPUSHLOCK@@QEAAXXZ @ 0x1C0006D68 (-AcquireShared@DXGPUSHLOCK@@QEAAXXZ.c)
 *     ?IsDxgmms2@DXGADAPTER@@QEBAEXZ @ 0x1C0007264 (-IsDxgmms2@DXGADAPTER@@QEBAEXZ.c)
 *     ??_GDXGRESOURCE@@QEAAPEAXI@Z @ 0x1C00098AC (--_GDXGRESOURCE@@QEAAPEAXI@Z.c)
 *     ??0DXGPROCESSACCESSLISTMUTEX@@QEAA@PEAVDXGSHAREDRESOURCEACCESS@@@Z @ 0x1C0019094 (--0DXGPROCESSACCESSLISTMUTEX@@QEAA@PEAVDXGSHAREDRESOURCEACCESS@@@Z.c)
 *     ?GetObjectA@DXGGLOBAL@@QEAAPEAXIW4_HMGRENTRY_TYPE@@_N@Z @ 0x1C001BFA0 (-GetObjectA@DXGGLOBAL@@QEAAPEAXIW4_HMGRENTRY_TYPE@@_N@Z.c)
 *     ?Initialize@DXGAUTOMUTEX@@QEAAXQEAVDXGFASTMUTEX@@E@Z @ 0x1C0024B94 (-Initialize@DXGAUTOMUTEX@@QEAAXQEAVDXGFASTMUTEX@@E@Z.c)
 *     ??0DXGADAPTERALLOCATION_VGPU@@QEAA@XZ @ 0x1C003E7D8 (--0DXGADAPTERALLOCATION_VGPU@@QEAA@XZ.c)
 *     _DXGDEVICE::OpenResourceObject_::_2_::ENSURE_LOCK_RELEASE::_ENSURE_LOCK_RELEASE @ 0x1C00D5AD8 (_DXGDEVICE--OpenResourceObject_--_2_--ENSURE_LOCK_RELEASE--_ENSURE_LOCK_RELEASE.c)
 *     ??1DXGRESOURCEREFERENCE@@QEAA@XZ @ 0x1C00F7150 (--1DXGRESOURCEREFERENCE@@QEAA@XZ.c)
 *     ??0DXGRESOURCEREFERENCE@@QEAA@PEAVDXGRESOURCE@@@Z @ 0x1C0108424 (--0DXGRESOURCEREFERENCE@@QEAA@PEAVDXGRESOURCE@@@Z.c)
 *     ?CreateSharedResource@DXGSHAREDRESOURCE@@SAPEAV1@PEAVADAPTER_RENDER@@PEAVDXGADAPTER@@E@Z @ 0x1C01110B4 (-CreateSharedResource@DXGSHAREDRESOURCE@@SAPEAV1@PEAVADAPTER_RENDER@@PEAVDXGADAPTER@@E@Z.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C0113030 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?MoveAssign@DXGRESOURCEREFERENCE@@QEAAAEAV1@$$QEAV1@@Z @ 0x1C011B654 (-MoveAssign@DXGRESOURCEREFERENCE@@QEAAAEAV1@$$QEAV1@@Z.c)
 *     ?FreeResourceHandleAndWaitForZeroReferences@ADAPTER_RENDER@@QEAAXPEAVDXGRESOURCE@@PEAVCOREDEVICEACCESS@@@Z @ 0x1C0127B2C (-FreeResourceHandleAndWaitForZeroReferences@ADAPTER_RENDER@@QEAAXPEAVDXGRESOURCE@@PEAVCOREDEVICE.c)
 *     ??0DXGRESOURCE@@QEAA@PEAVDXGDEVICE@@@Z @ 0x1C0157608 (--0DXGRESOURCE@@QEAA@PEAVDXGDEVICE@@@Z.c)
 */

__int64 __fastcall DXGDEVICE::OpenResourceObject(
        ADAPTER_RENDER **this,
        struct _D3DKMT_CREATEALLOCATION *a2,
        struct _D3DDDI_ALLOCATIONINFO2 *a3,
        char a4,
        struct _EPROCESS *a5,
        struct _DXGSHAREDALLOCOBJECT *a6,
        struct DXGRESOURCEREFERENCE *a7,
        unsigned __int8 *a8,
        const struct _D3DKM_CREATESTANDARDALLOCATION *a9,
        struct DXGAUTOMUTEX *a10,
        struct DXGAUTOPUSHLOCK *a11)
{
  __int64 v15; // rdx
  __int64 v16; // rcx
  __int64 v17; // rax
  D3DKMT_HANDLE hResource; // ebx
  ADAPTER_RENDER *v19; // rdi
  __int64 v20; // rax
  __int64 v21; // r8
  int v22; // ecx
  __int64 v23; // rcx
  __int64 v24; // rax
  struct DXGRESOURCE *v25; // rdx
  __int64 v26; // rdx
  __int64 v27; // rcx
  __int64 v28; // r8
  _QWORD *v29; // rbx
  _QWORD *v30; // rax
  __int64 v31; // rdi
  D3DKMT_CREATEALLOCATIONFLAGS v32; // eax
  __int64 v33; // rcx
  __int64 v34; // rax
  __int64 v35; // rcx
  struct DXGAUTOPUSHLOCK *v36; // rdi
  DXGPUSHLOCK *v37; // rcx
  __int64 v38; // r8
  __int64 v39; // rdx
  __int64 v40; // rcx
  __int64 v41; // rcx
  unsigned int v42; // edi
  SIZE_T v43; // rax
  __int64 v44; // rdx
  __int64 v45; // rcx
  __int64 v46; // r8
  PVOID v47; // r13
  __int64 v48; // rdx
  void *v49; // rcx
  UINT v50; // esi
  DXGADAPTERALLOCATION_VGPU *v51; // rax
  __int64 v52; // rdx
  __int64 v53; // rcx
  __int64 v54; // r8
  DXGADAPTERALLOCATION_VGPU *v55; // rax
  __int64 *v56; // rcx
  __int64 v57; // rax
  __int64 **v58; // rdx
  __int64 v59; // rdx
  D3DKMT_CREATEALLOCATIONFLAGS Flags; // eax
  int v62; // ebx
  DXGRESOURCE *v63; // rax
  __int64 v64; // rdx
  __int64 v65; // rcx
  __int64 v66; // r8
  DXGRESOURCE *v67; // rsi
  DXGRESOURCE *v68; // rax
  __int64 v69; // rax
  __int64 v70; // rdx
  __int64 v71; // rcx
  __int64 v72; // r8
  __int64 v73; // rax
  ADAPTER_RENDER *v74; // rcx
  __int64 NumAllocations; // rdx
  __int64 v76; // rcx
  __int64 v77; // r8
  struct _DXGSHAREDALLOCOBJECT *v78; // r13
  _QWORD *v79; // rax
  __int64 v80; // rax
  struct DXGGLOBAL *Global; // rax
  __int64 ObjectA; // rax
  __int64 v83; // rcx
  __int64 v84; // rax
  __int64 v85; // rcx
  _QWORD *v86; // rax
  __int64 PrivateDriverDataSize; // rcx
  __int64 v88; // r13
  __int64 v89; // rdx
  __int64 v90; // rcx
  struct _D3DDDI_ALLOCATIONINFO2 *v91; // r8
  __int64 v92; // r9
  _QWORD *v93; // rbx
  _QWORD *v94; // rcx
  ADAPTER_RENDER *v95; // rax
  unsigned __int64 v96; // rcx
  __int64 v97; // r13
  _QWORD *v98; // rax
  struct _D3DDDI_ALLOCATIONINFO2 *v99; // rdx
  signed __int32 v100; // eax
  signed __int32 v101; // ett
  __int64 v102; // rcx
  __int64 v103; // rcx
  char v104; // r15
  __int64 v105; // r8
  struct _EPROCESS *v106; // rdx
  __int64 **v107; // rcx
  __int64 *i; // rax
  _QWORD *v109; // rax
  __int64 v110; // rax
  __int64 v111; // rdi
  DXGADAPTER *v112; // rcx
  __int64 v113; // rax
  struct DXGSHAREDRESOURCE *SharedResource; // rax
  __int64 v115; // rdx
  __int64 v116; // r9
  DXGADAPTERALLOCATION_VGPU *v117; // rax
  __int64 v118; // rdx
  __int64 v119; // rcx
  __int64 v120; // r8
  DXGADAPTERALLOCATION_VGPU *v121; // rax
  __int64 *v122; // rcx
  __int64 v123; // rax
  __int64 **v124; // rdx
  int v125; // r8d
  SIZE_T v126; // rax
  PVOID v127; // rax
  __int64 v128; // rcx
  _QWORD *v129; // rax
  _QWORD *v130; // rax
  __int64 v131; // rdx
  char *v132; // rcx
  __int64 v133; // r8
  __int64 v134; // r9
  _QWORD *v135; // r15
  _QWORD *v136; // rax
  __int64 v137; // rax
  void *v138; // r13
  ADAPTER_RENDER *v139; // rax
  char *v140; // rax
  __int64 v141; // rdx
  __int64 v142; // rcx
  __int64 v143; // r8
  __int64 v144; // r9
  _QWORD *v145; // r15
  _QWORD *v146; // rax
  __int64 v147; // rcx
  __int64 v148; // [rsp+20h] [rbp-40h] BYREF
  _BYTE v149[16]; // [rsp+28h] [rbp-38h] BYREF
  __int128 v150; // [rsp+38h] [rbp-28h] BYREF
  _BYTE v151[24]; // [rsp+48h] [rbp-18h] BYREF
  __int64 v152; // [rsp+A0h] [rbp+40h] BYREF
  unsigned int v153; // [rsp+A8h] [rbp+48h] BYREF
  struct _D3DDDI_ALLOCATIONINFO2 *v154; // [rsp+B0h] [rbp+50h]

  v154 = a3;
  if ( !ADAPTER_RENDER::IsCoreResourceSharedOwner(this[2]) )
  {
    v17 = WdLogNewEntry5_WdAssertion(v16, v15);
    *(_QWORD *)(v17 + 24) = 2044LL;
    WdLogEvent5_WdAssertion(v17);
  }
  v148 = 0LL;
  v150 = 0LL;
  LOBYTE(v152) = *((_BYTE *)DXGPROCESS::GetCurrent() + 347);
  *a8 = 0;
  hResource = a2->hResource;
  if ( !hResource )
  {
    Flags = a2->Flags;
    if ( (*(_BYTE *)&Flags & 1) == 0 )
      goto LABEL_60;
    v62 = 0;
    if ( (*(_WORD *)&Flags & 0x1000) != 0 )
    {
      v63 = (DXGRESOURCE *)DXGQUOTAALLOCATOR<1,1265072196>::operator new(0x80uLL);
      v67 = v63;
      if ( v63 )
      {
        DXGRESOURCE::DXGRESOURCE(v63, (struct DXGDEVICE *)this);
        *((_QWORD *)v67 + 15) = 0LL;
        *((_DWORD *)v67 + 1) |= 4u;
LABEL_73:
        if ( !v67 )
        {
          v69 = WdLogNewEntry5_WdWarning(v65, v64, v66);
          *(_QWORD *)(v69 + 24) = this;
          *(_QWORD *)(v69 + 32) = -1073741801LL;
          WdLogEvent5_WdWarning(v69);
          v62 = -1073741801;
LABEL_197:
          LODWORD(v31) = v62;
          goto LABEL_61;
        }
        DXGPROCESS::CreateResourceHandleSafe(this[5], v67);
        if ( !*((_DWORD *)v67 + 4) )
        {
LABEL_76:
          v73 = WdLogNewEntry5_WdWarning(v71, v70, v72);
          *(_QWORD *)(v73 + 24) = this;
          *(_QWORD *)(v73 + 32) = -1073741801LL;
          WdLogEvent5_WdWarning(v73);
          v62 = -1073741801;
          goto LABEL_195;
        }
        *((_QWORD *)v67 + 6) = a2->hPrivateRuntimeResourceHandle;
        if ( (*(_DWORD *)&a2->Flags & 2) == 0 && !a4 )
          goto LABEL_196;
        *((_DWORD *)v67 + 1) |= 1u;
        if ( a4 )
        {
          DXGGLOBALSHAREMUTEX::DXGGLOBALSHAREMUTEX((DXGGLOBALSHAREMUTEX *)v149, v70);
          DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v149);
          if ( (*(_DWORD *)&a2->Flags & 0x40) != 0 )
          {
            v78 = a6;
            if ( !a6 )
            {
              v79 = (_QWORD *)WdLogNewEntry5_WdWarning(v76, NumAllocations, v77);
              v79[3] = this;
              v79[4] = -1073741811LL;
LABEL_88:
              WdLogEvent5_WdWarning(v79);
              v62 = -1073741811;
LABEL_89:
              v84 = *((_QWORD *)v67 + 7);
              if ( !v84 )
                goto LABEL_125;
              *(_DWORD *)(v84 + 12) |= 0x100u;
              v85 = *((_QWORD *)v67 + 7);
              if ( *(_DWORD *)(v85 + 132) == a2->NumAllocations )
              {
                if ( *(_DWORD *)(v85 + 128) == a2->PrivateDriverDataSize || (v152 & 0x20) != 0 )
                {
                  v88 = *((_QWORD *)v67 + 7);
                  if ( *(_DWORD *)(v88 + 72) != (unsigned int)PsGetCurrentProcessSessionId()
                    && (*(_DWORD *)(v88 + 12) & 8) == 0 )
                  {
                    v93 = (_QWORD *)WdLogNewEntry5_WdWarning(v90, v89, v91);
                    v93[3] = this;
                    v93[4] = *((_QWORD *)v67 + 7);
                    v93[5] = *(unsigned int *)(*((_QWORD *)v67 + 7) + 72LL);
                    v93[6] = (unsigned int)PsGetCurrentProcessSessionId();
                    v94 = v93;
                    v93[7] = -1073741811LL;
LABEL_124:
                    WdLogEvent5_WdWarning(v94);
                    v62 = -1073741811;
                    goto LABEL_125;
                  }
                  if ( *(ADAPTER_RENDER **)(v88 + 80) == this[2] )
                  {
                    v95 = this[231];
                    if ( !v95
                      || *((_QWORD *)v95 + 338)
                      || *(ADAPTER_RENDER **)(v88 + 96) == v95
                      || (*((_BYTE *)this + 1869) & 1) != 0 && (*(_DWORD *)(v88 + 12) & 0x20) != 0 )
                    {
                      if ( (*(_DWORD *)(v88 + 12) & 1) == 0
                        || (unsigned int)PsIsProtectedProcess(*((_QWORD *)this[5] + 7), v89, v91, v92)
                        && !(unsigned int)PsIsProtectedProcessLight(*((_QWORD *)this[5] + 7)) )
                      {
                        v97 = 0LL;
                        NumAllocations = a2->NumAllocations;
                        v96 = *(_QWORD *)(*((_QWORD *)v67 + 7) + 136LL);
                        if ( (_DWORD)NumAllocations )
                        {
                          v91 = v154;
                          while ( *(_DWORD *)(v96 - 8) == v154[v97].PrivateDriverDataSize )
                          {
                            v96 = *(_QWORD *)v96;
                            v97 = (unsigned int)(v97 + 1);
                            if ( (unsigned int)v97 >= (unsigned int)NumAllocations )
                              goto LABEL_117;
                          }
                          v98 = (_QWORD *)WdLogNewEntry5_WdWarning(v96, NumAllocations, v154);
                          v99 = v154;
                          v98[3] = this;
                          v98[4] = *((_QWORD *)v67 + 7);
                          v98[5] = (unsigned int)v97;
                          v98[6] = v99[v97].PrivateDriverDataSize;
                          v98[7] = -1073741811LL;
                          WdLogEvent5_WdWarning(v98);
                          v62 = -1073741811;
                        }
LABEL_117:
                        if ( v62 < 0 )
                          goto LABEL_125;
                        NumAllocations = *((_QWORD *)v67 + 7);
                        _m_prefetchw((const void *)(NumAllocations + 68));
                        v100 = *(_DWORD *)(NumAllocations + 68);
                        while ( v100 )
                        {
                          v96 = (unsigned int)(v100 + 1);
                          v101 = v100;
                          v100 = _InterlockedCompareExchange(
                                   (volatile signed __int32 *)(NumAllocations + 68),
                                   v96,
                                   v100);
                          if ( v101 == v100 )
                          {
                            v103 = *(_QWORD *)(*((_QWORD *)v67 + 7) + 152LL);
                            if ( v103 )
                            {
                              if ( *(ADAPTER_RENDER ***)(v103 + 72) == this )
                                ++*(_DWORD *)(v103 + 64);
                              DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v149, NumAllocations);
                              v104 = *((_BYTE *)this[5] + 346);
                              DXGPROCESSACCESSLISTMUTEX::DXGPROCESSACCESSLISTMUTEX(
                                (DXGPROCESSACCESSLISTMUTEX *)v151,
                                *(struct DXGSHAREDRESOURCEACCESS **)(*((_QWORD *)v67 + 7) + 152LL));
                              DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v151);
                              v106 = a5;
                              if ( !a5 )
                                v106 = (struct _EPROCESS *)*((_QWORD *)this[5] + 7);
                              v107 = (__int64 **)(*(_QWORD *)(*((_QWORD *)v67 + 7) + 152LL) + 48LL);
                              for ( i = *v107; i != (__int64 *)v107; i = (__int64 *)*i )
                              {
                                if ( v104 || !*((_BYTE *)i + 16) && v106 == (struct _EPROCESS *)i[3] )
                                  goto LABEL_138;
                              }
                              v109 = (_QWORD *)WdLogNewEntry5_WdWarning(v107, v106, v105);
                              v109[3] = this;
                              v109[4] = *((_QWORD *)v67 + 7);
                              v109[5] = -1073741811LL;
                              WdLogEvent5_WdWarning(v109);
                              v62 = -1073741811;
LABEL_138:
                              DXGGLOBALSHAREMUTEX::~DXGGLOBALSHAREMUTEX((DXGGLOBALSHAREMUTEX *)v151, (__int64)v106);
                            }
                            if ( v62 >= 0 )
                            {
                              v110 = *((_QWORD *)v67 + 7);
                              v111 = *(_QWORD *)(v110 + 136);
                              NumAllocations = *(unsigned int *)(v111 - 44);
                              if ( (NumAllocations & 2) != 0 )
                              {
                                if ( *(_DWORD *)(v110 + 132) != 1 )
                                {
                                  v112 = (DXGADAPTER *)*((_QWORD *)this[2] + 2);
                                  if ( *((_DWORD *)v112 + 70) <= 1u || !DXGADAPTER::IsDxgmms2(v112) )
                                  {
                                    v113 = WdLogNewEntry5_WdAssertion(v112, NumAllocations);
                                    *(_QWORD *)(v113 + 24) = 2603LL;
                                    WdLogEvent5_WdAssertion(v113);
                                    NumAllocations = *(unsigned int *)(v111 - 44);
                                  }
                                }
                                this[(((unsigned int)NumAllocations >> 6) & 0xF) + 79] = v67;
                              }
                            }
LABEL_125:
                            DXGGLOBALSHAREMUTEX::~DXGGLOBALSHAREMUTEX((DXGGLOBALSHAREMUTEX *)v149, NumAllocations);
LABEL_194:
                            if ( v62 < 0 )
                            {
LABEL_195:
                              ADAPTER_RENDER::FreeResourceHandleAndWaitForZeroReferences(v74, v67, 0LL);
                              DXGRESOURCE::`scalar deleting destructor'(v67);
                              goto LABEL_197;
                            }
LABEL_196:
                            *a8 = 1;
                            DXGRESOURCEREFERENCE::DXGRESOURCEREFERENCE((DXGRESOURCEREFERENCE *)&v153, v67);
                            DXGRESOURCEREFERENCE::MoveAssign(a7, &v153);
                            DXGRESOURCEREFERENCE::~DXGRESOURCEREFERENCE((DXGRESOURCEREFERENCE *)&v153);
                            goto LABEL_197;
                          }
                        }
                        *((_QWORD *)v67 + 7) = 0LL;
                      }
                      v86 = (_QWORD *)WdLogNewEntry5_WdWarning(v96, NumAllocations, v91);
                      v86[3] = this;
                      v102 = *((_QWORD *)v67 + 7);
                      v86[5] = -1073741811LL;
                      v86[4] = v102;
                      goto LABEL_123;
                    }
                    v86 = (_QWORD *)WdLogNewEntry5_WdWarning(v90, v89, v91);
                    v86[3] = this;
                    v86[4] = *((_QWORD *)v67 + 7);
                    v86[5] = *(_QWORD *)(*((_QWORD *)v67 + 7) + 96LL);
LABEL_93:
                    v86[6] = -1073741811LL;
LABEL_123:
                    v94 = v86;
                    goto LABEL_124;
                  }
                  v86 = (_QWORD *)WdLogNewEntry5_WdWarning(v90, v89, v91);
                  v86[3] = this;
                  v86[4] = *((_QWORD *)v67 + 7);
                  PrivateDriverDataSize = *(_QWORD *)(*(_QWORD *)(*((_QWORD *)v67 + 7) + 80LL) + 16LL);
                }
                else
                {
                  v86 = (_QWORD *)WdLogNewEntry5_WdWarning(v85, NumAllocations, v77);
                  v86[3] = this;
                  v86[4] = *((_QWORD *)v67 + 7);
                  PrivateDriverDataSize = a2->PrivateDriverDataSize;
                }
              }
              else
              {
                v86 = (_QWORD *)WdLogNewEntry5_WdWarning(v85, NumAllocations, v77);
                v86[3] = this;
                v86[4] = *((_QWORD *)v67 + 7);
                PrivateDriverDataSize = a2->NumAllocations;
              }
              v86[5] = PrivateDriverDataSize;
              goto LABEL_93;
            }
            v80 = *((_QWORD *)a6 + 2);
            *((_QWORD *)v67 + 7) = v80;
            if ( v80 )
              goto LABEL_89;
            v79 = (_QWORD *)WdLogNewEntry5_WdWarning(v76, NumAllocations, v77);
            v79[3] = this;
            v79[4] = v78;
          }
          else
          {
            Global = DXGGLOBAL::GetGlobal(v76, NumAllocations);
            ObjectA = DXGGLOBAL::GetObjectA((__int64)Global, a2->hGlobalShare, 2);
            *((_QWORD *)v67 + 7) = ObjectA;
            if ( ObjectA )
              goto LABEL_89;
            v79 = (_QWORD *)WdLogNewEntry5_WdWarning(v83, NumAllocations, v77);
            v79[3] = this;
            v79[4] = a2->hGlobalShare;
          }
          v79[5] = -1073741811LL;
          goto LABEL_88;
        }
        SharedResource = DXGSHAREDRESOURCE::CreateSharedResource(
                           this[2],
                           this[231],
                           (*(_DWORD *)&a2->Flags & 0x800) != 0);
        *((_QWORD *)v67 + 7) = SharedResource;
        if ( !SharedResource )
          goto LABEL_76;
        v115 = a2->NumAllocations;
        v116 = 0LL;
        LODWORD(v152) = 0;
        v153 = v115;
        if ( !(_DWORD)v115 )
        {
LABEL_157:
          *(_DWORD *)(*((_QWORD *)v67 + 7) + 132LL) = v115;
          *((_DWORD *)v67 + 1) |= 2u;
          goto LABEL_158;
        }
        while ( 1 )
        {
          if ( *(_BYTE *)(*((_QWORD *)this[2] + 2) + 209LL) == (_BYTE)v116 )
          {
            v121 = (DXGADAPTERALLOCATION_VGPU *)operator new[](0x40uLL, 0x4B677844u, PagedPool);
            v116 = 0LL;
            if ( v121 )
            {
              *((_DWORD *)v121 + 1) = 0;
              *((_QWORD *)v121 + 1) = 0LL;
              *((_QWORD *)v121 + 2) = 0LL;
              *((_QWORD *)v121 + 4) = 0LL;
              *((_DWORD *)v121 + 10) = 0;
              *((_QWORD *)v121 + 7) = 0LL;
              *((_QWORD *)v121 + 6) = 0LL;
              goto LABEL_154;
            }
          }
          else
          {
            v117 = (DXGADAPTERALLOCATION_VGPU *)operator new[](0x70uLL, 0x4B677844u, PagedPool);
            v116 = 0LL;
            if ( v117 )
            {
              v121 = DXGADAPTERALLOCATION_VGPU::DXGADAPTERALLOCATION_VGPU(v117);
              goto LABEL_154;
            }
          }
          v121 = 0LL;
LABEL_154:
          if ( !v121 )
          {
            v136 = (_QWORD *)WdLogNewEntry5_WdWarning(v119, v118, v120);
            v136[3] = this;
            v136[4] = a2->NumAllocations;
            v136[5] = -1073741801LL;
            WdLogEvent5_WdWarning(v136);
            v115 = v153;
            v62 = -1073741801;
LABEL_158:
            if ( a9 )
              *(_QWORD *)(*((_QWORD *)v67 + 7) + 184LL) = *((_QWORD *)a9 + 52);
            *(_DWORD *)(*((_QWORD *)v67 + 7) + 12LL) ^= (*(_DWORD *)(*((_QWORD *)v67 + 7) + 12LL) ^ (*(_DWORD *)&a2->Flags >> 3)) & 8;
            if ( v62 >= 0 && (unsigned int)v115 > 1 )
            {
              v126 = 8LL * (unsigned int)v115;
              v152 = (unsigned int)v115;
              if ( !is_mul_ok((unsigned int)v115, 8uLL) )
                v126 = -1LL;
              v127 = operator new[](v126, 0x4B677844u, PagedPool);
              v128 = *((_QWORD *)v67 + 7);
              *(_QWORD *)(v128 + 168) = v127;
              if ( !*(_QWORD *)(*((_QWORD *)v67 + 7) + 168LL) )
              {
                v129 = (_QWORD *)WdLogNewEntry5_WdWarning(v128, v115, v72);
                v129[4] = v152;
                v129[3] = this;
                v129[5] = -1073741801LL;
                WdLogEvent5_WdWarning(v129);
                v62 = -1073741801;
              }
            }
            if ( (*(_DWORD *)&a2->Flags & 4) == 0
              && (unsigned int)PsIsProtectedProcess(*((_QWORD *)this[5] + 7), v115, v72, v116)
              && !(unsigned int)PsIsProtectedProcessLight(*((_QWORD *)this[5] + 7)) )
            {
              *(_DWORD *)(*((_QWORD *)v67 + 7) + 12LL) |= 1u;
            }
            if ( (*(_DWORD *)&a2->Flags & 0x10) != 0 )
            {
              if ( v62 < 0 )
                goto LABEL_193;
              v130 = operator new[](0x50uLL, 0x4B677844u, (POOL_TYPE)512);
              v135 = v130;
              if ( v130 )
              {
                v130[1] = 0LL;
                v132 = (char *)(v130 + 6);
                v130[2] = 0LL;
                v130[3] = 0LL;
                *((_DWORD *)v130 + 8) = 0;
                v130[7] = v130 + 6;
                v130[6] = v130 + 6;
                *((_DWORD *)v130 + 9) = 36;
                *((_DWORD *)v130 + 10) = 53;
                *((_DWORD *)v130 + 16) = 1;
                v130[9] = this;
              }
              else
              {
                v135 = 0LL;
              }
              if ( !v135 )
              {
                v137 = WdLogNewEntry5_WdLowResource(v132, v131, v133, v134);
                *(_QWORD *)(v137 + 24) = this;
                *(_QWORD *)(v137 + 32) = -1073741801LL;
                goto LABEL_178;
              }
              v138 = 0LL;
              *(_QWORD *)(*((_QWORD *)v67 + 7) + 152LL) = v135;
              v139 = this[5];
              if ( *((_BYTE *)v139 + 346) )
              {
                v140 = (char *)operator new[](0x28uLL, 0x4B677844u, PagedPool);
                if ( v140 )
                {
                  v140[24] = 1;
                  *((_QWORD *)v140 + 4) = 0LL;
                  goto LABEL_185;
                }
LABEL_184:
                v140 = 0LL;
              }
              else
              {
                v138 = (void *)*((_QWORD *)v139 + 7);
                ObfReferenceObject(v138);
                v140 = (char *)operator new[](0x28uLL, 0x4B677844u, PagedPool);
                if ( !v140 )
                  goto LABEL_184;
                v140[24] = 0;
                *((_QWORD *)v140 + 4) = v138;
              }
LABEL_185:
              if ( !v140 )
              {
                if ( v138 )
                  ObfDereferenceObject(v138);
                v137 = WdLogNewEntry5_WdLowResource(v142, v141, v143, v144);
                *(_QWORD *)(v137 + 24) = -1073741801LL;
LABEL_178:
                WdLogEvent5_WdLowResource(v137);
                v62 = -1073741801;
LABEL_193:
                DXGSHAREDRESOURCE::ReleaseReference(*((DXGSHAREDRESOURCE **)v67 + 7), 0LL, 0);
                *((_QWORD *)v67 + 7) = 0LL;
                goto LABEL_194;
              }
              v145 = v135 + 6;
              v146 = v140 + 8;
              v147 = *v145;
              if ( *(_QWORD **)(*v145 + 8LL) != v145 )
LABEL_190:
                __fastfail(3u);
              *v146 = v147;
              v146[1] = v145;
              *(_QWORD *)(v147 + 8) = v146;
              *v145 = v146;
            }
            if ( v62 >= 0 )
              goto LABEL_196;
            goto LABEL_193;
          }
          v122 = (__int64 *)((char *)v121 + 48);
          v123 = *((_QWORD *)v67 + 7) + 136LL;
          v124 = *(__int64 ***)(*((_QWORD *)v67 + 7) + 144LL);
          if ( *v124 != (__int64 *)v123 )
            goto LABEL_190;
          v125 = v152;
          v122[1] = (__int64)v124;
          v72 = (unsigned int)(v125 + 1);
          *v122 = v123;
          *v124 = v122;
          v115 = v153;
          *(_QWORD *)(v123 + 8) = v122;
          LODWORD(v152) = v72;
          if ( (unsigned int)v72 >= (unsigned int)v115 )
            goto LABEL_157;
        }
      }
    }
    else
    {
      v68 = (DXGRESOURCE *)DXGQUOTAALLOCATOR<1,1265072196>::operator new(0x78uLL);
      if ( v68 )
      {
        v67 = DXGRESOURCE::DXGRESOURCE(v68, (struct DXGDEVICE *)this);
        goto LABEL_73;
      }
    }
    v67 = 0LL;
    goto LABEL_73;
  }
  v19 = this[5];
  DXGPUSHLOCK::AcquireShared((ADAPTER_RENDER *)((char *)v19 + 208));
  v20 = (hResource >> 6) & 0xFFFFFF;
  if ( (unsigned int)v20 >= *((_DWORD *)v19 + 64) )
    goto LABEL_10;
  v21 = *((_QWORD *)v19 + 30);
  v22 = *(_DWORD *)(v21 + 16 * v20 + 8);
  if ( ((hResource >> 25) & 0x60) != (*(_BYTE *)(v21 + 16 * v20 + 8) & 0x60) || (v22 & 0x2000) != 0 || (v22 & 0x1F) == 0 )
    goto LABEL_10;
  v23 = v22 & 0x1F;
  if ( (_BYTE)v23 != 4 )
  {
    v24 = WdLogNewEntry5_WdError(v23, 2LL * (unsigned int)v20);
    *(_QWORD *)(v24 + 24) = 267LL;
    WdLogEvent5_WdError(v24);
LABEL_10:
    v25 = 0LL;
    goto LABEL_11;
  }
  v25 = *(struct DXGRESOURCE **)(v21 + 16LL * (unsigned int)v20);
LABEL_11:
  DXGRESOURCEREFERENCE::DXGRESOURCEREFERENCE((DXGRESOURCEREFERENCE *)&v152, v25);
  ExReleasePushLockSharedEx((char *)v19 + 208, 0LL);
  KeLeaveCriticalRegion();
  DXGRESOURCEREFERENCE::MoveAssign(&v148, &v152);
  DXGRESOURCEREFERENCE::~DXGRESOURCEREFERENCE((DXGRESOURCEREFERENCE *)&v152);
  v29 = (_QWORD *)v148;
  if ( !v148 )
  {
    v30 = (_QWORD *)WdLogNewEntry5_WdWarning(v27, v26, v28);
    v31 = -1073741816LL;
    v30[3] = this;
    v30[4] = a2->hResource;
    goto LABEL_13;
  }
  v32 = a2->Flags;
  if ( (*(_DWORD *)&v32 & 0x20020) != 0 )
  {
    v30 = (_QWORD *)WdLogNewEntry5_WdWarning(v27, v26, v28);
    v30[3] = this;
    goto LABEL_64;
  }
  if ( *(ADAPTER_RENDER ***)(v148 + 8) != this )
  {
    v30 = (_QWORD *)WdLogNewEntry5_WdWarning(v27, v26, v28);
    v30[3] = this;
    v30[4] = a2->hResource;
    v33 = v29[1];
LABEL_18:
    v30[5] = v33;
LABEL_19:
    LODWORD(v31) = -1073741811;
    v30[6] = -1073741811LL;
    goto LABEL_65;
  }
  if ( (*(_WORD *)&v32 & 0x800) != 0 )
  {
    v34 = *(_QWORD *)(v148 + 56);
    if ( !v34 || (*(_DWORD *)(v34 + 12) & 0x20) == 0 )
    {
      v30 = (_QWORD *)WdLogNewEntry5_WdWarning(v27, v26, v28);
      v30[3] = a2->hResource;
LABEL_64:
      LODWORD(v31) = -1073741811;
      v30[4] = -1073741811LL;
      goto LABEL_65;
    }
  }
  if ( (*(_DWORD *)(v148 + 4) & 1) == 0 )
    goto LABEL_59;
  v35 = *(_QWORD *)(v148 + 56);
  if ( !v35 )
  {
    v30 = (_QWORD *)WdLogNewEntry5_WdWarning(0LL, v26, v28);
    v30[3] = this;
    v30[4] = v29;
LABEL_27:
    v31 = -1073741811LL;
    goto LABEL_13;
  }
  if ( *(_DWORD *)(v35 + 128) != a2->PrivateDriverDataSize )
  {
    v30 = (_QWORD *)WdLogNewEntry5_WdWarning(v35, v26, v28);
    v30[3] = this;
    v30[4] = v29[7];
    v33 = a2->PrivateDriverDataSize;
    goto LABEL_18;
  }
  v36 = a11;
  v37 = (DXGPUSHLOCK *)(v35 + 32);
  *((_QWORD *)a11 + 1) = v37;
  DXGPUSHLOCK::AcquireExclusive(v37);
  *((_DWORD *)v36 + 4) = 2;
  v39 = v29[7];
  v40 = a2->NumAllocations;
  *(_QWORD *)&v150 = v36;
  v31 = 0LL;
  if ( (_DWORD)v40 )
  {
    v38 = *(unsigned int *)(*(_QWORD *)(v39 + 136) - 8LL);
    do
    {
      if ( (_DWORD)v38 != a3[v31].PrivateDriverDataSize )
      {
        v30 = (_QWORD *)WdLogNewEntry5_WdWarning(v40, v39, v38);
        v30[3] = this;
        v30[4] = v29[7];
        v30[5] = (unsigned int)v31;
        v41 = v31;
        LODWORD(v31) = -1073741811;
        v30[6] = a3[v41].PrivateDriverDataSize;
        v30[7] = -1073741811LL;
        goto LABEL_65;
      }
      v31 = (unsigned int)(v31 + 1);
    }
    while ( (unsigned int)v31 < (unsigned int)v40 );
  }
  if ( (*(_DWORD *)(v39 + 12) & 0x100) != 0 )
  {
    v30 = (_QWORD *)WdLogNewEntry5_WdWarning(v40, v39, v38);
    v30[3] = this;
    v30[4] = v29[7];
    goto LABEL_27;
  }
  v42 = v40 + *(_DWORD *)(v39 + 132);
  if ( v42 > 0x100 )
  {
    v30 = (_QWORD *)WdLogNewEntry5_WdWarning(v40, v39, v38);
    v30[3] = this;
    v30[4] = v29[7];
    v30[5] = 256LL;
    goto LABEL_19;
  }
  *(_DWORD *)&a2->Flags |= 2u;
  if ( v42 > 1 )
  {
    v43 = 8LL * v42;
    if ( !is_mul_ok(v42, 8uLL) )
      v43 = -1LL;
    v47 = operator new[](v43, 0x4B677844u, PagedPool);
    if ( !v47 )
    {
      v30 = (_QWORD *)WdLogNewEntry5_WdWarning(v45, v44, v46);
      v30[3] = this;
      v30[4] = v42;
      goto LABEL_44;
    }
    v48 = v29[7];
    v49 = *(void **)(v48 + 168);
    if ( v49 != (void *)(v48 + 160) )
    {
      operator delete[](v49);
      v48 = v29[7];
    }
    *(_QWORD *)(v48 + 168) = v47;
    LODWORD(v40) = a2->NumAllocations;
  }
  v50 = 0;
  if ( !(_DWORD)v40 )
  {
LABEL_58:
    *(_DWORD *)(v29[7] + 132LL) = v42;
LABEL_59:
    DXGAUTOMUTEX::Initialize(a10, (struct DXGFASTMUTEX *const)(v29 + 10), 0);
    DXGAUTOMUTEX::Acquire(a10);
LABEL_60:
    DXGRESOURCEREFERENCE::MoveAssign(a7, &v148);
    *(_QWORD *)&v150 = 0LL;
    LODWORD(v31) = 0;
    goto LABEL_61;
  }
  while ( 1 )
  {
    if ( *(_BYTE *)(*((_QWORD *)this[2] + 2) + 209LL) )
    {
      v51 = (DXGADAPTERALLOCATION_VGPU *)operator new[](0x70uLL, 0x4B677844u, PagedPool);
      if ( v51 )
      {
        v55 = DXGADAPTERALLOCATION_VGPU::DXGADAPTERALLOCATION_VGPU(v51);
        goto LABEL_55;
      }
    }
    else
    {
      v55 = (DXGADAPTERALLOCATION_VGPU *)operator new[](0x40uLL, 0x4B677844u, PagedPool);
      if ( v55 )
      {
        *((_DWORD *)v55 + 1) = 0;
        *((_QWORD *)v55 + 1) = 0LL;
        *((_QWORD *)v55 + 2) = 0LL;
        *((_QWORD *)v55 + 4) = 0LL;
        *((_DWORD *)v55 + 10) = 0;
        *((_QWORD *)v55 + 7) = 0LL;
        *((_QWORD *)v55 + 6) = 0LL;
        goto LABEL_55;
      }
    }
    v55 = 0LL;
LABEL_55:
    if ( !v55 )
      break;
    v56 = (__int64 *)((char *)v55 + 48);
    v57 = v29[7] + 136LL;
    v58 = *(__int64 ***)(v29[7] + 144LL);
    if ( *v58 != (__int64 *)v57 )
      goto LABEL_190;
    *v56 = v57;
    ++v50;
    v56[1] = (__int64)v58;
    *v58 = v56;
    *(_QWORD *)(v57 + 8) = v56;
    if ( v50 >= a2->NumAllocations )
      goto LABEL_58;
  }
  v30 = (_QWORD *)WdLogNewEntry5_WdWarning(v53, v52, v54);
  v30[3] = this;
  v30[4] = a2->NumAllocations;
LABEL_44:
  v31 = -1073741801LL;
LABEL_13:
  v30[5] = v31;
LABEL_65:
  WdLogEvent5_WdWarning(v30);
LABEL_61:
  DXGDEVICE::OpenResourceObject_::_2_::ENSURE_LOCK_RELEASE::_ENSURE_LOCK_RELEASE((DXGAUTOPUSHLOCK **)&v150, v59);
  DXGRESOURCEREFERENCE::~DXGRESOURCEREFERENCE((DXGRESOURCEREFERENCE *)&v148);
  return (unsigned int)v31;
}
