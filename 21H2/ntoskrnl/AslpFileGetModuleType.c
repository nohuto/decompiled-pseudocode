/*
 * XREFs of AslpFileGetModuleType @ 0x14096B920
 * Callers:
 *     AslFileAllocAndGetAttributes @ 0x1407B2664 (AslFileAllocAndGetAttributes.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall AslpFileGetModuleType(_DWORD *a1, __int64 a2)
{
  switch ( *(_DWORD *)(a2 + 64) )
  {
    case 4:
      *a1 = 1;
      break;
    case 5:
      *a1 = 2;
      break;
    case 6:
      *a1 = 3;
      break;
    default:
      *a1 = 0;
      break;
  }
  return 0LL;
}
