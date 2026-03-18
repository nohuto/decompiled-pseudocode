/*
 * XREFs of ?GetSize@CSystemMemoryBitmap@@UEBA?AUD2D_SIZE_U@@XZ @ 0x1800DCB50
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

struct D2D_SIZE_U __fastcall CSystemMemoryBitmap::GetSize(CSystemMemoryBitmap *this, _DWORD *a2)
{
  *a2 = *((_DWORD *)this - 14);
  a2[1] = *((_DWORD *)this - 13);
  return (struct D2D_SIZE_U)a2;
}
