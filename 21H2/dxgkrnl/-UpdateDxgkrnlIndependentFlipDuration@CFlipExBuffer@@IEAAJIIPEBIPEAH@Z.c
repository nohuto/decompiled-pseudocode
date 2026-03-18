/*
 * XREFs of ?UpdateDxgkrnlIndependentFlipDuration@CFlipExBuffer@@IEAAJIIPEBIPEAH@Z @ 0x1C007902C
 * Callers:
 *     ?SetIndependentFlip@CFlipExBuffer@@UEAAJ_N0IIPEBIPEAH@Z @ 0x1C0008B50 (-SetIndependentFlip@CFlipExBuffer@@UEAAJ_N0IIPEBIPEAH@Z.c)
 * Callees:
 *     DxgkSetIndependentFlipMode @ 0x1C0161E30 (DxgkSetIndependentFlipMode.c)
 */

__int64 __fastcall CFlipExBuffer::UpdateDxgkrnlIndependentFlipDuration(
        HANDLE *this,
        int a2,
        int a3,
        const unsigned int *a4,
        int *a5)
{
  __int64 result; // rax

  result = DxgkSetIndependentFlipMode(this[68], a2, a3, (__int64)a4, (__int64)a5, (__int64)(this + 67));
  if ( (int)result >= 0 )
    *((_DWORD *)this + 155) = a2;
  return result;
}
