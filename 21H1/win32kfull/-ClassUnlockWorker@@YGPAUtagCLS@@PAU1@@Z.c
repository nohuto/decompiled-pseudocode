/*
 * XREFs of ?ClassUnlockWorker@@YGPAUtagCLS@@PAU1@@Z @ 0xA1C78
 * Callers:
 *     _ClassUnlock@8 @ 0xA1C52 (_ClassUnlock@8.c)
 *     _xxxSetClassData@16 @ 0xCBC4C (_xxxSetClassData@16.c)
 *     ?xxxSetClassCursor@@YGKPAUtagWND@@PAUtagCLS@@KK@Z @ 0x154427 (-xxxSetClassCursor@@YGKPAUtagWND@@PAUtagCLS@@KK@Z.c)
 *     _xxxRecreateSmallIcons@4 @ 0x1A12BF (_xxxRecreateSmallIcons@4.c)
 * Callees:
 *     _DestroyClass@8 @ 0x472A4 (_DestroyClass@8.c)
 */

struct tagCLS *__stdcall ClassUnlockWorker(struct tagCLS *a1)
{
  int v1; // eax
  struct tagCLS **v3; // esi
  struct tagCLS *i; // edx
  int CurrentProcessWin32Process; // eax

  --*((_DWORD *)a1 + 10);
  v1 = *((_DWORD *)a1 + 8);
  if ( a1 == (struct tagCLS *)v1 )
    return a1;
  --*(_DWORD *)(v1 + 40);
  if ( *((_DWORD *)a1 + 10) )
    return a1;
  v3 = (struct tagCLS **)(*((_DWORD *)a1 + 8) + 36);
  for ( i = *v3; i != a1; i = *(struct tagCLS **)i )
    v3 = (struct tagCLS **)i;
  CurrentProcessWin32Process = PsGetCurrentProcessWin32Process();
  DestroyClass(CurrentProcessWin32Process, (_DWORD **)v3);
  return 0;
}
