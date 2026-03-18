/*
 * XREFs of HvpViewMapDeleteViewTreeNode @ 0x1406E4C8C
 * Callers:
 *     HvpViewMapCleanup @ 0x1406E0E88 (HvpViewMapCleanup.c)
 * Callees:
 *     CmSiFreeMemory @ 0x1402E2170 (CmSiFreeMemory.c)
 *     CmSiUnmapViewOfSection @ 0x14031C6A8 (CmSiUnmapViewOfSection.c)
 */

void __fastcall HvpViewMapDeleteViewTreeNode(PPRIVILEGE_SET Privileges, __int64 a2)
{
  void *v2; // r8

  v2 = *(void **)&Privileges[2].Privilege[0].Attributes;
  if ( v2 )
    CmSiUnmapViewOfSection((__int64)Privileges, *(HANDLE **)(a2 + 24), v2);
  CmSiFreeMemory(Privileges);
}
