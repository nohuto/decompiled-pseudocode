/*
 * XREFs of ?HandleTrimWnf@VIDMM_GLOBAL@@QEAAX_N@Z @ 0x1C00623E0
 * Callers:
 *     ?Run@VIDMM_WORKER_THREAD@@QEAAXXZ @ 0x1C008EC90 (-Run@VIDMM_WORKER_THREAD@@QEAAXXZ.c)
 * Callees:
 *     ?IsHighPriorityProcess@DXGPROCESS@@QEBA_NXZ @ 0x1C0001040 (-IsHighPriorityProcess@DXGPROCESS@@QEBA_NXZ.c)
 *     ?AcquireShared@DXGPUSHLOCK@@QEAAXXZ @ 0x1C0001098 (-AcquireShared@DXGPUSHLOCK@@QEAAXXZ.c)
 *     ?Release@DXGAUTOPUSHLOCK@@QEAAXXZ @ 0x1C0001B74 (-Release@DXGAUTOPUSHLOCK@@QEAAXXZ.c)
 *     ??0DXGAUTOPUSHLOCK@@QEAA@QEAVDXGPUSHLOCK@@_N@Z @ 0x1C0001C48 (--0DXGAUTOPUSHLOCK@@QEAA@QEAVDXGPUSHLOCK@@_N@Z.c)
 *     __security_check_cookie @ 0x1C0017820 (__security_check_cookie.c)
 *     McTemplateK0q_EtwWriteTransfer @ 0x1C0024E10 (McTemplateK0q_EtwWriteTransfer.c)
 *     ?SetTimeout@VIDMM_WORKER_THREAD@@QEAAX_JW4VIDMM_WORKER_THREAD_WAKE_REASON@@@Z @ 0x1C0062B20 (-SetTimeout@VIDMM_WORKER_THREAD@@QEAAX_JW4VIDMM_WORKER_THREAD_WAKE_REASON@@@Z.c)
 *     ?SendWnfNotificationToProcess@VIDMM_GLOBAL@@KAJPEAVVIDMM_PROCESS@@PEBU_WNF_STATE_NAME@@PEAXK@Z @ 0x1C0062B74 (-SendWnfNotificationToProcess@VIDMM_GLOBAL@@KAJPEAVVIDMM_PROCESS@@PEBU_WNF_STATE_NAME@@PEAXK@Z.c)
 *     ?GetNumBytesToTrim@VIDMM_PROCESS_ADAPTER_INFO@@QEAAXPEA_K_N1@Z @ 0x1C0063E00 (-GetNumBytesToTrim@VIDMM_PROCESS_ADAPTER_INFO@@QEAAXPEA_K_N1@Z.c)
 */

void __fastcall VIDMM_GLOBAL::HandleTrimWnf(VIDMM_GLOBAL *this, char a2)
{
  struct VIDMM_PROCESS *v2; // rdi
  unsigned __int64 v3; // r13
  char v4; // r12
  unsigned __int64 v6; // rsi
  unsigned int v7; // eax
  __int64 v8; // r12
  __int64 v9; // r10
  __int64 v10; // r14
  __int64 v11; // rbp
  unsigned __int64 v12; // r9
  struct _RTL_BALANCED_NODE *v13; // rax
  _QWORD *i; // r9
  __int64 v15; // rax
  unsigned __int64 v16; // rcx
  unsigned __int64 v17; // rax
  unsigned __int64 v18; // rax
  __int64 v19; // rcx
  unsigned __int64 v20; // rax
  unsigned __int64 v21; // rcx
  _QWORD **v22; // rax
  _QWORD *v23; // rcx
  unsigned __int64 v24; // rcx
  unsigned __int64 v25; // r8
  unsigned __int64 v26; // r8
  __int64 v27; // rcx
  unsigned __int64 v28; // rax
  unsigned __int64 v29; // rcx
  _QWORD *v30; // rcx
  struct _RTL_BALANCED_NODE *v31; // rax
  _QWORD *j; // rcx
  __int64 v33; // rdx
  unsigned __int64 v34; // r8
  unsigned __int64 v35; // rax
  unsigned __int64 v36; // rax
  __int64 v37; // rdx
  unsigned __int64 v38; // rax
  unsigned __int64 v39; // rdx
  _QWORD **v40; // rax
  _QWORD *v41; // rdx
  unsigned __int64 v42; // rcx
  unsigned __int64 v43; // r8
  unsigned __int64 v44; // r8
  __int64 v45; // rcx
  unsigned __int64 v46; // rax
  unsigned __int64 v47; // rcx
  _QWORD *v48; // rdx
  __int64 v49; // r8
  __int64 v50; // rcx
  char v51; // r14
  signed __int64 v52; // rax
  __int64 v53; // rdx
  signed __int64 v54; // rcx
  char v55; // bl
  char *v56; // rsi
  char v57; // bp
  __int64 v58; // rcx
  __int64 v59; // r8
  unsigned int v60; // r9d
  DXGPROCESS *v61; // rcx
  struct VIDMM_PROCESS **v62; // r12
  __int64 v63; // rsi
  int v64; // ebx
  char IsHighPriorityProcess; // al
  bool v66; // cc
  unsigned __int64 v67; // r13
  struct VIDMM_PROCESS *v68; // r14
  __int64 v69; // rax
  int v70; // eax
  __int64 v71; // rdx
  __int64 v72; // r8
  __int64 v73; // rbx
  __int64 v74; // rax
  int v75; // r9d
  __int64 v76; // rax
  __int64 v78; // [rsp+28h] [rbp-90h]
  unsigned __int64 v79; // [rsp+30h] [rbp-88h] BYREF
  __int64 v80; // [rsp+38h] [rbp-80h]
  __int64 v81; // [rsp+40h] [rbp-78h]
  signed __int64 v82; // [rsp+48h] [rbp-70h]
  struct VIDMM_PROCESS *v83; // [rsp+50h] [rbp-68h]
  char v84[8]; // [rsp+58h] [rbp-60h] BYREF
  DXGPUSHLOCK *v85; // [rsp+60h] [rbp-58h]
  int v86; // [rsp+68h] [rbp-50h]
  _BYTE v87[20]; // [rsp+70h] [rbp-48h] BYREF
  int v88; // [rsp+84h] [rbp-34h]

  v2 = (struct VIDMM_PROCESS *)*((_QWORD *)this + 577);
  v3 = -1LL;
  v4 = a2;
  v82 = (signed __int64)v2;
  v83 = v2;
  v81 = -1LL;
  v6 = -1LL;
  v80 = -1LL;
  ExAcquirePushLockSharedEx(&VIDMM_PARTITION::_PartitionLock, 0LL);
  v7 = *((_DWORD *)this + 1750);
  if ( v7 )
  {
    v8 = *((_QWORD *)this + 5027);
    v9 = 0LL;
    v10 = 0LL;
    v78 = 0LL;
    v11 = 0LL;
    v79 = *((unsigned int *)this + 1750);
    v12 = v7;
    while ( (*(_BYTE *)(v8 + v11 + 512) & 1) != 0 )
    {
      v13 = VIDMM_PARTITION::_PartitionTree;
      for ( i = 0LL; v13; v13 = v13->Children[0] )
        i = v13->Children;
      if ( i )
      {
        while ( 1 )
        {
          v15 = *(_QWORD *)(i[5] + 376LL * *(unsigned int *)(*((_QWORD *)this + 3) + 232LL) + 24);
          v16 = *(_QWORD *)(v15 + v9 + 16);
          if ( v16 )
            break;
LABEL_17:
          v22 = (_QWORD **)i[1];
          v23 = i;
          if ( v22 )
          {
            v30 = *v22;
            for ( i = (_QWORD *)i[1]; v30; v30 = (_QWORD *)*v30 )
              i = v30;
          }
          else
          {
            for ( i = (_QWORD *)(i[2] & 0xFFFFFFFFFFFFFFFCuLL); i; i = (_QWORD *)(i[2] & 0xFFFFFFFFFFFFFFFCuLL) )
            {
              if ( (_QWORD *)*i == v23 )
                break;
              v23 = i;
            }
          }
          if ( !i )
            goto LABEL_35;
        }
        v17 = 100LL * *(_QWORD *)(v15 + v9 + 120);
        if ( v16 == 0x1E3AC1ECDLL )
          v18 = v17 / 0x1E3AC1ECDLL;
        else
          v18 = v17 / v16;
        v19 = 100 - v18;
        if ( (__int64)(100 - v18) <= (unsigned int)dword_1C0050404 )
        {
          if ( v19 <= (unsigned int)dword_1C0050408 )
          {
            v20 = (unsigned int)dword_1C0050418;
            v21 = (unsigned int)dword_1C0050414;
            v9 = v78;
            goto LABEL_13;
          }
          v9 = v78;
          v20 = (unsigned int)dword_1C0050418
              + (v19 - (unsigned int)dword_1C0050408)
              * (unsigned int)(dword_1C0050414 - dword_1C0050418)
              / (unsigned int)(dword_1C0050404 - dword_1C0050408);
        }
        else
        {
          v20 = (unsigned int)dword_1C005040C;
        }
        v21 = (unsigned int)dword_1C0050410;
LABEL_13:
        if ( v3 >= v20 )
          v3 = v20;
        if ( v6 >= v21 )
          v6 = v21;
        goto LABEL_17;
      }
LABEL_35:
      v12 = v79;
LABEL_36:
      if ( (*(_BYTE *)(v8 + v11 + 536) & 1) != 0 )
      {
        v31 = VIDMM_PARTITION::_PartitionTree;
        for ( j = 0LL; v31; v31 = v31->Children[0] )
          j = v31->Children;
        if ( j )
        {
          while ( 1 )
          {
            v33 = *(_QWORD *)(j[5] + 376LL * *(unsigned int *)(*((_QWORD *)this + 3) + 232LL) + 24);
            v34 = *(_QWORD *)(v9 + v33 + 16);
            if ( v34 )
              break;
LABEL_50:
            v40 = (_QWORD **)j[1];
            v41 = j;
            if ( v40 )
            {
              v48 = *v40;
              for ( j = (_QWORD *)j[1]; v48; v48 = (_QWORD *)*v48 )
                j = v48;
            }
            else
            {
              for ( j = (_QWORD *)(j[2] & 0xFFFFFFFFFFFFFFFCuLL); j; j = (_QWORD *)(j[2] & 0xFFFFFFFFFFFFFFFCuLL) )
              {
                if ( (_QWORD *)*j == v41 )
                  break;
                v41 = j;
              }
            }
            if ( !j )
            {
              v12 = v79;
              goto LABEL_69;
            }
          }
          v35 = 100LL * *(_QWORD *)(v9 + v33 + 120);
          if ( v34 == 0x1E3AC1ECDLL )
            v36 = v35 / 0x1E3AC1ECDLL;
          else
            v36 = v35 / v34;
          v37 = 100 - v36;
          if ( (__int64)(100 - v36) > (unsigned int)dword_1C0050404 )
          {
            v38 = (unsigned int)dword_1C005040C;
            goto LABEL_45;
          }
          if ( v37 > (unsigned int)dword_1C0050408 )
          {
            v9 = v78;
            v38 = (unsigned int)dword_1C0050418
                + (v37 - (unsigned int)dword_1C0050408)
                * (unsigned int)(dword_1C0050414 - dword_1C0050418)
                / (unsigned int)(dword_1C0050404 - dword_1C0050408);
LABEL_45:
            v39 = (unsigned int)dword_1C0050410;
          }
          else
          {
            v38 = (unsigned int)dword_1C0050418;
            v39 = (unsigned int)dword_1C0050414;
            v9 = v78;
          }
          if ( v3 >= v38 )
            v3 = v38;
          if ( v6 >= v39 )
            v6 = v39;
          goto LABEL_50;
        }
        goto LABEL_69;
      }
      v42 = *(_QWORD *)(v8 + v10 + 896);
      if ( !v42 )
        goto LABEL_69;
      v43 = 100LL * *(_QWORD *)(v8 + v10 + 1000);
      if ( v42 == 917943092 )
        v44 = v43 / 0x36B6B334;
      else
        v44 = v43 / v42;
      v45 = 100 - v44;
      if ( (__int64)(100 - v44) <= (unsigned int)dword_1C0050404 )
      {
        v9 = v78;
        if ( v45 <= (unsigned int)dword_1C0050408 )
        {
          v46 = (unsigned int)dword_1C0050418;
          v47 = (unsigned int)dword_1C0050414;
          v12 = v79;
          goto LABEL_61;
        }
        v12 = v79;
        v46 = (unsigned int)dword_1C0050418
            + (v45 - (unsigned int)dword_1C0050408)
            * (unsigned int)(dword_1C0050414 - dword_1C0050418)
            / (unsigned int)(dword_1C0050404 - dword_1C0050408);
      }
      else
      {
        v46 = (unsigned int)dword_1C005040C;
      }
      v47 = (unsigned int)dword_1C0050410;
LABEL_61:
      if ( v3 >= v46 )
        v3 = v46;
      if ( v6 >= v47 )
        v6 = v47;
LABEL_69:
      v9 += 336LL;
      v11 += 1584LL;
      v10 += 1584LL;
      v78 = v9;
      v79 = --v12;
      if ( !v12 )
      {
        v2 = (struct VIDMM_PROCESS *)v82;
        v4 = a2;
        v80 = v6;
        v81 = v3;
        goto LABEL_71;
      }
    }
    v24 = *(_QWORD *)(v8 + v10 + 560);
    if ( !v24 )
      goto LABEL_36;
    v25 = 100LL * *(_QWORD *)(v8 + v10 + 664);
    if ( v24 == 917943092 )
      v26 = v25 / 0x36B6B334;
    else
      v26 = v25 / v24;
    v27 = 100 - v26;
    if ( (__int64)(100 - v26) <= (unsigned int)dword_1C0050404 )
    {
      v9 = v78;
      if ( v27 <= (unsigned int)dword_1C0050408 )
      {
        v28 = (unsigned int)dword_1C0050418;
        v29 = (unsigned int)dword_1C0050414;
        v12 = v79;
        goto LABEL_28;
      }
      v12 = v79;
      v28 = (unsigned int)dword_1C0050418
          + (v27 - (unsigned int)dword_1C0050408)
          * (unsigned int)(dword_1C0050414 - dword_1C0050418)
          / (unsigned int)(dword_1C0050404 - dword_1C0050408);
    }
    else
    {
      v28 = (unsigned int)dword_1C005040C;
    }
    v29 = (unsigned int)dword_1C0050410;
LABEL_28:
    if ( v3 >= v28 )
      v3 = v28;
    if ( v6 >= v29 )
      v6 = v29;
    goto LABEL_36;
  }
LABEL_71:
  ExReleasePushLockSharedEx(&VIDMM_PARTITION::_PartitionLock, 0LL);
  v50 = *((_QWORD *)this + 5554);
  if ( v50 && (__int64)v3 > (__int64)v2 - v50 )
  {
    v51 = 0;
    v52 = (signed __int64)v2 - v50 - v3;
  }
  else
  {
    *((_QWORD *)this + 5554) = v2;
    v52 = -(__int64)v3;
    v51 = 1;
  }
  v53 = *((_QWORD *)this + 5555);
  if ( v53 && (__int64)v6 > (__int64)v2 - v53 )
  {
    v54 = (signed __int64)v2 - v53 - v6;
    if ( v52 <= v54 )
      v52 = (signed __int64)v2 - v53 - v6;
    v55 = 0;
  }
  else
  {
    *((_QWORD *)this + 5555) = v2;
    v54 = -(__int64)v6;
    if ( v52 <= -(__int64)v6 )
      v52 = -(__int64)v6;
    v55 = 1;
  }
  v56 = (char *)this + 41040;
  v82 = v52;
  v57 = 0;
  if ( this != (VIDMM_GLOBAL *)-41040LL )
  {
    if ( *((struct _KTHREAD **)this + 5131) == KeGetCurrentThread() )
    {
      v74 = WdLogNewEntry5_WdAssertion(v54, v53, v49);
      *(_QWORD *)(v74 + 24) = 1571LL;
      WdLogEvent5_WdAssertion(v74);
    }
    v2 = v83;
  }
  KeEnterCriticalRegion();
  if ( !(unsigned __int8)ExTryAcquirePushLockSharedEx((char *)this + 41040, 0LL) )
  {
    if ( bTracingEnabled )
    {
      v75 = *((_DWORD *)this + 10266);
      if ( v75 != -1 && (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
        McTemplateK0q_EtwWriteTransfer(v58, (const EVENT_DESCRIPTOR *)"g", v59, v75);
    }
    ExAcquirePushLockSharedEx((char *)this + 41040, 0LL);
  }
  if ( v51 )
  {
    v61 = (DXGPROCESS *)*((_QWORD *)this + 576);
    if ( *((DXGPROCESS **)this + 5556) == v61 )
    {
      ++*((_DWORD *)this + 11116);
    }
    else
    {
      *((_DWORD *)this + 11116) = 0;
      *((_QWORD *)this + 5556) = v61;
    }
    if ( !v55 )
      goto LABEL_100;
  }
  else
  {
    if ( !v55 )
      goto LABEL_86;
    v61 = (DXGPROCESS *)*((_QWORD *)this + 576);
  }
  if ( *((DXGPROCESS **)this + 5557) == v61 )
  {
    ++*((_DWORD *)this + 11117);
  }
  else
  {
    *((_DWORD *)this + 11117) = 0;
    *((_QWORD *)this + 5557) = v61;
  }
LABEL_100:
  if ( *((_DWORD *)this + 11116) > 1u && *((_DWORD *)this + 11117) > 1u )
    goto LABEL_87;
  v57 = 1;
LABEL_86:
  VIDMM_WORKER_THREAD::SetTimeout(*(_QWORD *)this, v82, 5LL);
  if ( v57 )
  {
LABEL_102:
    v62 = (struct VIDMM_PROCESS **)*((_QWORD *)this + 5136);
    if ( v62 == (struct VIDMM_PROCESS **)((char *)this + 41088) )
      goto LABEL_88;
    v63 = v80;
    while ( 1 )
    {
      v64 = 0;
      if ( !v57 )
        goto LABEL_113;
      v61 = (DXGPROCESS *)*((_QWORD *)v62[2] + 4);
      if ( !v61 )
        goto LABEL_113;
      if ( (!*((_BYTE *)v61 + 297) || *((_BYTE *)v61 + 345)) && !*((_BYTE *)v61 + 344) )
        goto LABEL_113;
      IsHighPriorityProcess = DXGPROCESS::IsHighPriorityProcess(v61);
      v61 = v62[61];
      if ( IsHighPriorityProcess )
      {
        if ( v61 )
        {
          v66 = v63 <= v2 - v61;
LABEL_111:
          if ( !v66 )
            goto LABEL_113;
        }
      }
      else if ( v61 )
      {
        v66 = (__int64)v3 <= v2 - v61;
        goto LABEL_111;
      }
      v64 = 1;
      v62[61] = v2;
LABEL_113:
      v67 = 0LL;
      v79 = 0LL;
      if ( a2 )
      {
        DXGAUTOPUSHLOCK::DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v84, v62 + 42, 0);
        DXGPUSHLOCK::AcquireShared(v85);
        v86 = 1;
        VIDMM_PROCESS_ADAPTER_INFO::GetNumBytesToTrim((VIDMM_PROCESS_ADAPTER_INFO *)(v62 - 3), &v79, 0, 1);
        DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v84);
        v67 = v79;
        if ( v79 )
          v64 |= 4u;
      }
      if ( v64 )
      {
        v68 = v62[2];
        if ( g_IsInternalReleaseOrDbg )
          *(_QWORD *)(WdLogNewEntry5_WdTrace(v61) + 24) = *(_QWORD *)v68;
        v88 = 0;
        v69 = *((_QWORD *)this + 3);
        *(_OWORD *)&v87[4] = 0LL;
        *(_QWORD *)v87 = *(_QWORD *)(v69 + 316);
        *(_DWORD *)&v87[16] = v64;
        *(_QWORD *)&v87[8] = v67;
        v70 = VIDMM_GLOBAL::SendWnfNotificationToProcess(v68, *(const struct _WNF_STATE_NAME **)v87, v87, v60);
        v73 = v70;
        if ( v70 < 0 )
        {
          v76 = WdLogNewEntry5_WdAssertion(v61, v71, v72);
          *(_QWORD *)(v76 + 24) = v73;
          WdLogEvent5_WdAssertion(v76);
        }
      }
      v62 = (struct VIDMM_PROCESS **)*v62;
      v3 = v81;
      if ( v62 == (struct VIDMM_PROCESS **)((char *)this + 41088) )
      {
        v56 = (char *)this + 41040;
        goto LABEL_88;
      }
    }
  }
LABEL_87:
  if ( v4 )
    goto LABEL_102;
LABEL_88:
  ExReleasePushLockSharedEx(v56, 0LL);
  KeLeaveCriticalRegion();
}
