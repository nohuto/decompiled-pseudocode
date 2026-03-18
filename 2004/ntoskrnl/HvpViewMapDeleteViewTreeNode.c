/*
 * XREFs of HvpViewMapDeleteViewTreeNode @ 0x1407088EC
 * Callers:
 *     HvpViewMapCleanup @ 0x140703C18 (HvpViewMapCleanup.c)
 * Callees:
 *     CmSiFreeMemory @ 0x1402029C0 (CmSiFreeMemory.c)
 *     CmSiUnmapViewOfSection @ 0x14035A278 (CmSiUnmapViewOfSection.c)
 */

void __fastcall HvpViewMapDeleteViewTreeNode(PPRIVILEGE_SET Privileges, __int64 a2)
{
  void *v2; // r8

  v2 = *(void **)&Privileges[2].Privilege[0].Attributes;
  if ( v2 )
    CmSiUnmapViewOfSection((__int64)Privileges, *(HANDLE **)(a2 + 24), v2);
  CmSiFreeMemory(Privileges);
}
