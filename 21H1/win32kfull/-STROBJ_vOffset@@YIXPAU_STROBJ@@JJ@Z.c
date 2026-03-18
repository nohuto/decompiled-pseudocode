/*
 * XREFs of ?STROBJ_vOffset@@YIXPAU_STROBJ@@JJ@Z @ 0x22EE6B
 * Callers:
 *     _OffTextOut@48 @ 0x22F6AF (_OffTextOut@48.c)
 * Callees:
 *     <none>
 */

void __fastcall STROBJ_vOffset(struct _STROBJ *a1, int a2, int a3)
{
  int v3; // esi
  LONG left; // edi
  LONG v5; // eax
  ULONG cGlyphs; // ebx
  _DWORD *v7; // edi
  _DWORD *v8; // eax
  ULONG v9; // ecx
  _DWORD *v10; // eax
  ULONG v11; // [esp+10h] [ebp+8h]

  v3 = a3;
  if ( a2 || a3 )
  {
    a1->rclBkGround.left += a2;
    a1->rclBkGround.right += a2;
    a1->rclBkGround.top += a3;
    a1->rclBkGround.bottom += a3;
    left = a1[5].rclBkGround.left;
    if ( (left & 0x100) != 0 )
    {
      a2 *= 16;
      v3 = 16 * a3;
    }
    v5 = a1[1].rclBkGround.left;
    if ( (left & 0x1400) != 0 )
    {
      cGlyphs = a1->cGlyphs;
      v11 = a1[5].cGlyphs;
      if ( a1->cGlyphs )
      {
        v7 = (_DWORD *)(v5 + 12);
        v8 = (_DWORD *)a1[5].cGlyphs;
        do
        {
          if ( *v8 == a1[5].rclBkGround.top )
          {
            *(v7 - 1) += a2;
            --cGlyphs;
            *v7 += v3;
          }
          v7 += 4;
          v8 = (_DWORD *)(v11 + 4);
          v11 += 4;
        }
        while ( cGlyphs );
      }
    }
    else if ( a1->ulCharInc )
    {
      *(_DWORD *)(v5 + 8) += a2;
      *(_DWORD *)(v5 + 12) += v3;
    }
    else
    {
      v9 = a1->cGlyphs;
      if ( v9 )
      {
        v10 = (_DWORD *)(v5 + 12);
        do
        {
          *(v10 - 1) += a2;
          *v10 += v3;
          v10 += 4;
          --v9;
        }
        while ( v9 );
      }
    }
  }
}
