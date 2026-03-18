/*
 * XREFs of _FreeProcessMessageFilter@4 @ 0x9D7E4
 * Callers:
 *     <none>
 * Callees:
 *     ?MsgLookupTableCleanUp@@YGXPAPAX@Z @ 0x9D804 (-MsgLookupTableCleanUp@@YGXPAPAX@Z.c)
 */

void __stdcall FreeProcessMessageFilter(int a1)
{
  void **v1; // [esp+0h] [ebp-4h]

  MsgLookupTableCleanUp(v1);
  *(_DWORD *)(a1 + 480) = 0;
}
