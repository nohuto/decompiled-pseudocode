/*
 * XREFs of _TpCaptureCaller@4 @ 0x4B2E6C40
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __cdecl TpCaptureCaller(TP_TRACE_TYPE Type)
{
  _DWORD *ThreadPoolData; // edx
  int v2; // ecx
  _UNKNOWN *retaddr; // [esp+4h] [ebp+4h]

  ThreadPoolData = NtCurrentTeb()->ThreadPoolData;
  if ( ThreadPoolData )
  {
    if ( (unsigned int)(Type - 1) <= 1 )
    {
      v2 = ((unsigned __int8)ThreadPoolData[22] - 1) & 1;
      ThreadPoolData[22] = v2;
      ThreadPoolData[2 * v2 + 19] = Type;
      ThreadPoolData[2 * v2 + 18] = retaddr;
    }
  }
}
