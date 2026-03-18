/*
 * XREFs of ?bUnHookRedir@@YGHAAVXDCOBJ@@@Z @ 0x1FC439
 * Callers:
 *     ?bUnMapTrgSurfaceView@DEVLOCKBLTOBJ@@QAEHXZ @ 0x5A96A (-bUnMapTrgSurfaceView@DEVLOCKBLTOBJ@@QAEHXZ.c)
 *     _GreDrawStream@12 @ 0x5C150 (_GreDrawStream@12.c)
 *     ?vDestructor@DEVLOCKOBJ@@QAEXXZ @ 0x5E730 (-vDestructor@DEVLOCKOBJ@@QAEXXZ.c)
 *     ?bUnMapTrgSurfaceView@DEVLOCKOBJ@@QAEHXZ @ 0xABAC4 (-bUnMapTrgSurfaceView@DEVLOCKOBJ@@QAEHXZ.c)
 * Callees:
 *     ?SETFLAG@@YGXHACKK@Z @ 0x9DB80 (-SETFLAG@@YGXHACKK@Z.c)
 *     ?bUndoMakeOpaque@@YGHPAVSURFACE@@@Z @ 0x1FC4F6 (-bUndoMakeOpaque@@YGHPAVSURFACE@@@Z.c)
 *     ?vFindAndReplaceRFONT@@YGXAAVPDEVOBJ@@00@Z @ 0x1FC54A (-vFindAndReplaceRFONT@@YGXAAVPDEVOBJ@@00@Z.c)
 */

int __usercall bUnHookRedir@<eax>(_DWORD *a1@<ecx>, unsigned int a2@<ebx>, volatile unsigned int *a3@<edi>)
{
  int v3; // esi
  int v4; // ebx
  _DWORD *v5; // esi
  struct SURFACE *v7; // [esp-8h] [ebp-1Ch]
  struct PDEVOBJ *v8; // [esp-8h] [ebp-1Ch]
  struct PDEVOBJ *v10; // [esp-4h] [ebp-18h]
  _DWORD *v11; // [esp+4h] [ebp-10h]
  int v12; // [esp+8h] [ebp-Ch]
  _DWORD *v13; // [esp+10h] [ebp-4h] BYREF

  v13 = a1;
  if ( !gpRedirDev )
    return 0;
  v3 = *a1;
  if ( !*a1 || (*(_DWORD *)(v3 + 24) & 0x4000) == 0 )
    return 0;
  v12 = *(_DWORD *)(v3 + 36);
  v4 = *(_DWORD *)(v12 + 2316);
  SETFLAG((volatile signed __int32 *)(v12 + 24), 0, 0x800000, a3, a2);
  *(_DWORD *)(v12 + 2316) = 0;
  bUndoMakeOpaque(v7);
  v5 = v13;
  *(_DWORD *)(*v13 + 36) = v4;
  v13 = *(_DWORD **)(*v5 + 36);
  v11 = v13;
  vFindAndReplaceRFONT((struct PDEVOBJ *)&v13, v8, v10);
  qmemcpy(v11 + 16, (const void *)(v12 + 64), 0x36Cu);
  qmemcpy(v11 + 238, (const void *)(v12 + 952), 0x3B4u);
  v11[16] = v11;
  return 1;
}
