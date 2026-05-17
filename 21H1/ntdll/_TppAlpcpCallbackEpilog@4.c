/*
 * XREFs of _TppAlpcpCallbackEpilog@4 @ 0x4B2B6DA0
 * Callers:
 *     _TppCallbackEpilog@4 @ 0x4B2B6183 (_TppCallbackEpilog@4.c)
 * Callees:
 *     _RtlpHpAppCompatDontChangePolicy@0 @ 0x4B2ED850 (_RtlpHpAppCompatDontChangePolicy@0.c)
 */

int __stdcall TppAlpcpCallbackEpilog(int a1)
{
  int result; // eax

  result = _InterlockedExchangeAdd((volatile signed __int32 *)a1, 0xFFFFFFFF);
  if ( !result )
    return (**(int (__thiscall ***)(_DWORD, int))(a1 + 4))(**(_DWORD **)(a1 + 4), a1);
  return result;
}
