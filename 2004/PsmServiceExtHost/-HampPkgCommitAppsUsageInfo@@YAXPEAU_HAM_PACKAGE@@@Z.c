/*
 * XREFs of ?HampPkgCommitAppsUsageInfo@@YAXPEAU_HAM_PACKAGE@@@Z @ 0x180024330
 * Callers:
 *     ?HampPkgUpdateWorker@@YAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_WORK@@@Z @ 0x180023D00 (-HampPkgUpdateWorker@@YAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_WORK@@@Z.c)
 * Callees:
 *     ?RmpActivityHostCheckQueueDelete@@YAXPEAU_RM_ACTIVITY_HOST@@@Z @ 0x180009E2C (-RmpActivityHostCheckQueueDelete@@YAXPEAU_RM_ACTIVITY_HOST@@@Z.c)
 *     ?RmHamHostReferenceUnsafe@@YAKPEAU_RM_HAM_ACTIVITY_HOST@@@Z @ 0x18000EACC (-RmHamHostReferenceUnsafe@@YAKPEAU_RM_HAM_ACTIVITY_HOST@@@Z.c)
 *     ?RmpReleaseGlobalLock@@YAXXZ @ 0x18000F120 (-RmpReleaseGlobalLock@@YAXXZ.c)
 *     ?RmpAcquireGlobalLock@@YAXXZ @ 0x18001E110 (-RmpAcquireGlobalLock@@YAXXZ.c)
 *     CempRcTableGetFirstActiveObject @ 0x180024D60 (CempRcTableGetFirstActiveObject.c)
 *     ?HampUsageInfoRegistrySaveForApp@@YAJPEBGPEAX0PEAU_HAM_APPLICATION_USAGE_INFO@@@Z @ 0x1800254EC (-HampUsageInfoRegistrySaveForApp@@YAJPEBGPEAX0PEAU_HAM_APPLICATION_USAGE_INFO@@@Z.c)
 *     ?HamRcNodeGetFirst@@YAPEAU_HAM_RC_TREE_NODE@@PEAU1@K@Z @ 0x180025C78 (-HamRcNodeGetFirst@@YAPEAU_HAM_RC_TREE_NODE@@PEAU1@K@Z.c)
 *     CemRcTableGetNext @ 0x180027194 (CemRcTableGetNext.c)
 *     CemRcObjectDereference @ 0x180027240 (CemRcObjectDereference.c)
 *     ?HamRcNodeGetSuccessor@@YAPEAU_HAM_RC_TREE_NODE@@PEAU1@0@Z @ 0x1800272F8 (-HamRcNodeGetSuccessor@@YAPEAU_HAM_RC_TREE_NODE@@PEAU1@0@Z.c)
 *     __security_check_cookie @ 0x180044E00 (__security_check_cookie.c)
 *     memset_0 @ 0x18004651A (memset_0.c)
 *     _guard_dispatch_icall_nop @ 0x180046540 (_guard_dispatch_icall_nop.c)
 */

void __fastcall HampPkgCommitAppsUsageInfo(struct _HAM_PACKAGE *a1)
{
  struct _HAM_RC_TREE_NODE *v1; // r14
  int v2; // edi
  __int64 v3; // rax
  __int64 v4; // rcx
  _QWORD *FirstActiveObject; // r12
  unsigned __int64 v6; // rdi
  unsigned __int64 v7; // r14
  unsigned __int64 v8; // r13
  DWORD v9; // r15d
  unsigned __int64 v10; // rsi
  _QWORD *Value; // rbx
  DWORD CurrentThreadId; // eax
  DWORD v13; // r15d
  _QWORD *v14; // rbx
  int *v15; // rax
  int *v16; // rbx
  _QWORD *v17; // rax
  _QWORD *v18; // rax
  DWORD v19; // r12d
  _QWORD *v20; // r15
  __int64 v21; // rcx
  unsigned __int64 v22; // r15
  unsigned __int64 v23; // rdx
  unsigned __int64 v24; // rax
  bool v25; // cc
  unsigned __int64 v26; // rax
  unsigned __int64 v27; // rcx
  bool v28; // cc
  _QWORD *v29; // rax
  DWORD v30; // esi
  __int64 v31; // r14
  _QWORD *v32; // rdi
  DWORD v33; // eax
  DWORD v34; // esi
  _QWORD *v35; // rdi
  __int64 v36; // rdi
  __int64 v37; // rdx
  int *v38; // r14
  _QWORD *v39; // rax
  _QWORD *v40; // rax
  DWORD v41; // esi
  _QWORD *v42; // rdi
  __int64 v43; // rdx
  _QWORD *v44; // rax
  unsigned __int64 v45; // rax
  unsigned __int64 v46; // rcx
  bool v47; // cc
  __int128 v48; // rax
  bool v49; // cc
  struct _HAM_RC_TREE_NODE *v50; // rax
  char *v51; // rdi
  unsigned __int64 i; // rbx
  _QWORD *v53; // rax
  _QWORD *v54; // rcx
  signed __int64 v55; // rax
  signed __int64 v56; // rcx
  bool v57; // zf
  signed __int64 v58; // rtt
  __int64 *v59; // rdx
  __int64 v60; // r8
  __int64 v61; // rdx
  _QWORD **v62; // rax
  unsigned __int64 v63; // rcx
  _QWORD *v64; // rcx
  unsigned __int64 v65; // rdi
  signed __int64 v66; // rax
  signed __int64 v67; // rax
  struct _HAM_RC_TREE_NODE *Successor; // rbx
  int v69; // [rsp+20h] [rbp-E0h]
  int v70; // [rsp+24h] [rbp-DCh]
  struct _HAM_RC_TREE_NODE *Next; // [rsp+28h] [rbp-D8h]
  __int128 v72; // [rsp+30h] [rbp-D0h]
  __int128 v73; // [rsp+30h] [rbp-D0h]
  __int128 v74; // [rsp+40h] [rbp-C0h]
  __int128 v75; // [rsp+40h] [rbp-C0h]
  int v76; // [rsp+50h] [rbp-B0h] BYREF
  struct _HAM_RC_TREE_NODE *v77; // [rsp+58h] [rbp-A8h]
  __int128 v78; // [rsp+60h] [rbp-A0h]
  __int128 v79; // [rsp+70h] [rbp-90h]
  __int128 v80; // [rsp+80h] [rbp-80h] BYREF
  __int128 v81; // [rsp+90h] [rbp-70h]
  wchar_t String1[8]; // [rsp+A0h] [rbp-60h] BYREF
  __int128 v83; // [rsp+B0h] [rbp-50h]
  __int128 v84; // [rsp+C0h] [rbp-40h]
  __int128 v85; // [rsp+D0h] [rbp-30h]
  __int128 v86; // [rsp+E0h] [rbp-20h]
  __int128 v87; // [rsp+F0h] [rbp-10h]
  __int128 v88; // [rsp+100h] [rbp+0h]
  __int128 v89; // [rsp+110h] [rbp+10h]
  __int16 v90; // [rsp+120h] [rbp+20h]
  wchar_t String2[8]; // [rsp+130h] [rbp+30h] BYREF
  __int128 v92; // [rsp+140h] [rbp+40h]
  __int128 v93; // [rsp+150h] [rbp+50h]
  __int128 v94; // [rsp+160h] [rbp+60h]
  __int128 v95; // [rsp+170h] [rbp+70h]
  __int128 v96; // [rsp+180h] [rbp+80h]
  __int128 v97; // [rsp+190h] [rbp+90h]
  __int128 v98; // [rsp+1A0h] [rbp+A0h]
  __int16 v99; // [rsp+1B0h] [rbp+B0h]

  v1 = a1;
  v77 = a1;
  v69 = 0;
  v2 = 0;
  memset_0(String1, 0, 0x82uLL);
  RtlAcquireSRWLockShared((char *)v1 + 56);
  v3 = *((_QWORD *)v1 + 6);
  if ( (v3 & 1) != 0 )
  {
    if ( v3 == 1 )
      v4 = 0LL;
    else
      v4 = v3 ^ (((unsigned __int64)v1 + 40) | 1);
  }
  else
  {
    v4 = *((_QWORD *)v1 + 6);
  }
  FirstActiveObject = (_QWORD *)CempRcTableGetFirstActiveObject(v4);
  RtlReleaseSRWLockShared((char *)v1 + 56);
  if ( !FirstActiveObject )
    FirstActiveObject = 0LL;
  Next = (struct _HAM_RC_TREE_NODE *)FirstActiveObject;
  if ( FirstActiveObject )
  {
    while ( 1 )
    {
      v76 = 130;
      PsmGetApplicationNameFromKey(FirstActiveObject + 12, String2, &v76);
      if ( _wcsicmp(String1, String2) )
      {
        if ( v2 )
          HampUsageInfoRegistrySaveForApp(
            (const unsigned __int16 *)v1 + 48,
            (char *)v1 + 228,
            String1,
            (struct _HAM_APPLICATION_USAGE_INFO *)&v80);
        v80 = 0xFFFFFFFFFFFFFFFFuLL;
        v81 = 0xFFFFFFFFFFFFFFFFuLL;
        v69 = 0;
      }
      v6 = -1LL;
      v70 = 0;
      v7 = 0LL;
      v8 = 0LL;
      v9 = HampLockTrackerId;
      v10 = -1LL;
      v78 = 0xFFFFFFFFFFFFFFFFuLL;
      v79 = 0xFFFFFFFFFFFFFFFFuLL;
      if ( HampLockTrackerId != -1 )
      {
        Value = TlsGetValue(HampLockTrackerId);
        if ( *(_QWORD *)TlsGetValue(v9) )
          __int2c();
        *Value |= 1uLL;
        ++Value[1];
      }
      RtlAcquireSRWLockExclusive(&RmpGlobalLock);
      CurrentThreadId = GetCurrentThreadId();
      v13 = HampLockTrackerId;
      dword_1800B4218 = CurrentThreadId;
      if ( HampLockTrackerId != -1 )
      {
        v14 = TlsGetValue(HampLockTrackerId);
        if ( (*(_QWORD *)TlsGetValue(v13) & 0xFFFFFFFFFFFFFFE0uLL) != 0 )
          __int2c();
        *v14 |= 0x20uLL;
        ++v14[6];
      }
      RtlAcquireSRWLockShared(FirstActiveObject + 72);
      v15 = (int *)FirstActiveObject[74];
      if ( v15 == (int *)(FirstActiveObject + 74) )
      {
LABEL_165:
        v16 = 0LL;
      }
      else
      {
        while ( 1 )
        {
          v16 = v15 - 202;
          if ( *(v15 - 212) >= 0 )
            break;
          v15 = *(int **)v15;
          if ( v15 == (int *)(FirstActiveObject + 74) )
            goto LABEL_165;
        }
        ++*((_QWORD *)v16 + 74);
      }
      if ( HampLockTrackerId != -1 )
      {
        v17 = TlsGetValue(HampLockTrackerId);
        if ( (*(_BYTE *)v17 & 0x20) == 0 )
          __int2c();
        v57 = v17[6]-- == 1LL;
        if ( v57 )
          *v17 &= ~0x20uLL;
      }
      RtlReleaseSRWLockShared(FirstActiveObject + 72);
      dword_1800B4218 = 0;
      RtlReleaseSRWLockExclusive(&RmpGlobalLock);
      if ( HampLockTrackerId != -1 )
      {
        v18 = TlsGetValue(HampLockTrackerId);
        if ( (*(_BYTE *)v18 & 1) == 0 )
          __int2c();
        v57 = v18[1]-- == 1LL;
        if ( v57 )
          *v18 &= ~1uLL;
      }
      if ( v16 )
      {
        while ( 1 )
        {
          v19 = HampLockTrackerId;
          if ( HampLockTrackerId != -1 )
          {
            v20 = TlsGetValue(HampLockTrackerId);
            if ( (*(_QWORD *)TlsGetValue(v19) & 0xFFFFFFFFFFFFFFFEuLL) != 0 )
              __int2c();
            *v20 |= 2uLL;
            ++v20[2];
          }
          RtlAcquireSRWLockExclusive(v16);
          v16[2] = GetCurrentThreadId();
          v21 = *((_QWORD *)v16 + 81);
          v70 |= (v21 & 0x2000000000000000LL) != 0;
          *((_QWORD *)v16 + 81) = v21 & 0xCFFFFFFFFFFFFFFFuLL;
          v22 = ((v21 & 0xDFFFFFFFFFFFFFFFuLL) >> 60) & 1;
          v23 = *((_QWORD *)v16 + 127);
          v24 = *((_QWORD *)v16 + 126);
          v25 = v24 <= v23;
          if ( v24 >= v23 )
            goto LABEL_141;
          if ( v6 >= v7 )
            break;
          if ( v24 <= v7 && v23 >= v6 )
          {
LABEL_37:
            if ( v24 < v6 )
              v6 = *((_QWORD *)v16 + 126);
LABEL_39:
            *(_QWORD *)&v72 = v6;
            goto LABEL_40;
          }
LABEL_148:
          if ( (__int64)v24 <= (__int64)v6 )
            goto LABEL_39;
          *(_QWORD *)&v72 = *((_QWORD *)v16 + 126);
LABEL_40:
          v26 = *((_QWORD *)v16 + 129);
          v27 = *((_QWORD *)v16 + 128);
          v28 = v27 <= v26;
          if ( v27 >= v26 )
            goto LABEL_41;
          if ( v10 >= v8 )
          {
            if ( v10 > v8 )
            {
              if ( v10 <= v26 )
                goto LABEL_42;
              goto LABEL_136;
            }
            v28 = v27 <= v26;
LABEL_41:
            if ( v28 || v10 >= v8 || v27 <= v8 )
              goto LABEL_42;
            goto LABEL_136;
          }
          if ( v27 <= v8 && v26 >= v10 )
          {
LABEL_42:
            if ( v27 < v10 )
              v10 = *((_QWORD *)v16 + 128);
            goto LABEL_44;
          }
LABEL_136:
          if ( (__int64)v27 > (__int64)v10 )
          {
            *(_QWORD *)&v74 = *((_QWORD *)v16 + 128);
            goto LABEL_45;
          }
LABEL_44:
          *(_QWORD *)&v74 = v10;
LABEL_45:
          if ( v23 <= v7 )
            *((_QWORD *)&v72 + 1) = v7;
          else
            *((_QWORD *)&v72 + 1) = *((_QWORD *)v16 + 127);
          if ( v26 <= v8 )
            *((_QWORD *)&v74 + 1) = v8;
          else
            *((_QWORD *)&v74 + 1) = *((_QWORD *)v16 + 129);
          v78 = v72;
          v79 = v74;
          if ( HampLockTrackerId != -1 )
          {
            v29 = TlsGetValue(HampLockTrackerId);
            if ( (*(_BYTE *)v29 & 2) == 0 )
              __int2c();
            v57 = v29[2]-- == 1LL;
            if ( v57 )
              *v29 &= ~2uLL;
          }
          v16[2] = 0;
          RtlReleaseSRWLockExclusive(v16);
          if ( (_DWORD)v22 )
          {
            RmpAcquireGlobalLock();
            v57 = (*((_QWORD *)v16 + 74))-- == 1LL;
            if ( v57 )
              RmpActivityHostCheckQueueDelete((struct _RM_ACTIVITY_HOST *)(v16 - 16), v61);
            RmpReleaseGlobalLock();
          }
          v30 = HampLockTrackerId;
          v31 = *((_QWORD *)v16 + 97);
          if ( HampLockTrackerId != -1 )
          {
            v32 = TlsGetValue(HampLockTrackerId);
            if ( *(_QWORD *)TlsGetValue(v30) )
              __int2c();
            *v32 |= 1uLL;
            ++v32[1];
          }
          RtlAcquireSRWLockExclusive(&RmpGlobalLock);
          v33 = GetCurrentThreadId();
          v34 = HampLockTrackerId;
          dword_1800B4218 = v33;
          if ( HampLockTrackerId != -1 )
          {
            v35 = TlsGetValue(HampLockTrackerId);
            if ( (*(_QWORD *)TlsGetValue(v34) & 0xFFFFFFFFFFFFFFE0uLL) != 0 )
              __int2c();
            *v35 |= 0x20uLL;
            ++v35[6];
          }
          v36 = v31 + 576;
          RtlAcquireSRWLockShared(v31 + 576);
          v37 = *((_QWORD *)v16 + 101);
          if ( v37 == v31 + 592 )
          {
LABEL_64:
            v38 = 0LL;
          }
          else
          {
            while ( 1 )
            {
              v38 = (int *)(v37 - 808);
              if ( (unsigned int)RmHamHostReferenceUnsafe((struct _RM_HAM_ACTIVITY_HOST *)(v37 - 808)) )
                break;
              v37 = *v59;
              if ( v37 == v60 )
                goto LABEL_64;
            }
          }
          if ( HampLockTrackerId != -1 )
          {
            v39 = TlsGetValue(HampLockTrackerId);
            if ( (*(_BYTE *)v39 & 0x20) == 0 )
              __int2c();
            v57 = v39[6]-- == 1LL;
            if ( v57 )
              *v39 &= ~0x20uLL;
          }
          RtlReleaseSRWLockShared(v36);
          dword_1800B4218 = 0;
          RtlReleaseSRWLockExclusive(&RmpGlobalLock);
          if ( HampLockTrackerId != -1 )
          {
            v40 = TlsGetValue(HampLockTrackerId);
            if ( (*(_BYTE *)v40 & 1) == 0 )
              __int2c();
            v57 = v40[1]-- == 1LL;
            if ( v57 )
              *v40 &= ~1uLL;
          }
          v41 = HampLockTrackerId;
          if ( HampLockTrackerId != -1 )
          {
            v42 = TlsGetValue(HampLockTrackerId);
            if ( *(_QWORD *)TlsGetValue(v41) )
              __int2c();
            *v42 |= 1uLL;
            ++v42[1];
          }
          RtlAcquireSRWLockExclusive(&RmpGlobalLock);
          dword_1800B4218 = GetCurrentThreadId();
          v57 = (*((_QWORD *)v16 + 74))-- == 1LL;
          if ( v57 )
            RmpActivityHostCheckQueueDelete((struct _RM_ACTIVITY_HOST *)(v16 - 16), v43);
          dword_1800B4218 = 0;
          RtlReleaseSRWLockExclusive(&RmpGlobalLock);
          if ( HampLockTrackerId != -1 )
          {
            v44 = TlsGetValue(HampLockTrackerId);
            if ( (*(_BYTE *)v44 & 1) == 0 )
              __int2c();
            v57 = v44[1]-- == 1LL;
            if ( v57 )
              *v44 &= ~1uLL;
          }
          v8 = *((_QWORD *)&v79 + 1);
          v16 = v38;
          v10 = v79;
          v57 = v38 == 0LL;
          v7 = *((_QWORD *)&v78 + 1);
          v6 = v78;
          if ( v57 )
          {
            FirstActiveObject = Next;
            goto LABEL_88;
          }
        }
        if ( v6 > v7 )
        {
          if ( v6 <= v23 )
            goto LABEL_37;
          goto LABEL_148;
        }
        v25 = v24 <= v23;
LABEL_141:
        if ( v25 || v6 >= v7 || v24 <= v7 )
          goto LABEL_37;
        goto LABEL_148;
      }
LABEL_88:
      v46 = *((_QWORD *)&v80 + 1);
      v45 = v80;
      v47 = v6 <= v7;
      if ( v6 < v7 )
      {
        if ( (unsigned __int64)v80 < *((_QWORD *)&v80 + 1) )
        {
          if ( v6 <= *((_QWORD *)&v80 + 1) && v7 >= (unsigned __int64)v80 )
            goto LABEL_92;
          goto LABEL_127;
        }
        if ( (unsigned __int64)v80 > *((_QWORD *)&v80 + 1) )
        {
          if ( (unsigned __int64)v80 <= v7 )
            goto LABEL_92;
          goto LABEL_127;
        }
        v47 = v6 <= v7;
      }
      if ( v47 || (unsigned __int64)v80 >= *((_QWORD *)&v80 + 1) || v6 <= *((_QWORD *)&v80 + 1) )
      {
LABEL_92:
        if ( v6 < (unsigned __int64)v80 )
          v45 = v6;
LABEL_94:
        *(_QWORD *)&v73 = v45;
        goto LABEL_95;
      }
LABEL_127:
      if ( (__int64)v6 <= (__int64)v80 )
        goto LABEL_94;
      *(_QWORD *)&v73 = v6;
LABEL_95:
      v48 = v81;
      v49 = v10 <= v8;
      if ( v10 >= v8 )
        goto LABEL_96;
      if ( (unsigned __int64)v81 >= *((_QWORD *)&v81 + 1) )
      {
        if ( (unsigned __int64)v81 > *((_QWORD *)&v81 + 1) )
        {
          if ( (unsigned __int64)v81 <= v8 )
            goto LABEL_97;
          goto LABEL_159;
        }
        v49 = v10 <= v8;
LABEL_96:
        if ( v49 || (unsigned __int64)v81 >= *((_QWORD *)&v81 + 1) || v10 <= *((_QWORD *)&v81 + 1) )
          goto LABEL_97;
        goto LABEL_159;
      }
      if ( v10 <= *((_QWORD *)&v81 + 1) && v8 >= (unsigned __int64)v81 )
      {
LABEL_97:
        if ( v10 < (unsigned __int64)v81 )
          *(_QWORD *)&v48 = v10;
        goto LABEL_99;
      }
LABEL_159:
      if ( (__int64)v10 > (__int64)v81 )
      {
        *(_QWORD *)&v75 = v10;
        goto LABEL_100;
      }
LABEL_99:
      *(_QWORD *)&v75 = v48;
LABEL_100:
      if ( v7 > *((_QWORD *)&v80 + 1) )
        v46 = v7;
      v90 = v99;
      v1 = v77;
      *((_QWORD *)&v73 + 1) = v46;
      if ( v8 > *((_QWORD *)&v81 + 1) )
        *((_QWORD *)&v48 + 1) = v8;
      v2 = v70 | v69;
      *((_QWORD *)&v75 + 1) = *((_QWORD *)&v48 + 1);
      v69 |= v70;
      v80 = v73;
      v81 = v75;
      v83 = v92;
      *(_OWORD *)String1 = *(_OWORD *)String2;
      v85 = v94;
      v84 = v93;
      v87 = v96;
      v86 = v95;
      v89 = v98;
      v88 = v97;
      v50 = (struct _HAM_RC_TREE_NODE *)(FirstActiveObject[4] & 0xFFFFFFFFFFFFFFFCuLL);
      if ( v50 == (struct _HAM_RC_TREE_NODE *)((char *)v77 + 40) )
      {
        v51 = (char *)v50 + 16;
        RtlAcquireSRWLockShared((char *)v50 + 16);
        i = FirstActiveObject[1];
        v53 = FirstActiveObject;
        if ( i )
        {
          v54 = *(_QWORD **)i;
          if ( *(_QWORD *)i )
          {
            do
            {
              i = (unsigned __int64)v54;
              v54 = (_QWORD *)*v54;
            }
            while ( v54 );
          }
        }
        else
        {
          for ( i = FirstActiveObject[2] & 0xFFFFFFFFFFFFFFFCuLL; i; i = *(_QWORD *)(i + 16) & 0xFFFFFFFFFFFFFFFCuLL )
          {
            if ( *(_QWORD **)i == v53 )
              break;
            v53 = (_QWORD *)i;
          }
        }
        if ( i )
        {
          while ( !*(_QWORD *)(i + 24) )
          {
            v62 = *(_QWORD ***)(i + 8);
            v63 = i;
            if ( v62 )
            {
              v64 = *v62;
              for ( i = *(_QWORD *)(i + 8); v64; v64 = (_QWORD *)*v64 )
                i = (unsigned __int64)v64;
            }
            else
            {
              for ( i = *(_QWORD *)(i + 16) & 0xFFFFFFFFFFFFFFFCuLL; i; i = *(_QWORD *)(i + 16) & 0xFFFFFFFFFFFFFFFCuLL )
              {
                if ( *(_QWORD *)i == v63 )
                  break;
                v63 = i;
              }
            }
            if ( !i )
              goto LABEL_124;
          }
          if ( _InterlockedIncrement64((volatile signed __int64 *)(i + 24)) <= 1 )
            __fastfail(0xEu);
        }
        else
        {
LABEL_124:
          i = 0LL;
        }
        RtlReleaseSRWLockShared(v51);
        _m_prefetchw(FirstActiveObject + 3);
        v55 = FirstActiveObject[3];
        v56 = v55 - 1;
        v57 = v55 == 1;
        if ( v55 - 1 <= 0 )
        {
LABEL_198:
          if ( !v57 )
            __fastfail(0xEu);
          v65 = FirstActiveObject[4] & 0xFFFFFFFFFFFFFFFCuLL;
          if ( FirstActiveObject[2] == -1LL )
          {
            if ( _InterlockedDecrement64(FirstActiveObject + 3) <= -1 )
              __fastfail(0xEu);
            (*(void (__fastcall **)(_QWORD *))(v65 + 24))(FirstActiveObject);
          }
          else
          {
            RtlAcquireSRWLockExclusive(v65 + 16);
            v66 = _InterlockedExchangeAdd64(FirstActiveObject + 3, 0xFFFFFFFFFFFFFFFFuLL);
            v25 = v66 <= 1;
            v67 = v66 - 1;
            if ( v25 )
            {
              if ( v67 )
                __fastfail(0xEu);
              RtlReleaseSRWLockExclusive(v65 + 16);
              (*(void (__fastcall **)(_QWORD *))(v65 + 24))(FirstActiveObject);
            }
            else
            {
              RtlReleaseSRWLockExclusive(v65 + 16);
            }
          }
        }
        else
        {
          while ( 1 )
          {
            v58 = v55;
            v55 = _InterlockedCompareExchange64(FirstActiveObject + 3, v56, v55);
            if ( v58 == v55 )
              break;
            v56 = v55 - 1;
            v57 = v55 == 1;
            if ( v55 - 1 <= 0 )
              goto LABEL_198;
          }
        }
        v2 = v69;
        FirstActiveObject = (_QWORD *)i;
        Next = (struct _HAM_RC_TREE_NODE *)i;
      }
      else
      {
        Successor = (struct _HAM_RC_TREE_NODE *)((char *)v50 - 40);
        if ( _InterlockedIncrement64((volatile signed __int64 *)v50 - 2) <= 1 )
          __fastfail(0xEu);
        Next = (struct _HAM_RC_TREE_NODE *)CemRcTableGetNext(FirstActiveObject);
        FirstActiveObject = Next;
        if ( !Next )
        {
          Successor = HamRcNodeGetSuccessor(v1, Successor);
          if ( Successor )
          {
            while ( 1 )
            {
              Next = HamRcNodeGetFirst(Successor, 1u);
              FirstActiveObject = Next;
              if ( Next )
                break;
              Successor = HamRcNodeGetSuccessor(v1, Successor);
              if ( !Successor )
                goto LABEL_215;
            }
          }
          else
          {
LABEL_215:
            FirstActiveObject = 0LL;
            Next = 0LL;
          }
        }
        if ( Successor )
          CemRcObjectDereference(Successor);
      }
      if ( !FirstActiveObject )
      {
        if ( v2 )
          HampUsageInfoRegistrySaveForApp(
            (const unsigned __int16 *)v1 + 48,
            (char *)v1 + 228,
            String1,
            (struct _HAM_APPLICATION_USAGE_INFO *)&v80);
        return;
      }
    }
  }
}
