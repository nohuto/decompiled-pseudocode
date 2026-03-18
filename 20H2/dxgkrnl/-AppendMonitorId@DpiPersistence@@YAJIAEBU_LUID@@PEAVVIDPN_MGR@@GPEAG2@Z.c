/*
 * XREFs of ?AppendMonitorId@DpiPersistence@@YAJIAEBU_LUID@@PEAVVIDPN_MGR@@GPEAG2@Z @ 0x1C01432BC
 * Callers:
 *     ?CreateMonitorSetId@DpiPersistence@@YAJAEBU_LUID@@IPEAU_UNICODE_STRING@@PEA_N@Z @ 0x1C0142FD4 (-CreateMonitorSetId@DpiPersistence@@YAJAEBU_LUID@@IPEAU_UNICODE_STRING@@PEA_N@Z.c)
 * Callees:
 *     ?RtlStringCchLengthW@@YAJPEBG_KPEA_K@Z @ 0x1C00093C0 (-RtlStringCchLengthW@@YAJPEBG_KPEA_K@Z.c)
 *     ?GetMonitorIdFromTargetId@DpiPersistence@@YAJIAEBU_LUID@@PEAVVIDPN_MGR@@GPEAG@Z @ 0x1C0143340 (-GetMonitorIdFromTargetId@DpiPersistence@@YAJIAEBU_LUID@@PEAVVIDPN_MGR@@GPEAG@Z.c)
 */

__int64 __fastcall DpiPersistence::AppendMonitorId(
        DpiPersistence *this,
        unsigned int *a2,
        const struct _LUID *a3,
        struct VIDPN_MGR *a4,
        _WORD *a5,
        unsigned __int16 *a6)
{
  __int64 v7; // rdi
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // rbx
  int v11; // eax
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v15; // rax
  _QWORD *v16; // rax
  unsigned __int16 *v17; // [rsp+28h] [rbp-20h]
  unsigned __int64 v18[3]; // [rsp+30h] [rbp-18h] BYREF

  v7 = (unsigned __int16)a4;
  LODWORD(v10) = DpiPersistence::GetMonitorIdFromTargetId(
                   this,
                   (unsigned int)a2,
                   a3,
                   (struct VIDPN_MGR *)(unsigned __int16)a4,
                   (unsigned __int16)a6,
                   v17);
  if ( (int)v10 < 0 )
  {
    v15 = WdLogNewEntry5_WdError(v9, v8);
    *(_QWORD *)(v15 + 24) = 159LL;
    WdLogEvent5_WdError(v15);
  }
  else
  {
    v18[0] = 0LL;
    v11 = RtlStringCchLengthW(a6, (unsigned int)v7, v18);
    v10 = v11;
    if ( v11 < 0 )
    {
      v16 = (_QWORD *)WdLogNewEntry5_WdAssertion(v13, v12);
      v16[6] = (int)a2[1];
      v16[7] = *a2;
      v16[3] = v10;
      v16[4] = a6;
      v16[5] = v7;
      WdLogEvent5_WdAssertion(v16);
    }
    else
    {
      *a5 = v18[0];
    }
  }
  return (unsigned int)v10;
}
