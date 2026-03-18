/*
 * XREFs of IvtSetupScalableModeDefaultPasidTables @ 0x140A64748
 * Callers:
 *     IvtInitializeIommu @ 0x140A63CE0 (IvtInitializeIommu.c)
 * Callees:
 *     IvtAllocateScalableModePasidTables @ 0x14052DC38 (IvtAllocateScalableModePasidTables.c)
 *     IvtUpdateScalableModePasidTablesForPasid @ 0x14052FFE0 (IvtUpdateScalableModePasidTablesForPasid.c)
 */

__int64 __fastcall IvtSetupScalableModeDefaultPasidTables(__int64 a1, int a2, __int64 a3, __int64 a4)
{
  __int16 v6; // bp
  int ScalableModePasidTables; // esi
  __int64 v9; // r8
  __int64 v10; // rbx
  __int64 v12; // [rsp+28h] [rbp-30h]
  __int64 v13[3]; // [rsp+40h] [rbp-18h] BYREF

  v13[0] = 0LL;
  v6 = a3;
  ScalableModePasidTables = IvtAllocateScalableModePasidTables(a1, 0xFFFFFFFF, a3, 63, v13);
  if ( ScalableModePasidTables >= 0 )
  {
    v12 = a4;
    v10 = v13[0];
    IvtUpdateScalableModePasidTablesForPasid(a1, v13[0], v9, a2, v6, v12);
    *(_QWORD *)(a1 + 104) = v10;
  }
  return (unsigned int)ScalableModePasidTables;
}
