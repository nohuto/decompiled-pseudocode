/*
 * XREFs of ?DrvChangeDisplayFallback@@YAJPEAXEEPEAU_MDEV@@PEAPEAU1@PEAW4_DXGK_DIAG_SDC_STAGE@@PEAEPEAJ@Z @ 0x1C004DBE8
 * Callers:
 *     DrvSetDisplayConfig @ 0x1C0098260 (DrvSetDisplayConfig.c)
 * Callees:
 *     ?DrvChangeDisplaySettingsInternal@@YAJPEAUtagGRAPHICS_DEVICE@@PEAU_devicemodeW@@PEAUD3DKMT_GETPATHSMODALITY@@PEAXHHPEAU_MDEV@@PEAPEAU4@KHHHU_CDS_INTERNAL_FLAGS@@@Z @ 0x1C00AF6FC (-DrvChangeDisplaySettingsInternal@@YAJPEAUtagGRAPHICS_DEVICE@@PEAU_devicemodeW@@PEAUD3DKMT_GETPA.c)
 */

__int64 __fastcall DrvChangeDisplayFallback(
        void *a1,
        unsigned __int8 a2,
        char a3,
        struct _MDEV *a4,
        struct _MDEV **a5,
        enum _DXGK_DIAG_SDC_STAGE *a6,
        bool *a7,
        int *a8)
{
  int v10; // edi
  int v12; // eax
  int v13; // ebx
  unsigned int v14; // r8d
  __int64 v16; // rax
  __int64 v17; // rax
  __int64 v18; // rax
  __int64 v19; // rax

  v10 = a2;
  if ( gForceDisconnect )
  {
    v16 = WdLogNewEntry5_WdAssertion();
    WdLogEvent5_WdAssertion(v16);
  }
  if ( a3 )
    gForceDisconnect = 1;
  if ( gOldModeChange )
  {
    v17 = WdLogNewEntry5_WdAssertion();
    WdLogEvent5_WdAssertion(v17);
  }
  gOldModeChange = 1;
  v12 = DrvChangeDisplaySettingsInternal(0LL, 0LL, 0LL, a1, 0, 1, a4, a5, 0, 1, v10, 1, 0);
  gOldModeChange = 0;
  v13 = v12;
  switch ( v12 )
  {
    case 0:
      goto LABEL_8;
    case 2:
      if ( (_BYTE)v10 || *a5 )
      {
        v19 = WdLogNewEntry5_WdAssertion();
        WdLogEvent5_WdAssertion(v19);
      }
LABEL_8:
      v14 = 0;
      *(_DWORD *)a6 = 18;
      *a7 = v13 == 2;
      goto LABEL_9;
    case 3:
      v18 = WdLogNewEntry5_WdAssertion();
      WdLogEvent5_WdAssertion(v18);
      break;
  }
  v14 = -1073741823;
  *(_DWORD *)a6 = 16;
LABEL_9:
  gForceDisconnect = 0;
  if ( a8 )
    *a8 = v13;
  return v14;
}
