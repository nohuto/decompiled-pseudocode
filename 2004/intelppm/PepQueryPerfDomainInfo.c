/*
 * XREFs of PepQueryPerfDomainInfo @ 0x1C0039924
 * Callers:
 *     RegisterXsdDomain @ 0x1C0023BF0 (RegisterXsdDomain.c)
 * Callees:
 *     __security_check_cookie @ 0x1C0004280 (__security_check_cookie.c)
 *     ProcLibTracePepPerfDomain @ 0x1C000833C (ProcLibTracePepPerfDomain.c)
 *     WPP_RECORDER_SF_d @ 0x1C000A334 (WPP_RECORDER_SF_d.c)
 */

__int64 __fastcall PepQueryPerfDomainInfo(__int64 a1, __int64 a2)
{
  int v2; // eax
  __int64 v3; // rcx
  unsigned int v5; // edi
  char v6; // r8
  char v7; // al
  __int128 v9; // [rsp+30h] [rbp-28h] BYREF

  v2 = *(_DWORD *)(a2 + 36);
  v3 = *(_QWORD *)(a1 + 1104);
  v9 = 0LL;
  LODWORD(v9) = v2;
  v5 = 0;
  if ( (int)PoFxProcessorNotification(v3, 42LL, &v9) < 0 )
    return v5;
  v6 = BYTE4(v9);
  if ( !BYTE4(v9) )
  {
    *(_DWORD *)(a2 + 40) = 252;
    goto LABEL_11;
  }
  if ( BYTE4(v9) == 1 )
  {
    *(_DWORD *)(a2 + 40) = 253;
    goto LABEL_11;
  }
  if ( BYTE4(v9) == 2 )
  {
    *(_DWORD *)(a2 + 40) = 254;
LABEL_11:
    v7 = BYTE5(v9);
    *(_WORD *)(a2 + 58) = WORD3(v9);
    *(_QWORD *)(a2 + 60) = *((_QWORD *)&v9 + 1);
    *(_BYTE *)(a2 + 56) = v6;
    *(_BYTE *)(a2 + 57) = v7;
    ProcLibTracePepPerfDomain((unsigned __int8 *)a2, 0);
    return v5;
  }
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_d(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      2u,
      2u,
      0x21u,
      (__int64)&WPP_1d6ef99ef6c8303b7a60f04e4b83c2ae_Traceguids,
      BYTE4(v9));
  return (unsigned int)-1073741811;
}
