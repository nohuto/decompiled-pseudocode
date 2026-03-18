/*
 * XREFs of ?BmlGetPathModeListForAdapter@@YAJPEAUD3DKMT_GETPATHSMODALITY@@U_LUID@@_NW4DXGK_DIAG_CCD_BML_ORIGIN@@IAEAVCCD_MODE_RESULT_SET@@@Z @ 0x1C02E72E0
 * Callers:
 *     ?EnumerateFunctionalModesWorker@CCD_TOPOLOGY@@AEAAJIKAEAVCCD_MODE_RESULT_SET@@@Z @ 0x1C02E607C (-EnumerateFunctionalModesWorker@CCD_TOPOLOGY@@AEAAJIKAEAVCCD_MODE_RESULT_SET@@@Z.c)
 * Callees:
 *     ??0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z @ 0x1C0009B60 (--0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C000A650 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ??1COREADAPTERACCESS@@QEAA@XZ @ 0x1C000E1E8 (--1COREADAPTERACCESS@@QEAA@XZ.c)
 *     ?ReleaseReferenceNoTracking@DXGADAPTER@@QEAAXXZ @ 0x1C000E2A4 (-ReleaseReferenceNoTracking@DXGADAPTER@@QEAAXXZ.c)
 *     ?AcquireShared@COREADAPTERACCESS@@QEAAJPEAD@Z @ 0x1C000E2C8 (-AcquireShared@COREADAPTERACCESS@@QEAAJPEAD@Z.c)
 *     __security_check_cookie @ 0x1C0024300 (__security_check_cookie.c)
 *     ?ReferenceAdapterByLuid@DXGGLOBAL@@QEAAPEAVDXGADAPTER@@U_LUID@@PEA_K@Z @ 0x1C0116E44 (-ReferenceAdapterByLuid@DXGGLOBAL@@QEAAPEAVDXGADAPTER@@U_LUID@@PEA_K@Z.c)
 *     ?BmlGetPathModeListForAdapterWithCoreAccessHeld@@YAJPEAUD3DKMT_GETPATHSMODALITY@@PEAX_NW4DXGK_DIAG_CCD_BML_ORIGIN@@IAEAVCCD_MODE_RESULT_SET@@@Z @ 0x1C02E73C4 (-BmlGetPathModeListForAdapterWithCoreAccessHeld@@YAJPEAUD3DKMT_GETPATHSMODALITY@@PEAX_NW4DXGK_DI.c)
 */

__int64 __fastcall BmlGetPathModeListForAdapter(__int64 a1, __int64 a2, char a3, unsigned int a4, int a5, __int64 a6)
{
  DXGGLOBAL *Global; // rax
  struct DXGADAPTER *v11; // rax
  DXGADAPTER *v12; // rdi
  int PathModeListForAdapterWithCoreAccessHeld; // ebx
  __int64 v14; // rdx
  __int64 v15; // r8
  unsigned __int64 v17; // [rsp+38h] [rbp-D0h] BYREF
  _BYTE v18[144]; // [rsp+40h] [rbp-C8h] BYREF

  Global = DXGGLOBAL::GetGlobal(a1, a2);
  v11 = DXGGLOBAL::ReferenceAdapterByLuid(Global, (struct _LUID)a2, &v17);
  v12 = v11;
  if ( v11 )
  {
    COREADAPTERACCESS::COREADAPTERACCESS((COREADAPTERACCESS *)v18, v11, 0LL);
    PathModeListForAdapterWithCoreAccessHeld = COREADAPTERACCESS::AcquireShared((COREADAPTERACCESS *)v18, 0LL);
    if ( PathModeListForAdapterWithCoreAccessHeld >= 0 )
    {
      LOBYTE(v15) = a3;
      PathModeListForAdapterWithCoreAccessHeld = BmlGetPathModeListForAdapterWithCoreAccessHeld(
                                                   a1,
                                                   v12,
                                                   v15,
                                                   a4,
                                                   a5,
                                                   a6);
    }
    COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v18, v14);
    DXGADAPTER::ReleaseReferenceNoTracking(v12);
  }
  else
  {
    return (unsigned int)-1073741810;
  }
  return (unsigned int)PathModeListForAdapterWithCoreAccessHeld;
}
