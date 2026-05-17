/*
 * XREFs of _TpCancelAsyncIoOperation@4 @ 0x4B2E7040
 * Callers:
 *     <none>
 * Callees:
 *     _TppBarrierAdjust@12 @ 0x4B2DDB10 (_TppBarrierAdjust@12.c)
 *     _TppIopValidateIo@12 @ 0x4B2E70F8 (_TppIopValidateIo@12.c)
 *     _RtlpHpAppCompatDontChangePolicy@0 @ 0x4B2ED850 (_RtlpHpAppCompatDontChangePolicy@0.c)
 */

int __stdcall TpCancelAsyncIoOperation(int a1)
{
  int result; // eax
  signed __int32 v2; // edx
  signed __int32 v3; // ecx

  result = TppIopValidateIo(0);
  if ( result )
  {
    v2 = *(_DWORD *)(a1 + 168);
    while ( v2 > 0 )
    {
      v3 = v2;
      result = _InterlockedCompareExchange((volatile signed __int32 *)(a1 + 168), v2 - 1, v2);
      v2 = result;
      if ( result == v3 )
      {
        result = TppBarrierAdjust((signed __int64 *)(a1 + 32), -1, 0);
        break;
      }
    }
    if ( !_InterlockedDecrement((volatile signed __int32 *)a1) )
      return (**(int (__thiscall ***)(_DWORD, int))(a1 + 4))(**(_DWORD **)(a1 + 4), a1);
  }
  return result;
}
