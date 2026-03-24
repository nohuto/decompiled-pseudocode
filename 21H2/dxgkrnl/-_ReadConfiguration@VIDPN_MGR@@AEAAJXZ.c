/*
 * XREFs of ?_ReadConfiguration@VIDPN_MGR@@AEAAJXZ @ 0x1C0183F0C
 * Callers:
 *     ??0VIDPN_MGR@@QEAA@QEAVADAPTER_DISPLAY@@@Z @ 0x1C0193CC0 (--0VIDPN_MGR@@QEAA@QEAVADAPTER_DISPLAY@@@Z.c)
 * Callees:
 *     __security_check_cookie @ 0x1C0024910 (__security_check_cookie.c)
 *     memset @ 0x1C0028F00 (memset.c)
 *     DpiReadPnpRegistryValue @ 0x1C01842D4 (DpiReadPnpRegistryValue.c)
 */

__int64 __fastcall VIDPN_MGR::_ReadConfiguration(unsigned __int64 this, __int64 a2)
{
  VIDPN_MGR *v2; // rbx
  int RegistryValues; // eax
  __int64 v4; // rcx
  __int64 v5; // rdi
  __int64 v6; // rax
  __int64 v7; // rcx
  __int64 v8; // rax
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // rax
  __int64 v12; // rax
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // rax
  __int64 v16; // rax
  __int64 v17; // rdx
  __int64 v18; // rcx
  __int64 v19; // rax
  __int64 v20; // rax
  __int64 v21; // rdx
  __int64 v22; // rcx
  __int64 v23; // rax
  bool v24; // al
  _DWORD *v25; // rdi
  int v26; // eax
  __int64 v28; // rax
  __int64 v29; // rax
  __int64 v30; // rax
  __int64 v31; // rax
  __int64 v32; // rax
  __int64 v33; // rax
  unsigned int v34; // [rsp+38h] [rbp-D0h] BYREF
  _DWORD v35[3]; // [rsp+3Ch] [rbp-CCh] BYREF
  __int64 v36; // [rsp+48h] [rbp-C0h] BYREF
  __int64 v37; // [rsp+50h] [rbp-B8h]
  const wchar_t *v38; // [rsp+58h] [rbp-B0h]
  _DWORD *v39; // [rsp+60h] [rbp-A8h]
  __int64 v40; // [rsp+68h] [rbp-A0h]
  _DWORD *v41; // [rsp+70h] [rbp-98h]
  __int64 v42; // [rsp+78h] [rbp-90h]
  __int64 v43; // [rsp+80h] [rbp-88h]
  int v44; // [rsp+88h] [rbp-80h]
  const wchar_t *v45; // [rsp+90h] [rbp-78h]
  char *v46; // [rsp+98h] [rbp-70h]
  int v47; // [rsp+A0h] [rbp-68h]
  char *v48; // [rsp+A8h] [rbp-60h]
  int v49; // [rsp+B0h] [rbp-58h]
  __int64 v50; // [rsp+B8h] [rbp-50h]
  int v51; // [rsp+C0h] [rbp-48h]
  __int128 v52; // [rsp+C8h] [rbp-40h]
  __int128 v53; // [rsp+D8h] [rbp-30h]
  __int64 v54; // [rsp+E8h] [rbp-20h]
  _QWORD v55[22]; // [rsp+F8h] [rbp-10h] BYREF

  v2 = (VIDPN_MGR *)this;
  if ( !VIDPN_MGR::_BadMonitorSourceModeDiagnosibility )
  {
    v34 = 2;
    memset(v55, 0, 0xA8uLL);
    LODWORD(v55[1]) = 288;
    LODWORD(v55[4]) = 0x4000000;
    v55[2] = L"BadMonitorModeDiag";
    LODWORD(v55[11]) = 0x4000000;
    v55[3] = &v34;
    v55[5] = 0LL;
    v55[9] = L"AssertOnDdiViolation";
    LODWORD(v55[6]) = 0;
    v55[10] = &g_DmmAssertOnDdiViolation;
    v55[7] = 0LL;
    LODWORD(v55[8]) = 288;
    v55[12] = 0LL;
    LODWORD(v55[13]) = 0;
    RegistryValues = RtlQueryRegistryValuesEx(2LL, L"GraphicsDrivers\\DMM", v55, 0LL, 0LL);
    v5 = RegistryValues;
    if ( RegistryValues >= 0 )
    {
      this = v34;
    }
    else
    {
      v6 = WdLogNewEntry5_WdDmmEvent(v4, a2);
      *(_QWORD *)(v6 + 24) = v5;
      WdLogEvent5_WdDmmEvent(v6);
      if ( (_DWORD)v5 != -1073741772 )
      {
        v28 = WdLogNewEntry5_WdAssertion(v7, a2);
        WdLogEvent5_WdAssertion(v28);
      }
      this = 2LL;
      v34 = 2;
    }
    if ( (unsigned int)(this - 1) > 1 )
    {
      v29 = WdLogNewEntry5_WdError(this, a2);
      *(_QWORD *)(v29 + 24) = v34;
      WdLogEvent5_WdError(v29);
    }
    else
    {
      VIDPN_MGR::_BadMonitorSourceModeDiagnosibility = this;
    }
  }
  v8 = *((_QWORD *)v2 + 1);
  v34 = 0;
  if ( !v8 )
  {
    v30 = WdLogNewEntry5_WdAssertion(this, a2);
    WdLogEvent5_WdAssertion(v30);
    v8 = *((_QWORD *)v2 + 1);
  }
  if ( (int)DpiReadPnpRegistryValue(*(_QWORD *)(*(_QWORD *)(v8 + 16) + 216LL), L"AllowUnspecifiedVSync", &v34, 4LL) >= 0 )
  {
    VIDPN_MGR::_bAllowUnspecifiedVSync = v34 != 0;
  }
  else
  {
    v11 = WdLogNewEntry5_WdDmmEvent(v10, v9);
    WdLogEvent5_WdDmmEvent(v11);
  }
  v12 = *((_QWORD *)v2 + 1);
  v34 = 0;
  if ( !v12 )
  {
    v31 = WdLogNewEntry5_WdAssertion(v10, v9);
    WdLogEvent5_WdAssertion(v31);
    v12 = *((_QWORD *)v2 + 1);
  }
  if ( (int)DpiReadPnpRegistryValue(*(_QWORD *)(*(_QWORD *)(v12 + 16) + 216LL), L"AllowUnspecifiedHSync", &v34, 4LL) >= 0 )
  {
    VIDPN_MGR::_bAllowUnspecifiedHSync = v34 != 0;
  }
  else
  {
    v15 = WdLogNewEntry5_WdDmmEvent(v14, v13);
    WdLogEvent5_WdDmmEvent(v15);
  }
  v16 = *((_QWORD *)v2 + 1);
  v34 = 0;
  if ( !v16 )
  {
    v32 = WdLogNewEntry5_WdAssertion(v14, v13);
    WdLogEvent5_WdAssertion(v32);
    v16 = *((_QWORD *)v2 + 1);
  }
  if ( (int)DpiReadPnpRegistryValue(*(_QWORD *)(*(_QWORD *)(v16 + 16) + 216LL), L"AllowUnspecifiedPixelRate", &v34, 4LL) >= 0 )
  {
    VIDPN_MGR::_bAllowUnspecifiedPixelRate = v34 != 0;
  }
  else
  {
    v19 = WdLogNewEntry5_WdDmmEvent(v18, v17);
    WdLogEvent5_WdDmmEvent(v19);
  }
  v20 = *((_QWORD *)v2 + 1);
  v34 = 0;
  if ( !v20 )
  {
    v33 = WdLogNewEntry5_WdAssertion(v18, v17);
    WdLogEvent5_WdAssertion(v33);
    v20 = *((_QWORD *)v2 + 1);
  }
  if ( (int)DpiReadPnpRegistryValue(*(_QWORD *)(*(_QWORD *)(v20 + 16) + 216LL), L"ForceDualViewBehavior", &v34, 4LL) >= 0 )
  {
    v24 = v34 != 0;
  }
  else
  {
    v23 = WdLogNewEntry5_WdDmmEvent(v22, v21);
    WdLogEvent5_WdDmmEvent(v23);
    v24 = 0;
  }
  *((_BYTE *)v2 + 464) = v24;
  v25 = (_DWORD *)((char *)v2 + 488);
  v35[0] = 1000;
  LODWORD(v40) = 67108868;
  v47 = 67108868;
  v38 = L"RapidHPDTime";
  *((_DWORD *)v2 + 122) = 5;
  v39 = v35;
  v36 = 0LL;
  v41 = v35;
  LODWORD(v37) = 288;
  v45 = L"RapidHPDThresholdCount";
  LODWORD(v42) = 4;
  v54 = 0LL;
  v43 = 0LL;
  v44 = 288;
  v46 = (char *)v2 + 488;
  v48 = (char *)v2 + 488;
  v49 = 4;
  v50 = 0LL;
  v51 = 0;
  v52 = 0LL;
  v53 = 0LL;
  RtlQueryRegistryValuesEx(2LL, L"GraphicsDrivers", &v36, 0LL, 0LL);
  v26 = v35[0];
  if ( v35[0] > 0xEA60u )
    v26 = 60000;
  v35[0] = v26;
  *((_DWORD *)v2 + 121) = 10000 * v26 / KeQueryTimeIncrement();
  if ( *v25 == 1 )
  {
    *((_DWORD *)v2 + 122) = 0;
  }
  else if ( *v25 > 0x20u )
  {
    *v25 = 32;
  }
  return 0LL;
}
