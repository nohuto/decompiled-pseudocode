/*
 * XREFs of DxgkUpdateDpiInfoForNewOverride @ 0x1C02FA820
 * Callers:
 *     <none>
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x1C0008E10 (DxgkLogInternalTriageEvent.c)
 *     ?AcquireModeChangeLock@DXGSESSIONMODECHANGELOCK@@QEAAJE@Z @ 0x1C000F45C (-AcquireModeChangeLock@DXGSESSIONMODECHANGELOCK@@QEAAJE@Z.c)
 *     ?UpdateScaleFactorForOverride@@YAXPEAU_DPI_INFORMATION@@HPEBU_DPI_SCALE_FACTOR_COLLECTION@@@Z @ 0x1C004F4B0 (-UpdateScaleFactorForOverride@@YAXPEAU_DPI_INFORMATION@@HPEBU_DPI_SCALE_FACTOR_COLLECTION@@@Z.c)
 *     DxgkReleaseSessionModeChangeLock @ 0x1C01A46EC (DxgkReleaseSessionModeChangeLock.c)
 *     ?LogScaleFactor@@YAXU_LUID@@IIPEAU_DPI_INFORMATION@@@Z @ 0x1C01D55FC (-LogScaleFactor@@YAXU_LUID@@IIPEAU_DPI_INFORMATION@@@Z.c)
 *     ?QueryWin32DpiValues@@YAJPEAIPEAU_DPI_SCALE_FACTOR_COLLECTION@@@Z @ 0x1C01D7C48 (-QueryWin32DpiValues@@YAJPEAIPEAU_DPI_SCALE_FACTOR_COLLECTION@@@Z.c)
 *     ?WriteDpiToRegistry@DpiPersistence@@YAJAEBU_LUID@@IK@Z @ 0x1C02FA574 (-WriteDpiToRegistry@DpiPersistence@@YAJAEBU_LUID@@IK@Z.c)
 */

__int64 __fastcall DxgkUpdateDpiInfoForNewOverride(
        struct _LUID *this,
        struct _LUID *a2,
        __int64 a3,
        struct _DPI_INFORMATION *a4)
{
  unsigned int v4; // ebp
  unsigned int v7; // esi
  int Win32DpiValues; // eax
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // r8
  __int64 v12; // r9
  __int64 v13; // rdi
  __int64 CurrentProcess; // rax
  __int64 v15; // rdx
  __int64 v16; // rcx
  __int64 v17; // r8
  __int64 v18; // r9
  __int64 v19; // rax
  int v20; // eax
  struct _UNICODE_STRING *v21; // r9
  int v22; // eax
  _BYTE v24[8]; // [rsp+50h] [rbp-38h] BYREF
  _BYTE v25[40]; // [rsp+58h] [rbp-30h] BYREF

  v4 = (unsigned int)a2;
  memset(v25, 0, 32);
  v7 = a3;
  Win32DpiValues = QueryWin32DpiValues(0LL, (struct _DPI_SCALE_FACTOR_COLLECTION *)v25, a3, (__int64)a4);
  v13 = Win32DpiValues;
  if ( Win32DpiValues >= 0 )
  {
    v24[0] = 0;
    v20 = DXGSESSIONMODECHANGELOCK::AcquireModeChangeLock((DXGSESSIONMODECHANGELOCK *)v24, 0);
    v13 = v20;
    if ( v20 >= 0 )
    {
      UpdateScaleFactorForOverride(a4, v7, (const struct _DPI_SCALE_FACTOR_COLLECTION *)v25);
      LODWORD(v13) = DpiPersistence::WriteDpiToRegistry(this, (const struct _LUID *)v4, v7, v21);
      if ( (int)v13 >= 0 )
      {
        v22 = dword_1C01303E4;
        if ( (*((_BYTE *)a4 + 92) & 0x20) != 0 )
          v22 = v7;
        dword_1C01303E4 = v22;
      }
      LogScaleFactor(*this, v4, 0, a4);
    }
    else
    {
      WdLogSingleEntry1(2LL, v20);
      DxgkLogInternalTriageEvent(
        0LL,
        0x40000,
        -1,
        (__int64)L"Failed to acquire session mode change lock shared (Status = 0x%I64x)",
        v13,
        0LL,
        0LL,
        0LL,
        0LL);
    }
    if ( v24[0] )
      DxgkReleaseSessionModeChangeLock();
  }
  else
  {
    CurrentProcess = PsGetCurrentProcess(v10, v9, v11, v12);
    WdLogSingleEntry2(2LL, v13, CurrentProcess);
    v19 = PsGetCurrentProcess(v16, v15, v17, v18);
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      -1,
      (__int64)L"Couldn't obtain scale factor collection, Status=0x%I64x EPROCESS=0x%I64x",
      v13,
      v19,
      0LL,
      0LL,
      0LL);
  }
  return (unsigned int)v13;
}
