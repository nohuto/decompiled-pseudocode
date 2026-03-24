/*
 * XREFs of ?DmmCollectTdrDiagInfo@@YAJPEAU_TDR_RECOVERY_CONTEXT@@PEAX_K@Z @ 0x1C02DC07C
 * Callers:
 *     ?TdrCollectDbgInfoStage2@@YAXPEAU_TDR_RECOVERY_CONTEXT@@@Z @ 0x1C02654E0 (-TdrCollectDbgInfoStage2@@YAXPEAU_TDR_RECOVERY_CONTEXT@@@Z.c)
 * Callees:
 *     memset @ 0x1C0028F00 (memset.c)
 *     ?AcquireDiagInfo@VIDPN_MGR@@QEAAJQEAX_KW4DIAGINFO_TYPE@1@QEBTDIAGINFO_CONTEXT@1@QEA_K@Z @ 0x1C02DA5F4 (-AcquireDiagInfo@VIDPN_MGR@@QEAAJQEAX_KW4DIAGINFO_TYPE@1@QEBTDIAGINFO_CONTEXT@1@QEA_K@Z.c)
 */

__int64 __fastcall DmmCollectTdrDiagInfo(struct _TDR_RECOVERY_CONTEXT *a1, void *a2, size_t a3)
{
  unsigned int v3; // ebx
  __int64 v6; // rax
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // rdi
  __int64 v11; // rax
  __int64 v12; // rax
  __int64 v13; // rax
  unsigned __int64 v14; // rcx
  __int64 v15; // rax
  int v16; // eax
  __int64 v17; // rdx
  __int64 v18; // rcx
  __int64 v19; // r8
  __int64 v20; // rax
  size_t v21; // [rsp+50h] [rbp+18h] BYREF

  v21 = a3;
  v3 = 0;
  if ( !a1 )
  {
    v6 = WdLogNewEntry5_WdError(0LL, a2);
    *(_QWORD *)(v6 + 24) = 0LL;
LABEL_3:
    WdLogEvent5_WdError(v6);
    return 3221225485LL;
  }
  if ( !a2 )
  {
    v6 = WdLogNewEntry5_WdError(a1, 0LL);
    *(_QWORD *)(v6 + 24) = a1;
    goto LABEL_3;
  }
  memset(a2, 0, 0x2000uLL);
  v10 = *((_QWORD *)a1 + 4);
  if ( v10 )
  {
    v12 = *(_QWORD *)(v10 + 2696);
    if ( !v12 )
    {
      v13 = WdLogNewEntry5_WdAssertion(v9, v8);
      WdLogEvent5_WdAssertion(v13);
      v12 = *(_QWORD *)(v10 + 2696);
    }
    v14 = *(_QWORD *)(v12 + 88);
    if ( v14 )
    {
      v21 = 0LL;
      v16 = VIDPN_MGR::AcquireDiagInfo(v14, a2, 0x2000uLL, 1, 0LL, &v21);
      if ( v16 == -2147483643 )
      {
        v20 = WdLogNewEntry5_WdWarning(v18, v17, v19);
        *(_QWORD *)(v20 + 24) = 0x2000LL;
        *(_QWORD *)(v20 + 32) = v21;
        WdLogEvent5_WdWarning(v20);
        return 2147483653LL;
      }
      else
      {
        if ( v16 < 0 )
          return (unsigned int)v16;
        return v3;
      }
    }
    else
    {
      v15 = WdLogNewEntry5_WdError(0LL, v8);
      *(_QWORD *)(v15 + 24) = v10;
      WdLogEvent5_WdError(v15);
      return 3223192373LL;
    }
  }
  else
  {
    v11 = WdLogNewEntry5_WdError(v9, v8);
    *(_QWORD *)(v11 + 24) = 0LL;
    WdLogEvent5_WdError(v11);
    return 3223191554LL;
  }
}
