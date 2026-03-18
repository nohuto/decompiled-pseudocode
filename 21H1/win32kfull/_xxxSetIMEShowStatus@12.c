/*
 * XREFs of _xxxSetIMEShowStatus@12 @ 0xCC776
 * Callers:
 *     xxxSystemParametersInfoWorker @ 0x270DA (xxxSystemParametersInfoWorker.c)
 * Callees:
 *     _W32GetThreadWin32Thread@4 @ 0x3FA3E (_W32GetThreadWin32Thread@4.c)
 *     ?xxxNotifyImeShowStatus@@YGXPAUtagWND@@@Z @ 0xC38A2 (-xxxNotifyImeShowStatus@@YGXPAUtagWND@@@Z.c)
 *     _UpdateWinIniInt@16 @ 0x145EB1 (_UpdateWinIniInt@16.c)
 */

int __fastcall xxxSetIMEShowStatus(int a1, int a2, _DWORD *a3)
{
  int v4; // esi
  int v5; // esi
  int v6; // edi
  PKTHREAD CurrentThread; // eax
  int ThreadWin32Thread; // eax
  int v10; // edi
  int v11; // [esp+Ch] [ebp-Ch] BYREF
  int v12; // [esp+10h] [ebp-8h]
  int v13; // [esp+14h] [ebp-4h]

  *a3 = 0;
  if ( gfIMEShowStatus == a1 )
    return 1;
  if ( !a2 )
    goto LABEL_3;
  v11 = 0;
  v12 = 0;
  v13 = 0;
  v10 = CreateProfileUserName(&v11);
  if ( v10 )
  {
    *a3 = UpdateWinIniInt(236, a1);
    FreeProfileUserName(v10, &v11);
  }
  if ( *a3 )
  {
LABEL_3:
    gfIMEShowStatus = a1;
    if ( (*_gpsi & 4) != 0 )
    {
      if ( _gpqForeground )
      {
        v4 = *(_DWORD *)(_gpqForeground + 60);
        if ( v4 )
        {
          v5 = *(_DWORD *)(v4 + 8);
          v13 = 0;
          v6 = *(_DWORD *)(v5 + 436);
          if ( v6 )
          {
            if ( (*(_BYTE *)(v5 + 264) & 1) == 0 )
            {
              CurrentThread = KeGetCurrentThread();
              ThreadWin32Thread = W32GetThreadWin32Thread(CurrentThread);
              v11 = *(_DWORD *)(ThreadWin32Thread + 228);
              *(_DWORD *)(ThreadWin32Thread + 228) = &v11;
              v12 = v6;
              HMLockObject(v6);
              xxxNotifyImeShowStatus(*(_DWORD **)(v5 + 436));
              ThreadUnlock1();
            }
          }
        }
      }
    }
    return 1;
  }
  return 0;
}
