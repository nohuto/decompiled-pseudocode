/*
 * XREFs of ReleaseWallpaperSettings @ 0x1C012BB30
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall ReleaseWallpaperSettings(int *a1)
{
  unsigned int v1; // ebx
  bool v2; // zf
  int v3; // edi

  v1 = 0;
  v2 = *a1 == 1;
  v3 = *a1 - 1;
  *a1 = v3;
  if ( v2 )
    Win32FreePool(a1);
  LOBYTE(v1) = v3 == 0;
  return v1;
}
