/*
 * XREFs of ?DrvCreateCloneHDEV@@YAPEAUHDEV__@@PEAU1@K@Z @ 0x1C0147884
 * Callers:
 *     ?DrvChangeDisplaySettingsInternal@@YAJPEAUtagGRAPHICS_DEVICE@@PEAU_devicemodeW@@PEAUD3DKMT_GETPATHSMODALITY@@PEAXHHPEAU_MDEV@@PEAPEAU4@KHHHU_CDS_INTERNAL_FLAGS@@@Z @ 0x1C00B7324 (-DrvChangeDisplaySettingsInternal@@YAJPEAUtagGRAPHICS_DEVICE@@PEAU_devicemodeW@@PEAUD3DKMT_GETPA.c)
 * Callees:
 *     EtwTraceGreLockReleaseSemaphore @ 0x1C001EDA0 (EtwTraceGreLockReleaseSemaphore.c)
 *     EtwTraceGreLockAcquireSemaphoreExclusive @ 0x1C0023BA0 (EtwTraceGreLockAcquireSemaphoreExclusive.c)
 *     EngAcquireSemaphore @ 0x1C0027A20 (EngAcquireSemaphore.c)
 *     ??1SPRITELOCK@@QEAA@XZ @ 0x1C002FBF0 (--1SPRITELOCK@@QEAA@XZ.c)
 *     ?vUnreferencePdev@PDEVOBJ@@QEAAXW4_CLEANUPTYPE@@@Z @ 0x1C007FBC0 (-vUnreferencePdev@PDEVOBJ@@QEAAXW4_CLEANUPTYPE@@@Z.c)
 *     PALLOCMEM2 @ 0x1C0080D68 (PALLOCMEM2.c)
 *     ?DEC_SHARE_REF_CNT_LAZY0@@YAXPEAVBRUSH@@@Z @ 0x1C0088170 (-DEC_SHARE_REF_CNT_LAZY0@@YAXPEAVBRUSH@@@Z.c)
 *     HmgShareLockCheck @ 0x1C0088B80 (HmgShareLockCheck.c)
 *     ??0SPRITELOCK@@QEAA@AEAVPDEVOBJ@@@Z @ 0x1C0093CE0 (--0SPRITELOCK@@QEAA@AEAVPDEVOBJ@@@Z.c)
 *     Win32FreePool @ 0x1C0096F60 (Win32FreePool.c)
 *     ?bDisabled@PDEVOBJ@@QEAAHH@Z @ 0x1C00BE074 (-bDisabled@PDEVOBJ@@QEAAHH@Z.c)
 *     ?vInitBrush@EBRUSHOBJ@@QEAAXPEAVDC@@PEAVBRUSH@@VXEPALOBJ@@2PEAVSURFACE@@H@Z @ 0x1C00C1150 (-vInitBrush@EBRUSHOBJ@@QEAAXPEAVDC@@PEAVBRUSH@@VXEPALOBJ@@2PEAVSURFACE@@H@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C00D3820 (_guard_dispatch_icall_nop.c)
 *     ??0PDEVOBJ@@QEAA@PEAUHDEV__@@K@Z @ 0x1C01416B4 (--0PDEVOBJ@@QEAA@PEAUHDEV__@@K@Z.c)
 *     ?vClearSurface@PDEVOBJ@@QEAAXXZ @ 0x1C014261C (-vClearSurface@PDEVOBJ@@QEAAXXZ.c)
 */

struct PDEV *__fastcall DrvCreateCloneHDEV(struct PDEV *a1, __int64 a2, __int64 a3)
{
  __int64 v4; // rax
  struct PDEV *v5; // r14
  __int64 v6; // rcx
  struct PDEV *v7; // rbx
  _QWORD *v8; // rsi
  int v9; // edi
  int v10; // eax
  int v11; // eax
  ULONG NumberOfMapRegisters; // ecx
  __int64 v13; // rax
  __int64 v14; // rax
  struct HOBJ__ **v15; // rdi
  int v16; // r8d
  int v17; // r8d
  __int64 v18; // rcx
  int v19; // r8d
  __int64 v20; // rax
  __int64 v21; // rdx
  int v22; // r8d
  struct PDEV *v24; // [rsp+70h] [rbp+8h] BYREF
  struct PDEV *v25; // [rsp+80h] [rbp+18h] BYREF
  char v26; // [rsp+88h] [rbp+20h] BYREF

  v4 = WdLogNewEntry5_WdEvent(a1, a2, a3);
  *(_QWORD *)(v4 + 24) = a1;
  *(_QWORD *)(v4 + 32) = 1LL;
  WdLogEvent5_WdEvent(v4);
  v25 = a1;
  v5 = 0LL;
  SPRITELOCK::SPRITELOCK((SPRITELOCK *)&v26, (struct PDEVOBJ *)&v25);
  PDEVOBJ::PDEVOBJ((PDEVOBJ *)&v24, (char *)a1);
  v7 = v24;
  if ( v24 )
  {
    v8 = PALLOCMEM2(0x840uLL, 0x706D7447u, 1);
    if ( !v8 )
      goto LABEL_18;
    v9 = -1073741637;
    v10 = qword_1C02512B0 ? qword_1C02512B0() : -1073741637;
    if ( v10 < 0 )
      goto LABEL_18;
    v11 = (int)qword_1C02512B8;
    if ( qword_1C02512B8 )
      v11 = qword_1C02512B8(v7);
    if ( v11 )
    {
      if ( qword_1C02512C0 )
        v9 = qword_1C02512C0();
      if ( v9 >= 0 && qword_1C02512C8 )
        qword_1C02512C8(v7);
      NumberOfMapRegisters = WPP_MAIN_CB.Queue.Wcb.NumberOfMapRegisters;
      v8[122] = v8 + 68;
      *((_DWORD *)v8 + 182) = 0;
      *(_DWORD *)(v8[122] + 176LL) = 0xFFFFFF;
      v13 = v8[122];
      *((_DWORD *)v8 + 30) = 0;
      *(_QWORD *)(v13 + 248) = 0LL;
      v14 = HmgShareLockCheck(NumberOfMapRegisters, 16);
      *((_QWORD *)v7 + 197) = 0LL;
      v15 = (struct HOBJ__ **)v14;
      *((_QWORD *)v7 + 194) = 0LL;
      *((_DWORD *)v7 + 390) = 0;
      EBRUSHOBJ::vInitBrush(
        (int *)v7 + 386,
        (__int64)v8,
        v14,
        (__int64)ppalDefault,
        *(_QWORD *)(*((_QWORD *)v7 + 319) + 128LL),
        *((_QWORD *)v7 + 319),
        1u);
      DEC_SHARE_REF_CNT_LAZY0(v15);
      EngAcquireSemaphore((HSEMAPHORE)ghsemDriverMgmt);
      EtwTraceGreLockAcquireSemaphoreExclusive((__int64)L"ghsemDriverMgmt", (int)ghsemDriverMgmt, 13);
      --*((_DWORD *)a1 + 3);
      PDEVOBJ::vUnreferencePdev(&v25, 0, v16);
      EtwTraceGreLockReleaseSemaphore((__int64)L"ghsemDriverMgmt", (int)ghsemDriverMgmt, v17);
      if ( ghsemDriverMgmt )
      {
        ExReleaseResourceAndLeaveCriticalRegion(ghsemDriverMgmt);
        PsLeavePriorityRegion(v18);
      }
      PDEVOBJ::bDisabled((PDEVOBJ *)&v24, *((_DWORD *)a1 + 10) & 0x400);
      v5 = v7;
    }
    else
    {
LABEL_18:
      PDEVOBJ::vClearSurface((PDEVOBJ *)&v24);
      PDEVOBJ::vUnreferencePdev(&v24, 0, v19);
    }
    if ( v8 )
      Win32FreePool((__int64)v8);
  }
  v20 = WdLogNewEntry5_WdTrace(v6);
  *(_QWORD *)(v20 + 24) = v5;
  WdLogEvent5_WdTrace(v20);
  SPRITELOCK::~SPRITELOCK((SPRITELOCK *)&v26, v21, v22);
  return v5;
}
