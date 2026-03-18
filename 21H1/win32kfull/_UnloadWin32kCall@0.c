/*
 * XREFs of _UnloadWin32kCall@0 @ 0xF8F1A
 * Callers:
 *     _EditionBaseDriverUnloadUninitialize@0 @ 0xD4D88 (_EditionBaseDriverUnloadUninitialize@0.c)
 * Callees:
 *     ?SetWin32kSilo@@YGPAU_EJOB@@AAPAX@Z @ 0xF8E50 (-SetWin32kSilo@@YGPAU_EJOB@@AAPAX@Z.c)
 */

struct _EJOB *__stdcall UnloadWin32kCall()
{
  struct _EJOB *result; // eax
  int v1; // ebx
  struct _EJOB *v2; // edi
  int v3; // esi
  int v4; // [esp+8h] [ebp-4h] BYREF

  v4 = 0;
  result = SetWin32kSilo(&v4);
  v1 = 0;
  v2 = result;
  if ( off_266244 )
  {
    v3 = 0;
    do
    {
      result = (struct _EJOB *)(&off_266244)[v3][5];
      if ( result )
      {
        MmUnloadSystemImage((&off_266244)[v3][5]);
        result = (struct _EJOB *)(&off_266244)[v3];
        *((_DWORD *)result + 5) = 0;
      }
      ++v1;
      v3 = 2 * v1;
    }
    while ( (&off_266244)[2 * v1] );
  }
  if ( v2 )
    return (struct _EJOB *)PsDetachSiloFromCurrentThread(v2);
  return result;
}
