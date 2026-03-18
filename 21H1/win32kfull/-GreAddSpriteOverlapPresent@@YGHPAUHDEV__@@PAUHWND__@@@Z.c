/*
 * XREFs of ?GreAddSpriteOverlapPresent@@YGHPAUHDEV__@@PAUHWND__@@@Z @ 0x1DB290
 * Callers:
 *     ?InternalSpritesCollision@@YGHPAUHDEV__@@PAUHWND__@@PAUHRGN__@@@Z @ 0x1D3470 (-InternalSpritesCollision@@YGHPAUHDEV__@@PAUHWND__@@PAUHRGN__@@@Z.c)
 * Callees:
 *     ?pSpGetPresent@@YGPAU_PRESENT@@PAUHDEV__@@PAUHWND__@@@Z @ 0x719BA (-pSpGetPresent@@YGPAU_PRESENT@@PAUHDEV__@@PAUHWND__@@@Z.c)
 *     ?vSpComputeNoPresentRegion@@YGXPAU_SPRITESTATE@@H@Z @ 0xA00EE (-vSpComputeNoPresentRegion@@YGXPAU_SPRITESTATE@@H@Z.c)
 *     ?pSpCreatePresent@@YGPAU_PRESENT@@PAUHDEV__@@PAUHWND__@@@Z @ 0x1DF39A (-pSpCreatePresent@@YGPAU_PRESENT@@PAUHDEV__@@PAUHWND__@@@Z.c)
 *     ?vSpRemovePresent@@YGXPAUHDEV__@@PAU_PRESENT@@@Z @ 0x1E260D (-vSpRemovePresent@@YGXPAUHDEV__@@PAU_PRESENT@@@Z.c)
 */

BOOL __fastcall GreAddSpriteOverlapPresent(int *a1, int a2)
{
  unsigned int v3; // edx
  struct _PRESENT *Present; // ebx
  unsigned int v5; // ecx
  unsigned int v6; // ebx
  int v7; // esi
  HDEV v9; // [esp+0h] [ebp-20h]
  struct _PRESENT *v10; // [esp+4h] [ebp-1Ch]
  unsigned int v12; // [esp+10h] [ebp-10h]
  unsigned int v13; // [esp+10h] [ebp-10h]
  BOOL v14; // [esp+14h] [ebp-Ch]
  int v15; // [esp+18h] [ebp-8h]
  int v16; // [esp+18h] [ebp-8h]
  struct _PRESENT *v17; // [esp+1Ch] [ebp-4h]

  v14 = 0;
  if ( a1[26] )
  {
    v3 = 0;
    v12 = 0;
    while ( 1 )
    {
      v15 = *(_DWORD *)(a1[27] + 4 * v3);
      GreAcquireSemaphore(*(_DWORD *)(v15 + 152));
      EtwTraceGreLockAcquireSemaphoreExclusive(L"hsem", *(_DWORD *)(v15 + 152), 8);
      Present = pSpGetPresent(*(_DWORD *)(a1[27] + 4 * v12), a2);
      v17 = Present;
      if ( !Present )
      {
        Present = pSpCreatePresent(v9, (HWND)v10);
        v17 = Present;
        if ( !Present )
        {
          EtwTraceGreLockReleaseSemaphore(L"hsem", *(_DWORD *)(v15 + 152));
          GreReleaseSemaphoreInternal(*(_DWORD *)(v15 + 152));
          v5 = 0;
          v14 = 0;
          v13 = 0;
          if ( a1[26] )
          {
            do
            {
              v16 = *(_DWORD *)(a1[27] + 4 * v5);
              GreAcquireSemaphore(*(_DWORD *)(v16 + 152));
              EtwTraceGreLockAcquireSemaphoreExclusive(L"hsem", *(_DWORD *)(v16 + 152), 8);
              Present = pSpGetPresent(*(_DWORD *)(a1[27] + 4 * v13), a2);
              v17 = Present;
              if ( Present )
              {
                vSpRemovePresent(v9, v10);
                Win32FreePool(Present);
              }
              EtwTraceGreLockReleaseSemaphore(L"hsem", *(_DWORD *)(v16 + 152));
              GreReleaseSemaphoreInternal(*(_DWORD *)(v16 + 152));
              v5 = v13 + 1;
              v13 = v5;
            }
            while ( v5 < a1[26] );
            goto LABEL_16;
          }
          return Present != 0;
        }
        v14 = 1;
      }
      EtwTraceGreLockReleaseSemaphore(L"hsem", *(_DWORD *)(v15 + 152));
      GreReleaseSemaphoreInternal(*(_DWORD *)(v15 + 152));
      v3 = v12 + 1;
      v12 = v3;
      if ( v3 >= a1[26] )
        goto LABEL_16;
    }
  }
  GreAcquireSemaphore(a1[38]);
  EtwTraceGreLockAcquireSemaphoreExclusive(L"hsem", a1[38], 8);
  Present = pSpGetPresent((int)a1, a2);
  v17 = Present;
  if ( !Present )
  {
    Present = pSpCreatePresent(v9, (HWND)v10);
    v17 = Present;
    v14 = Present != 0;
  }
  EtwTraceGreLockReleaseSemaphore(L"hsem", a1[38]);
  GreReleaseSemaphoreInternal(a1[38]);
LABEL_16:
  if ( v14 )
  {
    if ( a1[26] )
    {
      v6 = 0;
      do
      {
        v7 = *(_DWORD *)(a1[27] + 4 * v6);
        GreAcquireSemaphore(*(_DWORD *)(v7 + 152));
        EtwTraceGreLockAcquireSemaphoreExclusive(L"hsem", *(_DWORD *)(v7 + 152), 8);
        vSpComputeNoPresentRegion((int *)(*(_DWORD *)(a1[27] + 4 * v6) + 64), 0);
        EtwTraceGreLockReleaseSemaphore(L"hsem", *(_DWORD *)(v7 + 152));
        GreReleaseSemaphoreInternal(*(_DWORD *)(v7 + 152));
        ++v6;
      }
      while ( v6 < a1[26] );
      Present = v17;
    }
    else
    {
      GreAcquireSemaphore(a1[38]);
      EtwTraceGreLockAcquireSemaphoreExclusive(L"hsem", a1[38], 8);
      vSpComputeNoPresentRegion(a1 + 16, 0);
      EtwTraceGreLockReleaseSemaphore(L"hsem", a1[38]);
      GreReleaseSemaphoreInternal(a1[38]);
    }
  }
  return Present != 0;
}
