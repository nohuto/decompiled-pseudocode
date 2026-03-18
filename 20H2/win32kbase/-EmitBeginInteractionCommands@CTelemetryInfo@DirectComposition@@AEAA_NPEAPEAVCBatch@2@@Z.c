/*
 * XREFs of ?EmitBeginInteractionCommands@CTelemetryInfo@DirectComposition@@AEAA_NPEAPEAVCBatch@2@@Z @ 0x1C007CFF4
 * Callers:
 *     ?BuildBatch@CApplicationChannel@DirectComposition@@IEAA_NPEAPEAVCBatch@2@0_N@Z @ 0x1C005F1C0 (-BuildBatch@CApplicationChannel@DirectComposition@@IEAA_NPEAPEAVCBatch@2@0_N@Z.c)
 * Callees:
 *     Win32FreePool @ 0x1C0057A50 (Win32FreePool.c)
 *     ?EnsureBatchBuffer@CBatch@DirectComposition@@SA_NPEAPEAV12@_KPEAPEAX@Z @ 0x1C007C3E8 (-EnsureBatchBuffer@CBatch@DirectComposition@@SA_NPEAPEAV12@_KPEAPEAX@Z.c)
 */

char __fastcall DirectComposition::CTelemetryInfo::EmitBeginInteractionCommands(
        DirectComposition::CTelemetryInfo *this,
        struct DirectComposition::CBatch **a2)
{
  char v2; // di
  DirectComposition::CTelemetryInfo *v6; // rcx
  __int64 v7; // rax
  char *v8; // rax
  void *v9; // [rsp+30h] [rbp+8h] BYREF

  v2 = 0;
  v9 = 0LL;
  while ( 1 )
  {
    if ( *(DirectComposition::CTelemetryInfo **)this == this )
      return 1;
    if ( !DirectComposition::CBatch::EnsureBatchBuffer(a2, 0x44uLL, &v9) )
      break;
    v6 = *(DirectComposition::CTelemetryInfo **)this;
    if ( *(DirectComposition::CTelemetryInfo **)(*(_QWORD *)this + 8LL) != this
      || (v7 = *(_QWORD *)v6, *(DirectComposition::CTelemetryInfo **)(*(_QWORD *)v6 + 8LL) != v6) )
    {
      __fastfail(3u);
    }
    *(_QWORD *)this = v7;
    *(_QWORD *)(v7 + 8) = this;
    v8 = (char *)v9;
    *(_DWORD *)v9 = 68;
    *((_DWORD *)v8 + 1) = 292;
    *(_OWORD *)(v8 + 12) = *((_OWORD *)v6 + 1);
    *(_OWORD *)(v8 + 28) = *((_OWORD *)v6 + 2);
    *(_OWORD *)(v8 + 44) = *((_OWORD *)v6 + 3);
    *(_QWORD *)(v8 + 60) = *((_QWORD *)v6 + 8);
    Win32FreePool((__int64)v6);
  }
  if ( *(DirectComposition::CTelemetryInfo **)this == this )
    return 1;
  return v2;
}
