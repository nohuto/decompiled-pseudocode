/*
 * XREFs of ?UpdateDiagnosticAdapterCallback@@YAJPEAVDXGADAPTER@@PEAX@Z @ 0x1C0304630
 * Callers:
 *     <none>
 * Callees:
 *     ??0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z @ 0x1C000964C (--0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z.c)
 *     ??1COREADAPTERACCESS@@QEAA@XZ @ 0x1C000F480 (--1COREADAPTERACCESS@@QEAA@XZ.c)
 *     ?AcquireShared@COREADAPTERACCESS@@QEAAJPEAD@Z @ 0x1C000F718 (-AcquireShared@COREADAPTERACCESS@@QEAAJPEAD@Z.c)
 *     __security_check_cookie @ 0x1C002B170 (__security_check_cookie.c)
 *     ?UpdateDiagnosticReporting@DXGADAPTER@@QEAAJPEAU_ADAPTER_UPDATE_DIAGNOSTIC_REPORTING@1@@Z @ 0x1C02BE998 (-UpdateDiagnosticReporting@DXGADAPTER@@QEAAJPEAU_ADAPTER_UPDATE_DIAGNOSTIC_REPORTING@1@@Z.c)
 */

__int64 __fastcall UpdateDiagnosticAdapterCallback(struct DXGADAPTER *this, UINT *a2)
{
  int v4; // eax
  unsigned int v5; // ebx
  _BYTE v7[144]; // [rsp+20h] [rbp-A8h] BYREF

  COREADAPTERACCESS::COREADAPTERACCESS((COREADAPTERACCESS *)v7, this, 0LL);
  v4 = COREADAPTERACCESS::AcquireShared((COREADAPTERACCESS *)v7, 0LL);
  v5 = v4;
  if ( v4 < 0 )
  {
    if ( v4 != -1073741130 )
    {
      WdLogSingleEntry2(3LL, this, v4);
      goto LABEL_4;
    }
  }
  else
  {
    DXGADAPTER::UpdateDiagnosticReporting(this, a2);
  }
  v5 = 0;
LABEL_4:
  COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v7);
  return v5;
}
