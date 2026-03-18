/*
 * XREFs of ?UpdateDxgkrnlIndependentFlipDuration@CFlipExBuffer@@IEAAJIIPEBIPEAH@Z @ 0x1C006634C
 * Callers:
 *     ?SetIndependentFlip@CFlipExBuffer@@UEAAJ_N0IIPEBIPEAH@Z @ 0x1C001D220 (-SetIndependentFlip@CFlipExBuffer@@UEAAJ_N0IIPEBIPEAH@Z.c)
 * Callees:
 *     DxgkSetIndependentFlipMode @ 0x1C0170074 (DxgkSetIndependentFlipMode.c)
 */

__int64 __fastcall CFlipExBuffer::UpdateDxgkrnlIndependentFlipDuration(
        HANDLE *this,
        int a2,
        int a3,
        const unsigned int *a4,
        int *a5)
{
  __int64 result; // rax

  result = DxgkSetIndependentFlipMode(this[61], a2, a3, (__int64)a4, (__int64)a5, (__int64)(this + 60));
  if ( (int)result >= 0 )
    *((_DWORD *)this + 141) = a2;
  return result;
}
