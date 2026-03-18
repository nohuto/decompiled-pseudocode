/*
 * XREFs of ?EmitAnimationCommands@CTelemetryInfo@DirectComposition@@AEAA_NPEAPEAVCBatch@2@@Z @ 0x1C00BEB6C
 * Callers:
 *     ?BuildBatch@CApplicationChannel@DirectComposition@@IEAA_NPEAPEAVCBatch@2@0_N@Z @ 0x1C00B8F90 (-BuildBatch@CApplicationChannel@DirectComposition@@IEAA_NPEAPEAVCBatch@2@0_N@Z.c)
 * Callees:
 *     Win32FreePool @ 0x1C008C9A0 (Win32FreePool.c)
 *     ?EnsureBatchBuffer@CBatch@DirectComposition@@SA_NPEAPEAV12@_KPEAPEAX@Z @ 0x1C00BD728 (-EnsureBatchBuffer@CBatch@DirectComposition@@SA_NPEAPEAV12@_KPEAPEAX@Z.c)
 *     memmove @ 0x1C00D2F00 (memmove.c)
 */

bool __fastcall DirectComposition::CTelemetryInfo::EmitAnimationCommands(
        DirectComposition::CTelemetryInfo *this,
        struct DirectComposition::CBatch ***a2)
{
  char *v3; // rdi
  __int64 v4; // rbx
  bool v5; // zf
  __int64 v7; // rax
  __int64 v8; // rdx
  __int64 v9; // r8
  __int64 v10; // rax
  void *v11; // [rsp+30h] [rbp+8h] BYREF

  v3 = (char *)this + 48;
  while ( 1 )
  {
    v4 = *(_QWORD *)v3;
    v5 = *(_QWORD *)v3 == (_QWORD)v3;
    if ( *(char **)v3 == v3 )
      return v5;
    v11 = 0LL;
    if ( *(char **)(v4 + 8) != v3 )
      goto LABEL_8;
    v7 = *(_QWORD *)v4;
    if ( *(_QWORD *)(*(_QWORD *)v4 + 8LL) != v4 )
      goto LABEL_8;
    *(_QWORD *)v3 = v7;
    *(_QWORD *)(v7 + 8) = v3;
    if ( !DirectComposition::CBatch::EnsureBatchBuffer(a2, *(unsigned int *)(v4 + 16), &v11) )
    {
      v10 = *(_QWORD *)v3;
      if ( *(char **)(*(_QWORD *)v3 + 8LL) != v3 )
LABEL_8:
        __fastfail(3u);
      *(_QWORD *)v4 = v10;
      v5 = v4 == (_QWORD)v3;
      *(_QWORD *)(v4 + 8) = v3;
      *(_QWORD *)(v10 + 8) = v4;
      *(_QWORD *)v3 = v4;
      return v5;
    }
    memmove(v11, (const void *)(v4 + 20), *(unsigned int *)(v4 + 16));
    Win32FreePool(v4, v8, v9);
  }
}
