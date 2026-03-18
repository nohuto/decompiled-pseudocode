/*
 * XREFs of _GetDesktopHeapSize@4 @ 0xA9ECC
 * Callers:
 *     ?xxxCreateDesktopEx2@@YGJPAUtagWINDOWSTATION@@PAU_ACCESS_STATE@@DPAU_UNICODE_STRING@@KPAPAX@Z @ 0xA9B34 (-xxxCreateDesktopEx2@@YGJPAUtagWINDOWSTATION@@PAU_ACCESS_STATE@@DPAU_UNICODE_STRING@@KPAPAX@Z.c)
 * Callees:
 *     <none>
 */

int __stdcall GetDesktopHeapSize(__int16 a1)
{
  int *v1; // eax
  int v2; // eax

  if ( a1 == 1 )
  {
    v2 = 128;
  }
  else if ( a1 == 2 )
  {
    v2 = 64;
  }
  else
  {
    v1 = (int *)_gdwDesktopSectionSize;
    if ( a1 == 3 )
      v1 = (int *)_gdwNOIOSectionSize;
    v2 = *v1;
  }
  return v2 << 10;
}
