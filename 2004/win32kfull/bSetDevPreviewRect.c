/*
 * XREFs of bSetDevPreviewRect @ 0x1C0286B4C
 * Callers:
 *     xxxDrawDragRectEx @ 0x1C0211F54 (xxxDrawDragRectEx.c)
 * Callees:
 *     ?vUnlock@SEMOBJ@@QEAAXXZ @ 0x1C000F68C (-vUnlock@SEMOBJ@@QEAAXXZ.c)
 *     GreCreateSprite @ 0x1C0028EB8 (GreCreateSprite.c)
 *     ?vUnlock@SPRITERANGELOCK@@QEAAXXZ @ 0x1C002D44C (-vUnlock@SPRITERANGELOCK@@QEAAXXZ.c)
 *     ??0SEMOBJSHARED@@QEAA@PEAUHSEMAPHORE__@@@Z @ 0x1C002D58C (--0SEMOBJSHARED@@QEAA@PEAUHSEMAPHORE__@@@Z.c)
 *     ?bCleanupSpriteStateRects@@YAHPEAUHDEV__@@PEAU_SPRITESTATE@@@Z @ 0x1C004C04C (-bCleanupSpriteStateRects@@YAHPEAUHDEV__@@PEAU_SPRITESTATE@@@Z.c)
 *     GreDeleteSprite @ 0x1C004ECD8 (GreDeleteSprite.c)
 *     vSpDwmGetMiniWinInfoForNonWindowSprite @ 0x1C0126880 (vSpDwmGetMiniWinInfoForNonWindowSprite.c)
 *     __security_check_cookie @ 0x1C0157760 (__security_check_cookie.c)
 *     memset @ 0x1C015C000 (memset.c)
 *     DwmAsyncSendWindowArrangingData @ 0x1C02762D0 (DwmAsyncSendWindowArrangingData.c)
 *     bMoveDevPreviewRect @ 0x1C028696C (bMoveDevPreviewRect.c)
 */

__int64 __fastcall bSetDevPreviewRect(HDEV a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5)
{
  char v7; // r12
  unsigned int v8; // edi
  bool v9; // r15
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // r8
  __int64 v13; // r9
  int v14; // esi
  HWND v15; // rdx
  void *Sprite; // rax
  void *v17; // rax
  HSPRITE v18; // r8
  int v20; // [rsp+38h] [rbp-C8h]
  int v21; // [rsp+40h] [rbp-C0h]
  int v22; // [rsp+48h] [rbp-B8h]
  __int64 v23; // [rsp+50h] [rbp-B0h]
  HDEV v25; // [rsp+68h] [rbp-98h] BYREF
  _BYTE v26[8]; // [rsp+70h] [rbp-90h] BYREF
  __int64 v27; // [rsp+78h] [rbp-88h] BYREF
  _BYTE v28[16]; // [rsp+80h] [rbp-80h] BYREF
  _BYTE v29[144]; // [rsp+90h] [rbp-70h] BYREF

  v25 = a1;
  v7 = a3;
  v8 = 1;
  SEMOBJSHARED::SEMOBJSHARED((SEMOBJSHARED *)v28, ghsemDynamicModeChange, a3, a4);
  v27 = ghsemGreLock;
  GreAcquireSemaphore(ghsemGreLock);
  SPRITELOCK::SPRITELOCK((SPRITELOCK *)v26, (struct PDEVOBJ *)&v25);
  v9 = *((_DWORD *)a1 + 298) && *((_DWORD *)a1 + 299);
  bCleanupSpriteStateRects(a1, (struct _SPRITESTATE *)(a1 + 22));
  v14 = v7 & 1;
  if ( a2 )
  {
    *((_DWORD *)a1 + 299) = v14;
    memset(v29, 0, 0x88uLL);
    vSpDwmGetMiniWinInfoForNonWindowSprite((__int64)v29, 0LL);
    Sprite = GreCreateSprite(
               a1,
               v15,
               0LL,
               (struct tagMINIWINDOWINFO *)v29,
               0x9900u,
               v7 & 1,
               1,
               (unsigned int)v15 & v20,
               (unsigned int)v15 & v21,
               (unsigned int)v15 & v22,
               (unsigned __int16 *)((unsigned __int64)v15 & v23));
    *((_QWORD *)a1 + 156) = Sprite;
    if ( Sprite )
    {
      *((_DWORD *)a1 + 298) = 1;
      *((_DWORD *)a1 + 299) = v14;
      if ( (v7 & 4) == 0 )
        bMoveDevPreviewRect(a1, a2, 1LL, a4, a5);
    }
    else
    {
      v8 = 0;
    }
  }
  else if ( v9 )
  {
    v17 = (void *)UserReferenceDwmApiPort(v11, v10, v12, v13);
    DwmAsyncSendWindowArrangingData(v17, 2, a4, 0LL, a5);
  }
  if ( !*((_DWORD *)a1 + 298) )
  {
    v18 = (HSPRITE)*((_QWORD *)a1 + 156);
    if ( v18 )
    {
      GreDeleteSprite(a1, 0LL, v18, *((_DWORD *)a1 + 299));
      *((_QWORD *)a1 + 156) = 0LL;
    }
  }
  SPRITELOCK::~SPRITELOCK((SPRITELOCK *)v26);
  SEMOBJ::vUnlock((SEMOBJ *)&v27);
  SPRITERANGELOCK::vUnlock((SPRITERANGELOCK *)v28);
  return v8;
}
