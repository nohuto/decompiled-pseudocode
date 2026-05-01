/*
 * XREFs of ?HampPkgUpdateWorker@@YAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_WORK@@@Z @ 0x180023E70
 * Callers:
 *     <none>
 * Callees:
 *     ?HampPkgCommitStateSummary@@YAXPEAU_HAM_PACKAGE@@PEAT_HAM_EXTERNAL_STATE_SUMMARY@@@Z @ 0x180023634 (-HampPkgCommitStateSummary@@YAXPEAU_HAM_PACKAGE@@PEAT_HAM_EXTERNAL_STATE_SUMMARY@@@Z.c)
 *     ?HampPkgCommitAppsUsageInfo@@YAXPEAU_HAM_PACKAGE@@@Z @ 0x1800244A0 (-HampPkgCommitAppsUsageInfo@@YAXPEAU_HAM_PACKAGE@@@Z.c)
 *     ?HamRcNodeGetFirst@@YAPEAU_HAM_RC_TREE_NODE@@PEAU1@K@Z @ 0x180025DE8 (-HamRcNodeGetFirst@@YAPEAU_HAM_RC_TREE_NODE@@PEAU1@K@Z.c)
 *     CemRcTableGetNext @ 0x180027304 (CemRcTableGetNext.c)
 *     CemRcObjectDereference @ 0x1800273B0 (CemRcObjectDereference.c)
 *     ?HamRcNodeGetSuccessor@@YAPEAU_HAM_RC_TREE_NODE@@PEAU1@0@Z @ 0x180027468 (-HamRcNodeGetSuccessor@@YAPEAU_HAM_RC_TREE_NODE@@PEAU1@0@Z.c)
 *     _tlgWriteTransfer_EventWriteTransfer @ 0x18002E148 (_tlgWriteTransfer_EventWriteTransfer.c)
 *     __security_check_cookie @ 0x1800448B0 (__security_check_cookie.c)
 *     memset_0 @ 0x180047B3A (memset_0.c)
 *     _guard_dispatch_icall_nop @ 0x180047B60 (_guard_dispatch_icall_nop.c)
 *     ??$Write@U?$_tlgWrapSz@G@@U?$_tlgWrapperByVal@$03@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapSz@G@@AEBU?$_tlgWrapperByVal@$03@@@Z @ 0x180080694 (--$Write@U-$_tlgWrapSz@G@@U-$_tlgWrapperByVal@$03@@@-$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t.c)
 */

void __fastcall HampPkgUpdateWorker(struct _TP_CALLBACK_INSTANCE *a1, _DWORD *a2, struct _TP_WORK *a3)
{
  DWORD v4; // ebx
  DWORD v5; // edi
  _QWORD *Value; // rbx
  char *v7; // r13
  unsigned __int64 v8; // r12
  int v9; // ecx
  _QWORD *v10; // rax
  unsigned int v11; // edi
  __int64 v12; // rax
  struct _HAM_RC_TREE_NODE *i; // rsi
  DWORD v14; // ebp
  _QWORD *v15; // rbx
  unsigned int v16; // ebx
  _QWORD *v17; // rax
  unsigned int v18; // r10d
  unsigned int v19; // r9d
  __int16 v20; // r11
  int v21; // r10d
  int v22; // r10d
  int v23; // edi
  int v24; // eax
  int v25; // edi
  int v26; // eax
  unsigned __int64 v27; // rax
  unsigned __int64 v28; // rbp
  unsigned __int64 j; // rbx
  unsigned __int64 v30; // rax
  _QWORD *v31; // rcx
  signed __int64 v32; // rax
  signed __int64 v33; // rcx
  bool v34; // zf
  signed __int64 v35; // rtt
  DWORD v36; // esi
  _QWORD *v37; // rbx
  _QWORD *v38; // rax
  __int64 v39; // rcx
  signed __int64 v40; // rax
  signed __int64 v41; // rcx
  bool v42; // zf
  signed __int64 v43; // rtt
  DWORD v44; // ebx
  unsigned __int64 v45; // rbx
  signed __int64 v46; // r15
  bool v47; // cc
  signed __int64 v48; // r15
  _QWORD *k; // rcx
  unsigned __int64 v50; // rax
  struct _HAM_RC_TREE_NODE **v51; // rax
  struct _HAM_RC_TREE_NODE *v52; // rcx
  struct _HAM_RC_TREE_NODE *v53; // rcx
  _QWORD *v54; // rcx
  unsigned __int64 v55; // rbp
  signed __int64 v56; // rax
  signed __int64 v57; // rax
  struct _HAM_RC_TREE_NODE *Successor; // rbx
  _DWORD v59[2]; // [rsp+30h] [rbp-F8h] BYREF
  char *v60; // [rsp+38h] [rbp-F0h]
  _BYTE TlsValue[144]; // [rsp+40h] [rbp-E8h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v62; // [rsp+D0h] [rbp-58h] BYREF

  memset_0(TlsValue, 0, 0x88uLL);
  v4 = HampLockTrackerId;
  if ( HampLockTrackerId != -1 )
  {
    if ( TlsGetValue(HampLockTrackerId) )
      __int2c();
    TlsSetValue(v4, TlsValue);
  }
  if ( (unsigned int)dword_1800B3218 > 4 && (byte_1800B3228 & 0x40) != 0 && (qword_1800B3230 & 0x40) == qword_1800B3230 )
    tlgWriteTransfer_EventWriteTransfer((int)&dword_1800B3218, (int)&dword_1800A1AC0, 0, 0, 2u, &v62);
  v5 = HampLockTrackerId;
  if ( HampLockTrackerId != -1 )
  {
    Value = TlsGetValue(HampLockTrackerId);
    if ( (*(_QWORD *)TlsGetValue(v5) & 0xFFFFFFFFFFFFFFC0uLL) != 0 )
      __int2c();
    *Value |= 0x40uLL;
    ++Value[7];
  }
  v7 = (char *)(a2 + 76);
  RtlAcquireSRWLockExclusive(a2 + 76);
  a2[78] = GetCurrentThreadId();
  v8 = (unsigned __int64)(a2 + 10);
  v9 = a2[85];
  do
  {
    a2[85] = v9 & 0xFFFFFFEF;
    if ( HampLockTrackerId != -1 )
    {
      v10 = TlsGetValue(HampLockTrackerId);
      if ( (*(_BYTE *)v10 & 0x40) == 0 )
        __int2c();
      v34 = v10[7]-- == 1LL;
      if ( v34 )
        *v10 &= ~0x40uLL;
    }
    *((_DWORD *)v7 + 2) = 0;
    RtlReleaseSRWLockExclusive(v7);
    v11 = 128;
    RtlAcquireSRWLockShared(a2 + 14);
    v12 = *((_QWORD *)a2 + 6);
    if ( (v12 & 1) != 0 )
    {
      if ( v12 == 1 )
      {
LABEL_81:
        i = 0LL;
        goto LABEL_22;
      }
      i = (struct _HAM_RC_TREE_NODE *)(v12 ^ (v8 | 1));
    }
    else
    {
      i = (struct _HAM_RC_TREE_NODE *)*((_QWORD *)a2 + 6);
    }
    if ( !i )
      goto LABEL_81;
    while ( !*((_QWORD *)i + 3) )
    {
      v51 = (struct _HAM_RC_TREE_NODE **)*((_QWORD *)i + 1);
      v52 = i;
      if ( v51 )
      {
        v53 = *v51;
        for ( i = (struct _HAM_RC_TREE_NODE *)*((_QWORD *)i + 1); v53; v53 = *(struct _HAM_RC_TREE_NODE **)v53 )
          i = v53;
      }
      else
      {
        for ( i = (struct _HAM_RC_TREE_NODE *)(*((_QWORD *)i + 2) & 0xFFFFFFFFFFFFFFFCuLL);
              i;
              i = (struct _HAM_RC_TREE_NODE *)(*((_QWORD *)i + 2) & 0xFFFFFFFFFFFFFFFCuLL) )
        {
          if ( *(struct _HAM_RC_TREE_NODE **)i == v52 )
            break;
          v52 = i;
        }
      }
      if ( !i )
        goto LABEL_81;
    }
    if ( _InterlockedIncrement64((volatile signed __int64 *)i + 3) <= 1 )
      __fastfail(0xEu);
LABEL_22:
    RtlReleaseSRWLockShared(a2 + 14);
    if ( i )
    {
      do
      {
        v14 = HampLockTrackerId;
        if ( HampLockTrackerId != -1 )
        {
          v15 = TlsGetValue(HampLockTrackerId);
          if ( (*(_QWORD *)TlsGetValue(v14) & 0xFFFFFFFFFFFFFFE0uLL) != 0 )
            __int2c();
          *v15 |= 0x20uLL;
          ++v15[6];
        }
        RtlAcquireSRWLockShared((char *)i + 576);
        v16 = *((_DWORD *)i + 154);
        if ( HampLockTrackerId != -1 )
        {
          v17 = TlsGetValue(HampLockTrackerId);
          if ( (*(_BYTE *)v17 & 0x20) == 0 )
            __int2c();
          v34 = v17[6]-- == 1LL;
          if ( v34 )
            *v17 &= ~0x20uLL;
        }
        RtlReleaseSRWLockShared((char *)i + 576);
        v18 = v11 >> 5;
        v19 = v11 >> 3;
        v20 = v11 | v16;
        if ( (unsigned __int8)((v11 >> 5) & 7) >= (unsigned __int8)((v16 >> 5) & 7) )
          LOBYTE(v18) = v16 >> 5;
        v21 = 4 * (v18 & 7);
        if ( (unsigned __int8)((v11 >> 3) & 3) <= (unsigned __int8)((v16 >> 3) & 3) )
          LOBYTE(v19) = v16 >> 3;
        v22 = 8 * (v19 & 3 | v21);
        if ( (unsigned __int8)(v11 & 7) <= (unsigned __int8)(v16 & 7) )
          LOBYTE(v11) = v16;
        v23 = v11 & 7 | v22;
        v24 = 0;
        if ( (v20 & 0x200) != 0 )
          v24 = 512;
        v25 = v24 | v23;
        v26 = 0;
        if ( (v20 & 0x100) != 0 )
          v26 = 256;
        v11 = v26 | v25;
        v27 = *((_QWORD *)i + 4) & 0xFFFFFFFFFFFFFFFCuLL;
        if ( v27 == v8 )
        {
          v28 = v27 + 16;
          RtlAcquireSRWLockShared(v27 + 16);
          j = *((_QWORD *)i + 1);
          v30 = (unsigned __int64)i;
          if ( j )
          {
            v31 = *(_QWORD **)j;
            if ( *(_QWORD *)j )
            {
              do
              {
                j = (unsigned __int64)v31;
                v31 = (_QWORD *)*v31;
              }
              while ( v31 );
            }
          }
          else
          {
            for ( j = *((_QWORD *)i + 2) & 0xFFFFFFFFFFFFFFFCuLL; j; j = *(_QWORD *)(j + 16) & 0xFFFFFFFFFFFFFFFCuLL )
            {
              if ( *(_QWORD *)j == v30 )
                break;
              v30 = j;
            }
          }
          if ( j )
          {
            while ( !*(_QWORD *)(j + 24) )
            {
              v54 = *(_QWORD **)(j + 8);
              v50 = j;
              if ( v54 )
              {
                j = *(_QWORD *)(j + 8);
                for ( k = (_QWORD *)*v54; k; k = (_QWORD *)*k )
                  j = (unsigned __int64)k;
              }
              else
              {
                for ( j = *(_QWORD *)(j + 16) & 0xFFFFFFFFFFFFFFFCuLL; j; j = *(_QWORD *)(j + 16) & 0xFFFFFFFFFFFFFFFCuLL )
                {
                  if ( *(_QWORD *)j == v50 )
                    break;
                  v50 = j;
                }
              }
              if ( !j )
                goto LABEL_92;
            }
            if ( _InterlockedIncrement64((volatile signed __int64 *)(j + 24)) <= 1 )
              __fastfail(0xEu);
          }
          else
          {
LABEL_92:
            j = 0LL;
          }
          RtlReleaseSRWLockShared(v28);
          _m_prefetchw((char *)i + 24);
          v32 = *((_QWORD *)i + 3);
          v33 = v32 - 1;
          v34 = v32 == 1;
          if ( v32 - 1 <= 0 )
          {
LABEL_112:
            if ( !v34 )
              __fastfail(0xEu);
            v55 = *((_QWORD *)i + 4) & 0xFFFFFFFFFFFFFFFCuLL;
            if ( *((_QWORD *)i + 2) == -1LL )
            {
              if ( _InterlockedDecrement64((volatile signed __int64 *)i + 3) <= -1 )
                __fastfail(0xEu);
              (*(void (__fastcall **)(struct _HAM_RC_TREE_NODE *))(v55 + 24))(i);
            }
            else
            {
              RtlAcquireSRWLockExclusive(v55 + 16);
              v56 = _InterlockedExchangeAdd64((volatile signed __int64 *)i + 3, 0xFFFFFFFFFFFFFFFFuLL);
              v47 = v56 <= 1;
              v57 = v56 - 1;
              if ( v47 )
              {
                if ( v57 )
                  __fastfail(0xEu);
                RtlReleaseSRWLockExclusive(v55 + 16);
                (*(void (__fastcall **)(struct _HAM_RC_TREE_NODE *))(v55 + 24))(i);
              }
              else
              {
                RtlReleaseSRWLockExclusive(v55 + 16);
              }
            }
          }
          else
          {
            while ( 1 )
            {
              v35 = v32;
              v32 = _InterlockedCompareExchange64((volatile signed __int64 *)i + 3, v33, v32);
              if ( v35 == v32 )
                break;
              v33 = v32 - 1;
              v34 = v32 == 1;
              if ( v32 - 1 <= 0 )
                goto LABEL_112;
            }
          }
          i = (struct _HAM_RC_TREE_NODE *)j;
        }
        else
        {
          Successor = (struct _HAM_RC_TREE_NODE *)(v27 - 40);
          if ( _InterlockedIncrement64((volatile signed __int64 *)(v27 - 40 + 24)) <= 1 )
            __fastfail(0xEu);
          i = (struct _HAM_RC_TREE_NODE *)CemRcTableGetNext(i);
          if ( !i )
          {
            Successor = HamRcNodeGetSuccessor((struct _HAM_RC_TREE_NODE *)a2, Successor);
            if ( Successor )
            {
              while ( 1 )
              {
                i = HamRcNodeGetFirst(Successor, 1u);
                if ( i )
                  break;
                Successor = HamRcNodeGetSuccessor((struct _HAM_RC_TREE_NODE *)a2, Successor);
                if ( !Successor )
                  goto LABEL_129;
              }
            }
            else
            {
LABEL_129:
              i = 0LL;
            }
          }
          if ( Successor )
            CemRcObjectDereference(Successor);
        }
      }
      while ( i );
      v7 = (char *)(a2 + 76);
    }
    v59[0] = v11;
    HampPkgCommitAppsUsageInfo((struct _HAM_PACKAGE *)a2);
    v36 = HampLockTrackerId;
    if ( HampLockTrackerId != -1 )
    {
      v37 = TlsGetValue(HampLockTrackerId);
      if ( (*(_QWORD *)TlsGetValue(v36) & 0xFFFFFFFFFFFFFFC0uLL) != 0 )
        __int2c();
      *v37 |= 0x40uLL;
      ++v37[7];
    }
    RtlAcquireSRWLockExclusive(v7);
    *((_DWORD *)v7 + 2) = GetCurrentThreadId();
    v9 = a2[85];
  }
  while ( (v9 & 0x10) != 0 );
  if ( a2[86] != v11 )
  {
    HampPkgCommitStateSummary((struct _HAM_PACKAGE *)a2, (union _HAM_EXTERNAL_STATE_SUMMARY *)v59);
    v9 = a2[85];
    v11 = v59[0];
  }
  a2[85] = v9 & 0xFFFFFFF7;
  if ( HampLockTrackerId != -1 )
  {
    v38 = TlsGetValue(HampLockTrackerId);
    if ( (*(_BYTE *)v38 & 0x40) == 0 )
      __int2c();
    v34 = v38[7]-- == 1LL;
    if ( v34 )
      *v38 &= ~0x40uLL;
  }
  *((_DWORD *)v7 + 2) = 0;
  RtlReleaseSRWLockExclusive(v7);
  if ( (unsigned int)dword_1800B3218 > 4 && (byte_1800B3228 & 0x40) != 0 && (qword_1800B3230 & 0x40) == qword_1800B3230 )
  {
    v59[1] = v11;
    v60 = (char *)(a2 + 24);
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<unsigned short>,_tlgWrapperByVal<4>>(
      v39,
      &unk_1800A1AE3);
  }
  _m_prefetchw(a2 + 6);
  v40 = *((_QWORD *)a2 + 3);
  v41 = v40 - 1;
  v42 = v40 == 1;
  if ( v40 - 1 <= 0 )
  {
LABEL_82:
    if ( !v42 )
      __fastfail(0xEu);
    v45 = *((_QWORD *)a2 + 4) & 0xFFFFFFFFFFFFFFFCuLL;
    if ( *((_QWORD *)a2 + 2) == -1LL )
    {
      if ( _InterlockedDecrement64((volatile signed __int64 *)a2 + 3) <= -1 )
        __fastfail(0xEu);
      (*(void (__fastcall **)(_DWORD *))(v45 + 24))(a2);
    }
    else
    {
      RtlAcquireSRWLockExclusive(v45 + 16);
      v46 = _InterlockedExchangeAdd64((volatile signed __int64 *)a2 + 3, 0xFFFFFFFFFFFFFFFFuLL);
      v47 = v46 <= 1;
      v48 = v46 - 1;
      if ( v47 )
      {
        if ( v48 )
          __fastfail(0xEu);
        RtlReleaseSRWLockExclusive(v45 + 16);
        (*(void (__fastcall **)(_DWORD *))(v45 + 24))(a2);
      }
      else
      {
        RtlReleaseSRWLockExclusive(v45 + 16);
      }
    }
  }
  else
  {
    while ( 1 )
    {
      v43 = v40;
      v40 = _InterlockedCompareExchange64((volatile signed __int64 *)a2 + 3, v41, v40);
      if ( v43 == v40 )
        break;
      v41 = v40 - 1;
      v42 = v40 == 1;
      if ( v40 - 1 <= 0 )
        goto LABEL_82;
    }
  }
  v44 = HampLockTrackerId;
  if ( HampLockTrackerId != -1 )
  {
    if ( *(_QWORD *)TlsGetValue(HampLockTrackerId) )
      __int2c();
    TlsSetValue(v44, 0LL);
  }
}
