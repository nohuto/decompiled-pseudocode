/*
 * XREFs of ?DCETopLevelSpeedHitTest@@YGPAUtagWND@@PAUtagDESKTOP@@PAUtagPOINT@@PBU_SUBPIXELS@@@Z @ 0x259E8
 * Callers:
 *     ?TopLevelSpeedHitTest@@YGPAUtagWND@@PAUtagDESKTOP@@PAUtagPOINT@@PBU_SUBPIXELS@@@Z @ 0xAC018 (-TopLevelSpeedHitTest@@YGPAUtagWND@@PAUtagDESKTOP@@PAUtagPOINT@@PBU_SUBPIXELS@@@Z.c)
 * Callees:
 *     ?DCEIsWindowHit@@YGHPAUtagWND@@PAUtagPOINT@@PBU_SUBPIXELS@@@Z @ 0x26176 (-DCEIsWindowHit@@YGHPAUtagWND@@PAUtagPOINT@@PBU_SUBPIXELS@@@Z.c)
 *     ??0UserAtomicCheck@@QAE@XZ @ 0x2C3CC (--0UserAtomicCheck@@QAE@XZ.c)
 *     ??1UserAtomicCheck@@QAE@XZ @ 0x2C40C (--1UserAtomicCheck@@QAE@XZ.c)
 */

struct tagWND *__userpurge DCETopLevelSpeedHitTest@<eax>(
        int a1@<ecx>,
        struct tagDESKTOP *a2,
        struct tagPOINT *a3,
        const struct _SUBPIXELS *a4)
{
  int v5; // edi
  int i; // esi
  struct tagPOINT *v8; // [esp+0h] [ebp-1Ch]
  const struct _SUBPIXELS *v9; // [esp+4h] [ebp-18h]
  _BYTE v10[12]; // [esp+10h] [ebp-Ch] BYREF

  v5 = 0;
  UserAtomicCheck::UserAtomicCheck((UserAtomicCheck *)v10);
  for ( i = *(_DWORD *)(*(_DWORD *)(*(_DWORD *)(a1 + 4) + 12) + 60); i; i = *(_DWORD *)(i + 48) )
  {
    if ( DCEIsWindowHit(a2, v8, v9) )
    {
      v5 = i;
      if ( *(char *)(*(_DWORD *)(i + 20) + 11) < 0 )
        v5 = 0;
      break;
    }
  }
  UserAtomicCheck::~UserAtomicCheck((UserAtomicCheck *)v10);
  return (struct tagWND *)v5;
}
