/*
 * XREFs of ?TdrCollectDbgInfoStage1@@YAXPEAU_TDR_RECOVERY_CONTEXT@@_N@Z @ 0x1C03052F0
 * Callers:
 *     ?TdrAllowToDebugEngineTimeout@@YA_NPEAU_VIDSCH_NODE@@PEAVDXGADAPTER@@@Z @ 0x1C0305110 (-TdrAllowToDebugEngineTimeout@@YA_NPEAU_VIDSCH_NODE@@PEAVDXGADAPTER@@@Z.c)
 *     ?TdrIsRecoveryRequired@@YA_NPEAU_TDR_RECOVERY_CONTEXT@@@Z @ 0x1C0306540 (-TdrIsRecoveryRequired@@YA_NPEAU_TDR_RECOVERY_CONTEXT@@@Z.c)
 * Callees:
 *     ?AcquireDdiSync@DXGADAPTER@@QEAAXW4DXGADAPTERDDISYNC_LEVEL@@@Z @ 0x1C000B800 (-AcquireDdiSync@DXGADAPTER@@QEAAXW4DXGADAPTERDDISYNC_LEVEL@@@Z.c)
 *     ?ReleaseDdiSync@DXGADAPTER@@QEAAXXZ @ 0x1C000B8C0 (-ReleaseDdiSync@DXGADAPTER@@QEAAXXZ.c)
 *     __security_check_cookie @ 0x1C002B170 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C002CCC0 (_guard_dispatch_icall_nop.c)
 *     memmove @ 0x1C002CD00 (memmove.c)
 *     memset @ 0x1C002CFC0 (memset.c)
 *     DpiGetAdapterDebugData @ 0x1C005F510 (DpiGetAdapterDebugData.c)
 *     DpiGetDbgInfoAdapters @ 0x1C005F594 (DpiGetDbgInfoAdapters.c)
 *     DpiGetGlobalDebugData @ 0x1C005F684 (DpiGetGlobalDebugData.c)
 *     ?_DdiCollectDbgInfoNoLocks@DXGADAPTER@@QEAAJPEBU_DXGKARG_COLLECTDBGINFO@@@Z @ 0x1C02CE08C (-_DdiCollectDbgInfoNoLocks@DXGADAPTER@@QEAAJPEBU_DXGKARG_COLLECTDBGINFO@@@Z.c)
 *     ??0CTDR_DUMP_BUFFER@@QEAA@GPEAXK@Z @ 0x1C03046E4 (--0CTDR_DUMP_BUFFER@@QEAA@GPEAXK@Z.c)
 *     ??0CTDR_DUMP_BUFFER_CANARY@@QEAA@PEAXK@Z @ 0x1C0304748 (--0CTDR_DUMP_BUFFER_CANARY@@QEAA@PEAXK@Z.c)
 *     ?AddSegment@CTDR_DUMP_BUFFER@@QEAAPEAXKK@Z @ 0x1C03048A8 (-AddSegment@CTDR_DUMP_BUFFER@@QEAAPEAXKK@Z.c)
 *     ?Check@CTDR_DUMP_BUFFER_CANARY@@QEBA_NXZ @ 0x1C030493C (-Check@CTDR_DUMP_BUFFER_CANARY@@QEBA_NXZ.c)
 *     ?ShrinkLastSegment@CTDR_DUMP_BUFFER@@AEAAXXZ @ 0x1C030501C (-ShrinkLastSegment@CTDR_DUMP_BUFFER@@AEAAXXZ.c)
 *     ?TdrIsDisplayOnlyTdr@@YA_NW4_TDR_TIMEOUT_REASON@@@Z @ 0x1C03064E4 (-TdrIsDisplayOnlyTdr@@YA_NW4_TDR_TIMEOUT_REASON@@@Z.c)
 *     ?TdrUpdateDbgReport@@YA_NPEAU_TDR_RECOVERY_CONTEXT@@_N@Z @ 0x1C0306A60 (-TdrUpdateDbgReport@@YA_NPEAU_TDR_RECOVERY_CONTEXT@@_N@Z.c)
 */

void __fastcall TdrCollectDbgInfoStage1(struct _TDR_RECOVERY_CONTEXT *a1, char a2, __int64 a3, __int64 a4)
{
  __int64 Pool2; // rax
  __int64 v7; // r9
  CTDR_DUMP_BUFFER *v8; // rax
  __int64 v9; // rdx
  unsigned int *v10; // rbx
  void *v11; // rcx
  __int64 v12; // r9
  __int64 v13; // rax
  void *v14; // rax
  void *v15; // rbx
  unsigned int *v16; // rbx
  unsigned int v17; // esi
  unsigned __int16 v18; // r14
  unsigned int v19; // r12d
  unsigned int RecentEvents; // ebx
  void *v21; // rax
  unsigned int *v22; // rbx
  char *v23; // rax
  char *v24; // r14
  bool v25; // zf
  UINT v26; // ecx
  char *v27; // rdx
  DXGKARG_COLLECTDBGINFO_EXT *v28; // rax
  DXGADAPTER *v29; // rsi
  __int64 v30; // r8
  int v31; // ebx
  __int64 v32; // r8
  unsigned int *v33; // rbx
  char *v34; // rax
  char *v35; // rbx
  unsigned int v36; // r8d
  int SmbiosInfo; // eax
  unsigned int *v38; // rbx
  char *v39; // rax
  __int64 v40; // rbx
  int AdapterDebugData; // eax
  unsigned int *v42; // rbx
  char IsDisplayOnlyTdr; // al
  int v44; // ecx
  int v45; // r15d
  unsigned int v46; // esi
  unsigned int v47; // ebx
  char *v48; // rax
  char *v49; // r14
  __int64 v50; // r15
  int v51; // ebx
  unsigned int *v52; // rbx
  __int64 v53; // rcx
  CTDR_DUMP_BUFFER *v54; // rbx
  unsigned int v55; // ebx
  char *v56; // rax
  char *v57; // rsi
  __int64 v58; // rax
  __int64 v59; // r9
  unsigned int *v60; // rbx
  char *v61; // rax
  __int64 v62; // rbx
  int GlobalDebugData; // eax
  unsigned int *v64; // rbx
  unsigned __int16 i; // si
  int v66; // r15d
  char *v67; // rax
  char *v68; // rbx
  int v69; // ecx
  _DWORD *v70; // rax
  unsigned int *v71; // rbx
  _DWORD *v72; // [rsp+48h] [rbp-C0h] BYREF
  _DWORD *v73; // [rsp+50h] [rbp-B8h] BYREF
  _DWORD *v74; // [rsp+58h] [rbp-B0h] BYREF
  _DXGKARG_COLLECTDBGINFO v75; // [rsp+60h] [rbp-A8h] BYREF
  int v76; // [rsp+80h] [rbp-88h]
  __int64 v77; // [rsp+84h] [rbp-84h]
  _DWORD v78[28]; // [rsp+98h] [rbp-70h] BYREF

  LODWORD(v73) = *((_DWORD *)a1 + 4);
  if ( !*((_QWORD *)a1 + 356) )
  {
    Pool2 = ExAllocatePool2(256LL, 2492420LL, 1380209782LL, a4);
    *((_QWORD *)a1 + 356) = Pool2;
    if ( Pool2 )
    {
      v8 = (CTDR_DUMP_BUFFER *)ExAllocatePool2(256LL, 32LL, 1380209782LL, v7);
      if ( v8 )
        v10 = (unsigned int *)CTDR_DUMP_BUFFER::CTDR_DUMP_BUFFER(v8, v9, *((_DWORD **)a1 + 356));
      else
        v10 = 0LL;
      *((_QWORD *)a1 + 358) = v10;
      if ( v10 )
      {
        CTDR_DUMP_BUFFER::ShrinkLastSegment((CTDR_DUMP_BUFFER *)v10);
        *((_QWORD *)a1 + 357) = v10[6];
        v13 = ExAllocatePool2(256LL, 36LL, 1380209782LL, v12);
        *((_QWORD *)a1 + 359) = v13;
        if ( !v13 )
          *((_DWORD *)a1 + 29) |= 2u;
        *((_DWORD *)a1 + 38) = *((_DWORD *)a1 + 4);
        *((_QWORD *)a1 + 20) = *((_QWORD *)a1 + 3);
        *((_DWORD *)a1 + 42) = *((_DWORD *)a1 + 14);
        *((_QWORD *)a1 + 22) = *((_QWORD *)a1 + 8);
        *((_QWORD *)a1 + 23) = *((_QWORD *)a1 + 9);
        *((_QWORD *)a1 + 24) = *((_QWORD *)a1 + 13);
        memmove((char *)a1 + 200, &g_TdrHistory, 0xA18uLL);
        v14 = CTDR_DUMP_BUFFER::AddSegment(*((CTDR_DUMP_BUFFER **)a1 + 358), 0xFFFF, 0xAA8u);
        v15 = v14;
        if ( v14 )
        {
          memmove(v14, (char *)a1 + 112, 0xAA8uLL);
          *((_QWORD *)a1 + 360) = v15;
        }
        else
        {
          *((_DWORD *)a1 + 29) |= 0x80000000;
        }
        v16 = (unsigned int *)*((_QWORD *)a1 + 358);
        CTDR_DUMP_BUFFER::ShrinkLastSegment((CTDR_DUMP_BUFFER *)v16);
        *((_QWORD *)a1 + 357) = v16[6];
        *((_DWORD *)a1 + 35) = 0xFFFF;
        if ( a2 )
          TdrUpdateDbgReport(a1, 1);
        v75.Reason = 1;
        *(&v75.Reason + 1) = 32;
        v17 = 0;
        v75.pBuffer = (void *)0x4000000020LL;
        v18 = 0;
        v75.pExtension = (DXGKARG_COLLECTDBGINFO_EXT *)0x4000000020LL;
        v76 = 32;
        v75.BufferSize = 0x4000000040LL;
        v77 = 64LL;
        do
        {
          if ( v17 >= 0x5000 )
            break;
          v19 = *(&v75.Reason + v18);
          RecentEvents = WdLogGetRecentEvents(v18, v19, 0LL, 0LL);
          if ( RecentEvents + v17 > 0x5000 )
            RecentEvents = 20480 - v17;
          if ( RecentEvents )
          {
            v21 = CTDR_DUMP_BUFFER::AddSegment(*((CTDR_DUMP_BUFFER **)a1 + 358), (unsigned int)v18 + 16, RecentEvents);
            if ( v21 )
              RecentEvents = WdLogGetRecentEvents(v18, v19, v21, RecentEvents);
            else
              *((_DWORD *)a1 + 29) |= 0x80000000;
          }
          v17 += RecentEvents;
          ++v18;
        }
        while ( v18 < 0xBu );
        v22 = (unsigned int *)*((_QWORD *)a1 + 358);
        CTDR_DUMP_BUFFER::ShrinkLastSegment((CTDR_DUMP_BUFFER *)v22);
        *((_QWORD *)a1 + 357) = v22[6];
        *((_DWORD *)a1 + 35) = 27;
        if ( a2 )
          TdrUpdateDbgReport(a1, 1);
        v23 = (char *)CTDR_DUMP_BUFFER::AddSegment(*((CTDR_DUMP_BUFFER **)a1 + 358), 1, 0x200004u);
        v24 = v23;
        if ( v23 )
        {
          v25 = *((_DWORD *)a1 + 4) == 6;
          v26 = 279;
          v27 = v23;
          v75.pBuffer = v23;
          if ( v25 )
            v26 = 321;
          v75.Reason = v26;
          *(&v75.Reason + 1) = 0;
          v28 = (DXGKARG_COLLECTDBGINFO_EXT *)*((_QWORD *)a1 + 359);
          v75.BufferSize = 0x200000LL;
          v75.pExtension = v28;
          CTDR_DUMP_BUFFER_CANARY::CTDR_DUMP_BUFFER_CANARY((CTDR_DUMP_BUFFER_CANARY *)&v72, v27, 0x200000);
          CTDR_DUMP_BUFFER_CANARY::CTDR_DUMP_BUFFER_CANARY((CTDR_DUMP_BUFFER_CANARY *)&v74, *((char **)a1 + 359), 32);
          v29 = (DXGADAPTER *)*((_QWORD *)a1 + 4);
          if ( (unsigned __int8)TdrIsDisplayOnlyTdr(*((unsigned int *)a1 + 4)) )
          {
            v31 = DXGADAPTER::_DdiCollectDbgInfoNoLocks(v29, &v75, v30);
          }
          else
          {
            DXGADAPTER::AcquireDdiSync((__int64)v29, 1);
            v31 = DXGADAPTER::_DdiCollectDbgInfoNoLocks(v29, &v75, v32);
            DXGADAPTER::ReleaseDdiSync(v29);
          }
          if ( v31 == -2147483643 )
          {
            *((_DWORD *)a1 + 29) |= 0x40000000u;
          }
          else if ( v31 == -1073741822 )
          {
            *((_DWORD *)a1 + 29) |= 4u;
          }
          else if ( v31 < 0 )
          {
            *((_DWORD *)a1 + 29) |= 0x80000000;
          }
          if ( !CTDR_DUMP_BUFFER_CANARY::Check((const void **)&v72) )
          {
            *((_DWORD *)a1 + 29) |= 0x40000000u;
            WdLogSingleEntry3(1LL, a1, v24, 0x200000LL);
          }
          if ( !CTDR_DUMP_BUFFER_CANARY::Check((const void **)&v74) )
          {
            *((_DWORD *)a1 + 29) |= 0x40000000u;
            WdLogSingleEntry3(1LL, a1, *((_QWORD *)a1 + 359), 32LL);
          }
          if ( v74 )
            *v74 = 0;
          if ( v72 )
            *v72 = 0;
        }
        else
        {
          *((_DWORD *)a1 + 29) |= 0x80000000;
        }
        v33 = (unsigned int *)*((_QWORD *)a1 + 358);
        CTDR_DUMP_BUFFER::ShrinkLastSegment((CTDR_DUMP_BUFFER *)v33);
        *((_QWORD *)a1 + 357) = v33[6];
        *((_DWORD *)a1 + 35) = 1;
        if ( a2 )
          TdrUpdateDbgReport(a1, 1);
        v34 = (char *)CTDR_DUMP_BUFFER::AddSegment(*((CTDR_DUMP_BUFFER **)a1 + 358), 2, 0x4004u);
        v35 = v34;
        if ( v34 )
        {
          CTDR_DUMP_BUFFER_CANARY::CTDR_DUMP_BUFFER_CANARY((CTDR_DUMP_BUFFER_CANARY *)&v72, v34, 0x4000);
          SmbiosInfo = DMgrGetSmbiosInfo(v35, v36);
          if ( SmbiosInfo == -2147483643 )
          {
            *((_DWORD *)a1 + 29) |= 0x40000000u;
          }
          else if ( SmbiosInfo < 0 )
          {
            *((_DWORD *)a1 + 29) |= 0x80000000;
          }
          if ( !CTDR_DUMP_BUFFER_CANARY::Check((const void **)&v72) )
          {
            *((_DWORD *)a1 + 29) |= 0x40000000u;
            WdLogSingleEntry3(1LL, a1, v35, 0x4000LL);
          }
          if ( v72 )
            *v72 = 0;
        }
        else
        {
          *((_DWORD *)a1 + 29) |= 0x80000000;
        }
        v38 = (unsigned int *)*((_QWORD *)a1 + 358);
        CTDR_DUMP_BUFFER::ShrinkLastSegment((CTDR_DUMP_BUFFER *)v38);
        *((_QWORD *)a1 + 357) = v38[6];
        *((_DWORD *)a1 + 35) = 2;
        if ( a2 )
          TdrUpdateDbgReport(a1, 1);
        v39 = (char *)CTDR_DUMP_BUFFER::AddSegment(*((CTDR_DUMP_BUFFER **)a1 + 358), 6, 0x404u);
        v40 = (__int64)v39;
        if ( v39 )
        {
          CTDR_DUMP_BUFFER_CANARY::CTDR_DUMP_BUFFER_CANARY((CTDR_DUMP_BUFFER_CANARY *)&v72, v39, 1024);
          AdapterDebugData = DpiGetAdapterDebugData(*(_QWORD *)(*((_QWORD *)a1 + 4) + 216LL), v40);
          if ( AdapterDebugData == -2147483643 )
          {
            *((_DWORD *)a1 + 29) |= 0x40000000u;
          }
          else if ( AdapterDebugData < 0 )
          {
            *((_DWORD *)a1 + 29) |= 0x80000000;
          }
          if ( !CTDR_DUMP_BUFFER_CANARY::Check((const void **)&v72) )
          {
            *((_DWORD *)a1 + 29) |= 0x40000000u;
            WdLogSingleEntry3(1LL, a1, v40, 1024LL);
          }
          if ( v72 )
            *v72 = 0;
        }
        else
        {
          *((_DWORD *)a1 + 29) |= 0x80000000;
        }
        v42 = (unsigned int *)*((_QWORD *)a1 + 358);
        CTDR_DUMP_BUFFER::ShrinkLastSegment((CTDR_DUMP_BUFFER *)v42);
        *((_QWORD *)a1 + 357) = v42[6];
        *((_DWORD *)a1 + 35) = 6;
        if ( a2 )
          TdrUpdateDbgReport(a1, 1);
        IsDisplayOnlyTdr = TdrIsDisplayOnlyTdr(*((unsigned int *)a1 + 4));
        v45 = (int)v73;
        if ( !IsDisplayOnlyTdr && (_DWORD)v73 != 6 )
        {
          v46 = 8;
          if ( v44 != 3 )
            v46 = 3;
          v47 = 195072;
          if ( v44 != 3 )
            v47 = 0x2000;
          v48 = (char *)CTDR_DUMP_BUFFER::AddSegment(*((CTDR_DUMP_BUFFER **)a1 + 358), v46, v47 + 4);
          v49 = v48;
          if ( v48 )
          {
            CTDR_DUMP_BUFFER_CANARY::CTDR_DUMP_BUFFER_CANARY((CTDR_DUMP_BUFFER_CANARY *)&v72, v48, v47);
            v50 = v47;
            v51 = (*(__int64 (__fastcall **)(struct _TDR_RECOVERY_CONTEXT *, char *, _QWORD))(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)a1 + 4) + 2800LL) + 624LL) + 8LL)
                                                                                            + 600LL))(
                    a1,
                    v49,
                    v47);
            if ( v51 == -2147483643 )
            {
              *((_DWORD *)a1 + 29) |= 0x40000000u;
            }
            else if ( v51 < 0 )
            {
              *((_DWORD *)a1 + 29) |= 0x80000000;
            }
            if ( CTDR_DUMP_BUFFER_CANARY::Check((const void **)&v72) )
            {
              if ( v51 < 0 )
                *((_DWORD *)a1 + 29) |= 0x40000000u;
            }
            else
            {
              *((_DWORD *)a1 + 29) |= 0x40000000u;
              WdLogSingleEntry4(1LL, a1, v49, v50, v46);
            }
            v45 = (int)v73;
            if ( v72 )
              *v72 = 0;
          }
          else
          {
            *((_DWORD *)a1 + 29) |= 0x80000000;
          }
          v52 = (unsigned int *)*((_QWORD *)a1 + 358);
          CTDR_DUMP_BUFFER::ShrinkLastSegment((CTDR_DUMP_BUFFER *)v52);
          *((_QWORD *)a1 + 357) = v52[6];
          *((_DWORD *)a1 + 35) = v46;
          if ( a2 )
            TdrUpdateDbgReport(a1, 1);
        }
        v53 = *((unsigned int *)a1 + 4);
        if ( (_DWORD)v53 != 3 && !(unsigned __int8)TdrIsDisplayOnlyTdr(v53) && v45 != 6 )
        {
          v54 = (CTDR_DUMP_BUFFER *)*((_QWORD *)a1 + 358);
          CTDR_DUMP_BUFFER::ShrinkLastSegment(v54);
          v55 = *((_DWORD *)v54 + 4) - *((_DWORD *)v54 + 6) - 10248;
          v56 = (char *)CTDR_DUMP_BUFFER::AddSegment(*((CTDR_DUMP_BUFFER **)a1 + 358), 4, v55 + 4);
          v57 = v56;
          if ( v56 )
          {
            CTDR_DUMP_BUFFER_CANARY::CTDR_DUMP_BUFFER_CANARY((CTDR_DUMP_BUFFER_CANARY *)&v72, v56, v55);
            v58 = *((_QWORD *)a1 + 359);
            if ( v58 )
              v59 = *(unsigned int *)(v58 + 4);
            else
              v59 = 0LL;
            if ( !(*(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD, __int64, char *, _QWORD))(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)a1 + 4) + 2800LL) + 648LL) + 8LL)
                                                                                             + 360LL))(
                    *(_QWORD *)(*(_QWORD *)(*((_QWORD *)a1 + 4) + 2800LL) + 656LL),
                    *((unsigned int *)a1 + 14),
                    *((_QWORD *)a1 + 8),
                    v59,
                    v57,
                    v55) )
              *((_DWORD *)a1 + 29) |= 0x40000000u;
            if ( !CTDR_DUMP_BUFFER_CANARY::Check((const void **)&v72) )
            {
              *((_DWORD *)a1 + 29) |= 0x40000000u;
              WdLogSingleEntry3(1LL, a1, v57, v55);
            }
            if ( v72 )
              *v72 = 0;
          }
          else
          {
            *((_DWORD *)a1 + 29) |= 0x80000000;
          }
          v60 = (unsigned int *)*((_QWORD *)a1 + 358);
          CTDR_DUMP_BUFFER::ShrinkLastSegment((CTDR_DUMP_BUFFER *)v60);
          *((_QWORD *)a1 + 357) = v60[6];
          *((_DWORD *)a1 + 35) = 4;
          if ( a2 )
            TdrUpdateDbgReport(a1, 1);
        }
        v61 = (char *)CTDR_DUMP_BUFFER::AddSegment(*((CTDR_DUMP_BUFFER **)a1 + 358), 9, 0xCu);
        v62 = (__int64)v61;
        if ( v61 )
        {
          CTDR_DUMP_BUFFER_CANARY::CTDR_DUMP_BUFFER_CANARY((CTDR_DUMP_BUFFER_CANARY *)&v72, v61, 8);
          GlobalDebugData = DpiGetGlobalDebugData(v62);
          if ( GlobalDebugData == -2147483643 )
          {
            *((_DWORD *)a1 + 29) |= 0x40000000u;
          }
          else if ( GlobalDebugData < 0 )
          {
            *((_DWORD *)a1 + 29) |= 0x80000000;
          }
          if ( !CTDR_DUMP_BUFFER_CANARY::Check((const void **)&v72) )
          {
            *((_DWORD *)a1 + 29) |= 0x40000000u;
            WdLogSingleEntry3(1LL, a1, v62, 8LL);
          }
          if ( v72 )
            *v72 = 0;
        }
        else
        {
          *((_DWORD *)a1 + 29) |= 0x80000000;
        }
        v64 = (unsigned int *)*((_QWORD *)a1 + 358);
        CTDR_DUMP_BUFFER::ShrinkLastSegment((CTDR_DUMP_BUFFER *)v64);
        *((_QWORD *)a1 + 357) = v64[6];
        *((_DWORD *)a1 + 35) = 9;
        if ( a2 )
          TdrUpdateDbgReport(a1, 1);
        memset(v78, 0, sizeof(v78));
        if ( (int)DpiGetDbgInfoAdapters((__int64)v78) >= 0 )
        {
          for ( i = 0; i < 7u; ++i )
          {
            v66 = v78[4 * i];
            if ( !v66 )
              break;
            v67 = (char *)CTDR_DUMP_BUFFER::AddSegment(*((CTDR_DUMP_BUFFER **)a1 + 358), (unsigned int)i + 32, 0x14u);
            v68 = v67;
            if ( !v67 )
            {
              *((_DWORD *)a1 + 29) |= 0x80000000;
              return;
            }
            CTDR_DUMP_BUFFER_CANARY::CTDR_DUMP_BUFFER_CANARY((CTDR_DUMP_BUFFER_CANARY *)&v73, v67, 16);
            *((_DWORD *)v68 + 1) = v78[4 * i + 1];
            *((_DWORD *)v68 + 2) = v78[4 * i + 2];
            v69 = (*((_DWORD *)v68 + 3) ^ v78[4 * i + 3]) & 3;
            *(_DWORD *)v68 = v66;
            *((_DWORD *)v68 + 3) ^= v69;
            if ( !CTDR_DUMP_BUFFER_CANARY::Check((const void **)&v73) )
            {
              *((_DWORD *)a1 + 29) |= 0x40000000u;
              WdLogSingleEntry3(1LL, a1, v68, 16LL);
              if ( v73 )
                *v73 = 0;
              return;
            }
            v70 = v73;
            if ( v73 )
            {
              v73 = 0LL;
              *v70 = 0;
            }
            v71 = (unsigned int *)*((_QWORD *)a1 + 358);
            CTDR_DUMP_BUFFER::ShrinkLastSegment((CTDR_DUMP_BUFFER *)v71);
            *((_QWORD *)a1 + 357) = v71[6];
            *((_DWORD *)a1 + 35) = i + 32;
            if ( a2 )
              TdrUpdateDbgReport(a1, 1);
          }
        }
      }
      else
      {
        *((_DWORD *)a1 + 29) |= 2u;
        v11 = (void *)*((_QWORD *)a1 + 356);
        if ( v11 )
          ExFreePoolWithTag(v11, 0x52445476u);
        *((_QWORD *)a1 + 356) = 0LL;
      }
    }
    else
    {
      *((_DWORD *)a1 + 29) |= 2u;
    }
  }
}
