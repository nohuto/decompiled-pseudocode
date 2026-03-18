/*
 * XREFs of DrvChangeDisplaySettings @ 0x1C009C4A0
 * Callers:
 *     ?xxxUserChangeDisplaySettingsInternal@@YAJPEAU_UNICODE_STRING@@PEAU_devicemodeW@@PEAUtagDESKTOP@@KPEAXW4_MODE@@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C009CBCC (-xxxUserChangeDisplaySettingsInternal@@YAJPEAU_UNICODE_STRING@@PEAU_devicemodeW@@PEAUtagDESKTOP@.c)
 * Callees:
 *     ?NotifyStatusChange@?$AUTO_STATUS_CHANGE_NOTIFY@$01$02@@AEAAXW4D3DKMT_STATE_NOTIFICATION_TYPE@@@Z @ 0x1C004903C (-NotifyStatusChange@-$AUTO_STATUS_CHANGE_NOTIFY@$01$02@@AEAAXW4D3DKMT_STATE_NOTIFICATION_TYPE@@@.c)
 *     Win32FreePool @ 0x1C008C9A0 (Win32FreePool.c)
 *     ?DrvGetPruneFlag@@YAHPEAUtagGRAPHICS_DEVICE@@@Z @ 0x1C00942F0 (-DrvGetPruneFlag@@YAHPEAUtagGRAPHICS_DEVICE@@@Z.c)
 *     DrvSetDisplayConfig @ 0x1C0098260 (DrvSetDisplayConfig.c)
 *     ??0AUTO_TGO@@IEAA@XZ @ 0x1C0099034 (--0AUTO_TGO@@IEAA@XZ.c)
 *     ??1AUTO_TGO@@MEAA@XZ @ 0x1C0099078 (--1AUTO_TGO@@MEAA@XZ.c)
 *     LogDiagCDS @ 0x1C009C7A4 (LogDiagCDS.c)
 *     DrvChangeDisplaySettingsPreValidate @ 0x1C009CA1C (DrvChangeDisplaySettingsPreValidate.c)
 *     ?DrvChangeDisplaySettingsInternal@@YAJPEAUtagGRAPHICS_DEVICE@@PEAU_devicemodeW@@PEAUD3DKMT_GETPATHSMODALITY@@PEAXHHPEAU_MDEV@@PEAPEAU4@KHHHU_CDS_INTERNAL_FLAGS@@@Z @ 0x1C00AF6FC (-DrvChangeDisplaySettingsInternal@@YAJPEAUtagGRAPHICS_DEVICE@@PEAU_devicemodeW@@PEAUD3DKMT_GETPA.c)
 */

__int64 __fastcall DrvChangeDisplaySettings(
        PCUNICODE_STRING String1,
        __int64 a2,
        __int64 a3,
        void *a4,
        unsigned int a5,
        int a6,
        int a7,
        struct _MDEV *a8,
        struct _MDEV **a9,
        int a10,
        int a11,
        int a12,
        unsigned int a13,
        _BYTE *a14,
        __int64 a15)
{
  __int64 v17; // r12
  __int64 v18; // rax
  __int64 v19; // rdx
  __int64 v20; // rcx
  unsigned int v21; // ebx
  __int64 v22; // r8
  __int64 v23; // r9
  int v24; // esi
  struct tagGRAPHICS_DEVICE *v25; // rdi
  int v26; // r13d
  int PruneFlag; // eax
  int v28; // r14d
  unsigned int v29; // r9d
  __int64 v30; // r8
  unsigned int v31; // eax
  __int64 v32; // rdx
  __int64 v33; // r8
  __int64 v34; // r9
  __int64 v35; // rcx
  int v36; // ecx
  __int64 v37; // rdx
  __int64 v38; // r8
  __int64 v40; // rax
  unsigned int v41; // eax
  __int64 v42; // rax
  __int64 v43; // rax
  __int64 v44; // rax
  __int64 v45; // rax
  char v46; // [rsp+88h] [rbp-80h] BYREF
  unsigned int v47; // [rsp+8Ch] [rbp-7Ch] BYREF
  __int64 v48; // [rsp+90h] [rbp-78h] BYREF
  struct tagGRAPHICS_DEVICE *v49; // [rsp+98h] [rbp-70h] BYREF
  __int64 v50; // [rsp+A0h] [rbp-68h] BYREF
  __int64 v51[2]; // [rsp+A8h] [rbp-60h] BYREF
  __int128 v52; // [rsp+B8h] [rbp-50h]
  __int128 v53; // [rsp+C8h] [rbp-40h]
  __int64 v54; // [rsp+D8h] [rbp-30h]
  __int64 v55; // [rsp+E0h] [rbp-28h]
  __int64 v56; // [rsp+E8h] [rbp-20h]
  _QWORD v57[13]; // [rsp+F0h] [rbp-18h] BYREF
  __int64 retaddr; // [rsp+160h] [rbp+58h]
  int v61; // [rsp+1A8h] [rbp+A0h]

  v47 = 0;
  v49 = 0LL;
  v17 = 0LL;
  v55 = MEMORY[0xFFFFF78000000320];
  v48 = 0LL;
  v18 = v55 * KeQueryTimeIncrement();
  *a9 = 0LL;
  v56 = v18;
  v50 = retaddr;
  AUTO_STATUS_CHANGE_NOTIFY<2,3>::NotifyStatusChange(&v50, 2);
  AUTO_TGO::AUTO_TGO((AUTO_TGO *)v57);
  v57[0] = &off_1C0206D60;
  v21 = DrvChangeDisplaySettingsPreValidate(String1, a6, (__int64)&v49, (__int64)&v48);
  if ( v21 )
    goto LABEL_19;
  if ( !(_DWORD)v48 )
  {
    if ( gOldModeChange )
    {
      v40 = WdLogNewEntry5_WdAssertion(v20, v19, v22, v23);
      WdLogEvent5_WdAssertion(v40);
    }
    v28 = a12;
    v26 = a11;
    v24 = a7;
    v25 = v49;
    gOldModeChange = 1;
    v41 = DrvChangeDisplaySettingsInternal(v49, a3, 0LL, a4, a6, a7, a8, a9, a10, a11, a12, 0, 0);
    gOldModeChange = 0;
    v36 = 1;
    v47 = 1;
    v21 = v41;
    goto LABEL_17;
  }
  v24 = a7;
  v25 = v49;
  v46 = 0;
  v26 = a11;
  v54 = 0LL;
  *(_OWORD *)v51 = 0LL;
  v52 = 0LL;
  v53 = 0LL;
  if ( a3 )
  {
    if ( (((unsigned __int64)v49 + 4) & 0xFFFFFFFFFFFFFFFBuLL) == 0 || (*((_DWORD *)v49 + 40) & 0x800000) == 0 )
    {
      v42 = WdLogNewEntry5_WdAssertion(v20, v19, v22, v23);
      WdLogEvent5_WdAssertion(v42);
    }
    *(_QWORD *)&v52 = __PAIR64__(a6, a13);
    v51[0] = (__int64)v25;
    LODWORD(v51[1]) = a11;
    *(_QWORD *)&v53 = a3;
    DWORD2(v52) = a7;
    if ( a10 == -1 )
      PruneFlag = DrvGetPruneFlag(v25);
    else
      PruneFlag = a10 != 0;
    HIDWORD(v51[1]) = PruneFlag;
  }
  v28 = a12;
  v29 = 32;
  v30 = (a7 != 0 ? 143 : 79) | (a12 != 0 ? 0x100 : 0);
  if ( !a3 && a7 )
  {
    LODWORD(v30) = v30 | 0x800;
    v29 = 34;
  }
  v31 = DrvSetDisplayConfig(0, 0LL, v30, v29, a4, a5 != 0, 0LL, (__int64)v51, a8, a9, &v47, 0LL, &v46, a14, a15);
  v21 = v54;
  v35 = v31;
  v17 = *((_QWORD *)&v53 + 1);
  HIDWORD(v48) = v31;
  v61 = HIDWORD(v54);
  if ( (v31 & 0x80000000) == 0 )
  {
    if ( (int)v54 < 0 )
    {
      v43 = WdLogNewEntry5_WdAssertion(v31, v32, v33, v34);
      WdLogEvent5_WdAssertion(v43);
    }
    if ( v46 )
    {
      if ( a12 )
      {
        v44 = WdLogNewEntry5_WdAssertion(v35, v32, v33, v34);
        WdLogEvent5_WdAssertion(v44);
      }
      v21 = 2;
    }
    goto LABEL_16;
  }
  if ( (int)v54 >= 0 )
  {
    v45 = WdLogNewEntry5_WdAssertion(v31, v32, v33, v34);
    WdLogEvent5_WdAssertion(v45);
LABEL_16:
    v36 = v61;
    goto LABEL_17;
  }
  v36 = HIDWORD(v54);
LABEL_17:
  LogDiagCDS(String1, a3, v25, a5, a6, v24, v26, v28, v56, v21, HIDWORD(v48), v36, v47, v17);
  if ( v17 )
    Win32FreePool(v17, v37, v38);
LABEL_19:
  AUTO_TGO::~AUTO_TGO((AUTO_TGO *)v57);
  AUTO_STATUS_CHANGE_NOTIFY<2,3>::NotifyStatusChange(&v50, 3);
  return v21;
}
