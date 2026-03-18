/*
 * XREFs of ?HandleTrimWnf@VIDMM_GLOBAL@@QEAAX_N@Z @ 0x1C009F000
 * Callers:
 *     ?Run@VIDMM_WORKER_THREAD@@QEAAXXZ @ 0x1C00ABE70 (-Run@VIDMM_WORKER_THREAD@@QEAAXXZ.c)
 * Callees:
 *     ?Release@DXGAUTOPUSHLOCK@@QEAAXXZ @ 0x1C000209C (-Release@DXGAUTOPUSHLOCK@@QEAAXXZ.c)
 *     ??0DXGAUTOPUSHLOCK@@QEAA@QEAVDXGPUSHLOCK@@_N@Z @ 0x1C00024A4 (--0DXGAUTOPUSHLOCK@@QEAA@QEAVDXGPUSHLOCK@@_N@Z.c)
 *     ?IsHighPriorityProcess@DXGPROCESS@@QEBA_NXZ @ 0x1C0014CF0 (-IsHighPriorityProcess@DXGPROCESS@@QEBA_NXZ.c)
 *     ?AcquireShared@DXGPUSHLOCK@@QEAAXXZ @ 0x1C0014F50 (-AcquireShared@DXGPUSHLOCK@@QEAAXXZ.c)
 *     __security_check_cookie @ 0x1C001CD70 (__security_check_cookie.c)
 *     DxgkLogInternalTriageEvent @ 0x1C001CE40 (DxgkLogInternalTriageEvent.c)
 *     McTemplateK0q_EtwWriteTransfer @ 0x1C001E570 (McTemplateK0q_EtwWriteTransfer.c)
 *     ?SetTimeout@VIDMM_WORKER_THREAD@@QEAAX_JW4VIDMM_WORKER_THREAD_WAKE_REASON@@@Z @ 0x1C009F7DC (-SetTimeout@VIDMM_WORKER_THREAD@@QEAAX_JW4VIDMM_WORKER_THREAD_WAKE_REASON@@@Z.c)
 *     ?SendWnfNotificationToProcess@VIDMM_GLOBAL@@KAJPEAVVIDMM_PROCESS@@PEBU_WNF_STATE_NAME@@PEAXK@Z @ 0x1C009F8D0 (-SendWnfNotificationToProcess@VIDMM_GLOBAL@@KAJPEAVVIDMM_PROCESS@@PEBU_WNF_STATE_NAME@@PEAXK@Z.c)
 *     ?GetNumBytesToTrim@VIDMM_PROCESS_ADAPTER_INFO@@QEAAXPEA_K_N1@Z @ 0x1C00A4780 (-GetNumBytesToTrim@VIDMM_PROCESS_ADAPTER_INFO@@QEAAXPEA_K_N1@Z.c)
 */

void __fastcall VIDMM_GLOBAL::HandleTrimWnf(VIDMM_GLOBAL *this, char a2)
{
  char *v2; // rdi
  unsigned __int64 v3; // r12
  char v4; // r13
  VIDMM_GLOBAL *v5; // r15
  unsigned __int64 v6; // rsi
  unsigned int v7; // eax
  __int64 v8; // r14
  __int64 v9; // r9
  __int64 v10; // r10
  __int64 v11; // r13
  __int64 v12; // rbp
  __int64 v13; // r11
  struct _RTL_BALANCED_NODE *v14; // rax
  _QWORD *i; // r9
  __int64 v16; // rax
  unsigned __int64 v17; // rcx
  unsigned __int64 v18; // rax
  unsigned __int64 v19; // rax
  __int64 v20; // rcx
  unsigned __int64 v21; // rax
  unsigned __int64 v22; // rcx
  _QWORD **v23; // rcx
  _QWORD *v24; // rax
  unsigned __int64 v25; // r8
  unsigned __int64 v26; // rcx
  unsigned __int64 v27; // rcx
  __int64 v28; // rdx
  unsigned __int64 v29; // rax
  unsigned __int64 v30; // rcx
  _QWORD *j; // rcx
  struct _RTL_BALANCED_NODE *v32; // rax
  _QWORD *k; // rcx
  __int64 v34; // rdx
  unsigned __int64 v35; // r8
  unsigned __int64 v36; // rax
  unsigned __int64 v37; // rax
  __int64 v38; // rdx
  unsigned __int64 v39; // rax
  unsigned __int64 v40; // rdx
  _QWORD **v41; // rdx
  _QWORD *v42; // rax
  unsigned __int64 v43; // r8
  unsigned __int64 v44; // rcx
  unsigned __int64 v45; // rcx
  __int64 v46; // rdx
  unsigned __int64 v47; // rax
  unsigned __int64 v48; // rcx
  _QWORD *m; // rdx
  __int64 v50; // rcx
  signed __int64 v51; // rax
  char v52; // bp
  __int64 v53; // rcx
  signed __int64 v54; // rbx
  char v55; // r14
  char *v56; // rsi
  __int64 v57; // rdx
  __int64 v58; // rcx
  __int64 v59; // r8
  __int64 v60; // r9
  struct _KTHREAD *v61; // rcx
  char v62; // bp
  char *v63; // r13
  struct _KTHREAD **v64; // r15
  unsigned __int64 v65; // rsi
  int v66; // ebx
  char IsHighPriorityProcess; // al
  bool v68; // cc
  unsigned __int64 v69; // r12
  struct VIDMM_PROCESS *v70; // r14
  __int64 v71; // rax
  int v72; // eax
  int v73; // r9d
  __int64 v74; // rcx
  __int64 v75; // rcx
  __int64 v77; // [rsp+58h] [rbp-80h]
  __int64 v78; // [rsp+60h] [rbp-78h]
  __int64 v79; // [rsp+68h] [rbp-70h]
  __int64 v80; // [rsp+70h] [rbp-68h]
  unsigned __int64 v81; // [rsp+78h] [rbp-60h] BYREF
  __int64 v82; // [rsp+80h] [rbp-58h]
  char *v83; // [rsp+88h] [rbp-50h]
  _BYTE v84[20]; // [rsp+90h] [rbp-48h] BYREF
  int v85; // [rsp+A4h] [rbp-34h]

  v2 = (char *)*((_QWORD *)this + 579);
  v3 = -1LL;
  v4 = a2;
  v5 = this;
  v81 = (unsigned __int64)this;
  v83 = v2;
  v80 = -1LL;
  v6 = -1LL;
  v79 = -1LL;
  ExAcquirePushLockSharedEx(&VIDMM_PARTITION::_PartitionLock, 0LL);
  v7 = *((_DWORD *)v5 + 1754);
  if ( v7 )
  {
    v8 = *((_QWORD *)v5 + 5028);
    v9 = 0LL;
    v10 = 0LL;
    v77 = 0LL;
    v11 = 0LL;
    v78 = 0LL;
    v12 = 0LL;
    v82 = *((unsigned int *)v5 + 1754);
    v13 = v7;
    while ( (*(_BYTE *)(v8 + v12 + 512) & 1) != 0 )
    {
      v14 = VIDMM_PARTITION::_PartitionTree;
      for ( i = 0LL; v14; v14 = v14->Children[0] )
        i = v14->Children;
      if ( i )
      {
        while ( 1 )
        {
          v16 = *(_QWORD *)(i[5] + 376LL * *(unsigned int *)(*((_QWORD *)v5 + 3) + 240LL) + 24);
          v17 = *(_QWORD *)(v16 + v11 + 16);
          if ( v17 )
            break;
LABEL_17:
          v23 = (_QWORD **)i[1];
          v24 = i;
          if ( v23 )
          {
            i = (_QWORD *)i[1];
            for ( j = *v23; j; j = (_QWORD *)*j )
              i = j;
          }
          else
          {
            for ( i = (_QWORD *)(i[2] & 0xFFFFFFFFFFFFFFFCuLL); i; i = (_QWORD *)(i[2] & 0xFFFFFFFFFFFFFFFCuLL) )
            {
              if ( (_QWORD *)*i == v24 )
                break;
              v24 = i;
            }
          }
          if ( !i )
          {
            v10 = v78;
            v13 = v82;
            goto LABEL_36;
          }
        }
        v18 = 100LL * *(_QWORD *)(v16 + v11 + 120);
        if ( v17 == 0x1E4AE7D9ALL )
          v19 = v18 / 0x1E4AE7D9ALL;
        else
          v19 = v18 / v17;
        v20 = 100 - v19;
        if ( (__int64)(100 - v19) <= (unsigned int)dword_1C006E474 )
        {
          if ( v20 <= (unsigned int)dword_1C006E478 )
          {
            v21 = (unsigned int)dword_1C006E488;
            v22 = (unsigned int)dword_1C006E484;
            goto LABEL_13;
          }
          v21 = (unsigned int)dword_1C006E488
              + (v20 - (unsigned int)dword_1C006E478)
              * (unsigned int)(dword_1C006E484 - dword_1C006E488)
              / (unsigned int)(dword_1C006E474 - dword_1C006E478);
        }
        else
        {
          v21 = (unsigned int)dword_1C006E47C;
        }
        v22 = (unsigned int)dword_1C006E480;
LABEL_13:
        if ( v3 >= v21 )
          v3 = v21;
        if ( v6 >= v22 )
          v6 = v22;
        goto LABEL_17;
      }
LABEL_36:
      v9 = v77;
LABEL_37:
      if ( (*(_BYTE *)(v8 + v12 + 536) & 1) != 0 )
      {
        v32 = VIDMM_PARTITION::_PartitionTree;
        for ( k = 0LL; v32; v32 = v32->Children[0] )
          k = v32->Children;
        if ( k )
        {
          while ( 1 )
          {
            v34 = *(_QWORD *)(k[5] + 376LL * *(unsigned int *)(*((_QWORD *)v5 + 3) + 240LL) + 24);
            v35 = *(_QWORD *)(v34 + v11 + 16);
            if ( v35 )
              break;
LABEL_51:
            v41 = (_QWORD **)k[1];
            v42 = k;
            if ( v41 )
            {
              k = (_QWORD *)k[1];
              for ( m = *v41; m; m = (_QWORD *)*m )
                k = m;
            }
            else
            {
              for ( k = (_QWORD *)(k[2] & 0xFFFFFFFFFFFFFFFCuLL); k; k = (_QWORD *)(k[2] & 0xFFFFFFFFFFFFFFFCuLL) )
              {
                if ( (_QWORD *)*k == v42 )
                  break;
                v42 = k;
              }
            }
            if ( !k )
            {
              v5 = (VIDMM_GLOBAL *)v81;
              v9 = v77;
              v10 = v78;
              v13 = v82;
              goto LABEL_70;
            }
          }
          v36 = 100LL * *(_QWORD *)(v34 + v11 + 120);
          if ( v35 == 0x1E4AE7D9ALL )
            v37 = v36 / 0x1E4AE7D9ALL;
          else
            v37 = v36 / v35;
          v38 = 100 - v37;
          if ( (__int64)(100 - v37) > (unsigned int)dword_1C006E474 )
          {
            v39 = (unsigned int)dword_1C006E47C;
            goto LABEL_46;
          }
          if ( v38 > (unsigned int)dword_1C006E478 )
          {
            v39 = (unsigned int)dword_1C006E488
                + (v38 - (unsigned int)dword_1C006E478)
                * (unsigned int)(dword_1C006E484 - dword_1C006E488)
                / (unsigned int)(dword_1C006E474 - dword_1C006E478);
LABEL_46:
            v40 = (unsigned int)dword_1C006E480;
          }
          else
          {
            v39 = (unsigned int)dword_1C006E488;
            v40 = (unsigned int)dword_1C006E484;
          }
          if ( v3 >= v39 )
            v3 = v39;
          if ( v6 >= v40 )
            v6 = v40;
          goto LABEL_51;
        }
        goto LABEL_70;
      }
      v43 = *(_QWORD *)(1584 * v9 + v8 + 896);
      if ( !v43 )
        goto LABEL_70;
      v44 = 100LL * *(_QWORD *)(1584 * v9 + v8 + 1000);
      if ( v43 == 917943092 )
        v45 = v44 / 0x36B6B334;
      else
        v45 = v44 / v43;
      v46 = 100 - v45;
      if ( (__int64)(100 - v45) <= (unsigned int)dword_1C006E474 )
      {
        v10 = v78;
        if ( v46 <= (unsigned int)dword_1C006E478 )
        {
          v47 = (unsigned int)dword_1C006E488;
          v48 = (unsigned int)dword_1C006E484;
          v9 = v77;
          goto LABEL_62;
        }
        v9 = v77;
        v47 = (unsigned int)dword_1C006E488
            + (v46 - (unsigned int)dword_1C006E478)
            * (unsigned int)(dword_1C006E484 - dword_1C006E488)
            / (unsigned int)(dword_1C006E474 - dword_1C006E478);
      }
      else
      {
        v47 = (unsigned int)dword_1C006E47C;
      }
      v48 = (unsigned int)dword_1C006E480;
LABEL_62:
      if ( v3 >= v47 )
        v3 = v47;
      if ( v6 >= v48 )
        v6 = v48;
LABEL_70:
      ++v9;
      v10 += 1584LL;
      v12 += 1584LL;
      v77 = v9;
      v11 += 336LL;
      v78 = v10;
      v82 = --v13;
      if ( !v13 )
      {
        v2 = v83;
        v4 = a2;
        v79 = v6;
        v80 = v3;
        goto LABEL_72;
      }
    }
    v25 = *(_QWORD *)(v8 + v10 + 560);
    if ( !v25 )
      goto LABEL_37;
    v26 = 100LL * *(_QWORD *)(v8 + v10 + 664);
    if ( v25 == 917943092 )
      v27 = v26 / 0x36B6B334;
    else
      v27 = v26 / v25;
    v28 = 100 - v27;
    if ( (__int64)(100 - v27) <= (unsigned int)dword_1C006E474 )
    {
      v10 = v78;
      if ( v28 <= (unsigned int)dword_1C006E478 )
      {
        v29 = (unsigned int)dword_1C006E488;
        v30 = (unsigned int)dword_1C006E484;
        v9 = v77;
        goto LABEL_28;
      }
      v9 = v77;
      v29 = (unsigned int)dword_1C006E488
          + (v28 - (unsigned int)dword_1C006E478)
          * (unsigned int)(dword_1C006E484 - dword_1C006E488)
          / (unsigned int)(dword_1C006E474 - dword_1C006E478);
    }
    else
    {
      v29 = (unsigned int)dword_1C006E47C;
    }
    v30 = (unsigned int)dword_1C006E480;
LABEL_28:
    if ( v3 >= v29 )
      v3 = v29;
    if ( v6 >= v30 )
      v6 = v30;
    goto LABEL_37;
  }
LABEL_72:
  ExReleasePushLockSharedEx(&VIDMM_PARTITION::_PartitionLock, 0LL);
  v50 = *((_QWORD *)v5 + 5555);
  if ( v50 && (__int64)v3 > (__int64)&v2[-v50] )
  {
    v51 = (signed __int64)&v2[-v50 - v3];
    v52 = 0;
  }
  else
  {
    *((_QWORD *)v5 + 5555) = v2;
    v51 = -(__int64)v3;
    v52 = 1;
  }
  v53 = *((_QWORD *)v5 + 5556);
  if ( v53 && (__int64)v6 > (__int64)&v2[-v53] )
  {
    v54 = (signed __int64)&v2[-v53 - v6];
    if ( v51 > v54 )
      v54 = v51;
    v55 = 0;
  }
  else
  {
    *((_QWORD *)v5 + 5556) = v2;
    v54 = -(__int64)v6;
    v55 = 1;
    if ( v51 > -(__int64)v6 )
      v54 = v51;
  }
  v56 = (char *)v5 + 41040;
  v83 = (char *)v5 + 41040;
  if ( v5 != (VIDMM_GLOBAL *)-41040LL && *((struct _KTHREAD **)v5 + 5131) == KeGetCurrentThread() )
  {
    WdLogSingleEntry1(1LL, 1425LL);
    DxgkLogInternalTriageEvent(v74, 262146LL);
  }
  KeEnterCriticalRegion();
  if ( !(unsigned __int8)ExTryAcquirePushLockSharedEx((char *)v5 + 41040, 0LL) )
  {
    if ( bTracingEnabled )
    {
      v73 = *((_DWORD *)v5 + 10266);
      if ( v73 != -1 && (byte_1C006E941 & 1) != 0 )
        McTemplateK0q_EtwWriteTransfer(v58, (__int64)&EventBlockThread, v59, v73);
    }
    ExAcquirePushLockSharedEx((char *)v5 + 41040, 0LL);
  }
  if ( !v52 )
  {
    if ( !v55 )
    {
      VIDMM_WORKER_THREAD::SetTimeout(*(_QWORD *)v5, v54, 5LL);
      goto LABEL_87;
    }
    v61 = (struct _KTHREAD *)*((_QWORD *)v5 + 578);
    goto LABEL_94;
  }
  v61 = (struct _KTHREAD *)*((_QWORD *)v5 + 578);
  if ( *((struct _KTHREAD **)v5 + 5557) == v61 )
  {
    ++*((_DWORD *)v5 + 11118);
  }
  else
  {
    *((_DWORD *)v5 + 11118) = 0;
    *((_QWORD *)v5 + 5557) = v61;
  }
  if ( v55 )
  {
LABEL_94:
    if ( *((struct _KTHREAD **)v5 + 5558) == v61 )
    {
      ++*((_DWORD *)v5 + 11119);
    }
    else
    {
      *((_DWORD *)v5 + 11119) = 0;
      *((_QWORD *)v5 + 5558) = v61;
    }
  }
  if ( *((_DWORD *)v5 + 11118) <= 1u || *((_DWORD *)v5 + 11119) <= 1u )
  {
    v62 = 1;
    VIDMM_WORKER_THREAD::SetTimeout(*(_QWORD *)v5, v54, 5LL);
    goto LABEL_98;
  }
LABEL_87:
  v62 = 0;
  if ( v4 )
  {
LABEL_98:
    v63 = (char *)v5 + 41088;
    v64 = (struct _KTHREAD **)*((_QWORD *)v5 + 5136);
    if ( v64 == (struct _KTHREAD **)v63 )
      goto LABEL_88;
    v65 = v81;
    while ( 1 )
    {
      v66 = 0;
      if ( !v62 )
        goto LABEL_109;
      v61 = (struct _KTHREAD *)*((_QWORD *)v64[2] + 4);
      if ( !v61 )
        goto LABEL_109;
      if ( (!*((_BYTE *)v61 + 337) || (*((_DWORD *)v61 + 106) & 2) != 0) && (*((_DWORD *)v61 + 106) & 1) == 0 )
        goto LABEL_109;
      IsHighPriorityProcess = DXGPROCESS::IsHighPriorityProcess(v61);
      v61 = v64[61];
      if ( IsHighPriorityProcess )
      {
        if ( v61 )
        {
          v68 = v79 <= v2 - (char *)v61;
LABEL_107:
          if ( !v68 )
            goto LABEL_109;
        }
      }
      else if ( v61 )
      {
        v68 = (__int64)v3 <= v2 - (char *)v61;
        goto LABEL_107;
      }
      v66 = 1;
      v64[61] = (struct _KTHREAD *)v2;
LABEL_109:
      v69 = 0LL;
      v81 = 0LL;
      if ( a2 )
      {
        DXGAUTOPUSHLOCK::DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v84, v64 + 42, 0);
        DXGPUSHLOCK::AcquireShared(*(DXGPUSHLOCK **)&v84[8]);
        *(_DWORD *)&v84[16] = 1;
        VIDMM_PROCESS_ADAPTER_INFO::GetNumBytesToTrim((VIDMM_PROCESS_ADAPTER_INFO *)(v64 - 3), &v81, 0, 1);
        DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v84);
        v69 = v81;
        if ( v81 )
          v66 |= 4u;
      }
      if ( v66 )
      {
        v70 = v64[2];
        if ( g_IsInternalReleaseOrDbg )
          *(_QWORD *)(WdLogNewEntry5_WdTrace(v61, v57, v59, v60) + 24) = *(_QWORD *)v70;
        v85 = 0;
        v71 = *(_QWORD *)(v65 + 24);
        *(_OWORD *)&v84[4] = 0LL;
        *(_QWORD *)v84 = *(_QWORD *)(v71 + 404);
        *(_DWORD *)&v84[16] = v66;
        *(_QWORD *)&v84[8] = v69;
        v72 = VIDMM_GLOBAL::SendWnfNotificationToProcess(v70, *(const struct _WNF_STATE_NAME **)v84, v84, v60);
        if ( v72 < 0 )
        {
          WdLogSingleEntry1(1LL, v72);
          DxgkLogInternalTriageEvent(v75, 0x40000LL);
        }
      }
      v64 = (struct _KTHREAD **)*v64;
      v3 = v80;
      if ( v64 == (struct _KTHREAD **)v63 )
      {
        v56 = v83;
        break;
      }
    }
  }
LABEL_88:
  ExReleasePushLockSharedEx(v56, 0LL);
  KeLeaveCriticalRegion();
}
