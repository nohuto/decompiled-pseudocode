/*
 * XREFs of ?bUnHookBmpDrv@@YGHAAVXDCOBJ@@@Z @ 0x1FAAC3
 * Callers:
 *     ?bUnMapTrgSurfaceView@DEVLOCKBLTOBJ@@QAEHXZ @ 0x5A96A (-bUnMapTrgSurfaceView@DEVLOCKBLTOBJ@@QAEHXZ.c)
 *     _GreDrawStream@12 @ 0x5C150 (_GreDrawStream@12.c)
 *     ?vDestructor@DEVLOCKOBJ@@QAEXXZ @ 0x5E730 (-vDestructor@DEVLOCKOBJ@@QAEXXZ.c)
 *     ?bUnMapTrgSurfaceView@DEVLOCKOBJ@@QAEHXZ @ 0xABAC4 (-bUnMapTrgSurfaceView@DEVLOCKOBJ@@QAEHXZ.c)
 * Callees:
 *     ?SETFLAG@@YGXHACKK@Z @ 0x9DB80 (-SETFLAG@@YGXHACKK@Z.c)
 *     ?bBmpUndoMakeOpaque@@YGHPAVSURFACE@@@Z @ 0x1FA85F (-bBmpUndoMakeOpaque@@YGHPAVSURFACE@@@Z.c)
 *     ?vFindAndReplaceRFONT@@YGXAAVPDEVOBJ@@00@Z @ 0x1FC54A (-vFindAndReplaceRFONT@@YGXAAVPDEVOBJ@@00@Z.c)
 */

int __usercall bUnHookBmpDrv@<eax>(_DWORD *a1@<ecx>, unsigned int a2@<ebx>, volatile unsigned int *a3@<edi>)
{
  _DWORD *v3; // esi
  int v4; // edi
  int v5; // esi
  int v6; // ebx
  _DWORD *v7; // esi
  struct PDEVOBJ *v10; // [esp-8h] [ebp-1Ch]
  struct PDEVOBJ *v12; // [esp-4h] [ebp-18h]
  _DWORD *v13; // [esp+4h] [ebp-10h]
  _DWORD *v14; // [esp+10h] [ebp-4h] BYREF

  v14 = a1;
  if ( !gpBmpDev )
    return 0;
  v3 = (_DWORD *)*a1;
  if ( !*a1 || (v3[6] & 0x4000) != 0 )
    return 0;
  v4 = v3[9];
  v5 = v3[126];
  v6 = *(_DWORD *)(v4 + 2316);
  SETFLAG((volatile signed __int32 *)(v4 + 24), 0, 0x800000, a3, a2);
  *(_DWORD *)(v4 + 2316) = 0;
  bBmpUndoMakeOpaque(v5);
  v7 = v14;
  *(_DWORD *)(*v14 + 36) = v6;
  v14 = *(_DWORD **)(*v7 + 36);
  v13 = v14;
  vFindAndReplaceRFONT((struct PDEVOBJ *)&v14, v10, v12);
  qmemcpy(v13 + 16, (const void *)(v4 + 64), 0x36Cu);
  qmemcpy(v13 + 238, (const void *)(v4 + 952), 0x3B4u);
  v13[16] = v13;
  return 1;
}
