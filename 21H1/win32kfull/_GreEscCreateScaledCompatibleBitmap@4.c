/*
 * XREFs of _GreEscCreateScaledCompatibleBitmap@4 @ 0x1FD305
 * Callers:
 *     _GreScalingDispatchEscape@4 @ 0x1FD6BF (_GreScalingDispatchEscape@4.c)
 * Callees:
 *     _GreCreateCompatibleBitmapInternal@24 @ 0x21480 (_GreCreateCompatibleBitmapInternal@24.c)
 */

__int64 __fastcall GreEscCreateScaledCompatibleBitmap(int a1)
{
  __int64 result; // rax
  unsigned int v3; // ecx

  LODWORD(result) = 0;
  HIDWORD(result) = a1 + 24;
  v3 = *(unsigned __int16 *)(a1 + 24);
  if ( v3 >= 0x60 && (unsigned __int16)v3 <= 0x1E0u )
    LODWORD(result) = GreCreateCompatibleBitmapInternal(
                        *(HDC *)(a1 + 8),
                        *(_DWORD *)(a1 + 16),
                        *(_DWORD *)(a1 + 20),
                        0,
                        0,
                        (unsigned __int16 *)HIDWORD(result));
  result = (int)result;
  *(_QWORD *)(a1 + 8) = (int)result;
  return result;
}
