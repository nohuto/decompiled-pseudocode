/*
 * XREFs of IvtUpdateScalableModePasidTablesForPasid @ 0x14052FFE0
 * Callers:
 *     IvtUpdateScalableModeTranslationStructures @ 0x1405300A8 (IvtUpdateScalableModeTranslationStructures.c)
 *     IvtSetupScalableModeDefaultPasidTables @ 0x140A64748 (IvtSetupScalableModeDefaultPasidTables.c)
 * Callees:
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     memset @ 0x140435E00 (memset.c)
 *     IvtBuildScalableModePasidDirectoryEntry @ 0x14052E2BC (IvtBuildScalableModePasidDirectoryEntry.c)
 *     IvtBuildScalableModePasidTableS2Entry @ 0x14052E304 (IvtBuildScalableModePasidTableS2Entry.c)
 *     IvtSetScalableModePasidTableEntry @ 0x14052F800 (IvtSetScalableModePasidTableEntry.c)
 */

LONGLONG __fastcall IvtUpdateScalableModePasidTablesForPasid(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        int a4,
        __int16 a5,
        __int64 a6)
{
  __int64 v9; // rcx
  __int64 v10; // r8
  __int64 v11; // rcx
  LONGLONG result; // rax
  int v13; // [rsp+20h] [rbp-78h]
  LONGLONG v14[2]; // [rsp+30h] [rbp-68h] BYREF
  signed __int64 v15[8]; // [rsp+40h] [rbp-58h] BYREF

  v14[0] = 0LL;
  memset(v15, 0, sizeof(v15));
  if ( a4 != 1 )
    IvtBuildScalableModePasidTableS2Entry(a1, a4, a5, a6, v13, v15);
  IvtSetScalableModePasidTableEntry(v9, a2, v10, v15);
  IvtBuildScalableModePasidDirectoryEntry(v11, a2, 0, (__int64)v14, v14);
  result = v14[0];
  **(_QWORD **)(a2 + 48) = v14[0];
  return result;
}
