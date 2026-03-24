/*
 * XREFs of ?VidSchiGetNumOverlayPlanesUsed@@YAIPEAU_VIDSCH_GLOBAL@@I@Z @ 0x1C003DA24
 * Callers:
 *     VidSchCollectDbgInfo @ 0x1C00D3C50 (VidSchCollectDbgInfo.c)
 * Callees:
 *     ?GetFlipQueue@VIDSCH_FLIP_QUEUE_ITERATOR@@QEAAPEAUVIDSCH_FLIP_QUEUE@@XZ @ 0x1C0029F94 (-GetFlipQueue@VIDSCH_FLIP_QUEUE_ITERATOR@@QEAAPEAUVIDSCH_FLIP_QUEUE@@XZ.c)
 */

__int64 __fastcall VidSchiGetNumOverlayPlanesUsed(struct _VIDSCH_GLOBAL *a1, int a2)
{
  int v2; // ebx
  unsigned int v3; // r11d
  int v4; // r10d
  struct VIDSCH_FLIP_QUEUE *FlipQueue; // r9
  unsigned int v6; // r11d
  int v7; // r10d
  unsigned int v8; // eax
  struct _VIDSCH_GLOBAL *v10; // [rsp+20h] [rbp-18h] BYREF
  int v11; // [rsp+28h] [rbp-10h]
  int v12; // [rsp+2Ch] [rbp-Ch]

  v2 = *((_DWORD *)a1 + 36);
  v3 = 0;
  v4 = -1;
  v10 = a1;
  v11 = a2;
  while ( 1 )
  {
    v12 = v4;
    if ( v4 == v2 )
      break;
    FlipQueue = VIDSCH_FLIP_QUEUE_ITERATOR::GetFlipQueue((VIDSCH_FLIP_QUEUE_ITERATOR *)&v10);
    v4 = v7 + 1;
    v8 = v6 + 1;
    if ( !FlipQueue )
      v8 = v6;
    v3 = v8;
  }
  return v3;
}
