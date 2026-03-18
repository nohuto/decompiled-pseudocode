/*
 * XREFs of ?EmitEndInteractionCommands@CTelemetryInfo@DirectComposition@@AEAA_NPEAPEAVCBatch@2@@Z @ 0x1C00BE964
 * Callers:
 *     ?BuildBatch@CApplicationChannel@DirectComposition@@IEAA_NPEAPEAVCBatch@2@0_N@Z @ 0x1C00B8F90 (-BuildBatch@CApplicationChannel@DirectComposition@@IEAA_NPEAPEAVCBatch@2@0_N@Z.c)
 * Callees:
 *     Win32FreePool @ 0x1C008C9A0 (Win32FreePool.c)
 *     ?EnsureBatchBuffer@CBatch@DirectComposition@@SA_NPEAPEAV12@_KPEAPEAX@Z @ 0x1C00BD728 (-EnsureBatchBuffer@CBatch@DirectComposition@@SA_NPEAPEAV12@_KPEAPEAX@Z.c)
 */

bool __fastcall DirectComposition::CTelemetryInfo::EmitEndInteractionCommands(
        DirectComposition::CTelemetryInfo *this,
        struct DirectComposition::CBatch ***a2)
{
  char *v2; // rbx
  bool v4; // zf
  __int64 v6; // r8
  _QWORD *v7; // rcx
  __int64 v8; // rax
  char *v9; // rdx
  void *v10; // [rsp+30h] [rbp+8h] BYREF

  v10 = 0LL;
  v2 = (char *)this + 32;
  while ( 1 )
  {
    v4 = *(_QWORD *)v2 == (_QWORD)v2;
    if ( *(char **)v2 == v2 )
      break;
    if ( !DirectComposition::CBatch::EnsureBatchBuffer(a2, 0x14uLL, &v10) )
      return *(_QWORD *)v2 == (_QWORD)v2;
    v7 = *(_QWORD **)v2;
    if ( *(char **)(*(_QWORD *)v2 + 8LL) != v2 || (v8 = *v7, *(_QWORD **)(*v7 + 8LL) != v7) )
      __fastfail(3u);
    *(_QWORD *)v2 = v8;
    *(_QWORD *)(v8 + 8) = v2;
    v9 = (char *)v10;
    *(_DWORD *)v10 = 20;
    *((_DWORD *)v9 + 1) = 293;
    *(_QWORD *)(v9 + 12) = v7[2];
    Win32FreePool((__int64)v7, (__int64)v9, v6);
  }
  return v4;
}
