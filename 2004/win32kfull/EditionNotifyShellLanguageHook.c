/*
 * XREFs of EditionNotifyShellLanguageHook @ 0x1C0128020
 * Callers:
 *     <none>
 * Callees:
 *     ?xxxCallHook@@YAHH_K_JH@Z @ 0x1C0099E30 (-xxxCallHook@@YAHH_K_JH@Z.c)
 */

__int64 __fastcall EditionNotifyShellLanguageHook(__int64 a1, __int64 a2, int a3)
{
  __int64 result; // rax

  if ( !a3 || gLCIDSentToShell != a2 && (result = gptiRit, a1 != gptiRit) )
  {
    result = *(unsigned int *)(a1 + 672);
    if ( (((unsigned int)result | *(_DWORD *)(**(_QWORD **)(a1 + 456) + 16LL)) & 0x800) != 0 )
    {
      gLCIDSentToShell = a2;
      return xxxCallHook(8, 0LL, a2, 10);
    }
  }
  return result;
}
