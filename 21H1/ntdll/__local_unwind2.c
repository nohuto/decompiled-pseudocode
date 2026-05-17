/*
 * XREFs of __local_unwind2 @ 0x4B2FB865
 * Callers:
 *     __unwind_handler @ 0x4B2FB820 (__unwind_handler.c)
 * Callees:
 *     __NLG_Notify @ 0x4B2FB915 (__NLG_Notify.c)
 *     __NLG_Call @ 0x4B2FB934 (__NLG_Call.c)
 */

int __cdecl _local_unwind2(int a1, unsigned int a2)
{
  int result; // eax
  int v3; // ebx
  unsigned int v4; // esi
  int v5; // esi
  int v6; // ecx
  int v7; // [esp-4h] [ebp-24h]
  _EXCEPTION_REGISTRATION_RECORD *ExceptionList; // [esp+0h] [ebp-20h]

  ExceptionList = NtCurrentTeb()->NtTib.ExceptionList;
  while ( 1 )
  {
    result = a1;
    v3 = *(_DWORD *)(a1 + 8);
    v4 = *(_DWORD *)(a1 + 12);
    if ( v4 == -1 || a2 != -1 && v4 <= a2 )
      break;
    v5 = 3 * v4;
    *(_DWORD *)(a1 + 12) = *(_DWORD *)(v3 + 4 * v5);
    if ( !*(_DWORD *)(v3 + 4 * v5 + 4) )
    {
      _NLG_Notify(257);
      _NLG_Call(v6, v7, ExceptionList);
    }
  }
  return result;
}
