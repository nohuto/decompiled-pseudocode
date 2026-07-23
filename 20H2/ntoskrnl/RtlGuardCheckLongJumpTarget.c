/*
 * XREFs of RtlGuardCheckLongJumpTarget @ 0x14058DA38
 * Callers:
 *     RtlGuardRestoreContext @ 0x1402E7368 (RtlGuardRestoreContext.c)
 * Callees:
 *     RtlpControlFlowGuardEnforced @ 0x1402E74A0 (RtlpControlFlowGuardEnforced.c)
 *     RtlPcToFileHeader @ 0x1402FEEF0 (RtlPcToFileHeader.c)
 *     bsearch_s @ 0x1403D1C20 (bsearch_s.c)
 *     RtlFailFast2 @ 0x140406490 (RtlFailFast2.c)
 *     LdrImageDirectoryEntryToLoadConfig @ 0x140756028 (LdrImageDirectoryEntryToLoadConfig.c)
 */

NTSTATUS __cdecl RtlGuardCheckLongJumpTarget(PVOID PcValue, BOOL IsFastFail, PBOOL IsLongJumpTarget)
{
  __int64 Config; // rax
  rsize_t v5; // r8
  int Key; // [rsp+48h] [rbp+10h] BYREF
  PVOID BaseOfImage; // [rsp+50h] [rbp+18h] BYREF

  Key = 0;
  BaseOfImage = 0LL;
  if ( (unsigned int)RtlpControlFlowGuardEnforced() )
  {
    RtlPcToFileHeader(PcValue, &BaseOfImage);
    if ( !BaseOfImage
      || (Config = LdrImageDirectoryEntryToLoadConfig(BaseOfImage)) != 0
      && *(_DWORD *)Config >= 0xC0u
      && (*(_DWORD *)(Config + 144) & 0x10000) != 0
      && ((Key = (_DWORD)PcValue - (_DWORD)BaseOfImage, (v5 = *(_QWORD *)(Config + 184)) == 0)
       || !bsearch_s(
             &Key,
             *(const void **)(Config + 176),
             v5,
             (unsigned int)((*(_DWORD *)(Config + 144) >> 28) + 4),
             (int (__cdecl *)(void *, const void *, const void *))RtlpTargetCompare,
             0LL)) )
    {
      RtlFailFast2(0x26u);
    }
  }
  return 0;
}
