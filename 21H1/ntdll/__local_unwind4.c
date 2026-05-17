/*
 * XREFs of __local_unwind4 @ 0x4B2F6EA0
 * Callers:
 *     _unwind_handler4 @ 0x4B2F6F30 (_unwind_handler4.c)
 *     __seh_longjmp_unwind4@4 @ 0x4B2F6F78 (__seh_longjmp_unwind4@4.c)
 *     @_EH4_LocalUnwind@16 @ 0x4B2F6FF0 (@_EH4_LocalUnwind@16.c)
 *     _LdrAddDllDirectory@8 @ 0x4B33CA10 (_LdrAddDllDirectory@8.c)
 *     _EvtIntReportEventWorker@48 @ 0x4B382BB1 (_EvtIntReportEventWorker@48.c)
 * Callees:
 *     __NLG_Notify @ 0x4B2FB915 (__NLG_Notify.c)
 *     __NLG_Call @ 0x4B2FB934 (__NLG_Call.c)
 */

int __cdecl _local_unwind4(_DWORD *a1, int a2, unsigned int a3)
{
  int result; // eax
  unsigned int v4; // esi
  int v5; // esi
  int v6; // ebx
  _EXCEPTION_REGISTRATION_RECORD *ExceptionList; // [esp-8h] [ebp-28h]
  int (__cdecl *v8)(int, int, int, int); // [esp-4h] [ebp-24h]

  v8 = unwind_handler4;
  ExceptionList = NtCurrentTeb()->NtTib.ExceptionList;
  while ( 1 )
  {
    result = a2;
    v4 = *(_DWORD *)(a2 + 12);
    if ( v4 == -2 || a3 != -2 && v4 <= a3 )
      break;
    v5 = 3 * v4;
    v6 = (*a1 ^ *(_DWORD *)(a2 + 8)) + 4 * v5 + 16;
    *(_DWORD *)(a2 + 12) = *(_DWORD *)((*a1 ^ *(_DWORD *)(a2 + 8)) + 4 * v5 + 0x10);
    if ( !*(_DWORD *)(v6 + 4) )
    {
      _NLG_Notify(257);
      _NLG_Call(1, ExceptionList, v8);
    }
  }
  return result;
}
