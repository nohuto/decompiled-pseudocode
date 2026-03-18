/*
 * XREFs of _NtUserSetWindowBand@12 @ 0x9BCD0
 * Callers:
 *     <none>
 * Callees:
 *     _IsPseudoPwnd@4 @ 0x2A852 (_IsPseudoPwnd@4.c)
 *     ?ValidateHWNDIA@@YGHPAUHWND__@@PAPAUtagWND@@@Z @ 0x30032 (-ValidateHWNDIA@@YGHPAUHWND__@@PAPAUtagWND@@@Z.c)
 *     __GetProp@12 @ 0x6E54C (__GetProp@12.c)
 *     _UserSetLastError@4 @ 0x81122 (_UserSetLastError@4.c)
 *     ?xxxSetWindowBand@@YGHPAUtagWND@@0W4ZBID@@W4WindowBandOptions@@@Z @ 0x9BDF2 (-xxxSetWindowBand@@YGHPAUtagWND@@0W4ZBID@@W4WindowBandOptions@@@Z.c)
 */

// write access to const memory has been detected, the output may be wrong!
int __stdcall NtUserSetWindowBand(int a1, void *a2, int a3)
{
  int v3; // ebx
  int v4; // eax
  int v5; // edi
  int v6; // ecx
  int v7; // esi
  int v9; // [esp+Ch] [ebp-1Ch] BYREF
  int v10; // [esp+10h] [ebp-18h] BYREF
  int v11; // [esp+14h] [ebp-14h]
  int v12; // [esp+18h] [ebp-10h]
  int v13; // [esp+1Ch] [ebp-Ch] BYREF
  int v14; // [esp+20h] [ebp-8h]
  int v15; // [esp+24h] [ebp-4h]

  v13 = 0;
  v3 = 0;
  v9 = 0;
  v14 = 0;
  v15 = 0;
  v10 = 0;
  v11 = 0;
  v12 = 0;
  EnterCrit(0, 1);
  _gbValidateHandleForIL = 0;
  v4 = ValidateHwnd(a1);
  v5 = v4;
  if ( v4 )
  {
    v6 = *(_WORD *)(*(_DWORD *)(v4 + 20) + 30) & 0x3FFF;
    if ( v6 != 669 && v6 != 671 )
    {
      v10 = *(_DWORD *)(_gptiCurrent + 228);
      *(_DWORD *)(_gptiCurrent + 228) = &v10;
      v11 = v4;
      HMLockObject(v4);
      if ( ValidateHWNDIA(a2, &v9) )
      {
        if ( _GetProp(v5, (unsigned __int16)WPP_MAIN_CB.DeviceQueue.Type, 1) )
        {
          UserSetLastError((struct _NT_TIB *)5);
        }
        else
        {
          v7 = v9;
          if ( (v9 == -1 || v9 == -2) && a3 != 1 )
          {
            UserSetLastError((struct _NT_TIB *)0x57);
          }
          else
          {
            if ( IsPseudoPwnd((void *)v9) )
            {
              v9 = 0;
            }
            else
            {
              v9 = 1;
              v13 = *(_DWORD *)(_gptiCurrent + 228);
              *(_DWORD *)(_gptiCurrent + 228) = &v13;
              v14 = v7;
              if ( v7 )
                HMLockObject(v7);
            }
            v3 = xxxSetWindowBand(v5, v7, a3, 1);
            if ( v9 )
              ThreadUnlock1();
          }
        }
      }
      ThreadUnlock1();
    }
  }
  UserSessionSwitchLeaveCrit();
  return v3;
}
