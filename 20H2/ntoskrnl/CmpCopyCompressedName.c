/*
 * XREFs of CmpCopyCompressedName @ 0x140703E94
 * Callers:
 *     CmpConstructNameFromKeyNodes @ 0x140675EC0 (CmpConstructNameFromKeyNodes.c)
 *     CmpQueryKeyValueData @ 0x14067AB00 (CmpQueryKeyValueData.c)
 *     CmpInitializeValueNameString @ 0x1406A553C (CmpInitializeValueNameString.c)
 *     CmAddLogForAction @ 0x1406D1718 (CmAddLogForAction.c)
 *     CmpMarkIndexDirty @ 0x140701C64 (CmpMarkIndexDirty.c)
 *     CmpPopulateKeyNodeInformation @ 0x1407036CC (CmpPopulateKeyNodeInformation.c)
 *     CmpAddSubKeyToList @ 0x140703A3C (CmpAddSubKeyToList.c)
 *     CmpConstructNameFromKcbNameBlocks @ 0x140774C88 (CmpConstructNameFromKcbNameBlocks.c)
 *     CmpInitializeKeyNameString @ 0x14087B808 (CmpInitializeKeyNameString.c)
 *     CmpLoadHiveVolatile @ 0x14087F5C8 (CmpLoadHiveVolatile.c)
 *     CmpPopulateKeyBasicInformation @ 0x1408850AC (CmpPopulateKeyBasicInformation.c)
 *     CmpGetNodeName @ 0x140A5FE48 (CmpGetNodeName.c)
 *     CmSelectQualifiedInstallLanguage @ 0x140A5FFB4 (CmSelectQualifiedInstallLanguage.c)
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
