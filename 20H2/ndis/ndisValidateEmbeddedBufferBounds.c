/*
 * XREFs of ndisValidateEmbeddedBufferBounds @ 0x1C00FE6E0
 * Callers:
 *     ndisValidateNdisVarDataDescInputString @ 0x1C00FE5FC (ndisValidateNdisVarDataDescInputString.c)
 *     ndisValidateNdisOffsetAndLengthInputBufferBounds @ 0x1C0117CC0 (ndisValidateNdisOffsetAndLengthInputBufferBounds.c)
 *     ndisValidateNdisVarDataDesc32InputString @ 0x1C0117D70 (ndisValidateNdisVarDataDesc32InputString.c)
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
        int a7,
        unsigned __int64 *a8)
{
  unsigned __int64 v8; // rax
  unsigned __int64 v9; // rdx
  unsigned __int64 v10; // r10
  unsigned __int64 v11; // r11

  v8 = a1 + a2;
  v9 = a1 + a5;
  v10 = v9 + a6;
  v11 = a3 + a4;
  if ( v8 < a1
    || v9 < a1
    || v10 < v9
    || v10 > v8
    || a7 && a6 && ((a7 - 1) & (unsigned int)v9) != 0
    || v9 <= a3 && v10 > a3
    || v9 <= v11 && v10 > v11 )
  {
    return 0;
  }
  *a8 = v9;
  return 1;
}
