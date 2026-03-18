/*
 * XREFs of ??0MULTISPRITEDDIACCESS@@QAE@AAVPDEVOBJ@@@Z @ 0x9F02C
 * Callers:
 *     _vSpDynamicModeChange@8 @ 0x9EE36 (_vSpDynamicModeChange@8.c)
 * Callees:
 *     ?vSpDirectDriverAccess@@YGXPAU_SPRITESTATE@@H@Z @ 0x3061A (-vSpDirectDriverAccess@@YGXPAU_SPRITESTATE@@H@Z.c)
 *     _W32GetThreadWin32Thread@4 @ 0x3FA3E (_W32GetThreadWin32Thread@4.c)
 */

MULTISPRITEDDIACCESS *__thiscall MULTISPRITEDDIACCESS::MULTISPRITEDDIACCESS(
        MULTISPRITEDDIACCESS *this,
        struct PDEVOBJ *a2)
{
  PKTHREAD CurrentThread; // eax
  int ThreadWin32Thread; // esi
  _DWORD *v5; // ecx
  unsigned int v7; // esi
  _DWORD *v8; // edx
  _DWORD *v9; // eax

  *(_DWORD *)this = 0;
  CurrentThread = KeGetCurrentThread();
  ThreadWin32Thread = W32GetThreadWin32Thread(CurrentThread);
  if ( !ThreadWin32Thread
    || !PDEVOBJ::bAllowShareAccess(a2)
    || !*(_DWORD *)(ThreadWin32Thread + 52) && !*(_DWORD *)(ThreadWin32Thread + 56) )
  {
    v5 = (_DWORD *)(*(_DWORD *)a2 + 64);
    *(_DWORD *)this = v5;
    if ( v5[10] )
    {
      v7 = 0;
      do
      {
        v8 = v5;
        v9 = *(_DWORD **)(v5[11] + 4 * v7);
        if ( !v9[30] && ((unsigned int)&loc_20000 & v9[6]) == 0 )
        {
          vSpDirectDriverAccess(v9 + 16, 1);
          v8 = *(_DWORD **)this;
        }
        ++v7;
        v5 = v8;
      }
      while ( v7 < v8[10] );
    }
    else if ( !v5[14] && ((unsigned int)&loc_20000 & *(_DWORD *)(*(_DWORD *)a2 + 24)) == 0 )
    {
      vSpDirectDriverAccess(v5, 1);
    }
  }
  return this;
}
