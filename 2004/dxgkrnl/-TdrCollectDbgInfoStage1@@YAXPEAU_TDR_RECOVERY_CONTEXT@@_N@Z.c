/*
 * XREFs of ?TdrCollectDbgInfoStage1@@YAXPEAU_TDR_RECOVERY_CONTEXT@@_N@Z @ 0x1C0264750
 * Callers:
 *     ?TdrAllowToDebugEngineTimeout@@YA_NPEAU_VIDSCH_NODE@@PEAVDXGADAPTER@@@Z @ 0x1C0264570 (-TdrAllowToDebugEngineTimeout@@YA_NPEAU_VIDSCH_NODE@@PEAVDXGADAPTER@@@Z.c)
 *     ?TdrIsRecoveryRequired@@YA_NPEAU_TDR_RECOVERY_CONTEXT@@@Z @ 0x1C02659F0 (-TdrIsRecoveryRequired@@YA_NPEAU_TDR_RECOVERY_CONTEXT@@@Z.c)
 * Callees:
 *     ?AcquireDdiSync@DXGADAPTER@@QEAAXW4DXGADAPTERDDISYNC_LEVEL@@@Z @ 0x1C0003D20 (-AcquireDdiSync@DXGADAPTER@@QEAAXW4DXGADAPTERDDISYNC_LEVEL@@@Z.c)
 *     ?ReleaseDdiSync@DXGADAPTER@@QEAAXXZ @ 0x1C0003DE0 (-ReleaseDdiSync@DXGADAPTER@@QEAAXXZ.c)
 *     __security_check_cookie @ 0x1C0024350 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C00271E0 (_guard_dispatch_icall_nop.c)
 *     memmove @ 0x1C0027200 (memmove.c)
 *     memset @ 0x1C00274C0 (memset.c)
 *     DpiGetAdapterDebugData @ 0x1C00505B4 (DpiGetAdapterDebugData.c)
 *     DpiGetDbgInfoAdapters @ 0x1C0050638 (DpiGetDbgInfoAdapters.c)
 *     DpiGetGlobalDebugData @ 0x1C0050728 (DpiGetGlobalDebugData.c)
 *     ?_DdiCollectDbgInfoNoLocks@DXGADAPTER@@QEAAJPEBU_DXGKARG_COLLECTDBGINFO@@@Z @ 0x1C02208A0 (-_DdiCollectDbgInfoNoLocks@DXGADAPTER@@QEAAJPEBU_DXGKARG_COLLECTDBGINFO@@@Z.c)
 *     ??0CTDR_DUMP_BUFFER@@QEAA@GPEAXK@Z @ 0x1C0263B5C (--0CTDR_DUMP_BUFFER@@QEAA@GPEAXK@Z.c)
 *     ??0CTDR_DUMP_BUFFER_CANARY@@QEAA@PEAXK@Z @ 0x1C0263BC8 (--0CTDR_DUMP_BUFFER_CANARY@@QEAA@PEAXK@Z.c)
 *     ?AddSegment@CTDR_DUMP_BUFFER@@QEAAPEAXKK@Z @ 0x1C0263D08 (-AddSegment@CTDR_DUMP_BUFFER@@QEAAPEAXKK@Z.c)
 *     ?Check@CTDR_DUMP_BUFFER_CANARY@@QEBA_NXZ @ 0x1C0263D9C (-Check@CTDR_DUMP_BUFFER_CANARY@@QEBA_NXZ.c)
 *     ?ShrinkLastSegment@CTDR_DUMP_BUFFER@@AEAAXXZ @ 0x1C02643EC (-ShrinkLastSegment@CTDR_DUMP_BUFFER@@AEAAXXZ.c)
 *     ?TdrAllocatePool@@YAPEAX_KW4_POOL_TYPE@@@Z @ 0x1C0264520 (-TdrAllocatePool@@YAPEAX_KW4_POOL_TYPE@@@Z.c)
 *     ?TdrIsDisplayOnlyTdr@@YA_NW4_TDR_TIMEOUT_REASON@@@Z @ 0x1C0265994 (-TdrIsDisplayOnlyTdr@@YA_NW4_TDR_TIMEOUT_REASON@@@Z.c)
 *     ?TdrUpdateDbgReport@@YA_NPEAU_TDR_RECOVERY_CONTEXT@@_N@Z @ 0x1C0265F50 (-TdrUpdateDbgReport@@YA_NPEAU_TDR_RECOVERY_CONTEXT@@_N@Z.c)
 */

void __fastcall TdrCollectDbgInfoStage1(struct _TDR_RECOVERY_CONTEXT *a1, char a2)
{
  PVOID Pool; // rax
  CTDR_DUMP_BUFFER *v5; // rax
  __int64 v6; // rdx
  unsigned int *v7; // rbx
  void *v8; // rcx
  PVOID v9; // rax
  void *v10; // rax
  void *v11; // rbx
  unsigned int *v12; // rbx
  unsigned __int16 v13; // r14
  unsigned int v14; // esi
  unsigned int v15; // r12d
  unsigned int RecentEvents; // ebx
  void *v17; // rax
  unsigned int *v18; // rbx
  char *v19; // rax
  char *v20; // r14
  bool v21; // zf
  UINT v22; // ecx
  char *v23; // rdx
  DXGKARG_COLLECTDBGINFO_EXT *v24; // rax
  DXGADAPTER *v25; // rsi
  __int64 v26; // r8
  int v27; // ebx
  __int64 v28; // r8
  __int64 v29; // rdx
  __int64 v30; // rcx
  _QWORD *v31; // rax
  __int64 v32; // rdx
  __int64 v33; // rcx
  _QWORD *v34; // rax
  unsigned int *v35; // rbx
  char *v36; // rax
  char *v37; // rbx
  unsigned int v38; // r8d
  int SmbiosInfo; // eax
  __int64 v40; // rdx
  __int64 v41; // rcx
  _QWORD *v42; // rax
  unsigned int *v43; // rbx
  char *v44; // rax
  __int64 v45; // rbx
  int AdapterDebugData; // eax
  __int64 v47; // rdx
  __int64 v48; // rcx
  _QWORD *v49; // rax
  unsigned int *v50; // rbx
  char IsDisplayOnlyTdr; // al
  int v52; // ecx
  int v53; // r15d
  unsigned int v54; // esi
  unsigned int v55; // ebx
  char *v56; // rax
  char *v57; // r14
  __int64 v58; // r15
  int v59; // ebx
  __int64 v60; // rdx
  __int64 v61; // rcx
  _QWORD *v62; // rax
  unsigned int *v63; // rbx
  __int64 v64; // rcx
  CTDR_DUMP_BUFFER *v65; // rbx
  unsigned int v66; // ebx
  char *v67; // rax
  char *v68; // rsi
  __int64 v69; // rax
  __int64 v70; // r9
  __int64 v71; // rdx
  __int64 v72; // rcx
  _QWORD *v73; // rax
  unsigned int *v74; // rbx
  char *v75; // rax
  __int64 v76; // rbx
  int GlobalDebugData; // eax
  __int64 v78; // rdx
  __int64 v79; // rcx
  _QWORD *v80; // rax
  unsigned int *v81; // rbx
  unsigned __int16 i; // si
  int v83; // r15d
  char *v84; // rax
  char *v85; // rbx
  int v86; // ecx
  __int64 v87; // rdx
  __int64 v88; // rcx
  _DWORD *v89; // rax
  unsigned int *v90; // rbx
  _QWORD *v91; // rax
  _DWORD *v92; // [rsp+48h] [rbp-C0h] BYREF
  _DWORD *v93; // [rsp+50h] [rbp-B8h] BYREF
  _DWORD *v94; // [rsp+58h] [rbp-B0h] BYREF
  _DXGKARG_COLLECTDBGINFO v95; // [rsp+60h] [rbp-A8h] BYREF
  int v96; // [rsp+80h] [rbp-88h]
  __int64 v97; // [rsp+84h] [rbp-84h]
  _DWORD v98[28]; // [rsp+98h] [rbp-70h] BYREF

  LODWORD(v93) = *((_DWORD *)a1 + 4);
  if ( !*((_QWORD *)a1 + 355) )
  {
    Pool = TdrAllocatePool(0x260804uLL, PagedPool);
    *((_QWORD *)a1 + 355) = Pool;
    if ( Pool )
    {
      v5 = (CTDR_DUMP_BUFFER *)TdrAllocatePool(0x20uLL, PagedPool);
      if ( v5 )
        v7 = (unsigned int *)CTDR_DUMP_BUFFER::CTDR_DUMP_BUFFER(v5, v6, *((_DWORD **)a1 + 355));
      else
        v7 = 0LL;
      *((_QWORD *)a1 + 357) = v7;
      if ( v7 )
      {
        CTDR_DUMP_BUFFER::ShrinkLastSegment((CTDR_DUMP_BUFFER *)v7);
        *((_QWORD *)a1 + 356) = v7[6];
        v9 = TdrAllocatePool(0x24uLL, PagedPool);
        *((_QWORD *)a1 + 358) = v9;
        if ( !v9 )
          *((_DWORD *)a1 + 27) |= 2u;
        *((_DWORD *)a1 + 36) = *((_DWORD *)a1 + 4);
        *((_QWORD *)a1 + 19) = *((_QWORD *)a1 + 3);
        *((_DWORD *)a1 + 40) = *((_DWORD *)a1 + 14);
        *((_QWORD *)a1 + 21) = *((_QWORD *)a1 + 8);
        *((_QWORD *)a1 + 22) = *((_QWORD *)a1 + 9);
        *((_QWORD *)a1 + 23) = *((_QWORD *)a1 + 12);
        memmove((char *)a1 + 192, &g_TdrHistory, 0xA18uLL);
        v10 = CTDR_DUMP_BUFFER::AddSegment(*((CTDR_DUMP_BUFFER **)a1 + 357), 0xFFFF, 0xAA8u);
        v11 = v10;
        if ( v10 )
        {
          memmove(v10, (char *)a1 + 104, 0xAA8uLL);
          *((_QWORD *)a1 + 359) = v11;
        }
        else
        {
          *((_DWORD *)a1 + 27) |= 0x80000000;
        }
        v12 = (unsigned int *)*((_QWORD *)a1 + 357);
        CTDR_DUMP_BUFFER::ShrinkLastSegment((CTDR_DUMP_BUFFER *)v12);
        *((_QWORD *)a1 + 356) = v12[6];
        *((_DWORD *)a1 + 33) = 0xFFFF;
        if ( a2 )
          TdrUpdateDbgReport(a1, 1);
        *(&v95.Reason + 1) = 32;
        v95.pBuffer = (void *)0x4000000020LL;
        v13 = 0;
        v95.pExtension = (DXGKARG_COLLECTDBGINFO_EXT *)0x4000000020LL;
        v96 = 32;
        v14 = 0;
        v95.BufferSize = 0x4000000040LL;
        v97 = 64LL;
        v95.Reason = 1;
        do
        {
          if ( v14 >= 0x5000 )
            break;
          v15 = *(&v95.Reason + v13);
          RecentEvents = WdLogGetRecentEvents(v13, v15, 0LL, 0LL);
          if ( RecentEvents + v14 > 0x5000 )
            RecentEvents = 20480 - v14;
          if ( RecentEvents )
          {
            v17 = CTDR_DUMP_BUFFER::AddSegment(*((CTDR_DUMP_BUFFER **)a1 + 357), (unsigned int)v13 + 16, RecentEvents);
            if ( v17 )
              RecentEvents = WdLogGetRecentEvents(v13, v15, v17, RecentEvents);
            else
              *((_DWORD *)a1 + 27) |= 0x80000000;
          }
          v14 += RecentEvents;
          ++v13;
        }
        while ( v13 < 0xBu );
        v18 = (unsigned int *)*((_QWORD *)a1 + 357);
        CTDR_DUMP_BUFFER::ShrinkLastSegment((CTDR_DUMP_BUFFER *)v18);
        *((_QWORD *)a1 + 356) = v18[6];
        *((_DWORD *)a1 + 33) = 27;
        if ( a2 )
          TdrUpdateDbgReport(a1, 1);
        v19 = (char *)CTDR_DUMP_BUFFER::AddSegment(*((CTDR_DUMP_BUFFER **)a1 + 357), 1, 0x200004u);
        v20 = v19;
        if ( v19 )
        {
          v21 = *((_DWORD *)a1 + 4) == 6;
          v22 = 279;
          v23 = v19;
          v95.pBuffer = v19;
          if ( v21 )
            v22 = 321;
          v95.Reason = v22;
          *(&v95.Reason + 1) = 0;
          v24 = (DXGKARG_COLLECTDBGINFO_EXT *)*((_QWORD *)a1 + 358);
          v95.BufferSize = 0x200000LL;
          v95.pExtension = v24;
          CTDR_DUMP_BUFFER_CANARY::CTDR_DUMP_BUFFER_CANARY((CTDR_DUMP_BUFFER_CANARY *)&v92, v23, 0x200000);
          CTDR_DUMP_BUFFER_CANARY::CTDR_DUMP_BUFFER_CANARY((CTDR_DUMP_BUFFER_CANARY *)&v94, *((char **)a1 + 358), 32);
          v25 = (DXGADAPTER *)*((_QWORD *)a1 + 4);
          if ( (unsigned __int8)TdrIsDisplayOnlyTdr(*((unsigned int *)a1 + 4)) )
          {
            v27 = DXGADAPTER::_DdiCollectDbgInfoNoLocks(v25, &v95, v26);
          }
          else
          {
            DXGADAPTER::AcquireDdiSync((__int64)v25, 1);
            v27 = DXGADAPTER::_DdiCollectDbgInfoNoLocks(v25, &v95, v28);
            DXGADAPTER::ReleaseDdiSync(v25);
          }
          if ( v27 == -2147483643 )
          {
            *((_DWORD *)a1 + 27) |= 0x40000000u;
          }
          else if ( v27 == -1073741822 )
          {
            *((_DWORD *)a1 + 27) |= 4u;
          }
          else if ( v27 < 0 )
          {
            *((_DWORD *)a1 + 27) |= 0x80000000;
          }
          if ( !CTDR_DUMP_BUFFER_CANARY::Check((const void **)&v92) )
          {
            *((_DWORD *)a1 + 27) |= 0x40000000u;
            v31 = (_QWORD *)WdLogNewEntry5_WdAssertion(v30, v29);
            v31[3] = a1;
            v31[4] = v20;
            v31[5] = 0x200000LL;
            WdLogEvent5_WdAssertion(v31);
          }
          if ( !CTDR_DUMP_BUFFER_CANARY::Check((const void **)&v94) )
          {
            *((_DWORD *)a1 + 27) |= 0x40000000u;
            v34 = (_QWORD *)WdLogNewEntry5_WdAssertion(v33, v32);
            v34[3] = a1;
            v34[4] = *((_QWORD *)a1 + 358);
            v34[5] = 32LL;
            WdLogEvent5_WdAssertion(v34);
          }
          if ( v94 )
            *v94 = 0;
          if ( v92 )
            *v92 = 0;
        }
        else
        {
          *((_DWORD *)a1 + 27) |= 0x80000000;
        }
        v35 = (unsigned int *)*((_QWORD *)a1 + 357);
        CTDR_DUMP_BUFFER::ShrinkLastSegment((CTDR_DUMP_BUFFER *)v35);
        *((_QWORD *)a1 + 356) = v35[6];
        *((_DWORD *)a1 + 33) = 1;
        if ( a2 )
          TdrUpdateDbgReport(a1, 1);
        v36 = (char *)CTDR_DUMP_BUFFER::AddSegment(*((CTDR_DUMP_BUFFER **)a1 + 357), 2, 0x4004u);
        v37 = v36;
        if ( v36 )
        {
          CTDR_DUMP_BUFFER_CANARY::CTDR_DUMP_BUFFER_CANARY((CTDR_DUMP_BUFFER_CANARY *)&v92, v36, 0x4000);
          SmbiosInfo = DMgrGetSmbiosInfo(v37, v38);
          if ( SmbiosInfo == -2147483643 )
          {
            *((_DWORD *)a1 + 27) |= 0x40000000u;
          }
          else if ( SmbiosInfo < 0 )
          {
            *((_DWORD *)a1 + 27) |= 0x80000000;
          }
          if ( !CTDR_DUMP_BUFFER_CANARY::Check((const void **)&v92) )
          {
            *((_DWORD *)a1 + 27) |= 0x40000000u;
            v42 = (_QWORD *)WdLogNewEntry5_WdAssertion(v41, v40);
            v42[3] = a1;
            v42[4] = v37;
            v42[5] = 0x4000LL;
            WdLogEvent5_WdAssertion(v42);
          }
          if ( v92 )
            *v92 = 0;
        }
        else
        {
          *((_DWORD *)a1 + 27) |= 0x80000000;
        }
        v43 = (unsigned int *)*((_QWORD *)a1 + 357);
        CTDR_DUMP_BUFFER::ShrinkLastSegment((CTDR_DUMP_BUFFER *)v43);
        *((_QWORD *)a1 + 356) = v43[6];
        *((_DWORD *)a1 + 33) = 2;
        if ( a2 )
          TdrUpdateDbgReport(a1, 1);
        v44 = (char *)CTDR_DUMP_BUFFER::AddSegment(*((CTDR_DUMP_BUFFER **)a1 + 357), 6, 0x404u);
        v45 = (__int64)v44;
        if ( v44 )
        {
          CTDR_DUMP_BUFFER_CANARY::CTDR_DUMP_BUFFER_CANARY((CTDR_DUMP_BUFFER_CANARY *)&v92, v44, 1024);
          AdapterDebugData = DpiGetAdapterDebugData(*(_QWORD *)(*((_QWORD *)a1 + 4) + 216LL), v45);
          if ( AdapterDebugData == -2147483643 )
          {
            *((_DWORD *)a1 + 27) |= 0x40000000u;
          }
          else if ( AdapterDebugData < 0 )
          {
            *((_DWORD *)a1 + 27) |= 0x80000000;
          }
          if ( !CTDR_DUMP_BUFFER_CANARY::Check((const void **)&v92) )
          {
            *((_DWORD *)a1 + 27) |= 0x40000000u;
            v49 = (_QWORD *)WdLogNewEntry5_WdAssertion(v48, v47);
            v49[3] = a1;
            v49[4] = v45;
            v49[5] = 1024LL;
            WdLogEvent5_WdAssertion(v49);
          }
          if ( v92 )
            *v92 = 0;
        }
        else
        {
          *((_DWORD *)a1 + 27) |= 0x80000000;
        }
        v50 = (unsigned int *)*((_QWORD *)a1 + 357);
        CTDR_DUMP_BUFFER::ShrinkLastSegment((CTDR_DUMP_BUFFER *)v50);
        *((_QWORD *)a1 + 356) = v50[6];
        *((_DWORD *)a1 + 33) = 6;
        if ( a2 )
          TdrUpdateDbgReport(a1, 1);
        IsDisplayOnlyTdr = TdrIsDisplayOnlyTdr(*((unsigned int *)a1 + 4));
        v53 = (int)v93;
        if ( !IsDisplayOnlyTdr && (_DWORD)v93 != 6 )
        {
          v54 = 8;
          if ( v52 != 3 )
            v54 = 3;
          v55 = 195072;
          if ( v52 != 3 )
            v55 = 0x2000;
          v56 = (char *)CTDR_DUMP_BUFFER::AddSegment(*((CTDR_DUMP_BUFFER **)a1 + 357), v54, v55 + 4);
          v57 = v56;
          if ( v56 )
          {
            CTDR_DUMP_BUFFER_CANARY::CTDR_DUMP_BUFFER_CANARY((CTDR_DUMP_BUFFER_CANARY *)&v92, v56, v55);
            v58 = v55;
            v59 = (*(__int64 (__fastcall **)(struct _TDR_RECOVERY_CONTEXT *, char *, _QWORD))(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)a1 + 4) + 2704LL) + 616LL) + 8LL)
                                                                                            + 600LL))(
                    a1,
                    v57,
                    v55);
            if ( v59 == -2147483643 )
            {
              *((_DWORD *)a1 + 27) |= 0x40000000u;
            }
            else if ( v59 < 0 )
            {
              *((_DWORD *)a1 + 27) |= 0x80000000;
            }
            if ( CTDR_DUMP_BUFFER_CANARY::Check((const void **)&v92) )
            {
              if ( v59 < 0 )
                *((_DWORD *)a1 + 27) |= 0x40000000u;
            }
            else
            {
              *((_DWORD *)a1 + 27) |= 0x40000000u;
              v62 = (_QWORD *)WdLogNewEntry5_WdAssertion(v61, v60);
              v62[6] = v54;
              v62[3] = a1;
              v62[4] = v57;
              v62[5] = v58;
              WdLogEvent5_WdAssertion(v62);
            }
            v53 = (int)v93;
            if ( v92 )
              *v92 = 0;
          }
          else
          {
            *((_DWORD *)a1 + 27) |= 0x80000000;
          }
          v63 = (unsigned int *)*((_QWORD *)a1 + 357);
          CTDR_DUMP_BUFFER::ShrinkLastSegment((CTDR_DUMP_BUFFER *)v63);
          *((_QWORD *)a1 + 356) = v63[6];
          *((_DWORD *)a1 + 33) = v54;
          if ( a2 )
            TdrUpdateDbgReport(a1, 1);
        }
        v64 = *((unsigned int *)a1 + 4);
        if ( (_DWORD)v64 != 3 && !(unsigned __int8)TdrIsDisplayOnlyTdr(v64) && v53 != 6 )
        {
          v65 = (CTDR_DUMP_BUFFER *)*((_QWORD *)a1 + 357);
          CTDR_DUMP_BUFFER::ShrinkLastSegment(v65);
          v66 = *((_DWORD *)v65 + 4) - *((_DWORD *)v65 + 6) - 10248;
          v67 = (char *)CTDR_DUMP_BUFFER::AddSegment(*((CTDR_DUMP_BUFFER **)a1 + 357), 4, v66 + 4);
          v68 = v67;
          if ( v67 )
          {
            CTDR_DUMP_BUFFER_CANARY::CTDR_DUMP_BUFFER_CANARY((CTDR_DUMP_BUFFER_CANARY *)&v92, v67, v66);
            v69 = *((_QWORD *)a1 + 358);
            if ( v69 )
              v70 = *(unsigned int *)(v69 + 4);
            else
              v70 = 0LL;
            if ( !(*(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD, __int64, char *, _QWORD))(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)a1 + 4) + 2704LL) + 640LL) + 8LL)
                                                                                             + 352LL))(
                    *(_QWORD *)(*(_QWORD *)(*((_QWORD *)a1 + 4) + 2704LL) + 648LL),
                    *((unsigned int *)a1 + 14),
                    *((_QWORD *)a1 + 8),
                    v70,
                    v68,
                    v66) )
              *((_DWORD *)a1 + 27) |= 0x40000000u;
            if ( !CTDR_DUMP_BUFFER_CANARY::Check((const void **)&v92) )
            {
              *((_DWORD *)a1 + 27) |= 0x40000000u;
              v73 = (_QWORD *)WdLogNewEntry5_WdAssertion(v72, v71);
              v73[3] = a1;
              v73[4] = v68;
              v73[5] = v66;
              WdLogEvent5_WdAssertion(v73);
            }
            if ( v92 )
              *v92 = 0;
          }
          else
          {
            *((_DWORD *)a1 + 27) |= 0x80000000;
          }
          v74 = (unsigned int *)*((_QWORD *)a1 + 357);
          CTDR_DUMP_BUFFER::ShrinkLastSegment((CTDR_DUMP_BUFFER *)v74);
          *((_QWORD *)a1 + 356) = v74[6];
          *((_DWORD *)a1 + 33) = 4;
          if ( a2 )
            TdrUpdateDbgReport(a1, 1);
        }
        v75 = (char *)CTDR_DUMP_BUFFER::AddSegment(*((CTDR_DUMP_BUFFER **)a1 + 357), 9, 0xCu);
        v76 = (__int64)v75;
        if ( v75 )
        {
          CTDR_DUMP_BUFFER_CANARY::CTDR_DUMP_BUFFER_CANARY((CTDR_DUMP_BUFFER_CANARY *)&v92, v75, 8);
          GlobalDebugData = DpiGetGlobalDebugData(v76);
          if ( GlobalDebugData == -2147483643 )
          {
            *((_DWORD *)a1 + 27) |= 0x40000000u;
          }
          else if ( GlobalDebugData < 0 )
          {
            *((_DWORD *)a1 + 27) |= 0x80000000;
          }
          if ( !CTDR_DUMP_BUFFER_CANARY::Check((const void **)&v92) )
          {
            *((_DWORD *)a1 + 27) |= 0x40000000u;
            v80 = (_QWORD *)WdLogNewEntry5_WdAssertion(v79, v78);
            v80[3] = a1;
            v80[4] = v76;
            v80[5] = 8LL;
            WdLogEvent5_WdAssertion(v80);
          }
          if ( v92 )
            *v92 = 0;
        }
        else
        {
          *((_DWORD *)a1 + 27) |= 0x80000000;
        }
        v81 = (unsigned int *)*((_QWORD *)a1 + 357);
        CTDR_DUMP_BUFFER::ShrinkLastSegment((CTDR_DUMP_BUFFER *)v81);
        *((_QWORD *)a1 + 356) = v81[6];
        *((_DWORD *)a1 + 33) = 9;
        if ( a2 )
          TdrUpdateDbgReport(a1, 1);
        memset(v98, 0, sizeof(v98));
        if ( (int)DpiGetDbgInfoAdapters((__int64)v98) >= 0 )
        {
          for ( i = 0; i < 7u; ++i )
          {
            v83 = v98[4 * i];
            if ( !v83 )
              break;
            v84 = (char *)CTDR_DUMP_BUFFER::AddSegment(*((CTDR_DUMP_BUFFER **)a1 + 357), (unsigned int)i + 32, 0x14u);
            v85 = v84;
            if ( !v84 )
            {
              *((_DWORD *)a1 + 27) |= 0x80000000;
              return;
            }
            CTDR_DUMP_BUFFER_CANARY::CTDR_DUMP_BUFFER_CANARY((CTDR_DUMP_BUFFER_CANARY *)&v93, v84, 16);
            *((_DWORD *)v85 + 1) = v98[4 * i + 1];
            *((_DWORD *)v85 + 2) = v98[4 * i + 2];
            v86 = (*((_DWORD *)v85 + 3) ^ v98[4 * i + 3]) & 3;
            *(_DWORD *)v85 = v83;
            *((_DWORD *)v85 + 3) ^= v86;
            if ( !CTDR_DUMP_BUFFER_CANARY::Check((const void **)&v93) )
            {
              *((_DWORD *)a1 + 27) |= 0x40000000u;
              v91 = (_QWORD *)WdLogNewEntry5_WdAssertion(v88, v87);
              v91[3] = a1;
              v91[4] = v85;
              v91[5] = 16LL;
              WdLogEvent5_WdAssertion(v91);
              if ( v93 )
                *v93 = 0;
              return;
            }
            v89 = v93;
            if ( v93 )
            {
              v93 = 0LL;
              *v89 = 0;
            }
            v90 = (unsigned int *)*((_QWORD *)a1 + 357);
            CTDR_DUMP_BUFFER::ShrinkLastSegment((CTDR_DUMP_BUFFER *)v90);
            *((_QWORD *)a1 + 356) = v90[6];
            *((_DWORD *)a1 + 33) = i + 32;
            if ( a2 )
              TdrUpdateDbgReport(a1, 1);
          }
        }
      }
      else
      {
        *((_DWORD *)a1 + 27) |= 2u;
        v8 = (void *)*((_QWORD *)a1 + 355);
        if ( v8 )
          ExFreePoolWithTag(v8, 0x52445476u);
        *((_QWORD *)a1 + 355) = 0LL;
      }
    }
    else
    {
      *((_DWORD *)a1 + 27) |= 2u;
    }
  }
}
