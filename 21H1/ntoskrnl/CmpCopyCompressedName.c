/*
 * XREFs of CmpCopyCompressedName @ 0x1406937C4
 * Callers:
 *     CmpConstructNameFromKeyNodes @ 0x14061E010 (CmpConstructNameFromKeyNodes.c)
 *     CmpQueryKeyValueData @ 0x140620F80 (CmpQueryKeyValueData.c)
 *     CmpInitializeValueNameString @ 0x140657FD8 (CmpInitializeValueNameString.c)
 *     CmpMarkIndexDirty @ 0x140691EE8 (CmpMarkIndexDirty.c)
 *     CmpRemoveSubKeyFromList @ 0x140692D44 (CmpRemoveSubKeyFromList.c)
 *     CmpPopulateKeyNodeInformation @ 0x140693080 (CmpPopulateKeyNodeInformation.c)
 *     CmpAddSubKeyToList @ 0x1406933B0 (CmpAddSubKeyToList.c)
 *     CmAddLogForAction @ 0x1406DBB4C (CmAddLogForAction.c)
 *     CmpConstructNameFromKcbNameBlocks @ 0x140764238 (CmpConstructNameFromKcbNameBlocks.c)
 *     CmpInitializeKeyNameString @ 0x1408749C8 (CmpInitializeKeyNameString.c)
 *     CmpLoadHiveVolatile @ 0x140878768 (CmpLoadHiveVolatile.c)
 *     CmpPopulateKeyBasicInformation @ 0x14087E268 (CmpPopulateKeyBasicInformation.c)
 *     CmpGetNodeName @ 0x140A59A48 (CmpGetNodeName.c)
 *     CmSelectQualifiedInstallLanguage @ 0x140A59BB4 (CmSelectQualifiedInstallLanguage.c)
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
