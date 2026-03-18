/*
 * XREFs of ?bDeleteSurface@SURFREF@@QEAAHW4_CLEANUPTYPE@@H@Z @ 0x1C015D9B8
 * Callers:
 *     GreDereferenceObject @ 0x1C00936F4 (GreDereferenceObject.c)
 *     ?vCleanupOwnedRedirectionDeviceBitmaps@@YAXPEAVPDEV@@W4_CLEANUPTYPE@@@Z @ 0x1C00FC628 (-vCleanupOwnedRedirectionDeviceBitmaps@@YAXPEAVPDEV@@W4_CLEANUPTYPE@@@Z.c)
 *     ?vProfileDriver@PDEVOBJ@@QEAAXXZ @ 0x1C0120848 (-vProfileDriver@PDEVOBJ@@QEAAXXZ.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall SURFREF::bDeleteSurface(_QWORD *a1, __int64 a2, __int64 a3)
{
  __int64 result; // rax

  result = SURFACE::bDeleteSurface(*a1, a2, a3);
  if ( (_DWORD)result )
    *a1 = 0LL;
  return result;
}
