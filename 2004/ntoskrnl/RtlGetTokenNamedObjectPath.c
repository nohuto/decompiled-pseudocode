/*
 * XREFs of RtlGetTokenNamedObjectPath @ 0x140910600
 * Callers:
 *     <none>
 * Callees:
 *     RtlpGetTokenNamedObjectPath @ 0x140911278 (RtlpGetTokenNamedObjectPath.c)
 */

__int64 __fastcall RtlGetTokenNamedObjectPath(void *a1)
{
  return RtlpGetTokenNamedObjectPath(a1, 0LL);
}
