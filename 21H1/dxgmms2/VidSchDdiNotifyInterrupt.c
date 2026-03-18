/*
 * XREFs of VidSchDdiNotifyInterrupt @ 0x1C000D220
 * Callers:
 *     <none>
 * Callees:
 *     VidSchDdiNotifyInterruptWorker @ 0x1C000D330 (VidSchDdiNotifyInterruptWorker.c)
 *     VidSchiLogInterrupt @ 0x1C000D620 (VidSchiLogInterrupt.c)
 *     _guard_dispatch_icall_nop @ 0x1C0016B50 (_guard_dispatch_icall_nop.c)
 *     McTemplateK0q_EtwWriteTransfer @ 0x1C0024E80 (McTemplateK0q_EtwWriteTransfer.c)
 */

__int64 __fastcall VidSchDdiNotifyInterrupt(__int64 a1, unsigned int *a2)
{
  __int64 DxgAdapter; // rax
  __int64 v5; // r8
  __int64 v6; // rbx
  __int64 v7; // rcx
  __int64 v8; // rdx
  int v9; // ecx
  __int64 result; // rax
  __int64 v11; // rcx
  _QWORD *v12; // rax
  int v13; // [rsp+20h] [rbp-28h] BYREF
  __int64 v14; // [rsp+28h] [rbp-20h]
  char v15; // [rsp+30h] [rbp-18h]

  v13 = -1;
  v14 = 0LL;
  if ( (qword_1C0051010 & 2) != 0 )
  {
    v15 = 1;
    v13 = 4015;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      McTemplateK0q_EtwWriteTransfer(a1, &EventProfilerEnter);
  }
  else
  {
    v15 = 0;
  }
  ((void (__fastcall *)(int *, __int64))DxgCoreInterface[73])(&v13, 4015LL);
  if ( (DpiGetSchedulerCallbackState(a1) & 2) == 0
    || ((DxgAdapter = DpiGetDxgAdapter(a1), (v6 = DxgAdapter) == 0)
      ? (v7 = 0LL)
      : (v7 = *(_QWORD *)(*(_QWORD *)(DxgAdapter + 2680) + 624LL)),
        !v7) )
  {
LABEL_11:
    result = ((__int64 (__fastcall *)(int *))DxgCoreInterface[74])(&v13);
    if ( !v15 )
      return result;
    goto LABEL_17;
  }
  LOBYTE(v5) = 1;
  VidSchiLogInterrupt(v7, a2, v5);
  if ( *a2 > 0xA || (v9 = 1160, !_bittest(&v9, *a2)) || *(_QWORD *)(v6 + 2672) )
  {
    VidSchDdiNotifyInterruptWorker(*(_QWORD *)(v6 + 2680), a2, 1LL);
    goto LABEL_11;
  }
  v12 = (_QWORD *)WdLogNewEntry5_WdCriticalError(1160LL, v8);
  v12[3] = 281LL;
  v12[4] = 7LL;
  v12[5] = v6;
  v12[6] = 0LL;
  v12[7] = 0LL;
  result = WdLogEvent5_WdCriticalError(v12);
  __debugbreak();
LABEL_17:
  if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    return McTemplateK0q_EtwWriteTransfer(v11, &EventProfilerExit);
  return result;
}
