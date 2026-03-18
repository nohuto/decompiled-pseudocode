/*
 * XREFs of ?Present@CHolographicInteropTarget@@UEAAJ_N@Z @ 0x180299F60
 * Callers:
 *     ?Present@CHolographicInteropTarget@@$4PPPPPPPM@A@EAAJ_N@Z @ 0x18010AC70 (-Present@CHolographicInteropTarget@@$4PPPPPPPM@A@EAAJ_N@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CHolographicInteropTarget::Present(LARGE_INTEGER *this)
{
  LARGE_INTEGER PerformanceCount; // [rsp+30h] [rbp+8h] BYREF

  ++this[-13].LowPart;
  QueryPerformanceCounter(&PerformanceCount);
  this[-12] = PerformanceCount;
  return 0LL;
}
