/*
 * XREFs of RtlGuardCheckExceptionHandler @ 0x14032BAD0
 * Callers:
 *     RtlGuardRestoreContext @ 0x14032BA74 (RtlGuardRestoreContext.c)
 * Callees:
 *     RtlPcToFileHeader @ 0x140311C70 (RtlPcToFileHeader.c)
 *     RtlpControlFlowGuardEnforced @ 0x14032BBB8 (RtlpControlFlowGuardEnforced.c)
 *     bsearch_s @ 0x1403CE150 (bsearch_s.c)
 *     Feature_Servicing_EHCONT_Checks_28208890__private_IsEnabled @ 0x1403F13E0 (Feature_Servicing_EHCONT_Checks_28208890__private_IsEnabled.c)
 *     RtlFailFast2 @ 0x1403FEE00 (RtlFailFast2.c)
 *     LdrImageDirectoryEntryToLoadConfig @ 0x1407458C8 (LdrImageDirectoryEntryToLoadConfig.c)
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
  if ( (unsigned int)Feature_Servicing_EHCONT_Checks_28208890__private_IsEnabled() )
  {
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
  }
  return 0LL;
}
