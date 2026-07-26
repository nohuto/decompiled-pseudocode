/*
 * XREFs of ndisValidateEmbeddedBufferBounds @ 0x1C00F8640
 * Callers:
 *     ndisValidateNdisVarDataDesc32InputString @ 0x1C00F86CC (ndisValidateNdisVarDataDesc32InputString.c)
 *     ndisValidateNdisVarDataDescInputString @ 0x1C00F8754 (ndisValidateNdisVarDataDescInputString.c)
 *     ndisValidateNdisOffsetAndLengthInputBufferBounds @ 0x1C0117D00 (ndisValidateNdisOffsetAndLengthInputBufferBounds.c)
 *     ?ndisHandlePnPRequest@@_Y2PAGENPNP@@AJPEAU_IRP@@@Z @ 0x1C012BDB8 (-ndisHandlePnPRequest@@_Y2PAGENPNP@@AJPEAU_IRP@@@Z.c)
 * Callees:
 *     <none>
 */

char __fastcall ndisValidateEmbeddedBufferBounds(
        unsigned __int64 a1,
        unsigned int a2,
        unsigned __int64 a3,
        unsigned int a4,
        unsigned int a5,
        unsigned int a6,
        unsigned int a7,
        int a8,
        unsigned __int64 *a9)
{
  unsigned __int64 v10; // rbx
  unsigned __int64 v11; // rdx
  unsigned __int64 v12; // r10
  unsigned __int64 v13; // r8

  v10 = a1 + a2;
  v11 = a1 + a6;
  v12 = v11 + a7;
  v13 = a3 + a4;
  if ( v10 < a1
    || a5 && a6 < a5
    || v11 < a1
    || v12 < v11
    || v12 > v10
    || a8 && a7 && ((a8 - 1) & (unsigned int)v11) != 0
    || v11 <= a3 && v12 > a3
    || v11 <= v13 && v12 > v13 )
  {
    return 0;
  }
  *a9 = v11;
  return 1;
}
