/*
 * XREFs of ?NdisBufferLength@@YAKPEAU_MDL@@@Z @ 0x1C00BE840
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall NdisBufferLength(struct _MDL *a1)
{
  return a1->ByteCount;
}
