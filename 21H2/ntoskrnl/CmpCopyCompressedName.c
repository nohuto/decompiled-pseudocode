/*
 * XREFs of CmpCopyCompressedName @ 0x14065ED94
 * Callers:
 *     CmpInitializeValueNameString @ 0x1405E2098 (CmpInitializeValueNameString.c)
 *     CmAddLogForAction @ 0x14060E74C (CmAddLogForAction.c)
 *     CmpAddSubKeyToList @ 0x14065EBC0 (CmpAddSubKeyToList.c)
 *     CmpPopulateKeyNodeInformation @ 0x14065F3B0 (CmpPopulateKeyNodeInformation.c)
 *     CmpMarkIndexDirty @ 0x14066140C (CmpMarkIndexDirty.c)
 *     CmpConstructNameFromKeyNodes @ 0x1406E2970 (CmpConstructNameFromKeyNodes.c)
 *     CmpQueryKeyValueData @ 0x1406E7610 (CmpQueryKeyValueData.c)
 *     CmpConstructNameFromKcbNameBlocks @ 0x140778DF8 (CmpConstructNameFromKcbNameBlocks.c)
 *     CmpInitializeKeyNameString @ 0x1408792E8 (CmpInitializeKeyNameString.c)
 *     CmpLoadHiveVolatile @ 0x14087D0BC (CmpLoadHiveVolatile.c)
 *     CmpPopulateKeyBasicInformation @ 0x1408827A4 (CmpPopulateKeyBasicInformation.c)
 *     CmSelectQualifiedInstallLanguage @ 0x140A607C0 (CmSelectQualifiedInstallLanguage.c)
 *     CmpGetNodeName @ 0x140A62278 (CmpGetNodeName.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CmpCopyCompressedName(_WORD *a1, unsigned int a2, unsigned __int8 *a3, unsigned int a4)
{
  unsigned int v4; // edx
  __int64 v5; // rdx
  __int64 result; // rax

  v4 = a2 >> 1;
  if ( v4 < a4 )
    a4 = v4;
  if ( a4 )
  {
    v5 = a4;
    do
    {
      result = *a3++;
      *a1++ = result;
      --v5;
    }
    while ( v5 );
  }
  return result;
}
