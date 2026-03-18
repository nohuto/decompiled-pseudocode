/*
 * XREFs of ?DrvCreateCloneHDEV@@YAPEAUHDEV__@@PEAU1@K@Z @ 0x1C014DBD4
 * Callers:
 *     ?DrvChangeDisplaySettingsInternal@@YAJPEAUtagGRAPHICS_DEVICE@@PEAU_devicemodeW@@PEAUD3DKMT_GETPATHSMODALITY@@PEAXHHPEAU_MDEV@@PEAPEAU4@KHHHU_CDS_INTERNAL_FLAGS@@@Z @ 0x1C00AF6FC (-DrvChangeDisplaySettingsInternal@@YAJPEAUtagGRAPHICS_DEVICE@@PEAU_devicemodeW@@PEAUD3DKMT_GETPA.c)
 * Callees:
 *     ?vInitBrush@EBRUSHOBJ@@QEAAXPEAVDC@@PEAVBRUSH@@VXEPALOBJ@@2PEAVSURFACE@@H@Z @ 0x1C00058E0 (-vInitBrush@EBRUSHOBJ@@QEAAXPEAVDC@@PEAVBRUSH@@VXEPALOBJ@@2PEAVSURFACE@@H@Z.c)
 *     EtwTraceGreLockReleaseSemaphore @ 0x1C0009110 (EtwTraceGreLockReleaseSemaphore.c)
 *     EtwTraceGreLockAcquireSemaphoreExclusive @ 0x1C000F390 (EtwTraceGreLockAcquireSemaphoreExclusive.c)
 *     EngAcquireSemaphore @ 0x1C0017CA0 (EngAcquireSemaphore.c)
 *     ??1SPRITELOCK@@QEAA@XZ @ 0x1C001B980 (--1SPRITELOCK@@QEAA@XZ.c)
 *     ?DEC_SHARE_REF_CNT_LAZY0@@YAXPEAVBRUSH@@@Z @ 0x1C00810A0 (-DEC_SHARE_REF_CNT_LAZY0@@YAXPEAVBRUSH@@@Z.c)
 *     HmgShareLockCheck @ 0x1C0081AB0 (HmgShareLockCheck.c)
 *     ?vUnreferencePdev@PDEVOBJ@@QEAAXW4_CLEANUPTYPE@@@Z @ 0x1C008B8E0 (-vUnreferencePdev@PDEVOBJ@@QEAAXW4_CLEANUPTYPE@@@Z.c)
 *     Win32FreePool @ 0x1C008C9A0 (Win32FreePool.c)
 *     PALLOCMEM2 @ 0x1C008D744 (PALLOCMEM2.c)
 *     ??0SPRITELOCK@@QEAA@AEAVPDEVOBJ@@@Z @ 0x1C00906E0 (--0SPRITELOCK@@QEAA@AEAVPDEVOBJ@@@Z.c)
 *     ?bDisabled@PDEVOBJ@@QEAAHH@Z @ 0x1C0099794 (-bDisabled@PDEVOBJ@@QEAAHH@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C00D2DC0 (_guard_dispatch_icall_nop.c)
 *     ??0PDEVOBJ@@QEAA@PEAUHDEV__@@K@Z @ 0x1C0147A04 (--0PDEVOBJ@@QEAA@PEAUHDEV__@@K@Z.c)
 *     ?vClearSurface@PDEVOBJ@@QEAAXXZ @ 0x1C014896C (-vClearSurface@PDEVOBJ@@QEAAXXZ.c)
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
  unsigned int DeviceObject; // ecx
  __int64 v13; // rax
  __int64 v14; // rax
  struct HOBJ__ **v15; // rdi
  int v16; // r8d
  int v17; // r8d
  __int64 v18; // rcx
  __int64 v19; // rdx
  __int64 v20; // r8
  int v21; // r8d
  __int64 v22; // rax
  __int64 v23; // rdx
  int v24; // r8d
  struct PDEV *v26; // [rsp+70h] [rbp+8h] BYREF
  struct PDEV *v27; // [rsp+80h] [rbp+18h] BYREF
  char v28; // [rsp+88h] [rbp+20h] BYREF

  v4 = WdLogNewEntry5_WdEvent(a1, a2, a3);
  *(_QWORD *)(v4 + 24) = a1;
  *(_QWORD *)(v4 + 32) = 1LL;
  WdLogEvent5_WdEvent(v4);
  v27 = a1;
  v5 = 0LL;
  SPRITELOCK::SPRITELOCK((SPRITELOCK *)&v28, (struct PDEVOBJ *)&v27);
  PDEVOBJ::PDEVOBJ((PDEVOBJ *)&v26, (char *)a1);
  v7 = v26;
  if ( v26 )
  {
    v8 = PALLOCMEM2(0x840uLL, 0x706D7447u, 1);
    if ( !v8 )
      goto LABEL_18;
    v9 = -1073741637;
    v10 = qword_1C0257270 ? qword_1C0257270() : -1073741637;
    if ( v10 < 0 )
      goto LABEL_18;
    v11 = (int)qword_1C0257278;
    if ( qword_1C0257278 )
      v11 = qword_1C0257278(v7);
    if ( v11 )
    {
      if ( qword_1C0257280 )
        v9 = qword_1C0257280();
      if ( v9 >= 0 && qword_1C0257288 )
        qword_1C0257288(v7);
      DeviceObject = (unsigned int)WPP_MAIN_CB.Queue.Wcb.DeviceObject;
      v8[122] = v8 + 68;
      *((_DWORD *)v8 + 182) = 0;
      *(_DWORD *)(v8[122] + 176LL) = 0xFFFFFF;
      v13 = v8[122];
      *((_DWORD *)v8 + 30) = 0;
      *(_QWORD *)(v13 + 248) = 0LL;
      v14 = HmgShareLockCheck(DeviceObject, 16);
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
      PDEVOBJ::vUnreferencePdev(&v27, 0, v16);
      EtwTraceGreLockReleaseSemaphore((__int64)L"ghsemDriverMgmt", (int)ghsemDriverMgmt, v17);
      if ( ghsemDriverMgmt )
      {
        ExReleaseResourceAndLeaveCriticalRegion(ghsemDriverMgmt);
        PsLeavePriorityRegion(v18);
      }
      PDEVOBJ::bDisabled((PDEVOBJ *)&v26, *((_DWORD *)a1 + 10) & 0x400);
      v5 = v7;
    }
    else
    {
LABEL_18:
      PDEVOBJ::vClearSurface((PDEVOBJ *)&v26);
      PDEVOBJ::vUnreferencePdev(&v26, 0, v21);
    }
    if ( v8 )
      Win32FreePool((__int64)v8, v19, v20);
  }
  v22 = WdLogNewEntry5_WdTrace(v6);
  *(_QWORD *)(v22 + 24) = v5;
  WdLogEvent5_WdTrace(v22);
  SPRITELOCK::~SPRITELOCK((SPRITELOCK *)&v28, v23, v24);
  return v5;
}
