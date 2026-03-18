/*
 * XREFs of ?ClassicChildTreeSpeedHitTest@@YGPAUtagWND@@PAU1@UtagPOINT@@@Z @ 0x179A75
 * Callers:
 *     _xxxDCompSpeedHitTest@28 @ 0xF09A4 (_xxxDCompSpeedHitTest@28.c)
 *     _xxxSpeedHitTest@24 @ 0xF3E36 (_xxxSpeedHitTest@24.c)
 *     ?ClassicChildTreeSpeedHitTest@@YGPAUtagWND@@PAU1@UtagPOINT@@@Z @ 0x179A75 (-ClassicChildTreeSpeedHitTest@@YGPAUtagWND@@PAU1@UtagPOINT@@@Z.c)
 *     _TouchTargetChildTree@24 @ 0x17BA7D (_TouchTargetChildTree@24.c)
 * Callees:
 *     ?ClassicIsWindowHit@@YGHPAUtagWND@@UtagPOINT@@@Z @ 0x26C06 (-ClassicIsWindowHit@@YGHPAUtagWND@@UtagPOINT@@@Z.c)
 *     _PtInRect@12 @ 0x26C50 (_PtInRect@12.c)
 *     ?ClassicChildTreeSpeedHitTest@@YGPAUtagWND@@PAU1@UtagPOINT@@@Z @ 0x179A75 (-ClassicChildTreeSpeedHitTest@@YGPAUtagWND@@PAU1@UtagPOINT@@@Z.c)
 */

struct tagWND *__userpurge ClassicChildTreeSpeedHitTest@<eax>(int a1@<ecx>, struct tagWND *a2, struct tagPOINT a3)
{
  int i; // esi
  struct tagWND *result; // eax
  struct tagPOINT v6; // [esp-4h] [ebp-Ch]

  for ( i = *(_DWORD *)(a1 + 60); ; i = *(_DWORD *)(i + 48) )
  {
    if ( !i )
      return (struct tagWND *)a1;
    v6.x = a3.x;
    if ( ClassicIsWindowHit(i, a2, v6) )
      break;
  }
  if ( !*(_DWORD *)(i + 60) )
    return (struct tagWND *)i;
  if ( !PtInRect((_DWORD *)(*(_DWORD *)(i + 20) + 68), (int)a2, a3.x) )
    return (struct tagWND *)i;
  v6.x = a3.x;
  result = ClassicChildTreeSpeedHitTest(a2, v6);
  if ( !result || result == (struct tagWND *)i )
    return (struct tagWND *)i;
  return result;
}
