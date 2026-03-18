/*
 * XREFs of ?TopLevelSpeedHitTest@@YGPAUtagWND@@PAUtagDESKTOP@@PAUtagPOINT@@PBU_SUBPIXELS@@@Z @ 0xAC018
 * Callers:
 *     _xxxDCompSpeedHitTest@28 @ 0xF09A4 (_xxxDCompSpeedHitTest@28.c)
 *     _xxxSpeedHitTest@24 @ 0xF3E36 (_xxxSpeedHitTest@24.c)
 * Callees:
 *     ?DCETopLevelSpeedHitTest@@YGPAUtagWND@@PAUtagDESKTOP@@PAUtagPOINT@@PBU_SUBPIXELS@@@Z @ 0x259E8 (-DCETopLevelSpeedHitTest@@YGPAUtagWND@@PAUtagDESKTOP@@PAUtagPOINT@@PBU_SUBPIXELS@@@Z.c)
 *     ?ClassicIsWindowHit@@YGHPAUtagWND@@UtagPOINT@@@Z @ 0x26C06 (-ClassicIsWindowHit@@YGHPAUtagWND@@UtagPOINT@@@Z.c)
 */

struct tagWND *__userpurge TopLevelSpeedHitTest@<eax>(
        int a1@<edx>,
        int a2@<ecx>,
        struct tagDESKTOP *a3,
        struct tagPOINT *a4,
        const struct _SUBPIXELS *a5)
{
  _DWORD *v6; // edx
  int v7; // edi
  int i; // esi
  struct tagPOINT v10; // [esp-4h] [ebp-10h]
  const struct _SUBPIXELS *v11; // [esp+4h] [ebp-8h]

  v6 = *(_DWORD **)(a2 + 4);
  v7 = 0;
  if ( (*(_BYTE *)(*v6 + 32) & 1) != 0 )
    return DCETopLevelSpeedHitTest(a2, a3, (struct tagPOINT *)v10.y, v11);
  for ( i = *(_DWORD *)(v6[3] + 60); i; i = *(_DWORD *)(i + 48) )
  {
    v10.x = *(_DWORD *)(a1 + 4);
    if ( ClassicIsWindowHit(i, *(struct tagWND **)a1, v10) )
      return (struct tagWND *)i;
  }
  return (struct tagWND *)v7;
}
