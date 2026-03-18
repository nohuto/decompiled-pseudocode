/*
 * XREFs of ?bIs31Bits@@YGHJ@Z @ 0x2353F5
 * Callers:
 *     ?bComputeIntersect@@YGHPAVEVECTORFX@@0000@Z @ 0x234D9E (-bComputeIntersect@@YGHPAVEVECTORFX@@0000@Z.c)
 *     ?bComputeWidenedBounds@EPATHOBJ@@QAEHAAV1@PAU_XFORMOBJ@@PAU_LINEATTRS@@@Z @ 0x234F52 (-bComputeWidenedBounds@EPATHOBJ@@QAEHAAV1@PAU_XFORMOBJ@@PAU_LINEATTRS@@@Z.c)
 * Callees:
 *     <none>
 */

BOOL __thiscall bIs31Bits(void *this)
{
  return (unsigned int)this + 0x3FFFFFFF <= 0x7FFFFFFD;
}
