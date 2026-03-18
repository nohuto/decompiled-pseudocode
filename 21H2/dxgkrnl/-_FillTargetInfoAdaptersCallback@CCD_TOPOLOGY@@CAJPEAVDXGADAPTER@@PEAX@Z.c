/*
 * XREFs of ?_FillTargetInfoAdaptersCallback@CCD_TOPOLOGY@@CAJPEAVDXGADAPTER@@PEAX@Z @ 0x1C01ABB60
 * Callers:
 *     <none>
 * Callees:
 *     ??0COREACCESS@@QEAA@QEAVDXGADAPTER@@_N@Z @ 0x1C000BD4C (--0COREACCESS@@QEAA@QEAVDXGADAPTER@@_N@Z.c)
 *     ??1COREADAPTERACCESS@@QEAA@XZ @ 0x1C000F480 (--1COREADAPTERACCESS@@QEAA@XZ.c)
 *     ?AcquireShared@COREADAPTERACCESS@@QEAAJPEAD@Z @ 0x1C000F718 (-AcquireShared@COREADAPTERACCESS@@QEAAJPEAD@Z.c)
 *     __security_check_cookie @ 0x1C002B170 (__security_check_cookie.c)
 *     ?GetPathDescriptor@CCD_TOPOLOGY@@QEBAPEBUD3DKMT_PATHMODALITY_DESCRIPTOR@@I@Z @ 0x1C01ABE88 (-GetPathDescriptor@CCD_TOPOLOGY@@QEBAPEBUD3DKMT_PATHMODALITY_DESCRIPTOR@@I@Z.c)
 *     ?_GetMonitorInformationForTargets@MONITOR_MGR@@QEAAJP6AJPEAX0IW4_DMM_VIDPN_MONITOR_TYPE@@EE@Z0I@Z @ 0x1C01AE150 (-_GetMonitorInformationForTargets@MONITOR_MGR@@QEAAJP6AJPEAX0IW4_DMM_VIDPN_MONITOR_TYPE@@EE@Z0I@.c)
 */

__int64 __fastcall CCD_TOPOLOGY::_FillTargetInfoAdaptersCallback(struct DXGADAPTER *a1, CCD_TOPOLOGY *a2)
{
  unsigned int i; // ebx
  __int64 v5; // rcx
  unsigned __int16 v6; // ax
  unsigned __int16 v7; // ax
  struct DXGADAPTER *const v9; // rdx
  int v10; // eax
  unsigned int v11; // r9d
  int v12; // ebx
  __int64 v13; // rax
  MONITOR_MGR *v14; // rcx
  int MonitorInformationForTargets; // eax
  _BYTE v16[8]; // [rsp+30h] [rbp-A8h] BYREF
  _BYTE v17[64]; // [rsp+38h] [rbp-A0h] BYREF
  _BYTE v18[72]; // [rsp+78h] [rbp-60h] BYREF

  for ( i = 0; ; ++i )
  {
    v5 = *((_QWORD *)a2 + 8);
    v6 = v5 ? *(_WORD *)(v5 + 20) : 0;
    if ( i >= v6 )
      break;
    if ( *((_DWORD *)CCD_TOPOLOGY::GetPathDescriptor(a2, i) + 4) == *((_DWORD *)a1 + 101)
      && *((_DWORD *)CCD_TOPOLOGY::GetPathDescriptor(a2, i) + 5) == *((_DWORD *)a1 + 102) )
    {
      v5 = *((_QWORD *)a2 + 8);
      break;
    }
  }
  if ( v5 )
    v7 = *(_WORD *)(v5 + 20);
  else
    v7 = 0;
  if ( i >= v7 )
    return 0LL;
  v16[1] = 0;
  COREACCESS::COREACCESS((COREACCESS *)v17, a1);
  COREACCESS::COREACCESS((COREACCESS *)v18, v9);
  v10 = COREADAPTERACCESS::AcquireShared((COREADAPTERACCESS *)v16, 0LL);
  v12 = v10;
  if ( v10 < 0 )
  {
    WdLogSingleEntry5(2LL, v10, a1, *((int *)a1 + 102), *((unsigned int *)a1 + 101), *((_QWORD *)a2 + 8));
  }
  else
  {
    if ( !a1 )
      goto LABEL_25;
    v13 = *((_QWORD *)a1 + 349);
    if ( v13 )
    {
      v14 = *(MONITOR_MGR **)(v13 + 112);
      if ( v14 )
      {
        MonitorInformationForTargets = MONITOR_MGR::_GetMonitorInformationForTargets(
                                         v14,
                                         (int (__high *)(void *, void *, unsigned int, enum _DMM_VIDPN_MONITOR_TYPE, unsigned __int8, unsigned __int8))&CCD_TOPOLOGY::_FillTargetInfoMonitorsCallback,
                                         a2,
                                         v11);
        v12 = 0;
        if ( MonitorInformationForTargets != -1073741275 )
          v12 = MonitorInformationForTargets;
        if ( v12 >= 0 )
          goto LABEL_20;
        goto LABEL_26;
      }
      WdLogSingleEntry1(2LL, a1);
LABEL_25:
      v12 = -1073741811;
LABEL_26:
      WdLogSingleEntry5(2LL, v12, a1, *((int *)a1 + 102), *((unsigned int *)a1 + 101), *((_QWORD *)a2 + 8));
      goto LABEL_20;
    }
    WdLogSingleEntry1(2LL, a1);
    v12 = 0;
  }
LABEL_20:
  COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v16);
  return (unsigned int)v12;
}
