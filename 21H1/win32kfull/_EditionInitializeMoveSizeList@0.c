/*
 * XREFs of _EditionInitializeMoveSizeList@0 @ 0xECA12
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

int *__stdcall EditionInitializeMoveSizeList()
{
  int *result; // eax

  result = &gActiveMoveSizeDataList;
  dword_275528 = (int)&gActiveMoveSizeDataList;
  gActiveMoveSizeDataList = (int)&gActiveMoveSizeDataList;
  return result;
}
