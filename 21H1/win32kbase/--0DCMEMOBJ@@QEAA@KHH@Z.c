/*
 * XREFs of ??0DCMEMOBJ@@QEAA@KHH@Z @ 0x1C0079A60
 * Callers:
 *     GreCreateDisplayDC @ 0x1C008A9B0 (GreCreateDisplayDC.c)
 * Callees:
 *     HmgAlloc @ 0x1C007AF10 (HmgAlloc.c)
 *     ?TrackObjectReferenceIncrement@@YAXW4ReferenceTrackerCountedType@@PEAX@Z @ 0x1C007FBF4 (-TrackObjectReferenceIncrement@@YAXW4ReferenceTrackerCountedType@@PEAX@Z.c)
 *     ?vUnlock@HANDLELOCK@@QEAAXXZ @ 0x1C0082DC0 (-vUnlock@HANDLELOCK@@QEAAXXZ.c)
 *     ?vLockHandle@HANDLELOCK@@AEAAXIHHH@Z @ 0x1C0083290 (-vLockHandle@HANDLELOCK@@AEAAXIHHH@Z.c)
 *     ?GetEntry@GdiHandleEntryDirectory@@QEAAPEAU_ENTRY@@I_N@Z @ 0x1C0083F70 (-GetEntry@GdiHandleEntryDirectory@@QEAAPEAU_ENTRY@@I_N@Z.c)
 *     ?GetEntryObject@GdiHandleEntryDirectory@@QEAAPEAVOBJECT@@I@Z @ 0x1C00840B0 (-GetEntryObject@GdiHandleEntryDirectory@@QEAAPEAVOBJECT@@I@Z.c)
 *     ?DecodeIndex@GdiHandleManager@@QEAAII@Z @ 0x1C00841C0 (-DecodeIndex@GdiHandleManager@@QEAAII@Z.c)
 *     HmgModifyHandleType @ 0x1C00AA8E0 (HmgModifyHandleType.c)
 *     ?ReferenceDereferenceCommon@CReferenceCountedType@CReferenceTracker@NSInstrumentation@@AEAAXPEAUSCircularBuffer@123@_N@Z @ 0x1C01574E8 (-ReferenceDereferenceCommon@CReferenceCountedType@CReferenceTracker@NSInstrumentation@@AEAAXPEAU.c)
 */

DCMEMOBJ *__fastcall DCMEMOBJ::DCMEMOBJ(DCMEMOBJ *this, __int64 a2, int a3)
{
  _QWORD *v5; // rax
  _QWORD *v6; // rbx
  __int64 v7; // rdx
  _OWORD *v8; // rax
  PKDPC *p_BufferChainingDpc; // rcx
  __int64 v10; // r9
  __int128 v11; // xmm0
  __int128 v12; // xmm0
  __int128 *v13; // rcx
  _OWORD *v14; // rax
  __int128 v15; // xmm0
  __int128 v16; // xmm0
  __int64 v17; // rdi
  _DWORD *v18; // rsi
  char v19; // al
  struct NSInstrumentation::CReferenceTracker::CReferenceCountedType::SCircularBuffer *v20; // rdx
  unsigned int v21; // edi
  GdiHandleManager *v22; // rsi
  __int64 v23; // rdx
  unsigned int v24; // r8d
  __int64 v25; // rcx
  __int64 v26; // r9
  _DWORD *v27; // rdx
  int v28; // eax
  unsigned int v29; // edi
  __int64 v30; // rdx
  unsigned int v31; // r8d
  __int64 v32; // rcx
  __int64 v33; // r10
  __int64 v34; // rax
  __int64 v35; // r15
  unsigned int v36; // esi
  __int64 v37; // rcx
  __int64 v38; // rdx
  __int64 v39; // rcx
  GdiHandleManager *v40; // rdi
  unsigned int v41; // eax
  __int64 v42; // rsi
  unsigned int v43; // ebp
  unsigned int v44; // edx
  __int64 v45; // rcx
  __int64 v46; // rsi
  __int64 v47; // rdi
  __int64 v48; // r13
  _QWORD *v49; // rax
  char v50; // al
  char v51; // al
  struct NSInstrumentation::CReferenceTracker::CReferenceCountedType::SCircularBuffer *v52; // rdx
  unsigned int v53; // edi
  GdiHandleManager *v54; // rsi
  __int64 v55; // rdx
  unsigned int v56; // r8d
  __int64 v57; // rcx
  __int64 v58; // r9
  _DWORD *v59; // rdx
  int v60; // eax
  unsigned int v61; // edi
  __int64 v62; // rdx
  unsigned int v63; // r8d
  __int64 v64; // rcx
  __int64 v65; // r10
  __int64 v66; // rax
  __int64 v67; // rbp
  unsigned int v68; // edi
  __int64 v69; // rcx
  __int64 v70; // rdx
  __int64 v71; // rcx
  GdiHandleManager *v72; // r15
  __int64 v73; // r15
  unsigned int v74; // edx
  __int64 v75; // rcx
  __int64 v76; // r15
  unsigned __int16 *v77; // rsi
  __int64 v78; // r13
  _QWORD *v79; // rax
  char v80; // al
  char v81; // al
  unsigned int v82; // edi
  GdiHandleManager *v83; // rsi
  __int64 v84; // rdx
  unsigned int v85; // r8d
  __int64 v86; // rcx
  __int64 v87; // r9
  _DWORD *v88; // rdx
  int v89; // eax
  unsigned int v90; // edi
  __int64 v91; // rdx
  unsigned int v92; // r8d
  __int64 v93; // rcx
  __int64 v94; // r10
  __int64 v95; // rax
  DCMEMOBJ *result; // rax
  __int64 CurrentProcess; // rax
  __int64 v98; // rcx
  __int64 CurrentThreadProcess; // rax
  int v100; // edx
  GdiHandleManager *v101; // rdi
  unsigned int v102; // eax
  __int64 v103; // r9
  unsigned __int64 v104; // rdx
  unsigned int v105; // r8d
  __int64 v106; // rcx
  __int64 v107; // r10
  __int64 v108; // rdx
  __int64 v109; // rax
  __int64 v110; // rcx
  __int64 v111; // rax
  GdiHandleManager *v112; // rdi
  unsigned int v113; // eax
  struct OBJECT *EntryObject; // rax
  __int64 v115; // rdx
  __int64 v116; // rcx
  unsigned __int64 v117; // [rsp+30h] [rbp-98h] BYREF
  unsigned __int64 v118; // [rsp+38h] [rbp-90h] BYREF
  __int64 v119; // [rsp+40h] [rbp-88h] BYREF
  int v120; // [rsp+48h] [rbp-80h]
  int v121; // [rsp+4Ch] [rbp-7Ch]
  unsigned __int16 *v122; // [rsp+58h] [rbp-70h] BYREF
  int v123; // [rsp+60h] [rbp-68h]
  int v124; // [rsp+64h] [rbp-64h]
  __int64 v125; // [rsp+70h] [rbp-58h] BYREF
  int v126; // [rsp+78h] [rbp-50h]
  __int64 v127; // [rsp+D0h] [rbp+8h]
  __int64 v128; // [rsp+D0h] [rbp+8h]
  int v129; // [rsp+D8h] [rbp+10h]

  v129 = a2;
  *((_QWORD *)this + 1) = 0LL;
  *(_QWORD *)this = 0LL;
  *((_DWORD *)this + 4) = 0;
  if ( (unsigned int)a2 > 2 )
    return this;
  LOBYTE(a2) = 1;
  v5 = (_QWORD *)HmgAlloc(2112LL, a2);
  *(_QWORD *)this = v5;
  v6 = v5;
  if ( v5 )
  {
    if ( a3 )
      HmgModifyHandleType(*v5 | 0x210000LL);
    v7 = 3LL;
    v8 = v6 + 68;
    p_BufferChainingDpc = &WPP_MAIN_CB.Queue.Wcb.BufferChainingDpc;
    v10 = 3LL;
    do
    {
      v8 += 8;
      v11 = *(_OWORD *)p_BufferChainingDpc;
      p_BufferChainingDpc += 16;
      *(v8 - 8) = v11;
      *(v8 - 7) = *((_OWORD *)p_BufferChainingDpc - 7);
      *(v8 - 6) = *((_OWORD *)p_BufferChainingDpc - 6);
      *(v8 - 5) = *((_OWORD *)p_BufferChainingDpc - 5);
      *(v8 - 4) = *((_OWORD *)p_BufferChainingDpc - 4);
      *(v8 - 3) = *((_OWORD *)p_BufferChainingDpc - 3);
      *(v8 - 2) = *((_OWORD *)p_BufferChainingDpc - 2);
      *(v8 - 1) = *((_OWORD *)p_BufferChainingDpc - 1);
      --v10;
    }
    while ( v10 );
    *v8 = *(_OWORD *)p_BufferChainingDpc;
    v8[1] = *((_OWORD *)p_BufferChainingDpc + 1);
    v12 = *((_OWORD *)p_BufferChainingDpc + 2);
    v6[122] = v6 + 68;
    v13 = (__int128 *)&dclevelDefault;
    v8[2] = v12;
    v14 = v6 + 10;
    do
    {
      v14 += 8;
      v15 = *v13;
      v13 += 8;
      *(v14 - 8) = v15;
      *(v14 - 7) = *(v13 - 7);
      *(v14 - 6) = *(v13 - 6);
      *(v14 - 5) = *(v13 - 5);
      *(v14 - 4) = *(v13 - 4);
      *(v14 - 3) = *(v13 - 3);
      *(v14 - 2) = *(v13 - 2);
      *(v14 - 1) = *(v13 - 1);
      --v7;
    }
    while ( v7 );
    v16 = *v13;
    v125 = 0LL;
    v126 = 0;
    *v14 = v16;
    v14[1] = v13[1];
    v14[2] = v13[2];
    v14[3] = v13[3];
    v14[4] = v13[4];
    v17 = *(_QWORD *)(*(_QWORD *)this + 136LL);
    HANDLELOCK::vLockHandle(
      (HANDLELOCK *)&v125,
      (unsigned __int16)*(_DWORD *)v17 | (*(_DWORD *)v17 >> 8) & 0xFF0000,
      0,
      0,
      0);
    if ( v126 )
    {
      v18 = (_DWORD *)v125;
      v19 = *(_BYTE *)(v125 + 14);
      if ( v19 == 5 )
      {
        TrackObjectReferenceIncrement(0LL, *(_QWORD *)(v17 + 680));
      }
      else if ( v19 == 16 )
      {
        v20 = *(struct NSInstrumentation::CReferenceTracker::CReferenceCountedType::SCircularBuffer **)(v17 + 136);
        if ( v20 )
        {
          if ( qword_1C024D3F8 )
            NSInstrumentation::CReferenceTracker::CReferenceCountedType::ReferenceDereferenceCommon(
              qword_1C024D3F8,
              v20,
              1);
        }
      }
      ++*(_DWORD *)(v17 + 8);
      v21 = *v18 & 0xFFFFFF;
      if ( v21 >= 0x10000 )
      {
        if ( *(_DWORD *)gpHandleManager > 0x10000u )
        {
          if ( *((unsigned __int8 *)GdiHandleEntryDirectory::GetEntry(
                                      *((GdiHandleEntryDirectory **)gpHandleManager + 2),
                                      *(unsigned __int16 *)v18,
                                      1)
               + 13) == HIWORD(v21) )
            v21 = (unsigned __int16)v21;
        }
        else
        {
          v21 = *(unsigned __int16 *)v18;
        }
      }
      v22 = gpHandleManager;
      v23 = *((_QWORD *)gpHandleManager + 2);
      v24 = *(_DWORD *)(v23 + 2056);
      if ( v21 >= v24 + ((*(unsigned __int16 *)(v23 + 2) + 0xFFFF) << 16) )
        goto LABEL_106;
      v25 = ((v21 - v24) >> 16) + 1;
      if ( v21 < v24 )
        v25 = 0LL;
      v26 = *(_QWORD *)(v23 + 8 * v25 + 8);
      if ( (_DWORD)v25 )
        v21 += ((1 - (_DWORD)v25) << 16) - v24;
      if ( v21 >= *(_DWORD *)(v26 + 20) )
LABEL_106:
        v27 = 0LL;
      else
        v27 = *(_DWORD **)(*(_QWORD *)(**(_QWORD **)(v26 + 24) + 8 * ((unsigned __int64)v21 >> 8))
                         + 16LL * (unsigned __int8)v21
                         + 8);
      v28 = (unsigned __int16)*v27;
      v29 = v28 | (*v27 >> 8) & 0xFF0000;
      if ( v29 >= 0x10000 )
      {
        if ( *(_DWORD *)gpHandleManager > 0x10000u )
        {
          if ( *((unsigned __int8 *)GdiHandleEntryDirectory::GetEntry(
                                      *((GdiHandleEntryDirectory **)gpHandleManager + 2),
                                      (unsigned __int16)v28,
                                      1)
               + 13) == HIWORD(v29) )
            v29 = (unsigned __int16)v29;
        }
        else
        {
          v29 = (unsigned __int16)v28;
        }
      }
      v30 = *((_QWORD *)v22 + 2);
      v31 = *(_DWORD *)(v30 + 2056);
      if ( v29 < v31 + ((*(unsigned __int16 *)(v30 + 2) + 0xFFFF) << 16) )
      {
        v32 = ((v29 - v31) >> 16) + 1;
        if ( v29 < v31 )
          v32 = 0LL;
        v33 = *(_QWORD *)(v30 + 8 * v32 + 8);
        if ( (_DWORD)v32 )
          v29 += ((1 - (_DWORD)v32) << 16) - v31;
        *(_DWORD *)(*(_QWORD *)v33 + 24LL * v29 + 8) &= ~1u;
        ExReleasePushLockExclusiveEx(
          *(_QWORD *)(**(_QWORD **)(v33 + 24) + 8 * ((unsigned __int64)v29 >> 8)) + 16LL * (unsigned __int8)v29,
          0LL);
        KeLeaveCriticalRegion();
      }
      KeLeaveCriticalRegion();
    }
    v34 = *(_QWORD *)this;
    v117 = 0LL;
    v35 = *(_QWORD *)(v34 + 144);
    v36 = (unsigned __int16)*(_DWORD *)v35 | (*(_DWORD *)v35 >> 8) & 0xFF0000;
    PsGetCurrentThreadWin32ThreadAndEnterCriticalRegion(&v117);
    if ( (unsigned __int8)KeIsAttachedProcess(v37) )
    {
      CurrentProcess = PsGetCurrentProcess(v39, v38);
      PsGetProcessSessionIdEx(CurrentProcess);
      CurrentThreadProcess = PsGetCurrentThreadProcess(v98);
      PsGetProcessSessionIdEx(CurrentThreadProcess);
    }
    v40 = gpHandleManager;
    v120 = 1;
    v41 = GdiHandleManager::DecodeIndex(gpHandleManager, v36);
    v42 = *((_QWORD *)v40 + 2);
    v43 = v41;
    v44 = *(_DWORD *)(v42 + 2056);
    if ( v41 >= v44 + ((*(unsigned __int16 *)(v42 + 2) + 0xFFFF) << 16) )
      goto LABEL_61;
    v45 = ((v41 - v44) >> 16) + 1;
    if ( v41 < v44 )
      v45 = 0LL;
    v46 = *(_QWORD *)(v42 + 8 * v45 + 8);
    if ( (_DWORD)v45 )
      v43 = ((1 - (_DWORD)v45) << 16) - v44 + v41;
    v47 = 0LL;
    if ( v43 < *(_DWORD *)(v46 + 20) )
    {
      v48 = 16LL * (unsigned __int8)v43;
      v49 = *(_QWORD **)(v46 + 24);
      v118 = 8 * ((unsigned __int64)v43 >> 8);
      v127 = v48 + *(_QWORD *)(*v49 + v118);
      KeEnterCriticalRegion();
      ExAcquirePushLockExclusiveEx(v127, 0LL);
      if ( v43 < *(_DWORD *)(v46 + 20) && *(_QWORD *)(*(_QWORD *)(**(_QWORD **)(v46 + 24) + v118) + v48 + 8) )
      {
        *(_DWORD *)(*(_QWORD *)v46 + 24LL * v43 + 8) |= 1u;
        v47 = 24LL * v43 + *(_QWORD *)v46;
      }
      else
      {
        ExReleasePushLockExclusiveEx(v127, 0LL);
        KeLeaveCriticalRegion();
      }
    }
    v119 = v47;
    if ( !v47 )
      goto LABEL_61;
    _m_prefetchw((const void *)(v47 + 8));
    v121 = *(_DWORD *)(v47 + 8);
    v50 = *(_BYTE *)(v47 + 15);
    if ( (v50 & 0x20) != 0 )
      goto LABEL_123;
    if ( (v50 & 0x40) == 0 )
    {
LABEL_43:
      v51 = *(_BYTE *)(v47 + 14);
      if ( v51 == 5 )
      {
        TrackObjectReferenceIncrement(0LL, *(_QWORD *)(v35 + 680));
      }
      else if ( v51 == 16 )
      {
        v52 = *(struct NSInstrumentation::CReferenceTracker::CReferenceCountedType::SCircularBuffer **)(v35 + 136);
        if ( v52 )
        {
          if ( qword_1C024D3F8 )
            NSInstrumentation::CReferenceTracker::CReferenceCountedType::ReferenceDereferenceCommon(
              qword_1C024D3F8,
              v52,
              1);
        }
      }
      ++*(_DWORD *)(v35 + 8);
      v53 = *(_DWORD *)v47 & 0xFFFFFF;
      if ( v53 >= 0x10000 )
      {
        if ( *(_DWORD *)gpHandleManager > 0x10000u )
        {
          if ( *((unsigned __int8 *)GdiHandleEntryDirectory::GetEntry(
                                      *((GdiHandleEntryDirectory **)gpHandleManager + 2),
                                      (unsigned __int16)v53,
                                      1)
               + 13) == HIWORD(v53) )
            v53 = (unsigned __int16)v53;
        }
        else
        {
          v53 = (unsigned __int16)v53;
        }
      }
      v54 = gpHandleManager;
      v55 = *((_QWORD *)gpHandleManager + 2);
      v56 = *(_DWORD *)(v55 + 2056);
      if ( v53 >= v56 + ((*(unsigned __int16 *)(v55 + 2) + 0xFFFF) << 16) )
        goto LABEL_133;
      v57 = ((v53 - v56) >> 16) + 1;
      if ( v53 < v56 )
        v57 = 0LL;
      v58 = *(_QWORD *)(v55 + 8 * v57 + 8);
      if ( (_DWORD)v57 )
        v53 += ((1 - (_DWORD)v57) << 16) - v56;
      if ( v53 >= *(_DWORD *)(v58 + 20) )
LABEL_133:
        v59 = 0LL;
      else
        v59 = *(_DWORD **)(*(_QWORD *)(**(_QWORD **)(v58 + 24) + 8 * ((unsigned __int64)v53 >> 8))
                         + 16LL * (unsigned __int8)v53
                         + 8);
      v60 = (unsigned __int16)*v59;
      v61 = v60 | (*v59 >> 8) & 0xFF0000;
      if ( v61 >= 0x10000 )
      {
        if ( *(_DWORD *)gpHandleManager > 0x10000u )
        {
          if ( *((unsigned __int8 *)GdiHandleEntryDirectory::GetEntry(
                                      *((GdiHandleEntryDirectory **)gpHandleManager + 2),
                                      (unsigned __int16)v60,
                                      1)
               + 13) == HIWORD(v61) )
            v61 = (unsigned __int16)v61;
        }
        else
        {
          v61 = (unsigned __int16)v60;
        }
      }
      v62 = *((_QWORD *)v54 + 2);
      v63 = *(_DWORD *)(v62 + 2056);
      if ( v61 < v63 + ((*(unsigned __int16 *)(v62 + 2) + 0xFFFF) << 16) )
      {
        v64 = ((v61 - v63) >> 16) + 1;
        if ( v61 < v63 )
          v64 = 0LL;
        v65 = *(_QWORD *)(v62 + 8 * v64 + 8);
        if ( (_DWORD)v64 )
          v61 += ((1 - (_DWORD)v64) << 16) - v63;
        *(_DWORD *)(*(_QWORD *)v65 + 24LL * v61 + 8) &= ~1u;
        ExReleasePushLockExclusiveEx(
          *(_QWORD *)(**(_QWORD **)(v65 + 24) + 8 * ((unsigned __int64)v61 >> 8)) + 16LL * (unsigned __int8)v61,
          0LL);
        KeLeaveCriticalRegion();
      }
LABEL_61:
      KeLeaveCriticalRegion();
LABEL_62:
      v66 = *(_QWORD *)this;
      v118 = 0LL;
      v67 = *(_QWORD *)(v66 + 96);
      v68 = (unsigned __int16)*(_DWORD *)v67 | (*(_DWORD *)v67 >> 8) & 0xFF0000;
      PsGetCurrentThreadWin32ThreadAndEnterCriticalRegion(&v118);
      if ( (unsigned __int8)KeIsAttachedProcess(v69) )
      {
        v109 = PsGetCurrentProcess(v71, v70);
        PsGetProcessSessionIdEx(v109);
        v111 = PsGetCurrentThreadProcess(v110);
        PsGetProcessSessionIdEx(v111);
      }
      v72 = gpHandleManager;
      v123 = 1;
      if ( v68 >= 0x10000 )
      {
        if ( *(_DWORD *)gpHandleManager > 0x10000u )
        {
          if ( *((unsigned __int8 *)GdiHandleEntryDirectory::GetEntry(
                                      *((GdiHandleEntryDirectory **)gpHandleManager + 2),
                                      (unsigned __int16)v68,
                                      1)
               + 13) == HIWORD(v68) )
            v68 = (unsigned __int16)v68;
        }
        else
        {
          v68 = (unsigned __int16)v68;
        }
      }
      v73 = *((_QWORD *)v72 + 2);
      v74 = *(_DWORD *)(v73 + 2056);
      if ( v68 >= v74 + ((*(unsigned __int16 *)(v73 + 2) + 0xFFFF) << 16) )
        goto LABEL_94;
      v75 = ((v68 - v74) >> 16) + 1;
      if ( v68 < v74 )
        v75 = 0LL;
      v76 = *(_QWORD *)(v73 + 8 * v75 + 8);
      if ( (_DWORD)v75 )
        v68 += ((1 - (_DWORD)v75) << 16) - v74;
      v77 = 0LL;
      if ( v68 < *(_DWORD *)(v76 + 20) )
      {
        v78 = 16LL * (unsigned __int8)v68;
        v79 = *(_QWORD **)(v76 + 24);
        v117 = 8 * ((unsigned __int64)v68 >> 8);
        v128 = v78 + *(_QWORD *)(*v79 + v117);
        KeEnterCriticalRegion();
        ExAcquirePushLockExclusiveEx(v128, 0LL);
        if ( v68 < *(_DWORD *)(v76 + 20) && *(_QWORD *)(*(_QWORD *)(**(_QWORD **)(v76 + 24) + v117) + v78 + 8) )
        {
          *(_DWORD *)(24LL * v68 + *(_QWORD *)v76 + 8) |= 1u;
          v77 = (unsigned __int16 *)(24LL * v68 + *(_QWORD *)v76);
        }
        else
        {
          ExReleasePushLockExclusiveEx(v128, 0LL);
          KeLeaveCriticalRegion();
        }
      }
      v122 = v77;
      if ( !v77 )
        goto LABEL_94;
      _m_prefetchw(v77 + 4);
      v124 = *((_DWORD *)v77 + 2);
      v80 = *((_BYTE *)v77 + 15);
      if ( (v80 & 0x20) != 0 )
        goto LABEL_147;
      if ( (v80 & 0x40) == 0 )
        goto LABEL_77;
      v112 = gpHandleManager;
      v113 = GdiHandleManager::DecodeIndex(gpHandleManager, *(_DWORD *)v77 & 0xFFFFFF);
      EntryObject = GdiHandleEntryDirectory::GetEntryObject(*((GdiHandleEntryDirectory **)v112 + 2), v113);
      if ( !*((_WORD *)EntryObject + 6) || *((struct _KTHREAD **)EntryObject + 2) != KeGetCurrentThread() )
      {
LABEL_147:
        HANDLELOCK::vUnlock((HANDLELOCK *)&v122);
        if ( !v123 )
          goto LABEL_95;
      }
      v77 = v122;
LABEL_77:
      v81 = *((_BYTE *)v77 + 14);
      if ( v81 == 5 )
      {
        v115 = *(_QWORD *)(v67 + 680);
        v116 = 0LL;
      }
      else
      {
        if ( v81 != 16 )
        {
LABEL_79:
          ++*(_DWORD *)(v67 + 8);
          v82 = *(_DWORD *)v77 & 0xFFFFFF;
          if ( v82 >= 0x10000 )
          {
            if ( *(_DWORD *)gpHandleManager > 0x10000u )
            {
              if ( *((unsigned __int8 *)GdiHandleEntryDirectory::GetEntry(
                                          *((GdiHandleEntryDirectory **)gpHandleManager + 2),
                                          *v77,
                                          1)
                   + 13) == HIWORD(v82) )
                v82 = (unsigned __int16)v82;
            }
            else
            {
              v82 = *v77;
            }
          }
          v83 = gpHandleManager;
          v84 = *((_QWORD *)gpHandleManager + 2);
          v85 = *(_DWORD *)(v84 + 2056);
          if ( v82 >= v85 + ((*(unsigned __int16 *)(v84 + 2) + 0xFFFF) << 16) )
            goto LABEL_157;
          v86 = ((v82 - v85) >> 16) + 1;
          if ( v82 < v85 )
            v86 = 0LL;
          v87 = *(_QWORD *)(v84 + 8 * v86 + 8);
          if ( (_DWORD)v86 )
            v82 += ((1 - (_DWORD)v86) << 16) - v85;
          if ( v82 >= *(_DWORD *)(v87 + 20) )
LABEL_157:
            v88 = 0LL;
          else
            v88 = *(_DWORD **)(*(_QWORD *)(**(_QWORD **)(v87 + 24) + 8 * ((unsigned __int64)v82 >> 8))
                             + 16LL * (unsigned __int8)v82
                             + 8);
          v89 = (unsigned __int16)*v88;
          v90 = v89 | (*v88 >> 8) & 0xFF0000;
          if ( v90 >= 0x10000 )
          {
            if ( *(_DWORD *)gpHandleManager > 0x10000u )
            {
              if ( *((unsigned __int8 *)GdiHandleEntryDirectory::GetEntry(
                                          *((GdiHandleEntryDirectory **)gpHandleManager + 2),
                                          (unsigned __int16)v89,
                                          1)
                   + 13) == HIWORD(v90) )
                v90 = (unsigned __int16)v90;
            }
            else
            {
              v90 = (unsigned __int16)v89;
            }
          }
          v91 = *((_QWORD *)v83 + 2);
          v92 = *(_DWORD *)(v91 + 2056);
          if ( v90 < v92 + ((*(unsigned __int16 *)(v91 + 2) + 0xFFFF) << 16) )
          {
            v93 = ((v90 - v92) >> 16) + 1;
            if ( v90 < v92 )
              v93 = 0LL;
            v94 = *(_QWORD *)(v91 + 8 * v93 + 8);
            if ( (_DWORD)v93 )
              v90 += ((1 - (_DWORD)v93) << 16) - v92;
            *(_DWORD *)(*(_QWORD *)v94 + 24LL * v90 + 8) &= ~1u;
            ExReleasePushLockExclusiveEx(
              *(_QWORD *)(**(_QWORD **)(v94 + 24) + 8 * ((unsigned __int64)v90 >> 8)) + 16LL * (unsigned __int8)v90,
              0LL);
            KeLeaveCriticalRegion();
          }
LABEL_94:
          KeLeaveCriticalRegion();
LABEL_95:
          *((_DWORD *)v6 + 8) = v129;
          *(_QWORD *)((char *)v6 + 36) = 0LL;
          *((_DWORD *)v6 + 11) = 0;
          v6[147] = 0LL;
          *(_DWORD *)(*(_QWORD *)(*(_QWORD *)this + 976LL) + 152LL) = 1179679;
          v95 = *(_QWORD *)this + 176LL;
          v6[218] = 0LL;
          v6[155] = v95;
          v6[172] = v95;
          v6[189] = v95;
          v6[206] = v95;
          v6[216] = 0LL;
          *((_DWORD *)v6 + 434) = 0;
          *(_DWORD *)(*(_QWORD *)this + 2076LL) = -1;
          *(_WORD *)(*(_QWORD *)this + 2072LL) = -1;
          result = this;
          v6[140] = 0LL;
          v6[257] = 0LL;
          v6[258] = 0LL;
          return result;
        }
        v115 = *(_QWORD *)(v67 + 136);
        v116 = 2LL;
      }
      TrackObjectReferenceIncrement(v116, v115);
      goto LABEL_79;
    }
    v100 = *(_DWORD *)v47;
    v101 = gpHandleManager;
    v102 = GdiHandleManager::DecodeIndex(gpHandleManager, v100 & 0xFFFFFF);
    v103 = *((_QWORD *)v101 + 2);
    v104 = v102;
    v105 = *(_DWORD *)(v103 + 2056);
    if ( v102 >= v105 + ((*(unsigned __int16 *)(v103 + 2) + 0xFFFF) << 16) )
      goto LABEL_120;
    v106 = ((v102 - v105) >> 16) + 1;
    if ( v102 < v105 )
      v106 = 0LL;
    v107 = *(_QWORD *)(v103 + 8 * v106 + 8);
    if ( (_DWORD)v106 )
      v104 = ((1 - (_DWORD)v106) << 16) - v105 + v102;
    if ( (unsigned int)v104 >= *(_DWORD *)(v107 + 20) )
LABEL_120:
      v108 = 0LL;
    else
      v108 = *(_QWORD *)(*(_QWORD *)(**(_QWORD **)(v107 + 24) + 8 * (v104 >> 8)) + 16LL * (unsigned __int8)v104 + 8);
    if ( !*(_WORD *)(v108 + 12) || *(struct _KTHREAD **)(v108 + 16) != KeGetCurrentThread() )
    {
LABEL_123:
      HANDLELOCK::vUnlock((HANDLELOCK *)&v119);
      if ( !v120 )
        goto LABEL_62;
    }
    v47 = v119;
    goto LABEL_43;
  }
  return this;
}
