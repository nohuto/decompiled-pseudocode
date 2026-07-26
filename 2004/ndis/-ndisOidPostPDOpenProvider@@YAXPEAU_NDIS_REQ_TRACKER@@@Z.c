/*
 * XREFs of ?ndisOidPostPDOpenProvider@@YAXPEAU_NDIS_REQ_TRACKER@@@Z @ 0x1C007D560
 * Callers:
 *     <none>
 * Callees:
 *     ?ndisBugCheckEx@@YAX_K000@Z @ 0x1C005EB70 (-ndisBugCheckEx@@YAX_K000@Z.c)
 *     WPP_RECORDER_SF_qqqqd @ 0x1C007F830 (WPP_RECORDER_SF_qqqqd_ea_1C007F830.c)
 *     WPP_RECORDER_SF_qqqqq @ 0x1C007F958 (WPP_RECORDER_SF_qqqqq.c)
 */

void __fastcall ndisOidPostPDOpenProvider(struct _NDIS_REQ_TRACKER *a1, int a2, int a3, int a4)
{
  __int64 v5; // rsi
  ULONG_PTR v6; // rdi
  __int64 v7; // rax

  v5 = *(_QWORD *)(*((_QWORD *)a1 + 4) + 40LL);
  v6 = *(_QWORD *)a1;
  v7 = *(_QWORD *)a1;
  if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
  {
    WPP_RECORDER_SF_qqqqq(*((_QWORD *)WPP_GLOBAL_Control + 8), a2, a3, 26);
    v7 = *(_QWORD *)a1;
  }
  if ( !v7 && !*((_DWORD *)a1 + 10) && *(_UNKNOWN **)(v5 + 16) != &unk_1C00C8980 )
    ndisBugCheckEx(0x23uLL, 5uLL, *((_QWORD *)a1 + 2), v6);
  if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_qqqqd(*((_QWORD *)WPP_GLOBAL_Control + 8), a2, a3, a4);
}
