/*
 * XREFs of ?ulSimulateSaveScreenBits@@YGKPAU_SURFOBJ@@KKPAU_RECTL@@@Z @ 0x2065CB
 * Callers:
 *     ?MulSaveScreenBits@@YGKPAU_SURFOBJ@@KKPAU_RECTL@@@Z @ 0x203CA5 (-MulSaveScreenBits@@YGKPAU_SURFOBJ@@KKPAU_RECTL@@@Z.c)
 * Callees:
 *     @__security_check_cookie@4 @ 0xED840 (@__security_check_cookie@4.c)
 */

SURFOBJ *__stdcall ulSimulateSaveScreenBits(struct _SURFOBJ *a1, unsigned int a2, SURFOBJ *pso, struct _RECTL *a4)
{
  SURFOBJ *v4; // edx
  HDEV hdev; // esi
  int v6; // ebx
  int v7; // eax
  int (__stdcall *v8)(DHPDEV, int, int, ULONG); // ecx
  HBITMAP Bitmap; // eax
  SURFOBJ *v10; // ebx
  HSURF hsurf; // esi
  int v13; // [esp+14h] [ebp-28h]
  int v14; // [esp+18h] [ebp-24h]
  _DWORD v15[2]; // [esp+20h] [ebp-1Ch] BYREF
  _DWORD v16[4]; // [esp+28h] [ebp-14h] BYREF

  v15[0] = 0;
  v15[1] = 0;
  v4 = pso;
  hdev = a1->hdev;
  if ( !a2 )
  {
    v6 = a4->right - a4->left;
    v7 = a4->bottom - a4->top;
    v8 = (int (__stdcall *)(DHPDEV, int, int, ULONG))*((_DWORD *)hdev + 485);
    v14 = v6;
    v13 = v7;
    if ( v8 )
    {
      Bitmap = (HBITMAP)v8(a1->dhpdev, v6, v7, a1->iBitmapFormat);
      if ( Bitmap && Bitmap != (HBITMAP)-1 )
      {
LABEL_7:
        v10 = EngLockSurface((HSURF)Bitmap);
        if ( v10 )
        {
          v16[2] = v14;
          v16[0] = 0;
          v16[1] = 0;
          v16[3] = v13;
          if ( ((int)v10[1].hsurf & 0x400) != 0 )
            (*((void (__stdcall **)(SURFOBJ *, struct _SURFOBJ *, _DWORD, _DWORD, _DWORD *, struct _RECTL *))hdev + 494))(
              v10,
              a1,
              0,
              0,
              v16,
              a4);
          else
            EngCopyBits(v10, a1, 0, 0, (RECTL *)v16, (POINTL *)a4);
        }
        return v10;
      }
      v7 = v13;
    }
    Bitmap = EngCreateBitmap((SIZEL)__PAIR64__(v7, v6), 0, a1->iBitmapFormat, 1u, 0);
    goto LABEL_7;
  }
  v10 = (SURFOBJ *)1;
  if ( a2 == 1 )
  {
    if ( ((int)*(a1 != 0 ? &a1[1].hsurf : (HSURF *)72) & 0x400) != 0 )
      (*((void (__stdcall **)(struct _SURFOBJ *, SURFOBJ *, _DWORD, _DWORD, struct _RECTL *, _DWORD *))hdev + 494))(
        a1,
        pso,
        0,
        0,
        a4,
        v15);
    else
      EngCopyBits(a1, pso, 0, 0, a4, (POINTL *)v15);
    v4 = pso;
  }
  hsurf = v4->hsurf;
  EngUnlockSurface(v4);
  EngDeleteSurface(hsurf);
  return v10;
}
