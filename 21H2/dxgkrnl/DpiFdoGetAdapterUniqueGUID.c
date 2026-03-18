/*
 * XREFs of DpiFdoGetAdapterUniqueGUID @ 0x1C0204CF4
 * Callers:
 *     DpiGdoSetupGdiParameters @ 0x1C0204478 (DpiGdoSetupGdiParameters.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall DpiFdoGetAdapterUniqueGUID(__int64 a1)
{
  __int64 v1; // rax

  v1 = *(_QWORD *)(a1 + 64);
  if ( *(_QWORD *)(v1 + 4760) )
    return v1 + 4752;
  else
    return 0LL;
}
