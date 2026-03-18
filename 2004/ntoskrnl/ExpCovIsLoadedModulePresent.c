/*
 * XREFs of ExpCovIsLoadedModulePresent @ 0x140953E1C
 * Callers:
 *     ExpCovQueryInfoCallBack @ 0x140954110 (ExpCovQueryInfoCallBack.c)
 *     ExpCovResetInfoCallBack @ 0x1409549E0 (ExpCovResetInfoCallBack.c)
 * Callees:
 *     ExpCovIsModulePresent @ 0x140953E54 (ExpCovIsModulePresent.c)
 */

char __fastcall ExpCovIsLoadedModulePresent(__int64 a1, unsigned int a2, __int64 a3, __int64 a4)
{
  __int64 v5; // rdx

  v5 = *(_QWORD *)(a1 + 128);
  if ( v5 )
    return ExpCovIsModulePresent(a1 + 88, v5, a2, a3, a4);
  else
    return 0;
}
