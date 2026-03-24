/*
 * XREFs of CmpCopyCompressedName @ 0x140669F74
 * Callers:
 *     CmpConstructNameFromKeyNodes @ 0x1405F3210 (CmpConstructNameFromKeyNodes.c)
 *     CmpQueryKeyValueData @ 0x1405F7EB0 (CmpQueryKeyValueData.c)
 *     CmpAddSubKeyToList @ 0x140669DA0 (CmpAddSubKeyToList.c)
 *     CmpPopulateKeyNodeInformation @ 0x14066A590 (CmpPopulateKeyNodeInformation.c)
 *     CmpMarkIndexDirty @ 0x14066C5EC (CmpMarkIndexDirty.c)
 *     CmpInitializeValueNameString @ 0x1406A45C8 (CmpInitializeValueNameString.c)
 *     CmAddLogForAction @ 0x1406AFE4C (CmAddLogForAction.c)
 *     CmpConstructNameFromKcbNameBlocks @ 0x140778C38 (CmpConstructNameFromKcbNameBlocks.c)
 *     CmpInitializeKeyNameString @ 0x140879188 (CmpInitializeKeyNameString.c)
 *     CmpLoadHiveVolatile @ 0x14087CF5C (CmpLoadHiveVolatile.c)
 *     CmpPopulateKeyBasicInformation @ 0x140882644 (CmpPopulateKeyBasicInformation.c)
 *     CmSelectQualifiedInstallLanguage @ 0x140A5F7C0 (CmSelectQualifiedInstallLanguage.c)
 *     CmpGetNodeName @ 0x140A61278 (CmpGetNodeName.c)
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
