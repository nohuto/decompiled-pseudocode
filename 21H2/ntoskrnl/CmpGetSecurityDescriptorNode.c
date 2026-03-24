/*
 * XREFs of CmpGetSecurityDescriptorNode @ 0x14066DB50
 * Callers:
 *     CmpCreateChild @ 0x140667AD4 (CmpCreateChild.c)
 *     CmpCopySaclToVirtualKey @ 0x1408717C4 (CmpCopySaclToVirtualKey.c)
 *     CmpLightWeightPrepareSetSecDescUoW @ 0x14087FAF0 (CmpLightWeightPrepareSetSecDescUoW.c)
 * Callees:
 *     CmpGetSecurityDescriptorNodeEx @ 0x1405CCAF8 (CmpGetSecurityDescriptorNodeEx.c)
 */

__int64 __fastcall CmpGetSecurityDescriptorNode(
        ULONG_PTR a1,
        ULONG_PTR a2,
        __int64 a3,
        void *Src,
        char a5,
        unsigned int *a6)
{
  return CmpGetSecurityDescriptorNodeEx(a1, a2, a3, (unsigned int)a2 >> 31, Src, a5, a6);
}
