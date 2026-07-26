/*
 * XREFs of ndisPhysicalNicPcwProviderCallback @ 0x1C011F0A0
 * Callers:
 *     <none>
 * Callees:
 *     ?ndisPcwCollectPhysicalData@@YAJPEAU_PCW_BUFFER@@@Z @ 0x1C008EA38 (-ndisPcwCollectPhysicalData@@YAJPEAU_PCW_BUFFER@@@Z.c)
 */

__int64 __fastcall ndisPhysicalNicPcwProviderCallback(int a1, __int64 a2, int a3)
{
  if ( a3 != 3 )
    return 3221225485LL;
  if ( (unsigned int)(a1 - 2) > 1 )
    return 0LL;
  return ndisPcwCollectPhysicalData(*(struct _PCW_BUFFER **)(a2 + 24));
}
