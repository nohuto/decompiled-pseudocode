/*
 * XREFs of ?DrvCreateCloneHDEV@@YAPEAUHDEV__@@PEAU1@K@Z @ 0x1C01453B4
 * Callers:
 *     ?DrvChangeDisplaySettingsInternal@@YAJPEAUtagGRAPHICS_DEVICE@@PEAU_devicemodeW@@PEAUD3DKMT_GETPATHSMODALITY@@PEAXHHPEAU_MDEV@@PEAPEAU4@KHHHU_CDS_INTERNAL_FLAGS@@@Z @ 0x1C0013B70 (-DrvChangeDisplaySettingsInternal@@YAJPEAUtagGRAPHICS_DEVICE@@PEAU_devicemodeW@@PEAUD3DKMT_GETPA.c)
 * Callees:
 *     ?vInitBrush@EBRUSHOBJ@@QEAAXPEAVDC@@PEAVBRUSH@@VXEPALOBJ@@2PEAVSURFACE@@H@Z @ 0x1C0017F10 (-vInitBrush@EBRUSHOBJ@@QEAAXPEAVDC@@PEAVBRUSH@@VXEPALOBJ@@2PEAVSURFACE@@H@Z.c)
 *     ?bDisabled@PDEVOBJ@@QEAAHH@Z @ 0x1C00190D4 (-bDisabled@PDEVOBJ@@QEAAHH@Z.c)
 *     PALLOCMEM2 @ 0x1C003C5B0 (PALLOCMEM2.c)
 *     ?DEC_SHARE_REF_CNT_LAZY0@@YAXPEAVBRUSH@@@Z @ 0x1C0042ED0 (-DEC_SHARE_REF_CNT_LAZY0@@YAXPEAVBRUSH@@@Z.c)
 *     HmgShareLockCheck @ 0x1C00438E0 (HmgShareLockCheck.c)
 *     ?vUnreferencePdev@PDEVOBJ@@QEAAXW4_CLEANUPTYPE@@@Z @ 0x1C004BD80 (-vUnreferencePdev@PDEVOBJ@@QEAAXW4_CLEANUPTYPE@@@Z.c)
 *     ??0SPRITELOCK@@QEAA@AEAVPDEVOBJ@@@Z @ 0x1C004D2B0 (--0SPRITELOCK@@QEAA@AEAVPDEVOBJ@@@Z.c)
 *     Win32FreePool @ 0x1C0057A50 (Win32FreePool.c)
 *     EngAcquireSemaphore @ 0x1C005EA70 (EngAcquireSemaphore.c)
 *     EtwTraceGreLockReleaseSemaphore @ 0x1C0082A70 (EtwTraceGreLockReleaseSemaphore.c)
 *     EtwTraceGreLockAcquireSemaphoreExclusive @ 0x1C0087050 (EtwTraceGreLockAcquireSemaphoreExclusive.c)
 *     ??1SPRITELOCK@@QEAA@XZ @ 0x1C0095140 (--1SPRITELOCK@@QEAA@XZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C00D36F0 (_guard_dispatch_icall_nop.c)
 *     ??0PDEVOBJ@@QEAA@PEAUHDEV__@@K@Z @ 0x1C013F1F4 (--0PDEVOBJ@@QEAA@PEAUHDEV__@@K@Z.c)
 *     ?vClearSurface@PDEVOBJ@@QEAAXXZ @ 0x1C014014C (-vClearSurface@PDEVOBJ@@QEAAXXZ.c)
 */

struct PDEV *__fastcall DrvCreateCloneHDEV(struct PDEV *a1, __int64 a2, __int64 a3)
{
  __int64 v4; // rax
  struct PDEV *v5; // r14
  __int64 v6; // rdx
  __int64 v7; // rcx
  struct PDEV *v8; // rbx
  _QWORD *v9; // rsi
  int v10; // edi
  int v11; // eax
  int v12; // eax
  ULONG NumberOfMapRegisters; // ecx
  __int64 v14; // rax
  __int64 v15; // rax
  struct HOBJ__ **v16; // rdi
  int v17; // r8d
  int v18; // r8d
  __int64 v19; // rcx
  int v20; // r8d
  __int64 v21; // rax
  __int64 v22; // rdx
  int v23; // r8d
  struct PDEV *v25; // [rsp+70h] [rbp+8h] BYREF
  struct PDEV *v26; // [rsp+80h] [rbp+18h] BYREF
  char v27; // [rsp+88h] [rbp+20h] BYREF

  v4 = WdLogNewEntry5_WdEvent(a1, a2, a3);
  *(_QWORD *)(v4 + 24) = a1;
  *(_QWORD *)(v4 + 32) = 1LL;
  WdLogEvent5_WdEvent(v4);
  v26 = a1;
  v5 = 0LL;
  SPRITELOCK::SPRITELOCK((SPRITELOCK *)&v27, (struct PDEVOBJ *)&v26);
  PDEVOBJ::PDEVOBJ((PDEVOBJ *)&v25, (char *)a1);
  v8 = v25;
  if ( v25 )
  {
    v9 = PALLOCMEM2(0x840uLL, 1886221383LL, 1);
    if ( !v9 )
      goto LABEL_18;
    v10 = -1073741637;
    v11 = qword_1C024F2B0 ? qword_1C024F2B0() : -1073741637;
    if ( v11 < 0 )
      goto LABEL_18;
    v12 = (int)qword_1C024F2B8;
    if ( qword_1C024F2B8 )
      v12 = qword_1C024F2B8(v8);
    if ( v12 )
    {
      if ( qword_1C024F2C0 )
        v10 = qword_1C024F2C0();
      if ( v10 >= 0 && qword_1C024F2C8 )
        qword_1C024F2C8(v8);
      NumberOfMapRegisters = WPP_MAIN_CB.Queue.Wcb.NumberOfMapRegisters;
      v9[122] = v9 + 68;
      *((_DWORD *)v9 + 182) = 0;
      *(_DWORD *)(v9[122] + 176LL) = 0xFFFFFF;
      v14 = v9[122];
      *((_DWORD *)v9 + 30) = 0;
      *(_QWORD *)(v14 + 248) = 0LL;
      v15 = HmgShareLockCheck(NumberOfMapRegisters, 16);
      *((_QWORD *)v8 + 197) = 0LL;
      v16 = (struct HOBJ__ **)v15;
      *((_QWORD *)v8 + 194) = 0LL;
      *((_DWORD *)v8 + 390) = 0;
      EBRUSHOBJ::vInitBrush(
        (int *)v8 + 386,
        (__int64)v9,
        v15,
        (__int64)ppalDefault,
        *(_QWORD *)(*((_QWORD *)v8 + 319) + 128LL),
        *((_QWORD *)v8 + 319),
        1u);
      DEC_SHARE_REF_CNT_LAZY0(v16);
      EngAcquireSemaphore(ghsemDriverMgmt);
      EtwTraceGreLockAcquireSemaphoreExclusive((__int64)L"ghsemDriverMgmt", (int)ghsemDriverMgmt, 13);
      --*((_DWORD *)a1 + 3);
      PDEVOBJ::vUnreferencePdev(&v26, 0, v17);
      EtwTraceGreLockReleaseSemaphore((__int64)L"ghsemDriverMgmt", (int)ghsemDriverMgmt, v18);
      if ( ghsemDriverMgmt )
      {
        ExReleaseResourceAndLeaveCriticalRegion((PERESOURCE)ghsemDriverMgmt);
        PsLeavePriorityRegion(v19);
      }
      PDEVOBJ::bDisabled((PDEVOBJ *)&v25, *((_DWORD *)a1 + 10) & 0x400);
      v5 = v8;
    }
    else
    {
LABEL_18:
      PDEVOBJ::vClearSurface((PDEVOBJ *)&v25);
      PDEVOBJ::vUnreferencePdev(&v25, 0, v20);
    }
    if ( v9 )
      Win32FreePool((__int64)v9);
  }
  v21 = WdLogNewEntry5_WdTrace(v7, v6);
  *(_QWORD *)(v21 + 24) = v5;
  WdLogEvent5_WdTrace(v21);
  SPRITELOCK::~SPRITELOCK((SPRITELOCK *)&v27, v22, v23);
  return v5;
}
