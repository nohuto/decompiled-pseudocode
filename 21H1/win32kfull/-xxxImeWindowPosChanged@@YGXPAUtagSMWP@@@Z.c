/*
 * XREFs of ?xxxImeWindowPosChanged@@YGXPAUtagSMWP@@@Z @ 0x2C440
 * Callers:
 *     ?xxxSendChangedMsgs@@YGXPAUtagSMWP@@@Z @ 0x38532 (-xxxSendChangedMsgs@@YGXPAUtagSMWP@@@Z.c)
 * Callees:
 *     _FreeHwndList@4 @ 0x2D2D0 (_FreeHwndList@4.c)
 *     _BuildHwndList@12 @ 0x2D340 (_BuildHwndList@12.c)
 *     @HMValidateHandleNoSecure@8 @ 0x3C46E (@HMValidateHandleNoSecure@8.c)
 *     _W32GetThreadWin32Thread@4 @ 0x3FA3E (_W32GetThreadWin32Thread@4.c)
 *     _xxxSendMessage@16 @ 0x402B0 (_xxxSendMessage@16.c)
 *     _IsThreadCrossSessionAttached@0 @ 0xEF2EA (_IsThreadCrossSessionAttached@0.c)
 *     __SEH_prolog4 @ 0xF9120 (__SEH_prolog4.c)
 */

void __thiscall xxxImeWindowPosChanged(_DWORD *this)
{
  _DWORD *v1; // ebx
  PKTHREAD CurrentThread; // edi
  int v3; // esi
  int *ThreadWin32Thread; // eax
  int v5; // eax
  int v6; // edi
  int v7; // eax
  _DWORD *i; // eax
  _DWORD *v9; // eax
  _DWORD *v10; // edx
  int v11; // ecx
  ULONG *v12; // ecx
  ULONG v13; // ecx
  ULONG v14; // eax
  _DWORD *v15; // esi
  PKTHREAD v16; // eax
  int v17; // eax
  int v18; // eax
  int v19; // edi
  _DWORD *v20; // edi
  int v21; // [esp+14h] [ebp-54h] BYREF
  _DWORD *v22; // [esp+18h] [ebp-50h]
  int v23; // [esp+1Ch] [ebp-4Ch]
  int v24; // [esp+20h] [ebp-48h] BYREF
  _DWORD *v25; // [esp+24h] [ebp-44h]
  int v26; // [esp+28h] [ebp-40h]
  int v27; // [esp+30h] [ebp-38h]
  int v28; // [esp+34h] [ebp-34h]
  int v29; // [esp+38h] [ebp-30h]
  _DWORD *v30; // [esp+3Ch] [ebp-2Ch]
  _DWORD *v31; // [esp+40h] [ebp-28h]
  _DWORD *v32; // [esp+44h] [ebp-24h]
  _DWORD *v33; // [esp+48h] [ebp-20h]
  int v34; // [esp+4Ch] [ebp-1Ch]
  CPPEH_RECORD ms_exc; // [esp+50h] [ebp-18h]

  v31 = this;
  v1 = 0;
  CurrentThread = KeGetCurrentThread();
  v3 = 0;
  if ( !IsThreadCrossSessionAttached() )
  {
    ThreadWin32Thread = (int *)PsGetThreadWin32Thread(CurrentThread);
    if ( ThreadWin32Thread )
      v3 = *ThreadWin32Thread;
  }
  if ( v3 )
  {
    v5 = *(_DWORD *)(v3 + 252);
    if ( v5 )
      v1 = *(_DWORD **)(v5 + 12);
  }
  v30 = v1;
  v6 = _gptiCurrent;
  v34 = _gptiCurrent;
  v29 = _gptiCurrent;
  if ( v1 )
  {
    v7 = BuildHwndList(v1[15], 2, _gptiCurrent);
    v28 = v7;
    if ( v7 )
    {
      for ( i = (_DWORD *)(v7 + 16); ; i = v32 + 1 )
      {
        v32 = i;
        if ( *i == 1 )
          break;
        v9 = (_DWORD *)ValidateHwnd(*i);
        v10 = v9;
        v33 = v9;
        if ( (*(_BYTE *)(v6 + 264) & 1) != 0 )
          break;
        if ( v9 && v9[2] == v6 )
        {
          if ( **(_WORD **)(v9[19] + 4) == *(_WORD *)(_gpsi + 498) )
          {
            v11 = v9[5];
            if ( *(_DWORD *)(v11 + 160) )
              v12 = (ULONG *)v9[41];
            else
              v12 = *(ULONG **)(v11 + 192);
          }
          else
          {
            v12 = 0;
          }
          v21 = 0;
          v22 = 0;
          v23 = 0;
          v24 = 0;
          v25 = 0;
          v26 = 0;
          if ( v12 )
          {
            ms_exc.registration.TryLevel = 0;
            v13 = *v12;
            v14 = _MmUserProbeAddress;
            if ( v13 < _MmUserProbeAddress )
              v14 = v13;
            v27 = *(_DWORD *)(v14 + 8);
            ms_exc.registration.TryLevel = -2;
            LOBYTE(v10) = 1;
            v15 = (_DWORD *)HMValidateHandleNoSecure(v27, v10);
            if ( v15 )
            {
              v21 = *(_DWORD *)(v34 + 228);
              *(_DWORD *)(v34 + 228) = &v21;
              v22 = v33;
              HMLockObject(v33);
              v16 = KeGetCurrentThread();
              v17 = W32GetThreadWin32Thread(v16);
              v24 = *(_DWORD *)(v17 + 228);
              *(_DWORD *)(v17 + 228) = &v24;
              v25 = v15;
              HMLockObject(v15);
              do
              {
                if ( v15 == v1 )
                  break;
                v18 = v31[6];
                v19 = v31[4];
                while ( --v19 >= 0 )
                {
                  if ( *v15 == *(_DWORD *)v18 )
                  {
                    if ( (~*(_BYTE *)(v18 + 24) & 3) != 0 )
                      xxxSendMessage(6u, 0);
                    break;
                  }
                  v18 += 128;
                }
                if ( v19 >= 0 )
                  break;
                v15 = (_DWORD *)v15[14];
                v20 = v25;
                v25 = v15;
                if ( v15 )
                  HMLockObject(v15);
                if ( v20 )
                  HMUnlockObject(v20);
              }
              while ( v15 );
              ThreadUnlock1();
              ThreadUnlock1();
            }
          }
          v6 = v34;
        }
      }
      FreeHwndList(v28);
    }
  }
}
