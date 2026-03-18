/*
 * XREFs of _GreSaveScreenBits@16 @ 0x1FD449
 * Callers:
 *     _CreateSpb@12 @ 0xC549A (_CreateSpb@12.c)
 *     ?SpbApc@@YGXPAX00@Z @ 0x17E1AA (-SpbApc@@YGXPAX00@Z.c)
 *     _FreeSpb@4 @ 0x17E3AE (_FreeSpb@4.c)
 *     _RestoreSpb@12 @ 0x17E510 (_RestoreSpb@12.c)
 *     ?SaveScreen@@YGKPAUtagWND@@KKHHHH@Z @ 0x19DB0A (-SaveScreen@@YGKPAUtagWND@@KKHHHH@Z.c)
 * Callees:
 *     ?vUnlock@SEMOBJ@@QAEXXZ @ 0x98AE4 (-vUnlock@SEMOBJ@@QAEXXZ.c)
 *     @__security_check_cookie@4 @ 0xED840 (@__security_check_cookie@4.c)
 */

int __fastcall GreSaveScreenBits(_DWORD *a1, int a2, int a3, _DWORD *a4)
{
  int v4; // ebx
  int v6; // ebx
  int v7; // esi
  int v8; // eax
  int v10; // [esp+Ch] [ebp-28h] BYREF
  int v11; // [esp+10h] [ebp-24h] BYREF
  int (__stdcall *v12)(int, int, int, _DWORD *); // [esp+14h] [ebp-20h]
  int v13; // [esp+18h] [ebp-1Ch]
  _DWORD *v14; // [esp+1Ch] [ebp-18h]
  _DWORD v15[4]; // [esp+20h] [ebp-14h] BYREF

  v4 = 0;
  v13 = a2;
  v14 = a4;
  memset(v15, 0, sizeof(v15));
  GreAcquireSemaphoreSharedInternal(_ghsemDynamicModeChange);
  EtwTraceGreLockAcquireSemaphoreShared(L"hsem", _ghsemDynamicModeChange);
  v10 = _ghsemGreLock;
  GreAcquireSemaphore(_ghsemGreLock);
  if ( (a1[6] & 0x400) == 0 )
  {
    v11 = _ghsemSprite;
    GreAcquireSemaphore(_ghsemSprite);
    v12 = (int (__stdcall *)(int, int, int, _DWORD *))a1[515];
    if ( v12 )
    {
      v6 = a1[455] != 0 ? a1[455] + 16 : 0;
      if ( v13 == 2 )
        v14 = v15;
      v7 = 0;
      if ( v6 )
      {
        v8 = *(_DWORD *)(v6 + 56);
        if ( (v8 & 0x80004000) != 0 && (v8 & 0x200) == 0 )
        {
          v7 = v6 - 16;
          GreLockDisplayDevice(*(_DWORD *)(v6 - 16 + 28));
        }
      }
      v4 = v12(v6, v13, a3, v14);
      if ( v7 )
        GreUnlockDisplayDevice(*(_DWORD *)(v7 + 28));
    }
    SEMOBJ::vUnlock((SEMOBJ *)&v11);
  }
  SEMOBJ::vUnlock((SEMOBJ *)&v10);
  EtwTraceGreLockReleaseSemaphore(L"hsem", _ghsemDynamicModeChange);
  GreReleaseSemaphoreInternal(_ghsemDynamicModeChange);
  return v4;
}
