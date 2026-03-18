/*
 * XREFs of Bulk_EP_Disable @ 0x1C000D050
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall Bulk_EP_Disable(__int64 a1)
{
  int v1; // edx
  __int64 result; // rax

  do
    v1 = *(_DWORD *)(a1 + 108);
  while ( ((v1 - 1) & 0xFFFFFFFD) == 0 );
  result = 0LL;
  if ( v1 )
    return (unsigned int)_InterlockedExchange((volatile __int32 *)(a1 + 108), 0);
  return result;
}
