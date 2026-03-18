/*
 * XREFs of CmpCopyCompressedName @ 0x140641318
 * Callers:
 *     CmpConstructNameFromKeyNodes @ 0x1405E89F0 (CmpConstructNameFromKeyNodes.c)
 *     CmpQueryKeyValueData @ 0x1405EB960 (CmpQueryKeyValueData.c)
 *     CmpMarkIndexDirty @ 0x1406405B4 (CmpMarkIndexDirty.c)
 *     CmpRemoveSubKeyFromList @ 0x140640898 (CmpRemoveSubKeyFromList.c)
 *     CmpPopulateKeyNodeInformation @ 0x140640BD4 (CmpPopulateKeyNodeInformation.c)
 *     CmpAddSubKeyToList @ 0x140640F04 (CmpAddSubKeyToList.c)
 *     CmpInitializeValueNameString @ 0x1406433E4 (CmpInitializeValueNameString.c)
 *     CmAddLogForAction @ 0x1406FEAE8 (CmAddLogForAction.c)
 *     CmpConstructNameFromKcbNameBlocks @ 0x140765C58 (CmpConstructNameFromKcbNameBlocks.c)
 *     CmpInitializeKeyNameString @ 0x140875CB8 (CmpInitializeKeyNameString.c)
 *     CmpLoadHiveVolatile @ 0x140879A58 (CmpLoadHiveVolatile.c)
 *     CmpPopulateKeyBasicInformation @ 0x14087F558 (CmpPopulateKeyBasicInformation.c)
 *     CmSelectQualifiedInstallLanguage @ 0x140A495F4 (CmSelectQualifiedInstallLanguage.c)
 *     CmpGetNodeName @ 0x140A4B0AC (CmpGetNodeName.c)
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
