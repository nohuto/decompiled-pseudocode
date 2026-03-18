/*
 * XREFs of ?DrvTransferGdiObjects@@YAXPEAUHDEV__@@0K@Z @ 0x1C014837C
 * Callers:
 *     ?DrvChangeDisplaySettingsInternal@@YAJPEAUtagGRAPHICS_DEVICE@@PEAU_devicemodeW@@PEAUD3DKMT_GETPATHSMODALITY@@PEAXHHPEAU_MDEV@@PEAPEAU4@KHHHU_CDS_INTERNAL_FLAGS@@@Z @ 0x1C00B7324 (-DrvChangeDisplaySettingsInternal@@YAJPEAUtagGRAPHICS_DEVICE@@PEAU_devicemodeW@@PEAUD3DKMT_GETPA.c)
 * Callees:
 *     ?vReferencePdev@PDEVOBJ@@QEAAXXZ @ 0x1C0027540 (-vReferencePdev@PDEVOBJ@@QEAAXXZ.c)
 *     ?vUnreferencePdev@PDEVOBJ@@QEAAXW4_CLEANUPTYPE@@@Z @ 0x1C007FBC0 (-vUnreferencePdev@PDEVOBJ@@QEAAXW4_CLEANUPTYPE@@@Z.c)
 *     GreReleaseHmgrSemaphore @ 0x1C00821C0 (GreReleaseHmgrSemaphore.c)
 *     GreAcquireHmgrSemaphore @ 0x1C00A5C20 (GreAcquireHmgrSemaphore.c)
 *     HmgSafeNextObjt @ 0x1C00BF210 (HmgSafeNextObjt.c)
 *     ?vTransferWndObjs@@YAXPEAVSURFACE@@PEAUHDEV__@@1@Z @ 0x1C014C9BC (-vTransferWndObjs@@YAXPEAVSURFACE@@PEAUHDEV__@@1@Z.c)
 */

void __fastcall DrvTransferGdiObjects(struct SURFACE **a1, HDEV a2, __int64 a3)
{
  _QWORD *v5; // rax
  int v6; // edx
  __int64 v7; // rcx
  int v8; // r8d
  __int64 v9; // rsi
  __int64 Objt; // rax
  __int64 v11; // rdx
  int v12; // r8d
  int v13; // r8d
  __int64 v14; // rcx
  __int64 *v15; // rax
  __int64 v16; // rsi
  __int64 *v17; // rax
  __int64 v18; // rdx
  int v19; // r8d
  int v20; // r8d
  __int64 v21; // rdx
  int v22; // ecx
  int v23; // r8d
  struct SURFACE **v24; // [rsp+30h] [rbp+8h] BYREF
  struct PDEV *v25; // [rsp+38h] [rbp+10h] BYREF

  v5 = (_QWORD *)WdLogNewEntry5_WdEvent(a1, a2, a3);
  v5[3] = a1;
  v5[4] = a2;
  v5[5] = 15LL;
  WdLogEvent5_WdEvent(v5);
  v24 = a1;
  v25 = (struct PDEV *)a2;
  GreAcquireHmgrSemaphore(v7, v6, v8);
  LODWORD(v9) = 0;
  while ( 1 )
  {
    Objt = HmgSafeNextObjt(v9, 1);
    if ( !Objt )
      break;
    v9 = *(_QWORD *)Objt;
    if ( *(HDEV *)(Objt + 48) == a2 )
    {
      *(_DWORD *)(Objt + 36) &= ~0x2000u;
      *(_QWORD *)(Objt + 48) = a1;
      PDEVOBJ::vReferencePdev((PDEVOBJ *)&v24, v11, v12);
      PDEVOBJ::vUnreferencePdev(&v25, 0, v13);
    }
  }
  LODWORD(v14) = 0;
  while ( 1 )
  {
    v15 = (__int64 *)HmgSafeNextObjt(v14, 5);
    if ( !v15 )
      break;
    v14 = *v15;
    if ( (HDEV)v15[6] == a2 )
      v15[6] = (__int64)a1;
  }
  LODWORD(v16) = 0;
  while ( 1 )
  {
    v17 = (__int64 *)HmgSafeNextObjt(v16, 28);
    if ( !v17 )
      break;
    v16 = *v17;
    if ( (HDEV)v17[5] == a2 )
    {
      v17[5] = (__int64)a1;
      PDEVOBJ::vReferencePdev((PDEVOBJ *)&v24, v18, v19);
      PDEVOBJ::vUnreferencePdev(&v25, 0, v20);
    }
  }
  vTransferWndObjs(a1[319], a2, (HDEV)a1);
  GreReleaseHmgrSemaphore(v22, v21, v23);
}
