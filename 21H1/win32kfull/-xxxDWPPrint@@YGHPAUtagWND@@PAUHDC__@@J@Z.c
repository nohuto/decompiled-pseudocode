/*
 * XREFs of ?xxxDWPPrint@@YGHPAUtagWND@@PAUHDC__@@J@Z @ 0x1A17E9
 * Callers:
 *     _xxxRealDefWindowProc@16 @ 0x3D3F2 (_xxxRealDefWindowProc@16.c)
 * Callees:
 *     _SetOrClrWF@16 @ 0x1B9C0 (_SetOrClrWF@16.c)
 *     _SetVisible@8 @ 0x1C9DC (_SetVisible@8.c)
 *     _FreeHwndList@4 @ 0x2D2D0 (_FreeHwndList@4.c)
 *     _BuildHwndList@12 @ 0x2D340 (_BuildHwndList@12.c)
 *     __GetDesktopWindow@4 @ 0x381A0 (__GetDesktopWindow@4.c)
 *     @HMValidateHandleNoSecure@8 @ 0x3C46E (@HMValidateHandleNoSecure@8.c)
 *     _W32GetThreadWin32Thread@4 @ 0x3FA3E (_W32GetThreadWin32Thread@4.c)
 *     _xxxSendMessage@16 @ 0x402B0 (_xxxSendMessage@16.c)
 *     _GreGetLayout@4 @ 0x566A8 (_GreGetLayout@4.c)
 *     _xxxDrawWindowFrame@12 @ 0x8E7D8 (_xxxDrawWindowFrame@12.c)
 *     _GreSaveDC@4 @ 0x93070 (_GreSaveDC@4.c)
 *     __IsWindowVisible@4 @ 0xAB3AC (__IsWindowVisible@4.c)
 *     _GreSetWindowOrg@16 @ 0x21D7A5 (_GreSetWindowOrg@16.c)
 */

int __userpurge xxxDWPPrint@<eax>(HDC a1@<edx>, int a2@<ecx>, int a3, HDC a4, int a5)
{
  struct tagVWPL **v5; // esi
  char v7; // al
  int v8; // edi
  struct tagVWPL *v9; // eax
  int v10; // edi
  BOOL v11; // eax
  BOOL v12; // eax
  int v13; // eax
  struct tagWND *v15; // eax
  int v16; // edi
  struct tagVWPL *v17; // ecx
  char v18; // al
  int v19; // eax
  unsigned int *v20; // edi
  unsigned int v21; // ecx
  int v22; // eax
  int v23; // edi
  int v24; // ecx
  int v25; // eax
  PKTHREAD CurrentThread; // eax
  int ThreadWin32Thread; // eax
  int DesktopWindow; // eax
  int v29; // eax
  struct tagBWL *v30; // esi
  unsigned int *i; // eax
  int v32; // edi
  int v33; // eax
  PKTHREAD v34; // eax
  int v35; // eax
  unsigned int v36; // eax
  int v37; // [esp+0h] [ebp-38h]
  int v38; // [esp+4h] [ebp-34h]
  struct tagBWL *v39; // [esp+8h] [ebp-30h]
  BOOL v40; // [esp+Ch] [ebp-2Ch]
  int v41; // [esp+10h] [ebp-28h]
  int v42; // [esp+14h] [ebp-24h]
  int v43; // [esp+14h] [ebp-24h]
  unsigned int *v44; // [esp+14h] [ebp-24h]
  int v45; // [esp+18h] [ebp-20h]
  int v46; // [esp+1Ch] [ebp-1Ch]
  int v47; // [esp+20h] [ebp-18h]
  int v48; // [esp+24h] [ebp-14h]
  int v49; // [esp+28h] [ebp-10h] BYREF
  int v50; // [esp+2Ch] [ebp-Ch]
  int v51; // [esp+30h] [ebp-8h]
  int v52; // [esp+34h] [ebp-4h] BYREF
  struct tagVWPL **vars0; // [esp+38h] [ebp+0h] BYREF
  int retaddr; // [esp+3Ch] [ebp+4h]
  struct tagWND *v55; // [esp+40h] [ebp+8h]

  v48 = 0;
  v49 = 0;
  v5 = (struct tagVWPL **)a2;
  v50 = 0;
  v51 = 0;
  v52 = 0;
  if ( (a3 & 1) != 0 && !_IsWindowVisible(a2) )
    return 0;
  v40 = (*((_BYTE *)v5[5] + 18) & 0x40) != 0 && (GreGetLayout(a1) & 1) == 0;
  v7 = a3;
  v8 = a3 & 2;
  v45 = v8;
  if ( (a3 & 2) != 0 )
  {
    if ( (*((_BYTE *)v5[5] + 23) & 0x10) != 0 )
    {
      v41 = 0;
    }
    else
    {
      v41 = 1;
      SetVisible(v5, 5u);
    }
    SetOrClrWF(1, (int)v5, 0x180u, 1);
    v9 = v5[5];
    if ( v40 )
    {
      v10 = *((_DWORD *)v9 + 15) - *((_DWORD *)v9 + 13) - 1;
      v42 = GreSetLayout(a1, v10, 1);
      v11 = (*((_BYTE *)v5[5] + 8) & 0x40) != 0;
      if ( gihmodUserApiHook < 0 )
        xxxDrawWindowFrame(v5, (int)a1, v11);
      else
        xxxSendMessage(v5, (unsigned int)a1, v11);
      GreSetLayout(a1, v10, v42);
      v8 = a3 & 2;
    }
    else
    {
      v12 = (*((_BYTE *)v9 + 8) & 0x40) != 0;
      if ( gihmodUserApiHook < 0 )
        xxxDrawWindowFrame(v5, (int)a1, v12);
      else
        xxxSendMessage(v5, (unsigned int)a1, v12);
    }
    SetOrClrWF(0, (int)v5, 0x180u, 1);
    if ( v41 )
      SetVisible(v5, 0);
    v7 = a3;
  }
  if ( (v7 & 4) != 0 )
  {
    GreSaveDC(v37);
    v43 = v13;
    if ( !v13 )
      return 0;
    GreGetDCPoint(a1, 8, &v49);
    if ( v8 )
      GreSetWindowOrg(a1, v50 + *((_DWORD *)v5[5] + 14) - *((_DWORD *)v5[5] + 18), (int)v5[5]);
    GreIntersectClipRect(
      a1,
      0,
      0,
      *((_DWORD *)v5[5] + 19) - *((_DWORD *)v5[5] + 17),
      *((_DWORD *)v5[5] + 20) - *((_DWORD *)v5[5] + 18));
    v15 = (struct tagWND *)a3;
    v46 = a3 & 8;
    if ( v41 )
    {
      v16 = *((_DWORD *)v5[5] + 19) - *((_DWORD *)v5[5] + 17) - 1;
      v45 = GreSetLayout(a1, v16, 1);
      if ( (a3 & 8) != 0 )
        xxxSendMessage(v5, (unsigned int)a1, 0);
      xxxSendMessage(v5, (unsigned int)a1, a3);
      GreSetLayout(a1, v16, v45);
    }
    else
    {
      if ( (a3 & 8) != 0 )
      {
        xxxSendMessage(v5, (unsigned int)a1, 0);
        v15 = (struct tagWND *)a3;
      }
      xxxSendMessage(v5, (unsigned int)a1, (int)v15);
    }
    GreRestoreDC(a1, v43);
    v17 = v5[5];
    v49 += *((_DWORD *)v17 + 13);
    v50 += *((_DWORD *)v17 + 14);
    v18 = a3;
    if ( (a3 & 0x10) != 0 )
    {
      v55 = (struct tagWND *)(a3 & 0xFFFFFFF4 | 0xA);
      v19 = BuildHwndList(v5[15], 2, 0);
      v44 = (unsigned int *)v19;
      if ( v19 )
      {
        v20 = (unsigned int *)(v19 + 16);
        v21 = *(_DWORD *)(v19 + 16);
        if ( v21 != 1 )
        {
          do
          {
            v22 = HMValidateHandleNoSecure(v21, 1);
            v5 = (struct tagVWPL **)v22;
            if ( v22 )
            {
              v23 = *(_DWORD *)(v22 + 20);
              if ( (*(_BYTE *)(v23 + 23) & 0x10) != 0 )
              {
                GreSaveDC(v38);
                v47 = v25;
                if ( !v25 )
                {
                  FreeHwndList(v39);
                  return 0;
                }
                GreSetWindowOrg(a1, v51 - *(_DWORD *)(v23 + 56), v24);
                if ( *(char *)(*((_DWORD *)v5[19] + 1) + 8) >= 0 )
                  GreIntersectClipRect(
                    a1,
                    0,
                    0,
                    *(_DWORD *)(v23 + 60) - *(_DWORD *)(v23 + 52),
                    *(_DWORD *)(v23 + 64) - *(_DWORD *)(v23 + 56));
                CurrentThread = KeGetCurrentThread();
                ThreadWin32Thread = W32GetThreadWin32Thread(CurrentThread);
                v52 = *(_DWORD *)(ThreadWin32Thread + 228);
                *(_DWORD *)(ThreadWin32Thread + 228) = &v52;
                vars0 = v5;
                HMLockObject(v5);
                xxxSendMessage(v5, (unsigned int)a1, (int)v55);
                ThreadUnlock1();
                GreRestoreDC(a1, v47);
              }
              v20 = v44;
            }
            v44 = ++v20;
            v21 = *v20;
          }
          while ( *v20 != 1 );
          v19 = v45;
        }
        FreeHwndList((struct tagBWL *)v19);
      }
      v18 = (char)v55;
    }
    if ( (v18 & 0x20) != 0 )
    {
      DesktopWindow = _GetDesktopWindow(v5);
      v29 = BuildHwndList(*(_DWORD *)(DesktopWindow + 60), 2, 0);
      v30 = (struct tagBWL *)v29;
      if ( v29 )
      {
        for ( i = (unsigned int *)(v29 + 16); ; i = (unsigned int *)(v46 + 4) )
        {
          v36 = *i;
          if ( v36 == 1 )
          {
            FreeHwndList(v30);
            return 1;
          }
          v32 = HMValidateHandleNoSecure(v36, 1);
          if ( v32 && *(_DWORD *)(v32 + 64) == v48 && (*(_BYTE *)(*(_DWORD *)(v32 + 20) + 23) & 0x10) != 0 )
          {
            GreSaveDC((int)v39);
            v48 = v33;
            if ( !v33 )
            {
              FreeHwndList(v30);
              return 0;
            }
            GreSetWindowOrg(a1, v52 - *(_DWORD *)(*(_DWORD *)(v32 + 20) + 56), *(_DWORD *)(v32 + 20));
            v34 = KeGetCurrentThread();
            v35 = W32GetThreadWin32Thread(v34);
            vars0 = *(struct tagVWPL ***)(v35 + 228);
            *(_DWORD *)(v35 + 228) = &vars0;
            retaddr = v32;
            HMLockObject(v32);
            xxxSendMessage((void *)v32, (unsigned int)a1, v50);
            ThreadUnlock1();
            GreRestoreDC(a1, v48);
          }
        }
      }
    }
  }
  return 1;
}
