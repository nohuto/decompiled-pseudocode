/*
 * XREFs of CmpGetSecurityDescriptorNode @ 0x1406EB5FC
 * Callers:
 *     CmpCopySaclToVirtualKey @ 0x14091822C (CmpCopySaclToVirtualKey.c)
 * Callees:
 *     CmpGetSecurityDescriptorNodeEx @ 0x140657670 (CmpGetSecurityDescriptorNodeEx.c)
 */

__int64 __fastcall CmpGetSecurityDescriptorNode(
        ULONG_PTR a1,
        unsigned int a2,
        __int64 a3,
        void *Src,
        char a5,
        unsigned int *a6)
{
  return CmpGetSecurityDescriptorNodeEx(a1, a2, a3, a2 >> 31, Src, a5, a6);
}
