/*
 * XREFs of _GreDeleteSpriteOverlapPresent@8 @ 0x7193A
 * Callers:
 *     _xxxFreeWindow@8 @ 0x70780 (_xxxFreeWindow@8.c)
 *     ?InternalSpritesCollision@@YGHPAUHDEV__@@PAUHWND__@@PAUHRGN__@@@Z @ 0x1D3470 (-InternalSpritesCollision@@YGHPAUHDEV__@@PAUHWND__@@PAUHRGN__@@@Z.c)
 * Callees:
 *     ?pSpGetPresent@@YGPAU_PRESENT@@PAUHDEV__@@PAUHWND__@@@Z @ 0x719BA (-pSpGetPresent@@YGPAU_PRESENT@@PAUHDEV__@@PAUHWND__@@@Z.c)
 *     ?vSpComputeNoPresentRegion@@YGXPAU_SPRITESTATE@@H@Z @ 0xA00EE (-vSpComputeNoPresentRegion@@YGXPAU_SPRITESTATE@@H@Z.c)
 *     ?vSpRemovePresent@@YGXPAUHDEV__@@PAU_PRESENT@@@Z @ 0x1E260D (-vSpRemovePresent@@YGXPAUHDEV__@@PAU_PRESENT@@@Z.c)
 */

int __thiscall GreDeleteSpriteOverlapPresent(_DWORD *this)
{
  unsigned int v2; // esi
  int result; // eax
  unsigned int v4; // ecx
  int v5; // edx
  int v6; // edx
  int v7; // esi
  struct _SPRITESTATE *v8; // [esp+0h] [ebp-20h]
  struct _PRESENT *v9; // [esp+4h] [ebp-1Ch]
  unsigned int v10; // [esp+10h] [ebp-10h]
  int v11; // [esp+14h] [ebp-Ch]
  unsigned int v12; // [esp+18h] [ebp-8h]
  int v13; // [esp+1Ch] [ebp-4h]

  v2 = 0;
  v10 = 0;
  v11 = 0;
  if ( this[26] )
  {
    v4 = 0;
    v12 = 0;
    do
    {
      v13 = *(_DWORD *)(this[27] + 4 * v4);
      GreAcquireSemaphore(*(_DWORD *)(v13 + 152));
      EtwTraceGreLockAcquireSemaphoreExclusive(L"hsem", *(_DWORD *)(v13 + 152), 8);
      if ( pSpGetPresent((HDEV)v8, (HWND)v9) )
      {
        vSpRemovePresent((HDEV)v8, v9);
        Win32FreePool(v5);
        v11 = 1;
      }
      EtwTraceGreLockReleaseSemaphore(L"hsem", *(_DWORD *)(v13 + 152));
      result = GreReleaseSemaphoreInternal(*(_DWORD *)(v13 + 152));
      v4 = v12 + 1;
      v12 = v4;
    }
    while ( v4 < this[26] );
    v2 = 0;
  }
  else
  {
    GreAcquireSemaphore(this[38]);
    EtwTraceGreLockAcquireSemaphoreExclusive(L"hsem", this[38], 8);
    if ( pSpGetPresent((HDEV)v8, (HWND)v9) )
    {
      vSpRemovePresent((HDEV)v8, v9);
      Win32FreePool(v6);
      v11 = 1;
    }
    EtwTraceGreLockReleaseSemaphore(L"hsem", this[38]);
    result = GreReleaseSemaphoreInternal(this[38]);
  }
  if ( v11 )
  {
    if ( this[26] )
    {
      do
      {
        v7 = *(_DWORD *)(this[27] + 4 * v2);
        GreAcquireSemaphore(*(_DWORD *)(v7 + 152));
        EtwTraceGreLockAcquireSemaphoreExclusive(L"hsem", *(_DWORD *)(v7 + 152), 8);
        vSpComputeNoPresentRegion(v8, (int)v9);
        EtwTraceGreLockReleaseSemaphore(L"hsem", *(_DWORD *)(v7 + 152));
        result = GreReleaseSemaphoreInternal(*(_DWORD *)(v7 + 152));
        v2 = v10 + 1;
        v10 = v2;
      }
      while ( v2 < this[26] );
    }
    else
    {
      GreAcquireSemaphore(this[38]);
      EtwTraceGreLockAcquireSemaphoreExclusive(L"hsem", this[38], 8);
      vSpComputeNoPresentRegion(v8, (int)v9);
      EtwTraceGreLockReleaseSemaphore(L"hsem", this[38]);
      return GreReleaseSemaphoreInternal(this[38]);
    }
  }
  return result;
}
