/*
 * XREFs of ?StringCchPrintfW@@YAJPEAG_KPEBGZZ @ 0x1C00095B8
 * Callers:
 *     ?CreatePointerDeviceProcessEvent@@YAHKHEPEAGPEAPEAX@Z @ 0x1C0009250 (-CreatePointerDeviceProcessEvent@@YAHKHEPEAGPEAPEAX@Z.c)
 *     PlaySoundConnect @ 0x1C037B854 (PlaySoundConnect.c)
 * Callees:
 *     StringVPrintfWorkerW @ 0x1C0009610 (StringVPrintfWorkerW.c)
 */

__int64 StringCchPrintfW(unsigned __int16 *a1, size_t a2, size_t *a3, ...)
{
  int v3; // r9d
  va_list va; // [rsp+68h] [rbp+20h] BYREF

  va_start(va, a3);
  v3 = 0;
  if ( a2 - 1 > 0x7FFFFFFE )
    v3 = -2147024809;
  if ( v3 < 0 )
  {
    if ( a2 )
      *a1 = 0;
  }
  else
  {
    return (unsigned int)StringVPrintfWorkerW(a1, a2, a3, (STRSAFE_LPCWSTR)a3, va);
  }
  return (unsigned int)v3;
}
