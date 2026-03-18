/*
 * XREFs of GreDeleteSpriteOverlapPresent @ 0x1C00D36FC
 * Callers:
 *     xxxFreeWindow @ 0x1C00D094C (xxxFreeWindow.c)
 *     ?InternalSpritesCollision@@YAHPEAUHDEV__@@PEAUHWND__@@PEAUHRGN__@@@Z @ 0x1C0275BC8 (-InternalSpritesCollision@@YAHPEAUHDEV__@@PEAUHWND__@@PEAUHRGN__@@@Z.c)
 * Callees:
 *     ?vUnlock@SPRITERANGELOCK@@QEAAXXZ @ 0x1C008513C (-vUnlock@SPRITERANGELOCK@@QEAAXXZ.c)
 *     ?vSpComputeNoPresentRegion@@YAXPEAU_SPRITESTATE@@H@Z @ 0x1C00856F8 (-vSpComputeNoPresentRegion@@YAXPEAU_SPRITESTATE@@H@Z.c)
 *     ?vLockExclusive@SPRITERANGELOCK@@QEAAXXZ @ 0x1C008608C (-vLockExclusive@SPRITERANGELOCK@@QEAAXXZ.c)
 *     ?pSpGetPresent@@YAPEAU_PRESENT@@PEAUHDEV__@@PEAUHWND__@@@Z @ 0x1C028127C (-pSpGetPresent@@YAPEAU_PRESENT@@PEAUHDEV__@@PEAUHWND__@@@Z.c)
 *     ?vSpRemovePresent@@YAXPEAUHDEV__@@PEAU_PRESENT@@@Z @ 0x1C0283A10 (-vSpRemovePresent@@YAXPEAUHDEV__@@PEAU_PRESENT@@@Z.c)
 */

void __fastcall GreDeleteSpriteOverlapPresent(HDEV a1, HWND a2)
{
  unsigned int v2; // esi
  int v5; // r14d
  SPRITERANGELOCK *v6; // rbx
  __int64 v7; // rdx
  unsigned int v8; // edi
  __int64 v9; // r12
  struct _PRESENT *Present; // rdx
  HDEV v11; // rcx
  __int64 v12; // rdx
  __int64 v13; // rdx
  __int64 v14; // rdi

  v2 = 0;
  v5 = 0;
  if ( *((_DWORD *)a1 + 37) )
  {
    v8 = 0;
    do
    {
      v9 = *(_QWORD *)(*((_QWORD *)a1 + 19) + 8LL * v8);
      SPRITERANGELOCK::vLockExclusive((SPRITERANGELOCK *)(v9 + 208));
      Present = pSpGetPresent(*(HDEV *)(*((_QWORD *)a1 + 19) + 8LL * v8), a2);
      if ( Present )
      {
        vSpRemovePresent(v11, Present);
        Win32FreePool(v12);
        v5 = 1;
      }
      SPRITERANGELOCK::vUnlock((SPRITERANGELOCK *)(v9 + 208));
      ++v8;
    }
    while ( v8 < *((_DWORD *)a1 + 37) );
    v6 = (SPRITERANGELOCK *)(a1 + 52);
  }
  else
  {
    v6 = (SPRITERANGELOCK *)(a1 + 52);
    GreAcquireSemaphore(*((_QWORD *)a1 + 26));
    EtwTraceGreLockAcquireSemaphoreExclusive(L"hsem", *(_QWORD *)v6, 8LL);
    if ( a2 )
    {
      v7 = *((_QWORD *)a1 + 21);
      if ( v7 )
      {
        do
        {
          if ( *(HWND *)v7 == a2 )
            break;
          v7 = *(_QWORD *)(v7 + 8);
        }
        while ( v7 );
        if ( v7 )
        {
          vSpRemovePresent(a1, (struct _PRESENT *)v7);
          Win32FreePool(v13);
          v5 = 1;
        }
      }
    }
    EtwTraceGreLockReleaseSemaphore(L"hsem", *(_QWORD *)v6);
    GreReleaseSemaphoreInternal(*(_QWORD *)v6);
  }
  if ( v5 )
  {
    if ( *((_DWORD *)a1 + 37) )
    {
      do
      {
        v14 = *(_QWORD *)(*((_QWORD *)a1 + 19) + 8LL * v2);
        SPRITERANGELOCK::vLockExclusive((SPRITERANGELOCK *)(v14 + 208));
        vSpComputeNoPresentRegion((struct _SPRITESTATE *)(*(_QWORD *)(*((_QWORD *)a1 + 19) + 8LL * v2) + 88LL), 0);
        SPRITERANGELOCK::vUnlock((SPRITERANGELOCK *)(v14 + 208));
        ++v2;
      }
      while ( v2 < *((_DWORD *)a1 + 37) );
    }
    else
    {
      SPRITERANGELOCK::vLockExclusive(v6);
      vSpComputeNoPresentRegion((struct _SPRITESTATE *)(a1 + 22), 0);
      SPRITERANGELOCK::vUnlock(v6);
    }
  }
}
