/*
 * XREFs of _CheckAndProcessSurfaceComplete@4 @ 0x1CDD54
 * Callers:
 *     <none>
 * Callees:
 *     _SFMLOGICALSURFACEREF_vDestructor@4 @ 0x2443A (_SFMLOGICALSURFACEREF_vDestructor@4.c)
 *     ?CheckAndProcessWindowResizeComplete@@YGXPAVDWMSPRITE@@HPAH@Z @ 0x1CCD3C (-CheckAndProcessWindowResizeComplete@@YGXPAVDWMSPRITE@@HPAH@Z.c)
 */

int __userpurge CheckAndProcessSurfaceComplete@<eax>(struct DWMSPRITE *a1@<edi>, int a2)
{
  int v2; // eax
  int v3; // ecx
  int *v4; // esi
  int *v5; // eax
  int v7; // [esp+0h] [ebp-10h]
  int *v8; // [esp+4h] [ebp-Ch]
  int v9[2]; // [esp+8h] [ebp-8h] BYREF

  v9[0] = 0;
  v9[1] = 0;
  if ( a2 )
  {
    v2 = HmgLock(a2, 18);
    v9[0] = v2;
    if ( v2 )
    {
      v3 = *(_DWORD *)(v2 + 196);
      v4 = 0;
      if ( v3 )
      {
        v5 = (int *)HmgLock(v3, 15);
        v4 = v5;
        if ( !v5 )
          return SFMLOGICALSURFACEREF_vDestructor(v9);
        if ( v5[19] == 3 )
          v5[19] = 1;
        CheckAndProcessWindowResizeComplete(0, v5, a1, 0, v7, v8);
      }
      if ( v4 )
        _InterlockedDecrement(v4 + 2);
    }
  }
  return SFMLOGICALSURFACEREF_vDestructor(v9);
}
