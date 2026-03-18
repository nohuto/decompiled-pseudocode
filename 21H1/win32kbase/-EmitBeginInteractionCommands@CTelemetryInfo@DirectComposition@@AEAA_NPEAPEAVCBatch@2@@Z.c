/*
 * XREFs of ?EmitBeginInteractionCommands@CTelemetryInfo@DirectComposition@@AEAA_NPEAPEAVCBatch@2@@Z @ 0x1C00BEAB4
 * Callers:
 *     ?BuildBatch@CApplicationChannel@DirectComposition@@IEAA_NPEAPEAVCBatch@2@0_N@Z @ 0x1C00B8F90 (-BuildBatch@CApplicationChannel@DirectComposition@@IEAA_NPEAPEAVCBatch@2@0_N@Z.c)
 * Callees:
 *     Win32FreePool @ 0x1C008C9A0 (Win32FreePool.c)
 *     ?EnsureBatchBuffer@CBatch@DirectComposition@@SA_NPEAPEAV12@_KPEAPEAX@Z @ 0x1C00BD728 (-EnsureBatchBuffer@CBatch@DirectComposition@@SA_NPEAPEAV12@_KPEAPEAX@Z.c)
 */

char __fastcall DirectComposition::CTelemetryInfo::EmitBeginInteractionCommands(
        DirectComposition::CTelemetryInfo *this,
        struct DirectComposition::CBatch ***a2)
{
  char v2; // di
  __int64 v6; // rdx
  __int64 v7; // r8
  DirectComposition::CTelemetryInfo *v8; // rcx
  __int64 v9; // rax
  char *v10; // rax
  void *v11; // [rsp+30h] [rbp+8h] BYREF

  v2 = 0;
  v11 = 0LL;
  while ( 1 )
  {
    if ( *(DirectComposition::CTelemetryInfo **)this == this )
      return 1;
    if ( !DirectComposition::CBatch::EnsureBatchBuffer(a2, 0x44uLL, &v11) )
      break;
    v8 = *(DirectComposition::CTelemetryInfo **)this;
    if ( *(DirectComposition::CTelemetryInfo **)(*(_QWORD *)this + 8LL) != this
      || (v9 = *(_QWORD *)v8, *(DirectComposition::CTelemetryInfo **)(*(_QWORD *)v8 + 8LL) != v8) )
    {
      __fastfail(3u);
    }
    *(_QWORD *)this = v9;
    *(_QWORD *)(v9 + 8) = this;
    v10 = (char *)v11;
    *(_DWORD *)v11 = 68;
    *((_DWORD *)v10 + 1) = 292;
    *(_OWORD *)(v10 + 12) = *((_OWORD *)v8 + 1);
    *(_OWORD *)(v10 + 28) = *((_OWORD *)v8 + 2);
    *(_OWORD *)(v10 + 44) = *((_OWORD *)v8 + 3);
    *(_QWORD *)(v10 + 60) = *((_QWORD *)v8 + 8);
    Win32FreePool((__int64)v8, v6, v7);
  }
  if ( *(DirectComposition::CTelemetryInfo **)this == this )
    return 1;
  return v2;
}
