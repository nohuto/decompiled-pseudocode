/*
 * XREFs of ?xxxSendMenuDrawItemMessage@@YGXPAUHDC__@@IABV?$SmartObjStackRef@UtagMENU@@@@PAUtagITEM@@HHPAUtagWND@@@Z @ 0xB6372
 * Callers:
 *     _xxxDrawMenuItem@24 @ 0xB61DA (_xxxDrawMenuItem@24.c)
 *     _xxxDrawMenuBarUnderlines@8 @ 0xCC2CA (_xxxDrawMenuBarUnderlines@8.c)
 *     _xxxRealDrawMenuItem@24 @ 0x1AA53B (_xxxRealDrawMenuItem@24.c)
 * Callees:
 *     _MNIsUAHMenu@4 @ 0x1E9CA (_MNIsUAHMenu@4.c)
 *     _W32GetThreadWin32Thread@4 @ 0x3FA3E (_W32GetThreadWin32Thread@4.c)
 *     _xxxSendMessage@16 @ 0x402B0 (_xxxSendMessage@16.c)
 *     _MNGetpItemIndex@8 @ 0x99EF2 (_MNGetpItemIndex@8.c)
 *     _MNInitUAHMenuItem@12 @ 0xB657C (_MNInitUAHMenuItem@12.c)
 *     ?MNInitDrawItemStruct@@YGXPAUHDC__@@IABV?$SmartObjStackRef@UtagMENU@@@@PAUtagITEM@@HHPAUtagDRAWITEMSTRUCT@@@Z @ 0xB65B6 (-MNInitDrawItemStruct@@YGXPAUHDC__@@IABV-$SmartObjStackRef@UtagMENU@@@@PAUtagITEM@@HHPAUtagDRAWI.c)
 *     @__security_check_cookie@4 @ 0xED840 (@__security_check_cookie@4.c)
 *     _IsThreadCrossSessionAttached@0 @ 0xEF2EA (_IsThreadCrossSessionAttached@0.c)
 *     _memset @ 0xF92A7 (_memset.c)
 */

int __thiscall xxxSendMenuDrawItemMessage(void *this, int **a2, int *a3, int a4, int a5, void *a6)
{
  void *v6; // esi
  int *v7; // ecx
  int result; // eax
  void *v9; // esi
  PKTHREAD CurrentThread; // eax
  int ThreadWin32Thread; // eax
  int v12; // ecx
  int v13; // edx
  int *v14; // ecx
  PKTHREAD v15; // ebx
  int v16; // edi
  int *v17; // eax
  BOOL v18; // [esp+Ch] [ebp-98h]
  int v19; // [esp+1Ch] [ebp-88h] BYREF
  void *v20; // [esp+20h] [ebp-84h]
  int v21; // [esp+24h] [ebp-80h]
  void *v22; // [esp+28h] [ebp-7Ch]
  _DWORD v23[29]; // [esp+2Ch] [ebp-78h] BYREF

  v6 = a6;
  v22 = this;
  memset(v23, 0, sizeof(v23));
  v7 = a2[2];
  v19 = 0;
  v20 = 0;
  v21 = 0;
  if ( !v7 )
    v7 = (int *)**a2;
  v18 = MNIsUAHMenu(v7);
  MNInitDrawItemStruct(a2, a3, a4, a5, v23);
  result = **a2;
  if ( *(_DWORD *)(result + 52) && ((result = *a3, (*(_DWORD *)*a3 & 0x100) != 0) || *(_DWORD *)(result + 64) == -1) )
  {
    v9 = *(void **)(**a2 + 52);
    CurrentThread = KeGetCurrentThread();
    ThreadWin32Thread = W32GetThreadWin32Thread(CurrentThread);
    v19 = *(_DWORD *)(ThreadWin32Thread + 228);
    *(_DWORD *)(ThreadWin32Thread + 228) = &v19;
    v20 = v9;
    HMLockObject(v9);
    xxxSendMessage(*(void **)(**a2 + 52), 0, (int)v23);
    ThreadUnlock1();
    v12 = (int)a2[2];
    if ( !v12 )
      v12 = **a2;
    v6 = a6;
    result = MNGetpItemIndex(v12, (int)a3) != -1;
    v13 = result;
  }
  else
  {
    v13 = 1;
  }
  if ( v18 )
  {
    if ( v6 || (result = **a2, (v6 = *(void **)(result + 52)) != 0) )
    {
      if ( ((unsigned int)_gpdwCPUserPreferencesMask & 0x80000020) != 0x80000000 )
        v23[4] &= ~0x100u;
      v14 = a2[2];
      if ( v14 || (v14 = (int *)**a2) != 0 )
        v23[12] = *v14;
      else
        v23[12] = 0;
      v23[13] = v22;
      v23[14] = *(_DWORD *)(v14[5] + 20);
      if ( v13 )
        MNInitUAHMenuItem(&v23[15]);
      v15 = KeGetCurrentThread();
      v16 = 0;
      if ( !IsThreadCrossSessionAttached() )
      {
        v17 = (int *)PsGetThreadWin32Thread(v15);
        if ( v17 )
          v16 = *v17;
      }
      v19 = *(_DWORD *)(v16 + 228);
      *(_DWORD *)(v16 + 228) = &v19;
      v20 = v6;
      HMLockObject(v6);
      xxxSendMessage(v6, 0, (int)v23);
      return ThreadUnlock1();
    }
  }
  return result;
}
