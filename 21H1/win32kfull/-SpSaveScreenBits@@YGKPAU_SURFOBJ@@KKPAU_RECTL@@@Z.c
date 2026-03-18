/*
 * XREFs of ?SpSaveScreenBits@@YGKPAU_SURFOBJ@@KKPAU_RECTL@@@Z @ 0x1DBE11
 * Callers:
 *     <none>
 * Callees:
 *     ?vUnlock@SEMOBJ@@QAEXXZ @ 0x98AE4 (-vUnlock@SEMOBJ@@QAEXXZ.c)
 *     @__security_check_cookie@4 @ 0xED840 (@__security_check_cookie@4.c)
 *     ??1DEVEXCLUDERECT@@QAE@XZ @ 0x1D6F97 (--1DEVEXCLUDERECT@@QAE@XZ.c)
 *     ??0UNDODESKTOPCOORD@@QAE@PAVEWNDOBJ@@PAU_SPRITESTATE@@@Z @ 0x1DA5B3 (--0UNDODESKTOPCOORD@@QAE@PAVEWNDOBJ@@PAU_SPRITESTATE@@@Z.c)
 *     ??1UNDODESKTOPCOORD@@QAE@XZ @ 0x1DA6E7 (--1UNDODESKTOPCOORD@@QAE@XZ.c)
 *     ?GreTearDownSprites@@YGHPAUHDEV__@@PAU_RECTL@@H@Z @ 0x1DB505 (-GreTearDownSprites@@YGHPAUHDEV__@@PAU_RECTL@@H@Z.c)
 */

int __stdcall SpSaveScreenBits(struct _SURFOBJ *a1, unsigned int a2, unsigned int a3, struct _RECTL *a4)
{
  struct _SURFOBJ *v4; // eax
  struct _RECTL *v5; // ecx
  HDEV hdev; // ebx
  int v7; // esi
  struct TRACKOBJ *v8; // ebx
  int v9; // edi
  _DWORD *i; // edi
  struct _RECTL *v12; // [esp+0h] [ebp-50h]
  int v13; // [esp+4h] [ebp-4Ch]
  _BYTE v14[12]; // [esp+Ch] [ebp-44h] BYREF
  HDEV v15; // [esp+18h] [ebp-38h]
  struct _SPRITESTATE *v16; // [esp+1Ch] [ebp-34h]
  struct _SURFOBJ *v17; // [esp+20h] [ebp-30h]
  int v18; // [esp+24h] [ebp-2Ch] BYREF
  int v19; // [esp+28h] [ebp-28h]
  struct _RECTL *v20; // [esp+2Ch] [ebp-24h]
  struct XDCOBJ *v21; // [esp+30h] [ebp-20h] BYREF
  HDEV v22; // [esp+34h] [ebp-1Ch]
  LONG left; // [esp+38h] [ebp-18h]
  LONG top; // [esp+3Ch] [ebp-14h]
  LONG right; // [esp+40h] [ebp-10h]
  LONG bottom; // [esp+44h] [ebp-Ch]
  int v27; // [esp+48h] [ebp-8h]

  v4 = a1;
  v5 = a4;
  hdev = a1->hdev;
  v7 = 0;
  v27 = 0;
  v21 = 0;
  v17 = a1;
  v20 = a4;
  v15 = hdev;
  v16 = (struct _SPRITESTATE *)(hdev + 16);
  if ( *((_DWORD *)hdev + 217) && gpto )
  {
    if ( !a2 )
    {
      v18 = _ghsemWndobj;
      GreAcquireSemaphore(_ghsemWndobj);
      v8 = gpto;
      v9 = 0;
      v19 = 0;
      if ( !gpto )
      {
LABEL_21:
        SEMOBJ::vUnlock((SEMOBJ *)&v18);
        goto LABEL_19;
      }
      while ( !v9 )
      {
        for ( i = (_DWORD *)*((_DWORD *)v8 + 3); ; i = (_DWORD *)i[32] )
        {
          if ( !i )
          {
            v9 = v19;
            goto LABEL_13;
          }
          UNDODESKTOPCOORD::UNDODESKTOPCOORD((UNDODESKTOPCOORD *)v14, (struct EWNDOBJ *)i, v16);
          if ( (i[35] & 0x1000000) != 0 && bIntersect(i + 1, v20) && RGNOBJ::bInside((RGNOBJ *)(i + 12), v20) == 2 )
            break;
          UNDODESKTOPCOORD::~UNDODESKTOPCOORD((UNDODESKTOPCOORD *)v14);
        }
        v9 = 1;
        v19 = 1;
        UNDODESKTOPCOORD::~UNDODESKTOPCOORD((UNDODESKTOPCOORD *)v14);
LABEL_13:
        v8 = (struct TRACKOBJ *)*((_DWORD *)v8 + 1);
        if ( !v8 )
        {
          if ( !v9 )
            goto LABEL_21;
          break;
        }
      }
      SEMOBJ::vUnlock((SEMOBJ *)&v18);
      hdev = v15;
      v5 = v20;
      v4 = v17;
    }
    if ( a2 != 2 )
    {
      v22 = v4->hdev;
      left = v5->left;
      top = v5->top;
      right = v5->right;
      bottom = v5->bottom;
      v21 = (struct XDCOBJ *)GreTearDownSprites((int)v22, (HDEV)v5, v12, v13);
    }
    v7 = (*((int (__stdcall **)(struct _SURFOBJ *, unsigned int, unsigned int, struct _RECTL *))hdev + 217))(
           v17,
           a2,
           a3,
           v20);
  }
LABEL_19:
  DEVEXCLUDERECT::~DEVEXCLUDERECT(&v21);
  return v7;
}
