/*
 * XREFs of DrvChangeDisplaySettings @ 0x1C00B1024
 * Callers:
 *     ?xxxUserChangeDisplaySettingsInternal@@YAJPEAU_UNICODE_STRING@@PEAU_devicemodeW@@PEAUtagDESKTOP@@KPEAXW4_MODE@@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C00B0848 (-xxxUserChangeDisplaySettingsInternal@@YAJPEAU_UNICODE_STRING@@PEAU_devicemodeW@@PEAUtagDESKTOP@.c)
 * Callees:
 *     ?DrvGetPruneFlag@@YAHPEAUtagGRAPHICS_DEVICE@@@Z @ 0x1C00343D4 (-DrvGetPruneFlag@@YAHPEAUtagGRAPHICS_DEVICE@@@Z.c)
 *     ?NotifyStatusChange@?$AUTO_STATUS_CHANGE_NOTIFY@$01$02@@AEAAXW4D3DKMT_STATE_NOTIFICATION_TYPE@@@Z @ 0x1C0056A0C (-NotifyStatusChange@-$AUTO_STATUS_CHANGE_NOTIFY@$01$02@@AEAAXW4D3DKMT_STATE_NOTIFICATION_TYPE@@@.c)
 *     Win32FreePool @ 0x1C0096F60 (Win32FreePool.c)
 *     LogDiagCDS @ 0x1C00B0DAC (LogDiagCDS.c)
 *     DrvChangeDisplaySettingsPreValidate @ 0x1C00B13D0 (DrvChangeDisplaySettingsPreValidate.c)
 *     DrvSetDisplayConfig @ 0x1C00B1BD0 (DrvSetDisplayConfig.c)
 *     ??0AUTO_TGO@@IEAA@XZ @ 0x1C00B29A4 (--0AUTO_TGO@@IEAA@XZ.c)
 *     ??1AUTO_TGO@@MEAA@XZ @ 0x1C00B29E8 (--1AUTO_TGO@@MEAA@XZ.c)
 *     ?DrvChangeDisplaySettingsInternal@@YAJPEAUtagGRAPHICS_DEVICE@@PEAU_devicemodeW@@PEAUD3DKMT_GETPATHSMODALITY@@PEAXHHPEAU_MDEV@@PEAPEAU4@KHHHU_CDS_INTERNAL_FLAGS@@@Z @ 0x1C00B7324 (-DrvChangeDisplaySettingsInternal@@YAJPEAUtagGRAPHICS_DEVICE@@PEAU_devicemodeW@@PEAUD3DKMT_GETPA.c)
 */

__int64 __fastcall DrvChangeDisplaySettings(
        PCUNICODE_STRING String1,
        __int64 a2,
        struct _devicemodeW *a3,
        __int64 a4,
        int a5,
        int a6,
        int a7,
        struct _MDEV *a8,
        _QWORD *a9,
        int a10,
        int a11,
        int a12,
        unsigned int a13,
        __int64 a14,
        __int64 a15)
{
  struct _devicemodeW *v17; // r12
  __int64 v18; // rax
  __int64 v19; // rdx
  __int64 v20; // rcx
  unsigned int v21; // ebx
  __int64 v22; // r8
  int v23; // esi
  struct tagGRAPHICS_DEVICE *v24; // rdi
  int v25; // r13d
  int PruneFlag; // eax
  int v27; // r14d
  int v28; // r9d
  int v29; // r8d
  unsigned int v30; // eax
  __int64 v31; // rdx
  __int64 v32; // r8
  __int64 v33; // rcx
  unsigned int v34; // ecx
  __int64 v36; // rax
  unsigned int v37; // eax
  __int64 v38; // rax
  __int64 v39; // rax
  __int64 v40; // rax
  __int64 v41; // rax
  char v42; // [rsp+88h] [rbp-80h] BYREF
  int v43; // [rsp+8Ch] [rbp-7Ch] BYREF
  __int64 v44; // [rsp+90h] [rbp-78h] BYREF
  struct tagGRAPHICS_DEVICE *v45; // [rsp+98h] [rbp-70h] BYREF
  __int64 v46; // [rsp+A0h] [rbp-68h] BYREF
  __int64 v47[2]; // [rsp+A8h] [rbp-60h] BYREF
  __int128 v48; // [rsp+B8h] [rbp-50h]
  __int128 v49; // [rsp+C8h] [rbp-40h]
  __int64 v50; // [rsp+D8h] [rbp-30h]
  __int64 v51; // [rsp+E0h] [rbp-28h]
  __int64 v52; // [rsp+E8h] [rbp-20h]
  _QWORD v53[13]; // [rsp+F0h] [rbp-18h] BYREF
  __int64 retaddr; // [rsp+160h] [rbp+58h]
  unsigned int v57; // [rsp+1A8h] [rbp+A0h]

  v43 = 0;
  v45 = 0LL;
  v17 = 0LL;
  v51 = MEMORY[0xFFFFF78000000320];
  v44 = 0LL;
  v18 = v51 * KeQueryTimeIncrement();
  *a9 = 0LL;
  v52 = v18;
  v46 = retaddr;
  AUTO_STATUS_CHANGE_NOTIFY<2,3>::NotifyStatusChange(&v46, 2);
  AUTO_TGO::AUTO_TGO((AUTO_TGO *)v53);
  v53[0] = off_1C0200E20;
  v21 = DrvChangeDisplaySettingsPreValidate(String1, a6, (__int64)&v45, (__int64)&v44);
  if ( v21 )
    goto LABEL_19;
  if ( !(_DWORD)v44 )
  {
    if ( gOldModeChange )
    {
      v36 = WdLogNewEntry5_WdAssertion(v20, v19, v22);
      WdLogEvent5_WdAssertion(v36);
    }
    v27 = a12;
    v25 = a11;
    v23 = a7;
    v24 = v45;
    gOldModeChange = 1;
    v37 = DrvChangeDisplaySettingsInternal(v45, a3, 0LL, a4, a6, a7, a8, a9, a10, a11, a12, 0, 0);
    gOldModeChange = 0;
    v34 = 1;
    v43 = 1;
    v21 = v37;
    goto LABEL_17;
  }
  v23 = a7;
  v24 = v45;
  v42 = 0;
  v25 = a11;
  v50 = 0LL;
  *(_OWORD *)v47 = 0LL;
  v48 = 0LL;
  v49 = 0LL;
  if ( a3 )
  {
    if ( (((unsigned __int64)v45 + 4) & 0xFFFFFFFFFFFFFFFBuLL) == 0 || (*((_DWORD *)v45 + 40) & 0x800000) == 0 )
    {
      v38 = WdLogNewEntry5_WdAssertion(v20, v19, v22);
      WdLogEvent5_WdAssertion(v38);
    }
    *(_QWORD *)&v48 = __PAIR64__(a6, a13);
    v47[0] = (__int64)v24;
    LODWORD(v47[1]) = a11;
    *(_QWORD *)&v49 = a3;
    DWORD2(v48) = a7;
    if ( a10 == -1 )
      PruneFlag = DrvGetPruneFlag(v24);
    else
      PruneFlag = a10 != 0;
    HIDWORD(v47[1]) = PruneFlag;
  }
  v27 = a12;
  v28 = 32;
  v29 = (a7 != 0 ? 143 : 79) | (a12 != 0 ? 0x100 : 0);
  if ( !a3 && a7 )
  {
    v29 |= 0x800u;
    v28 = 34;
  }
  v30 = DrvSetDisplayConfig(
          0,
          0,
          v29,
          v28,
          a4,
          a5 != 0,
          0LL,
          (__int64)v47,
          a8,
          (__int64)a9,
          (__int64)&v43,
          0LL,
          (__int64)&v42,
          a14,
          a15);
  v21 = v50;
  v33 = v30;
  v17 = (struct _devicemodeW *)*((_QWORD *)&v49 + 1);
  HIDWORD(v44) = v30;
  v57 = HIDWORD(v50);
  if ( (v30 & 0x80000000) == 0 )
  {
    if ( (int)v50 < 0 )
    {
      v39 = WdLogNewEntry5_WdAssertion(v30, v31, v32);
      WdLogEvent5_WdAssertion(v39);
    }
    if ( v42 )
    {
      if ( a12 )
      {
        v40 = WdLogNewEntry5_WdAssertion(v33, v31, v32);
        WdLogEvent5_WdAssertion(v40);
      }
      v21 = 2;
    }
    goto LABEL_16;
  }
  if ( (int)v50 >= 0 )
  {
    v41 = WdLogNewEntry5_WdAssertion(v30, v31, v32);
    WdLogEvent5_WdAssertion(v41);
LABEL_16:
    v34 = v57;
    goto LABEL_17;
  }
  v34 = HIDWORD(v50);
LABEL_17:
  LogDiagCDS((__int64)String1, a3, (__int64)v24, a5, a6, v23, v25, v27, v52, v21, HIDWORD(v44), v34, v43, v17);
  if ( v17 )
    Win32FreePool((__int64)v17);
LABEL_19:
  AUTO_TGO::~AUTO_TGO((AUTO_TGO *)v53);
  AUTO_STATUS_CHANGE_NOTIFY<2,3>::NotifyStatusChange(&v46, 3);
  return v21;
}
