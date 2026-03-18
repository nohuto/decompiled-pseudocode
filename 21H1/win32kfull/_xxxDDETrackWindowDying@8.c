/*
 * XREFs of _xxxDDETrackWindowDying@8 @ 0x180709
 * Callers:
 *     _xxxFreeWindow@8 @ 0x70780 (_xxxFreeWindow@8.c)
 * Callees:
 *     _W32GetThreadWin32Thread@4 @ 0x3FA3E (_W32GetThreadWin32Thread@4.c)
 *     __PostMessage@16 @ 0x6DA60 (__PostMessage@16.c)
 *     _WPP_RECORDER_SF_qq@28 @ 0x6FDEA (_WPP_RECORDER_SF_qq@28.c)
 *     ?UnlinkConv@@YGPAUtagDDECONV@@PAU1@@Z @ 0x17ECA6 (-UnlinkConv@@YGPAUtagDDECONV@@PAU1@@Z.c)
 *     ?xxxFreeListFree@@YGXPAUtagFREELIST@@@Z @ 0x17F7F9 (-xxxFreeListFree@@YGXPAUtagFREELIST@@@Z.c)
 *     _xxxFreeDdeConv@4 @ 0x180896 (_xxxFreeDdeConv@4.c)
 */

int __fastcall xxxDDETrackWindowDying(int *a1, int a2)
{
  int result; // eax
  int v3; // esi
  int v4; // eax
  int v5; // edi
  PKTHREAD CurrentThread; // eax
  int ThreadWin32Thread; // eax
  PKTHREAD v8; // eax
  int v9; // eax
  PKTHREAD v10; // eax
  int v11; // eax
  int v12; // eax
  int v13; // eax
  int v14; // eax
  int v15; // eax
  _DWORD *v16; // eax
  int v17; // edx
  int v18; // ecx
  BOOL v19; // eax
  _DWORD *v20; // edi
  int v21; // ecx
  int v22; // eax
  char v23; // [esp-4h] [ebp-2Ch]
  int v24; // [esp+10h] [ebp-18h] BYREF
  int v25; // [esp+14h] [ebp-14h]
  int v26; // [esp+18h] [ebp-10h]
  _DWORD v27[3]; // [esp+1Ch] [ebp-Ch] BYREF

  result = 0;
  v27[2] = 0;
  v3 = a2;
  v24 = 0;
  v25 = 0;
  v26 = 0;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    if ( a1 )
      v4 = *a1;
    else
      LOBYTE(v4) = 0;
    v23 = a2;
    LOBYTE(a2) = 4;
    result = WPP_RECORDER_SF_qq((int)a1, a2, 0xEu, 22, (int)&WPP_f1cc8f74ab813689ed40e0048036585e_Traceguids, v4, v23);
  }
  if ( v3 )
  {
    do
    {
      v5 = *(_DWORD *)(v3 + 12);
      CurrentThread = KeGetCurrentThread();
      ThreadWin32Thread = W32GetThreadWin32Thread(CurrentThread);
      v27[0] = *(_DWORD *)(ThreadWin32Thread + 228);
      *(_DWORD *)(ThreadWin32Thread + 228) = v27;
      v27[1] = v5;
      if ( v5 )
        HMLockObject(v5);
      v8 = KeGetCurrentThread();
      v9 = W32GetThreadWin32Thread(v8);
      v24 = *(_DWORD *)(v9 + 228);
      *(_DWORD *)(v9 + 228) = &v24;
      v25 = v3;
      HMLockObject(v3);
      if ( (*(_BYTE *)(v3 + 40) & 2) == 0 )
      {
        v10 = KeGetCurrentThread();
        v11 = W32GetThreadWin32Thread(v10);
        if ( *(_DWORD *)(v11 + 340) <= 0x400u )
          v12 = *(_DWORD *)(v11 + 352);
        else
          LOBYTE(v12) = 0;
        if ( (v12 & 0x20) == 0
          || (v13 = *(_DWORD *)(v3 + 24)) == 0
          || ((v14 = *(_DWORD *)(v13 + 8), *(_DWORD *)(v14 + 340) <= 0x400u)
            ? (v15 = *(_DWORD *)(v14 + 352))
            : (LOBYTE(v15) = 0),
              (v15 & 0x20) == 0) )
        {
          v16 = *(_DWORD **)(v3 + 20);
          if ( v16 )
            v16 = (_DWORD *)*v16;
          _PostMessage(*(_DWORD *)(v3 + 24), 993, (int)v16, 0);
        }
      }
      v17 = *(_DWORD *)(v3 + 16);
      if ( v17 )
      {
        v18 = *(_DWORD *)(v17 + 40);
        *(_DWORD *)(v17 + 40) = v18 | 6;
        v19 = (v18 & 0xA) != 0;
      }
      else
      {
        v19 = 1;
      }
      v20 = *(_DWORD **)(v3 + 36);
      *(_DWORD *)(v3 + 36) = 0;
      v21 = *(_DWORD *)(v3 + 40);
      if ( (v21 & 2) != 0 && v19 || (v21 & 4) != 0 )
      {
        if ( (*(_BYTE *)(_HMPheFromObject(v3) + 13) & 1) == 0 )
          *(_DWORD *)(v3 + 16) = xxxFreeDdeConv(*(_DWORD *)(v3 + 16));
        v22 = ThreadUnlock1();
        if ( v22 )
          xxxFreeDdeConv(v22);
      }
      else
      {
        UnlinkConv((_DWORD *)v3);
        ThreadUnlock1();
      }
      xxxFreeListFree(v20);
      result = ThreadUnlock1();
      v3 = result;
    }
    while ( result );
  }
  return result;
}
