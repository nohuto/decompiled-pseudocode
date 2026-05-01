/*
 * XREFs of RmSetHostLimit @ 0x18000FA20
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

// attributes: thunk
__int64 RmSetHostLimit()
{
  return RmpClientSetHostLimits();
}
