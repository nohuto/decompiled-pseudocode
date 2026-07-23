/*
 * XREFs of RtlGuardCheckExceptionHandler @ 0x1402E69A0
 * Callers:
 *     RtlGuardRestoreContext @ 0x1402E6944 (RtlGuardRestoreContext.c)
 * Callees:
 *     RtlpControlFlowGuardEnforced @ 0x1402E6A7C (RtlpControlFlowGuardEnforced.c)
 *     RtlPcToFileHeader @ 0x14034F460 (RtlPcToFileHeader.c)
 *     bsearch_s @ 0x1403CEF90 (bsearch_s.c)
 *     RtlFailFast2 @ 0x140400090 (RtlFailFast2.c)
 *     LdrImageDirectoryEntryToLoadConfig @ 0x140747448 (LdrImageDirectoryEntryToLoadConfig.c)
 */

__int64 __fastcall RtlGuardCheckExceptionHandler(PVOID PcValue, char a2)
{
  PVOID v3; // rbx
  __int64 Config; // rax
  __int64 v5; // rdx
  rsize_t v6; // r8
  unsigned int v7; // eax
  int Key; // [rsp+48h] [rbp+10h] BYREF
  PVOID BaseOfImage; // [rsp+50h] [rbp+18h] BYREF

  LOBYTE(Key) = a2;
  BaseOfImage = 0LL;
  if ( (unsigned int)RtlpControlFlowGuardEnforced() )
  {
    RtlPcToFileHeader(PcValue, &BaseOfImage);
    v3 = BaseOfImage;
    if ( BaseOfImage )
    {
      Config = LdrImageDirectoryEntryToLoadConfig(BaseOfImage);
      v5 = Config;
      if ( Config )
      {
        if ( *(_DWORD *)Config >= 0x118u
          && (*(_DWORD *)(Config + 144) & 0x400000) != 0
          && *(_QWORD *)(Config + 264) > (unsigned __int64)v3 )
        {
          Key = (_DWORD)PcValue - (_DWORD)v3;
          v6 = *(_QWORD *)(Config + 272);
          v7 = (*(_DWORD *)(Config + 144) >> 28) + 4;
          if ( !v6 || !bsearch_s(&Key, *(const void **)(v5 + 264), v6, v7, RtlpTargetCompare, 0LL) )
            RtlFailFast2(38LL, PcValue);
        }
      }
    }
  }
  return 0LL;
}
