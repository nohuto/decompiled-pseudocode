/*
 * XREFs of KiSetDpcRequestFlag @ 0x1403027F4
 * Callers:
 *     KiInsertQueueDpc @ 0x14026DC70 (KiInsertQueueDpc.c)
 *     KiRequestTimer2Expiration @ 0x140302790 (KiRequestTimer2Expiration.c)
 * Callees:
 *     RtlBackoff @ 0x14035A2A0 (RtlBackoff.c)
 */

__int64 __fastcall KiSetDpcRequestFlag(unsigned __int16 *a1, __int64 a2)
{
  __int64 v2; // r9
  __int64 v3; // r8
  __int16 v4; // tt
  unsigned __int16 *v6; // r10
  __int16 v7; // r11
  __int16 v8; // tt
  int v9; // [rsp+30h] [rbp+8h] BYREF

  v9 = 0;
  _m_prefetchw(a1);
  v2 = *a1;
  v3 = (unsigned __int16)v2;
  LOWORD(v3) = a2 | v2;
  v4 = *a1;
  if ( v4 != _InterlockedCompareExchange16((volatile signed __int16 *)a1, a2 | v2, v2) )
  {
    do
    {
      RtlBackoff(&v9, a2, v3, v2);
      _m_prefetchw(v6);
      v2 = *v6;
      v8 = *v6;
    }
    while ( v8 != _InterlockedCompareExchange16((volatile signed __int16 *)v6, v7 | v2, v2) );
  }
  return (unsigned __int16)v2;
}
