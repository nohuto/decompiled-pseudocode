/*
 * XREFs of IommuHvFlushAllPasid @ 0x1404DA010
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall @ 0x140408790 (_guard_dispatch_icall.c)
 */

__int64 __fastcall IommuHvFlushAllPasid(__int64 a1, unsigned int a2, __int64 a3)
{
  if ( qword_140C4A2B8 )
    qword_140C4A2B8(0xFFFFFFFFLL, 0xFFFFFFFFLL, a2, a3);
  return 0LL;
}
