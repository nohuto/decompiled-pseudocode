/*
 * XREFs of bMoveDevPreviewRect @ 0x1C02853FC
 * Callers:
 *     xxxDrawDragRectEx @ 0x1C02110D4 (xxxDrawDragRectEx.c)
 *     bSetDevPreviewRect @ 0x1C02855DC (bSetDevPreviewRect.c)
 * Callees:
 *     ?vUnlock@SEMOBJ@@QEAAXXZ @ 0x1C002120C (-vUnlock@SEMOBJ@@QEAAXXZ.c)
 *     GreUpdateSprite @ 0x1C003D068 (GreUpdateSprite.c)
 *     ?vUnlock@SPRITERANGELOCK@@QEAAXXZ @ 0x1C008513C (-vUnlock@SPRITERANGELOCK@@QEAAXXZ.c)
 *     ??0SEMOBJSHARED@@QEAA@PEAUHSEMAPHORE__@@@Z @ 0x1C00C3338 (--0SEMOBJSHARED@@QEAA@PEAUHSEMAPHORE__@@@Z.c)
 *     __security_check_cookie @ 0x1C015A0C0 (__security_check_cookie.c)
 *     DwmAsyncSendWindowArrangingData @ 0x1C0274D60 (DwmAsyncSendWindowArrangingData.c)
 *     ?bSetPreviewRectContent@@YAHPEAU_SPRITESTATE@@PEBU_RECTL@@@Z @ 0x1C027F5C8 (-bSetPreviewRectContent@@YAHPEAU_SPRITESTATE@@PEBU_RECTL@@@Z.c)
 */

__int64 __fastcall bMoveDevPreviewRect(HDEV a1, __int64 a2, char a3, __int64 a4, __int64 a5)
{
  unsigned int v7; // ebx
  int v9; // r15d
  __int64 v10; // r8
  HDEV v11; // rsi
  __int64 v12; // rdx
  __int64 v13; // rcx
  LONG v14; // r10d
  __int64 v15; // r9
  void *v16; // rax
  int v17; // edx
  unsigned int updated; // eax
  void *v20; // [rsp+50h] [rbp-51h]
  struct tagSIZE v21; // [rsp+80h] [rbp-21h] BYREF
  HDEV v22; // [rsp+88h] [rbp-19h] BYREF
  char v23[8]; // [rsp+90h] [rbp-11h] BYREF
  __int64 v24; // [rsp+98h] [rbp-9h] BYREF
  char v25[8]; // [rsp+A0h] [rbp-1h] BYREF
  __int128 v26; // [rsp+A8h] [rbp+7h] BYREF

  v22 = a1;
  v7 = 0;
  v21 = 0LL;
  v9 = a3 & 1;
  v26 = 0LL;
  SEMOBJSHARED::SEMOBJSHARED((SEMOBJSHARED *)v25, ghsemDynamicModeChange);
  v24 = ghsemGreLock;
  GreAcquireSemaphore(ghsemGreLock);
  SPRITELOCK::SPRITELOCK((SPRITELOCK *)v23, (struct PDEVOBJ *)&v22);
  v11 = v22;
  if ( *((_QWORD *)v22 + 156) )
  {
    v12 = (unsigned int)(*((_DWORD *)v22 + 317) - *((_DWORD *)v22 + 315));
    v13 = (unsigned int)(*((_DWORD *)v22 + 318) - *((_DWORD *)v22 + 316));
    v14 = *(_DWORD *)(a2 + 8) - *(_DWORD *)a2;
    v15 = (unsigned int)(*(_DWORD *)(a2 + 12) - *(_DWORD *)(a2 + 4));
    v21.cx = v14;
    v21.cy = v15;
    if ( *((_DWORD *)v22 + 299) )
    {
      if ( (_DWORD)v12 || (_DWORD)v13 )
      {
        v16 = (void *)UserReferenceDwmApiPort(v13, v12, v10, v15);
        v17 = 1;
      }
      else
      {
        v16 = (void *)UserReferenceDwmApiPort(v13, v12, v10, v15);
        v17 = 0;
      }
      updated = (int)DwmAsyncSendWindowArrangingData(v16, v17, a4, (__int128 *)a2, a5) >= 0;
    }
    else if ( v14 == (_DWORD)v12 && (_DWORD)v15 == (_DWORD)v13 )
    {
      LODWORD(v20) = 0;
      v26 = *(_OWORD *)a2;
      updated = GreUpdateSprite(
                  a1,
                  0LL,
                  *((void **)v22 + 156),
                  0LL,
                  (struct tagPOINT *)&v26,
                  &v21,
                  0LL,
                  0LL,
                  0,
                  0LL,
                  v20,
                  0LL,
                  0LL,
                  v9,
                  0);
    }
    else
    {
      updated = bSetPreviewRectContent((void **)v22 + 11, (const struct _RECTL *)a2);
    }
    if ( updated )
      *(_OWORD *)(v11 + 315) = *(_OWORD *)a2;
    v7 = updated;
  }
  SPRITELOCK::~SPRITELOCK((SPRITELOCK *)v23);
  SEMOBJ::vUnlock((SEMOBJ *)&v24);
  SPRITERANGELOCK::vUnlock((SPRITERANGELOCK *)v25);
  return v7;
}
