/*
 * XREFs of _UIntSub@12 @ 0xE9F42
 * Callers:
 *     xxxSystemParametersInfoWorker @ 0x270DA (xxxSystemParametersInfoWorker.c)
 * Callees:
 *     <none>
 */

HRESULT __stdcall UIntSub(UINT uMinuend, UINT uSubtrahend, UINT *puResult)
{
  unsigned int v3; // ecx
  int v4; // edx
  HRESULT result; // eax

  if ( v3 < 4 )
    v4 = -1;
  else
    v4 = v3 - 4;
  result = v3 < 4 ? 0x80070216 : 0;
  *(_DWORD *)uMinuend = v4;
  return result;
}
