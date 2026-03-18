/*
 * XREFs of DxgkUpdateDpiInfoForNewOverride @ 0x1C02A8480
 * Callers:
 *     <none>
 * Callees:
 *     ?AcquireModeChangeLock@DXGSESSIONMODECHANGELOCK@@QEAAJE@Z @ 0x1C0007AE4 (-AcquireModeChangeLock@DXGSESSIONMODECHANGELOCK@@QEAAJE@Z.c)
 *     ?UpdateScaleFactorForOverride@@YAXPEAU_DPI_INFORMATION@@HPEBU_DPI_SCALE_FACTOR_COLLECTION@@@Z @ 0x1C004AC30 (-UpdateScaleFactorForOverride@@YAXPEAU_DPI_INFORMATION@@HPEBU_DPI_SCALE_FACTOR_COLLECTION@@@Z.c)
 *     DxgkReleaseSessionModeChangeLock @ 0x1C011F004 (DxgkReleaseSessionModeChangeLock.c)
 *     ?QueryWin32DpiValues@@YAJPEAIPEAU_DPI_SCALE_FACTOR_COLLECTION@@@Z @ 0x1C01409D8 (-QueryWin32DpiValues@@YAJPEAIPEAU_DPI_SCALE_FACTOR_COLLECTION@@@Z.c)
 *     ?LogScaleFactor@@YAXU_LUID@@IIPEAU_DPI_INFORMATION@@@Z @ 0x1C0141654 (-LogScaleFactor@@YAXU_LUID@@IIPEAU_DPI_INFORMATION@@@Z.c)
 *     ?WriteDpiToRegistry@DpiPersistence@@YAJAEBU_LUID@@IK@Z @ 0x1C02A826C (-WriteDpiToRegistry@DpiPersistence@@YAJAEBU_LUID@@IK@Z.c)
 */

__int64 __fastcall DxgkUpdateDpiInfoForNewOverride(
        struct _LUID *this,
        struct _LUID *a2,
        unsigned int a3,
        struct _DPI_INFORMATION *a4)
{
  unsigned int v4; // r14d
  int Win32DpiValues; // eax
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // rdi
  __int64 v12; // rbx
  __int64 v13; // rdx
  __int64 v14; // rcx
  int v16; // eax
  __int64 v17; // rdx
  __int64 v18; // rcx
  __int64 v19; // rbx
  __int64 v20; // rax
  __int64 v21; // rdx
  __int64 v22; // rcx
  struct _UNICODE_STRING *v23; // r9
  int v24; // eax
  _BYTE v25[8]; // [rsp+20h] [rbp-48h] BYREF
  _BYTE v26[40]; // [rsp+28h] [rbp-40h] BYREF

  v4 = (unsigned int)a2;
  memset(v26, 0, 32);
  Win32DpiValues = QueryWin32DpiValues(0LL, (struct _DPI_SCALE_FACTOR_COLLECTION *)v26);
  v11 = Win32DpiValues;
  if ( Win32DpiValues >= 0 )
  {
    v25[0] = 0;
    v16 = DXGSESSIONMODECHANGELOCK::AcquireModeChangeLock((DXGSESSIONMODECHANGELOCK *)v25, 0);
    v19 = v16;
    if ( v16 >= 0 )
    {
      UpdateScaleFactorForOverride(a4, a3, (const struct _DPI_SCALE_FACTOR_COLLECTION *)v26);
      LODWORD(v19) = DpiPersistence::WriteDpiToRegistry(this, (const struct _LUID *)v4, a3, v23);
      if ( (int)v19 >= 0 )
      {
        v24 = dword_1C00B0A94;
        if ( (*((_BYTE *)a4 + 92) & 0x20) != 0 )
          v24 = a3;
        dword_1C00B0A94 = v24;
      }
      LogScaleFactor(*this, v4, 0, a4);
    }
    else
    {
      v20 = WdLogNewEntry5_WdError(v18, v17);
      *(_QWORD *)(v20 + 24) = v19;
      WdLogEvent5_WdError(v20);
    }
    if ( v25[0] )
      DxgkReleaseSessionModeChangeLock(v22, v21);
    return (unsigned int)v19;
  }
  else
  {
    v12 = WdLogNewEntry5_WdError(v10, v9);
    *(_QWORD *)(v12 + 24) = v11;
    *(_QWORD *)(v12 + 32) = PsGetCurrentProcess(v14, v13);
    WdLogEvent5_WdError(v12);
    return (unsigned int)v11;
  }
}
