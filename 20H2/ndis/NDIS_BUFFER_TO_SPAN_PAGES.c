/*
 * XREFs of NDIS_BUFFER_TO_SPAN_PAGES @ 0x1C00BED10
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

unsigned __int64 __fastcall NDIS_BUFFER_TO_SPAN_PAGES(_DWORD *a1)
{
  __int64 v1; // rdx

  v1 = (unsigned int)a1[10];
  if ( (_DWORD)v1 )
    return ((unsigned __int64)((a1[8] + a1[11]) & 0xFFF) + v1 + 4095) >> 12;
  else
    return 1LL;
}
