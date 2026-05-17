/*
 * XREFs of _TpCaptureCaller@4 @ 0x4B2E6C40
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

struct _TEB *__stdcall TpCaptureCaller(int a1)
{
  struct _TEB *result; // eax
  _DWORD *ThreadPoolData; // edx
  int v3; // ecx
  struct _TEB *retaddr; // [esp+4h] [ebp+4h]

  result = NtCurrentTeb();
  ThreadPoolData = result->ThreadPoolData;
  if ( ThreadPoolData )
  {
    result = (struct _TEB *)(a1 - 1);
    if ( (unsigned int)(a1 - 1) <= 1 )
    {
      result = retaddr;
      v3 = ((unsigned __int8)ThreadPoolData[22] - 1) & 1;
      ThreadPoolData[22] = v3;
      ThreadPoolData[2 * v3 + 19] = a1;
      ThreadPoolData[2 * v3 + 18] = retaddr;
    }
  }
  return result;
}
