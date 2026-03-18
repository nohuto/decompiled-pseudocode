/*
 * XREFs of ?bSpWndObjTrackedSprite@@YGHPAVSPRITE@@@Z @ 0x1DEEA7
 * Callers:
 *     ?vSpUpdateWndobjOverlap@@YGXPAU_SPRITESTATE@@PAVEWNDOBJ@@@Z @ 0x1E2DE5 (-vSpUpdateWndobjOverlap@@YGXPAU_SPRITESTATE@@PAVEWNDOBJ@@@Z.c)
 * Callees:
 *     <none>
 */

int __thiscall bSpWndObjTrackedSprite(_DWORD *this)
{
  int v1; // edx
  struct TRACKOBJ *v2; // ecx
  _DWORD *i; // eax

  v1 = this[10];
  if ( !v1 )
    return 0;
  v2 = gpto;
LABEL_9:
  if ( !v2 )
    return 0;
  for ( i = (_DWORD *)*((_DWORD *)v2 + 3); ; i = (_DWORD *)i[32] )
  {
    if ( !i )
    {
      v2 = (struct TRACKOBJ *)*((_DWORD *)v2 + 1);
      goto LABEL_9;
    }
    if ( (i[35] & 0x200) != 0 && i[34] == v1 )
      break;
  }
  return 1;
}
