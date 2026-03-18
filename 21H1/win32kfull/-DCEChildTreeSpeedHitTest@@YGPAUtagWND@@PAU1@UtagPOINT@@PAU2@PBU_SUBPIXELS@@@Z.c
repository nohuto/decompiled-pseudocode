/*
 * XREFs of ?DCEChildTreeSpeedHitTest@@YGPAUtagWND@@PAU1@UtagPOINT@@PAU2@PBU_SUBPIXELS@@@Z @ 0x26B90
 * Callers:
 *     ?DCEChildTreeSpeedHitTest@@YGPAUtagWND@@PAU1@UtagPOINT@@PAU2@PBU_SUBPIXELS@@@Z @ 0x26B90 (-DCEChildTreeSpeedHitTest@@YGPAUtagWND@@PAU1@UtagPOINT@@PAU2@PBU_SUBPIXELS@@@Z.c)
 *     _xxxDCompSpeedHitTest@28 @ 0xF09A4 (_xxxDCompSpeedHitTest@28.c)
 * Callees:
 *     ?DCEIsWindowHit@@YGHPAUtagWND@@PAUtagPOINT@@PBU_SUBPIXELS@@@Z @ 0x26176 (-DCEIsWindowHit@@YGHPAUtagWND@@PAUtagPOINT@@PBU_SUBPIXELS@@@Z.c)
 *     ?DCEChildTreeSpeedHitTest@@YGPAUtagWND@@PAU1@UtagPOINT@@PAU2@PBU_SUBPIXELS@@@Z @ 0x26B90 (-DCEChildTreeSpeedHitTest@@YGPAUtagWND@@PAU1@UtagPOINT@@PAU2@PBU_SUBPIXELS@@@Z.c)
 *     ?ClassicIsWindowHit@@YGHPAUtagWND@@UtagPOINT@@@Z @ 0x26C06 (-ClassicIsWindowHit@@YGHPAUtagWND@@UtagPOINT@@@Z.c)
 *     _PtInRect@12 @ 0x26C50 (_PtInRect@12.c)
 */

struct tagWND *__userpurge DCEChildTreeSpeedHitTest@<eax>(
        _DWORD *a1@<edx>,
        int a2@<ecx>,
        struct tagWND *a3,
        struct tagPOINT a4,
        struct tagPOINT *a5,
        const struct _SUBPIXELS *a6)
{
  int i; // esi
  struct tagWND *result; // eax
  struct tagPOINT v10; // [esp-4h] [ebp-18h]
  const struct _SUBPIXELS *v11; // [esp+4h] [ebp-10h]
  struct tagPOINT v12; // [esp+Ch] [ebp-8h] BYREF

  for ( i = *(_DWORD *)(a2 + 60); ; i = *(_DWORD *)(i + 48) )
  {
    if ( !i )
      return (struct tagWND *)a2;
    if ( *(_DWORD *)(i + 120) )
      break;
    v10.x = a1[1];
    if ( ClassicIsWindowHit((struct tagWND *)*a1, v10) )
      goto LABEL_8;
LABEL_5:
    ;
  }
  v12 = a4;
  if ( !DCEIsWindowHit((HDEV *)&v12, i, a3, (struct tagPOINT *)v10.y, v11) )
    goto LABEL_5;
  *(struct tagPOINT *)a1 = v12;
LABEL_8:
  if ( !*(_DWORD *)(i + 60) )
    return (struct tagWND *)i;
  if ( !PtInRect(*a1, a1[1]) )
    return (struct tagWND *)i;
  result = DCEChildTreeSpeedHitTest(a3, a4, (struct tagPOINT *)v10.y, v11);
  if ( !result || result == (struct tagWND *)i )
    return (struct tagWND *)i;
  return result;
}
