/*
 * XREFs of _Init_thread_footer @ 0x180044A80
 * Callers:
 *     ?_Init@?$numpunct@G@std@@IEAAXAEBV_Locinfo@2@_N@Z @ 0x180027A18 (-_Init@-$numpunct@G@std@@IEAAXAEBV_Locinfo@2@_N@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall Init_thread_footer(_DWORD *a1)
{
  __int64 v2; // rdx

  EnterCriticalSection(&stru_18005AA88);
  v2 = (unsigned int)TlsIndex;
  *a1 = ++dword_18005A3F0;
  *(_DWORD *)(*((_QWORD *)NtCurrentTeb()->ThreadLocalStoragePointer + v2) + 4LL) = dword_18005A3F0;
  LeaveCriticalSection(&stru_18005AA88);
  return Init_thread_notify();
}
