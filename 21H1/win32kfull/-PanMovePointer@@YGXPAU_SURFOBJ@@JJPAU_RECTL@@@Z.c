/*
 * XREFs of ?PanMovePointer@@YGXPAU_SURFOBJ@@JJPAU_RECTL@@@Z @ 0x1F61B4
 * Callers:
 *     <none>
 * Callees:
 *     ?PanSynchronize@@YGXPAUDHPDEV__@@PAU_RECTL@@@Z @ 0x1F6656 (-PanSynchronize@@YGXPAUDHPDEV__@@PAU_RECTL@@@Z.c)
 *     ?vPanningUpdate@@YGXPAU_PANDEV@@PAU_RECTL@@PAU_CLIPOBJ@@@Z @ 0x1F73AF (-vPanningUpdate@@YGXPAU_PANDEV@@PAU_RECTL@@PAU_CLIPOBJ@@@Z.c)
 */

void __stdcall PanMovePointer(struct _SURFOBJ *a1, int a2, int a3, struct _RECTL *a4)
{
  DHPDEV dhpdev; // edi
  HSEMAPHORE v5; // esi
  void (__stdcall *v6)(_DWORD, int, int, struct _RECTL *); // eax
  _DWORD *v7; // edx
  int v8; // ebx
  int v9; // eax
  int v10; // eax
  int v11; // ecx
  HSEMAPHORE v12; // ebx
  struct _RECTL *v13; // [esp+4h] [ebp-10h]
  struct _CLIPOBJ *v14; // [esp+8h] [ebp-Ch]
  int v15; // [esp+10h] [ebp-4h]

  dhpdev = a1->dhpdev;
  v5 = (HSEMAPHORE)*((_DWORD *)dhpdev + 19);
  EngAcquireSemaphore(v5);
  v6 = (void (__stdcall *)(_DWORD, int, int, struct _RECTL *))*((_DWORD *)dhpdev + 135);
  if ( v6 && ((_DWORD)dhpdev[10] & 0x10000) != 0 )
    v6(*((_DWORD *)dhpdev + 14), a2, a3, a4);
  v7 = dhpdev + 4;
  v8 = a1->sizlBitmap.cy + a3;
  v9 = 0;
  if ( a2 >= *((_DWORD *)dhpdev + 4) )
  {
    v15 = *((_DWORD *)dhpdev + 6);
    v7 = dhpdev + 4;
  }
  else
  {
    v10 = a2 + *(_DWORD *)dhpdev;
    *v7 = a2;
    v15 = v10;
    *((_DWORD *)dhpdev + 6) = v10;
    v9 = 1;
  }
  if ( a2 > v15 )
  {
    *((_DWORD *)dhpdev + 6) = a2;
    v9 = 1;
    *v7 = a2 - *(_DWORD *)dhpdev;
  }
  if ( v8 >= *((_DWORD *)dhpdev + 5) )
  {
    v11 = *((_DWORD *)dhpdev + 7);
  }
  else
  {
    v11 = v8 + *((_DWORD *)dhpdev + 1);
    *((_DWORD *)dhpdev + 5) = v8;
    *((_DWORD *)dhpdev + 7) = v11;
    v9 = 1;
  }
  if ( v8 > v11 )
  {
    *((_DWORD *)dhpdev + 7) = v8;
    v9 = 1;
    *((_DWORD *)dhpdev + 5) = v8 - *((_DWORD *)dhpdev + 1);
  }
  if ( v9 )
    vPanningUpdate(0, v13, v14);
  if ( v5 )
    EngReleaseSemaphore(v5);
  PanSynchronize(dhpdev, 0);
  v12 = v5 == 0 ? v5 : 0;
  if ( v12 )
    EngReleaseSemaphore(v12);
}
