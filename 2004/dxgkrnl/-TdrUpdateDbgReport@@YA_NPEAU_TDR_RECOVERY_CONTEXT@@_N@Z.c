/*
 * XREFs of ?TdrUpdateDbgReport@@YA_NPEAU_TDR_RECOVERY_CONTEXT@@_N@Z @ 0x1C0265F50
 * Callers:
 *     ?TdrCollectDbgInfoStage1@@YAXPEAU_TDR_RECOVERY_CONTEXT@@_N@Z @ 0x1C0264750 (-TdrCollectDbgInfoStage1@@YAXPEAU_TDR_RECOVERY_CONTEXT@@_N@Z.c)
 *     ?TdrCollectDbgInfoStage2@@YAXPEAU_TDR_RECOVERY_CONTEXT@@@Z @ 0x1C02652A0 (-TdrCollectDbgInfoStage2@@YAXPEAU_TDR_RECOVERY_CONTEXT@@@Z.c)
 *     ?TdrCompleteRecoveryContext@@YAXPEAU_TDR_RECOVERY_CONTEXT@@_N1@Z @ 0x1C02654D0 (-TdrCompleteRecoveryContext@@YAXPEAU_TDR_RECOVERY_CONTEXT@@_N1@Z.c)
 *     ?TdrIsRecoveryRequired@@YA_NPEAU_TDR_RECOVERY_CONTEXT@@@Z @ 0x1C02659F0 (-TdrIsRecoveryRequired@@YA_NPEAU_TDR_RECOVERY_CONTEXT@@@Z.c)
 * Callees:
 *     ?TdrGetDbgOwnerTag@@YA_KPEBU_TDR_RECOVERY_CONTEXT@@@Z @ 0x1C0265884 (-TdrGetDbgOwnerTag@@YA_KPEBU_TDR_RECOVERY_CONTEXT@@@Z.c)
 *     ?TdrRetrieveSecondaryBucketingKey@@YAXPEAU_TDR_RECOVERY_CONTEXT@@PEAK@Z @ 0x1C0265EA8 (-TdrRetrieveSecondaryBucketingKey@@YAXPEAU_TDR_RECOVERY_CONTEXT@@PEAK@Z.c)
 *     ?TdrUpdateDbgBuffer@@YAXPEAU_TDR_RECOVERY_CONTEXT@@@Z @ 0x1C0265EF8 (-TdrUpdateDbgBuffer@@YAXPEAU_TDR_RECOVERY_CONTEXT@@@Z.c)
 *     DpiIsRfxVgpuDevice @ 0x1C02C663C (DpiIsRfxVgpuDevice.c)
 */

char __fastcall TdrUpdateDbgReport(struct _TDR_RECOVERY_CONTEXT *a1, char a2)
{
  __int64 v2; // r9
  char v3; // r10
  __int64 v5; // rcx
  __int64 v6; // r8
  __int64 v8; // rdi
  __int64 v9; // r9
  __int64 v10; // r10
  bool v11; // r11
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // rax
  __int64 v15; // rdx
  __int64 v16; // rcx
  __int64 v17; // rax
  __int64 v18; // rdx
  __int64 v19; // rcx
  __int64 v20; // rax
  __int64 v21; // rdx
  __int64 v22; // rcx
  unsigned int v23; // [rsp+60h] [rbp+8h] BYREF

  v2 = *((_QWORD *)a1 + 4);
  v3 = a2;
  if ( v2 )
  {
    v5 = *(_QWORD *)(v2 + 216);
    v6 = *(_QWORD *)(v5 + 64);
    if ( v6 )
    {
      if ( *(_DWORD *)(v6 + 16) == 1953656900 && (unsigned int)(*(_DWORD *)(v6 + 20) - 2) <= 1 && *(_BYTE *)(v6 + 2695) )
        return 0;
    }
    if ( (unsigned __int8)DpiIsRfxVgpuDevice(v5) )
      return 0;
  }
  v8 = *((_QWORD *)a1 + 354);
  if ( !v8 || v3 )
  {
    TdrGetDbgOwnerTag(a1);
    v23 = 0;
    TdrRetrieveSecondaryBucketingKey(a1, &v23);
    if ( v9 )
      v11 = *(_QWORD *)(v9 + 2704) == 0LL;
    else
      v11 = 0;
    if ( *((_DWORD *)a1 + 4) == 6 )
      v12 = (unsigned int)(*((_BYTE *)a1 + 2812) != 0) + 321;
    else
      v12 = 279LL;
    if ( v9 )
      v13 = *(_QWORD *)(v9 + 216);
    else
      v13 = 0LL;
    v14 = WdDbgReportRecreate(v13, v12, a1, v10, v23, *((_QWORD *)a1 + 350), v11, v8, 0);
    *((_QWORD *)a1 + 354) = v14;
    if ( !v14 )
    {
      v17 = WdLogNewEntry5_WdError(v16, v15);
      *(_QWORD *)(v17 + 24) = a1;
LABEL_21:
      WdLogEvent5_WdError(v17);
      return 0;
    }
    if ( !(unsigned __int8)WdDbgReportQueryInfo(v14, (char *)a1 + 120) )
    {
      v20 = WdLogNewEntry5_WdError(v19, v18);
      *(_QWORD *)(v20 + 24) = a1;
      WdLogEvent5_WdError(v20);
    }
  }
  if ( *((_QWORD *)a1 + 355) )
  {
    if ( *((_QWORD *)a1 + 356) )
    {
      TdrUpdateDbgBuffer(a1);
      if ( !(unsigned __int8)WdDbgReportSecondaryData(
                               *((_QWORD *)a1 + 354),
                               *((_QWORD *)a1 + 355),
                               *((unsigned int *)a1 + 712)) )
      {
        *((_DWORD *)a1 + 27) |= 0x80000000;
        v17 = WdLogNewEntry5_WdError(v22, v21);
        *(_QWORD *)(v17 + 24) = a1;
        *(_QWORD *)(v17 + 32) = *((_QWORD *)a1 + 356);
        goto LABEL_21;
      }
    }
  }
  return 1;
}
