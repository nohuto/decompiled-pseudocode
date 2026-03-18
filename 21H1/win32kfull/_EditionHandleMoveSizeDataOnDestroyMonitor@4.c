/*
 * XREFs of _EditionHandleMoveSizeDataOnDestroyMonitor@4 @ 0xD48F0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

int __stdcall EditionHandleMoveSizeDataOnDestroyMonitor(int a1)
{
  int *v1; // ecx
  int result; // eax

  v1 = (int *)gActiveMoveSizeDataList;
  result = *(_DWORD *)(_gpDispInfo + 52);
  if ( !result )
    result = _gpMonitorCached;
  if ( (int *)gActiveMoveSizeDataList != &gActiveMoveSizeDataList )
  {
    do
    {
      if ( v1[48] == a1 )
        v1[48] = result;
      if ( v1[49] == a1 )
        v1[49] = result;
      if ( v1[51] == a1 )
        v1[51] = result;
      v1 = (int *)*v1;
    }
    while ( v1 != &gActiveMoveSizeDataList );
  }
  return result;
}
