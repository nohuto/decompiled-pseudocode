/*
 * XREFs of ??0DXGMONITOR@@AEAA@PEAVMONITOR_MGR@@@Z @ 0x1C018B834
 * Callers:
 *     ?_CreatePhysicalMonitor@MONITOR_MGR@@QEAAJIPEAU_DEVICE_OBJECT@@EEPEAPEAVDXGMONITOR@@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C018B57C (-_CreatePhysicalMonitor@MONITOR_MGR@@QEAAJIPEAU_DEVICE_OBJECT@@EEPEAPEAVDXGMONITOR@@PEAU_DXGK_DI.c)
 *     ?_CreateSimulatedMonitor@MONITOR_MGR@@QEAAJIW4_DMM_VIDPN_MONITOR_TYPE@@PEAVDXGMONITOR@@PEAPEAV3@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C02F1894 (-_CreateSimulatedMonitor@MONITOR_MGR@@QEAAJIW4_DMM_VIDPN_MONITOR_TYPE@@PEAVDXGMONITOR@@PEAPEAV3@.c)
 * Callees:
 *     ?DisplayID_Initialize@@YAXPEAUDisplayIDObj@@PEBXI@Z @ 0x1C00225BC (-DisplayID_Initialize@@YAXPEAUDisplayIDObj@@PEBXI@Z.c)
 *     memset @ 0x1C00274C0 (memset.c)
 */

DXGMONITOR *__fastcall DXGMONITOR::DXGMONITOR(char *Tag, struct MONITOR_MGR *a2)
{
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 v6; // r8
  __int64 v7; // r9
  __int64 v8; // rax
  __int64 v9; // rax
  char *v10; // rcx
  _BYTE *v11; // rdx
  __int128 v12; // xmm1
  __int128 v13; // xmm0
  __int128 v14; // xmm1
  __int128 v15; // xmm0
  __int128 v16; // xmm1
  __int128 v17; // xmm0
  __int128 v18; // xmm1
  __int128 v19; // xmm0
  __int64 v20; // rax
  __int128 v21; // xmm1
  __int128 v22; // xmm0
  __int64 v24; // rax
  _BYTE v25[320]; // [rsp+50h] [rbp-148h] BYREF

  *((_QWORD *)Tag + 4) = a2;
  *((_DWORD *)Tag + 11) = -1;
  *((_QWORD *)Tag + 25) = Tag + 192;
  *((_QWORD *)Tag + 24) = Tag + 192;
  *((_QWORD *)Tag + 28) = Tag + 216;
  *((_QWORD *)Tag + 27) = Tag + 216;
  *((_QWORD *)Tag + 31) = Tag + 240;
  *((_QWORD *)Tag + 30) = Tag + 240;
  *((_QWORD *)Tag + 34) = Tag + 264;
  *((_QWORD *)Tag + 33) = Tag + 264;
  *((_DWORD *)Tag + 112) = -1;
  *((_DWORD *)Tag + 113) = -1;
  *((_DWORD *)Tag + 114) = -1;
  *((_DWORD *)Tag + 124) = -1;
  *((_QWORD *)Tag + 36) = Tag + 280;
  *((_QWORD *)Tag + 35) = Tag + 280;
  *((_DWORD *)Tag + 12) = -2;
  *((_QWORD *)Tag + 7) = 0LL;
  *((_QWORD *)Tag + 8) = 0LL;
  *((_QWORD *)Tag + 9) = 0LL;
  *((_QWORD *)Tag + 10) = 0LL;
  *((_DWORD *)Tag + 30) = 3;
  *(_QWORD *)(Tag + 124) = 1LL;
  *((_DWORD *)Tag + 33) = 0;
  *((_QWORD *)Tag + 17) = 0LL;
  *((_QWORD *)Tag + 18) = 0LL;
  *((_DWORD *)Tag + 38) = 0;
  *((_QWORD *)Tag + 20) = 0LL;
  *((_DWORD *)Tag + 52) = 0;
  *((_DWORD *)Tag + 53) = 1024;
  *((_QWORD *)Tag + 29) = 0LL;
  *((_DWORD *)Tag + 64) = 0;
  *((_QWORD *)Tag + 54) = 0LL;
  *((_QWORD *)Tag + 55) = 0LL;
  *(_QWORD *)(Tag + 460) = 0LL;
  Tag[480] = 0;
  *((_QWORD *)Tag + 61) = 0LL;
  *((_QWORD *)Tag + 63) = 0LL;
  *((_DWORD *)Tag + 128) = 0;
  Tag[516] = 0;
  *((_QWORD *)Tag + 71) = 0LL;
  *((_QWORD *)Tag + 72) = 0LL;
  *((_QWORD *)Tag + 73) = 0LL;
  *((_DWORD *)Tag + 148) = 0;
  Tag[596] = 0;
  *((_DWORD *)Tag + 165) = 0;
  *((_DWORD *)Tag + 172) = 1000;
  Tag[692] = 0;
  *((_QWORD *)Tag + 87) = 0LL;
  *((_QWORD *)Tag + 93) = 0LL;
  memset(Tag + 1116, 0, 0x40uLL);
  *((_QWORD *)Tag + 155) = 0LL;
  Tag[1248] = 0;
  *((_OWORD *)Tag + 82) = 0LL;
  *((_DWORD *)Tag + 332) = 0;
  if ( !a2 )
  {
    v24 = WdLogNewEntry5_WdAssertion(v5, v4);
    WdLogEvent5_WdAssertion(v24);
  }
  v8 = WdLogNewEntry5_WdTrace(v5, v4, v6, v7);
  *(_QWORD *)(v8 + 24) = Tag;
  *(_QWORD *)(v8 + 32) = a2;
  *((_DWORD *)Tag + 10) = 0;
  LOBYTE(v8) = *((_BYTE *)a2 + 5);
  *((_OWORD *)Tag + 48) = 0LL;
  *(_QWORD *)(Tag + 620) = 0LL;
  *(_OWORD *)(Tag + 628) = 0LL;
  *((_OWORD *)Tag + 44) = 0LL;
  *(_OWORD *)(Tag + 600) = 0LL;
  *((_DWORD *)Tag + 154) = 0;
  *(_OWORD *)(Tag + 644) = 0LL;
  *((_DWORD *)Tag + 10) = (_BYTE)v8 != 0 ? 0x40 : 0;
  *((_OWORD *)Tag + 45) = 0LL;
  *((_QWORD *)Tag + 83) = 0LL;
  *((_QWORD *)Tag + 98) = 0LL;
  *((_DWORD *)Tag + 198) = 0;
  *((_QWORD *)Tag + 84) = 0LL;
  *((_QWORD *)Tag + 85) = 0LL;
  *((_QWORD *)Tag + 92) = 0LL;
  *(_QWORD *)(Tag + 756) = 0LL;
  *((_DWORD *)Tag + 191) = 0;
  *((_QWORD *)Tag + 3) = Tag + 16;
  *((_QWORD *)Tag + 2) = Tag + 16;
  Tag[796] = 0;
  ExInitializeResourceLite((PERESOURCE)(Tag + 296));
  IoInitializeRemoveLockEx((PIO_REMOVE_LOCK)(Tag + 400), 0x4D677844u, 0, 0, 0x20u);
  *((_QWORD *)Tag + 12) = 0LL;
  *((_DWORD *)Tag + 22) = 0;
  *((_QWORD *)Tag + 14) = 0LL;
  *((_DWORD *)Tag + 26) = 0;
  *((_QWORD *)Tag + 66) = 0LL;
  *((_DWORD *)Tag + 130) = 0;
  *((_QWORD *)Tag + 68) = 0LL;
  *((_DWORD *)Tag + 134) = 0;
  *((_QWORD *)Tag + 70) = 0LL;
  *((_DWORD *)Tag + 138) = 0;
  memset(v25, 0, 0x13CuLL);
  v9 = 2LL;
  v10 = Tag + 800;
  v11 = v25;
  do
  {
    v12 = *((_OWORD *)v11 + 1);
    *(_OWORD *)v10 = *(_OWORD *)v11;
    v13 = *((_OWORD *)v11 + 2);
    *((_OWORD *)v10 + 1) = v12;
    v14 = *((_OWORD *)v11 + 3);
    *((_OWORD *)v10 + 2) = v13;
    v15 = *((_OWORD *)v11 + 4);
    *((_OWORD *)v10 + 3) = v14;
    v16 = *((_OWORD *)v11 + 5);
    *((_OWORD *)v10 + 4) = v15;
    v17 = *((_OWORD *)v11 + 6);
    *((_OWORD *)v10 + 5) = v16;
    v18 = *((_OWORD *)v11 + 7);
    v11 += 128;
    *((_OWORD *)v10 + 6) = v17;
    v10 += 128;
    *((_OWORD *)v10 - 1) = v18;
    --v9;
  }
  while ( v9 );
  v19 = *(_OWORD *)v11;
  v20 = *((_QWORD *)v11 + 6);
  v21 = *((_OWORD *)v11 + 1);
  *((_DWORD *)Tag + 188) = 0;
  *(_OWORD *)v10 = v19;
  v22 = *((_OWORD *)v11 + 2);
  *((_OWORD *)v10 + 1) = v21;
  *((_OWORD *)v10 + 2) = v22;
  *((_QWORD *)v10 + 6) = v20;
  *((_DWORD *)v10 + 14) = *((_DWORD *)v11 + 14);
  KeInitializeGuardedMutex((PKGUARDED_MUTEX)(Tag + 1184));
  KeInitializeGuardedMutex((PKGUARDED_MUTEX)(Tag + 1256));
  *((_QWORD *)Tag + 1) = MEMORY[0xFFFFF78000000014];
  *Tag = 0;
  DisplayID_Initialize((struct DisplayIDObj *)(Tag + 168), 0LL, 0);
  IoAcquireRemoveLockEx((PIO_REMOVE_LOCK)(Tag + 400), Tag, File, 1u, 0x20u);
  return (DXGMONITOR *)Tag;
}
