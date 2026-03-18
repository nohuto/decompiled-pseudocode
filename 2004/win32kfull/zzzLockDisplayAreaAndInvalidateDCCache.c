/*
 * XREFs of zzzLockDisplayAreaAndInvalidateDCCache @ 0x1C00719C4
 * Callers:
 *     xxxSetLayeredWindow @ 0x1C0028B2C (xxxSetLayeredWindow.c)
 *     zzzLockWindowUpdate2 @ 0x1C0031334 (zzzLockWindowUpdate2.c)
 *     ?xxxSetParentWorker@@YAPEAUtagWND@@PEAU1@00H@Z @ 0x1C003B6EC (-xxxSetParentWorker@@YAPEAUtagWND@@PEAU1@00H@Z.c)
 *     UnsetLayeredWindow @ 0x1C004EA28 (UnsetLayeredWindow.c)
 *     zzzUpdateWindowsAfterModeChange @ 0x1C0051198 (zzzUpdateWindowsAfterModeChange.c)
 *     zzzResetSharedDesktops @ 0x1C00521B0 (zzzResetSharedDesktops.c)
 *     xxxScrollWindowEx @ 0x1C00695EC (xxxScrollWindowEx.c)
 *     ?zzzBltValidBits@@YA?AW4BltBitsResult@@PEAUtagSMWP@@@Z @ 0x1C006D280 (-zzzBltValidBits@@YA-AW4BltBitsResult@@PEAUtagSMWP@@@Z.c)
 *     xxxDestroyWindow @ 0x1C008A700 (xxxDestroyWindow.c)
 *     xxxSetWindowStyle @ 0x1C009C710 (xxxSetWindowStyle.c)
 *     xxxCreateWindowEx @ 0x1C00A8C10 (xxxCreateWindowEx.c)
 *     ?xxxDWP_SetRedraw@@YAXPEAUtagWND@@H@Z @ 0x1C00F76E0 (-xxxDWP_SetRedraw@@YAXPEAUtagWND@@H@Z.c)
 *     xxxMinimizeHungWindow @ 0x1C023FFD0 (xxxMinimizeHungWindow.c)
 * Callees:
 *     _GetDesktopWindow @ 0x1C006F290 (_GetDesktopWindow.c)
 *     GreUpdateSpriteVisRgn @ 0x1C0072450 (GreUpdateSpriteVisRgn.c)
 *     GreClientRgnUpdated @ 0x1C00753E0 (GreClientRgnUpdated.c)
 *     InvalidateDCE @ 0x1C00E87D8 (InvalidateDCE.c)
 *     SpbCheckDce @ 0x1C00E8B30 (SpbCheckDce.c)
 *     InvalidateGDIWindows @ 0x1C01E8E70 (InvalidateGDIWindows.c)
 *     GreLockDisplayArea @ 0x1C02862B8 (GreLockDisplayArea.c)
 */

__int64 __fastcall zzzLockDisplayAreaAndInvalidateDCCache(__int64 a1, char a2, __int64 a3)
{
  __int64 v5; // rdi
  __int64 *i; // rbx
  __int64 v7; // rax
  int v8; // ecx
  __int64 v9; // r8
  __int64 v10; // r8
  __int64 v11; // rdx
  int v12; // edx
  __int64 v13; // r10
  __int64 v14; // r9
  int v15; // ecx
  bool v16; // zf
  int v17; // esi
  unsigned int v18; // ebx
  __int64 v19; // rdx
  __int64 v20; // rcx
  __int64 v21; // r8
  __int64 v23; // r9
  unsigned __int8 v24; // cl
  __int64 v25; // rdx
  _QWORD v26[5]; // [rsp+20h] [rbp-28h] BYREF

  v26[2] = 0LL;
  v5 = a1;
  v26[0] = *(_QWORD *)(gptiCurrent + 408LL);
  *(_QWORD *)(gptiCurrent + 408LL) = v26;
  v26[1] = a1;
  HMLockObject(a1);
  if ( (*(_DWORD *)(gptiCurrent + 480LL) & 0x8000) == 0 && (a2 & 0x10) == 0 )
    GenerateMouseMove(0LL);
  if ( (a2 & 1) == 0 )
    goto LABEL_4;
  a2 = 0;
  if ( !*(_QWORD *)(v5 + 104) || v5 == GetDesktopWindow(v5) )
    goto LABEL_4;
  if ( (*(_BYTE *)(*(_QWORD *)(v25 + 40) + 31LL) & 2) != 0 )
  {
    a2 = 4;
  }
  else
  {
    if ( (*(_BYTE *)(*(_QWORD *)(v5 + 40) + 31LL) & 4) == 0 )
      goto LABEL_4;
    a2 = 2;
  }
  v5 = v25;
LABEL_4:
  if ( a3 )
    GreLockDisplayArea(*(_QWORD *)(gpDispInfo + 40LL), a3);
  GreLockVisRgn(*(_QWORD *)(gpDispInfo + 40LL));
  GreLockVisRgnPublish(*(_QWORD *)(gpDispInfo + 40LL));
  for ( i = *(__int64 **)(gpDispInfo + 24LL); i; i = (__int64 *)*i )
  {
    v8 = *((_DWORD *)i + 16);
    if ( (v8 & 0x400800) == 0 )
    {
      if ( (v8 & 3) == 0 )
      {
        v10 = i[2];
        v11 = *(_QWORD *)(v10 + 40);
        if ( (*(_BYTE *)(v11 + 31) & 2) != 0 )
        {
          v8 |= 8u;
          *((_DWORD *)i + 16) = v8;
          v11 = *(_QWORD *)(v10 + 40);
        }
        if ( (*(_BYTE *)(v11 + 31) & 0x20) != 0 )
          *((_DWORD *)i + 16) = v8 & 0xFFFFFFF7;
      }
      v9 = i[2];
      v7 = v9;
      if ( v9 )
      {
        while ( v7 != v5 )
        {
          v7 = *(_QWORD *)(v7 + 104);
          if ( !v7 )
            goto LABEL_9;
        }
        if ( v5 != v9 || (a2 & 2) == 0 && ((i[8] & 1) == 0 || (a2 & 4) == 0) )
        {
          v12 = *((_DWORD *)i + 16);
          if ( (v12 & 0x1000) != 0 )
          {
            v13 = i[3];
            if ( v12 >= 0 )
            {
              v12 &= 0xFFFFFFE7;
              *((_DWORD *)i + 16) = v12;
              if ( *(char *)(*(_QWORD *)(*(_QWORD *)(v9 + 136) + 8LL) + 8LL) >= 0
                || (v23 = *(_QWORD *)(v9 + 40), (*(_BYTE *)(v23 + 21) & 1) == 0)
                && (*(_BYTE *)(*(_QWORD *)(v13 + 40) + 31LL) & 2) != 0
                || (v24 = *(_BYTE *)(*(_QWORD *)(v13 + 40) + 31LL), ((v24 ^ *(_BYTE *)(v23 + 31)) & 0x10) != 0) )
              {
                v14 = *(_QWORD *)(v9 + 40);
                v15 = v12;
                if ( (*(_BYTE *)(v14 + 31) & 0x22) == 2 )
                {
                  v15 = v12 | 8;
                  *((_DWORD *)i + 16) = v12 | 8;
                  v14 = *(_QWORD *)(v9 + 40);
                }
                v16 = (*(_BYTE *)(v14 + 31) & 4) == 0;
                v12 = v15;
              }
              else
              {
                v16 = (v24 & 4) == 0;
              }
              if ( !v16 )
                v12 |= 0x10u;
            }
            *((_DWORD *)i + 16) = v12 | 0x2000;
            UserSetDCVisRgn(i);
          }
          else
          {
            SpbCheckDce(i);
            InvalidateDCE(i);
          }
        }
      }
    }
LABEL_9:
    ;
  }
  GreUnlockVisRgnPublish(*(_QWORD *)(gpDispInfo + 40LL));
  v17 = a2 & 8;
  v18 = v17 != 0 ? 2 : 0;
  if ( LODWORD(WPP_MAIN_CB.DeviceQueue.DeviceListHead.Blink) )
  {
    InvalidateGDIWindows(v5);
    v18 |= 1u;
  }
  GreClientRgnUpdated(v18);
  GreUpdateSpriteVisRgn(*(_QWORD *)(gpDispInfo + 40LL), v17 != 0 ? 4 : 0);
  GreUnlockVisRgn(*(_QWORD *)(gpDispInfo + 40LL));
  ThreadUnlock1(v20, v19, v21);
  return 1LL;
}
