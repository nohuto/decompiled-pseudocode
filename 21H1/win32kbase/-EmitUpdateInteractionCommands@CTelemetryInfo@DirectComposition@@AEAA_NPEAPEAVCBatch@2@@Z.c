/*
 * XREFs of ?EmitUpdateInteractionCommands@CTelemetryInfo@DirectComposition@@AEAA_NPEAPEAVCBatch@2@@Z @ 0x1C00BE9F4
 * Callers:
 *     ?BuildBatch@CApplicationChannel@DirectComposition@@IEAA_NPEAPEAVCBatch@2@0_N@Z @ 0x1C00B8F90 (-BuildBatch@CApplicationChannel@DirectComposition@@IEAA_NPEAPEAVCBatch@2@0_N@Z.c)
 * Callees:
 *     Win32FreePool @ 0x1C008C9A0 (Win32FreePool.c)
 *     ?EnsureBatchBuffer@CBatch@DirectComposition@@SA_NPEAPEAV12@_KPEAPEAX@Z @ 0x1C00BD728 (-EnsureBatchBuffer@CBatch@DirectComposition@@SA_NPEAPEAV12@_KPEAPEAX@Z.c)
 */

bool __fastcall DirectComposition::CTelemetryInfo::EmitUpdateInteractionCommands(
        DirectComposition::CTelemetryInfo *this,
        struct DirectComposition::CBatch ***a2)
{
  char *v2; // rbx
  bool v4; // zf
  __int64 v6; // rdx
  __int64 v7; // r8
  __int64 v8; // rcx
  __int64 v9; // rax
  char *v10; // rax
  void *v11; // [rsp+30h] [rbp+8h] BYREF

  v11 = 0LL;
  v2 = (char *)this + 16;
  while ( 1 )
  {
    v4 = *(_QWORD *)v2 == (_QWORD)v2;
    if ( *(char **)v2 == v2 )
      break;
    if ( !DirectComposition::CBatch::EnsureBatchBuffer(a2, 0x64uLL, &v11) )
      return *(_QWORD *)v2 == (_QWORD)v2;
    v8 = *(_QWORD *)v2;
    if ( *(char **)(*(_QWORD *)v2 + 8LL) != v2 || (v9 = *(_QWORD *)v8, *(_QWORD *)(*(_QWORD *)v8 + 8LL) != v8) )
      __fastfail(3u);
    *(_QWORD *)v2 = v9;
    *(_QWORD *)(v9 + 8) = v2;
    v10 = (char *)v11;
    *(_DWORD *)v11 = 100;
    *((_DWORD *)v10 + 1) = 294;
    *(_OWORD *)(v10 + 12) = *(_OWORD *)(v8 + 16);
    *(_OWORD *)(v10 + 28) = *(_OWORD *)(v8 + 32);
    *(_OWORD *)(v10 + 44) = *(_OWORD *)(v8 + 48);
    *(_OWORD *)(v10 + 60) = *(_OWORD *)(v8 + 64);
    *(_OWORD *)(v10 + 76) = *(_OWORD *)(v8 + 80);
    *(_QWORD *)(v10 + 92) = *(_QWORD *)(v8 + 96);
    Win32FreePool(v8, v6, v7);
  }
  return v4;
}
