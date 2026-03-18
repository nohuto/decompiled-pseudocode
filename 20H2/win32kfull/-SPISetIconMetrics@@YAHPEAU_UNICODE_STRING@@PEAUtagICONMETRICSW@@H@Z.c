/*
 * XREFs of ?SPISetIconMetrics@@YAHPEAU_UNICODE_STRING@@PEAUtagICONMETRICSW@@H@Z @ 0x1C01D6328
 * Callers:
 *     ?xxxSetSPIMetrics@@YAHPEAU_UNICODE_STRING@@KPEAXHPEAH@Z @ 0x1C0022F08 (-xxxSetSPIMetrics@@YAHPEAU_UNICODE_STRING@@KPEAXHPEAH@Z.c)
 * Callees:
 *     SetIconMetrics @ 0x1C00237E0 (SetIconMetrics.c)
 *     xxxInternalInvalidate @ 0x1C0042BD0 (xxxInternalInvalidate.c)
 *     ?RescaleIconMetrics@@YAXPEAUtagICONMETRICSW@@@Z @ 0x1C01D5EDC (-RescaleIconMetrics@@YAXPEAUtagICONMETRICSW@@@Z.c)
 *     ?SetWindowMetricInt@@YAHPEAU_UNICODE_STRING@@GH@Z @ 0x1C01D6A98 (-SetWindowMetricInt@@YAHPEAU_UNICODE_STRING@@GH@Z.c)
 */

__int64 __fastcall SPISetIconMetrics(struct _UNICODE_STRING *a1, struct tagICONMETRICSW *a2, __int64 a3)
{
  struct tagWND *v4; // rdi
  unsigned int v5; // esi
  int v6; // ebx
  BOOL v8; // eax
  int v9; // esi
  int v10; // esi
  int v11; // esi
  __int64 v12; // rax

  v4 = 0LL;
  v5 = 0;
  v6 = a3;
  RescaleIconMetrics(a2, (__int64)a2, a3);
  v8 = v6 == 0;
  if ( v6 )
  {
    v9 = SetWindowMetricInt(a1, 0x40u, *((_DWORD *)a2 + 1));
    v10 = SetWindowMetricInt(a1, 0x41u, *((_DWORD *)a2 + 2)) & v9;
    v11 = SetWindowMetricInt(a1, 0x42u, *((_DWORD *)a2 + 3)) & v10;
    v5 = FastWriteProfileValue(a1, 23LL, 154LL, 3LL, (char *)a2 + 16, 92) & v11;
    v8 = v5;
  }
  if ( v8 )
  {
    SetIconMetrics(a1, a2);
    v12 = *(_QWORD *)(gptiCurrent + 456LL);
    if ( v12 )
      v4 = *(struct tagWND **)(*(_QWORD *)(v12 + 8) + 24LL);
    xxxInternalInvalidate(v4, (HRGN)1, 0x10485u);
  }
  return v5;
}
