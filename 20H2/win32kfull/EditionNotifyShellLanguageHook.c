/*
 * XREFs of EditionNotifyShellLanguageHook @ 0x1C012A030
 * Callers:
 *     <none>
 * Callees:
 *     ?xxxCallHook@@YAHH_K_JH@Z @ 0x1C0055B10 (-xxxCallHook@@YAHH_K_JH@Z.c)
 */

__int64 __fastcall EditionNotifyShellLanguageHook(__int64 a1, __int64 a2, int a3)
{
  __int64 result; // rax

  if ( !a3 || gLCIDSentToShell != a2 && (result = gptiRit, a1 != gptiRit) )
  {
    result = *(unsigned int *)(a1 + 680);
    if ( (((unsigned int)result | *(_DWORD *)(**(_QWORD **)(a1 + 464) + 16LL)) & 0x800) != 0 )
    {
      gLCIDSentToShell = a2;
      return xxxCallHook(8, 0LL, a2, 10);
    }
  }
  return result;
}
