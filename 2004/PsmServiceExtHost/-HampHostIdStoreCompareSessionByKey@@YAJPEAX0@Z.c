/*
 * XREFs of ?HampHostIdStoreCompareSessionByKey@@YAJPEAX0@Z @ 0x180036170
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall HampHostIdStoreCompareSessionByKey(void *a1, _DWORD *a2)
{
  if ( a2[22] < (unsigned int)a1 )
    return 0xFFFFFFFFLL;
  else
    return a2[22] > (unsigned int)a1;
}
