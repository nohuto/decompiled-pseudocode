/*
 * XREFs of _GreDesktopSwitch@20 @ 0xB23DE
 * Callers:
 *     _xxxSwitchDesktop@16 @ 0xB0C6A (_xxxSwitchDesktop@16.c)
 * Callees:
 *     ?vLock@DEVLOCKOBJ@@QAEXAAVPDEVOBJ@@@Z @ 0x219D2 (-vLock@DEVLOCKOBJ@@QAEXAAVPDEVOBJ@@@Z.c)
 *     ?ENTER_GRE_DWM_CRIT@@YGXVPDEVOBJ@@PAH@Z @ 0x21BFE (-ENTER_GRE_DWM_CRIT@@YGXVPDEVOBJ@@PAH@Z.c)
 *     ?LEAVE_GRE_DWM_CRIT@@YGXVPDEVOBJ@@H@Z @ 0x21D46 (-LEAVE_GRE_DWM_CRIT@@YGXVPDEVOBJ@@H@Z.c)
 *     ?bNeedRenderHint@@YGHAAVPDEVOBJ@@@Z @ 0x23160 (-bNeedRenderHint@@YGHAAVPDEVOBJ@@@Z.c)
 *     ??1DEVLOCKOBJ@@QAE@XZ @ 0x5A936 (--1DEVLOCKOBJ@@QAE@XZ.c)
 */

int __fastcall GreDesktopSwitch(int a1, int a2, int a3, int a4, int a5)
{
  _DWORD *i; // ecx
  int v9; // eax
  int v10; // eax
  _BYTE v11[20]; // [esp+10h] [ebp-3Ch] BYREF
  int v12; // [esp+24h] [ebp-28h]
  int v13; // [esp+28h] [ebp-24h]
  int v14; // [esp+2Ch] [ebp-20h]
  __int16 v15; // [esp+30h] [ebp-1Ch]
  int v16; // [esp+40h] [ebp-Ch] BYREF
  _DWORD v17[2]; // [esp+44h] [ebp-8h] BYREF

  v16 = 0;
  v17[0] = a1;
  ENTER_GRE_DWM_CRIT(&v16, a1);
  if ( !a3 && g_pDwmState && bNeedRenderHint(v17) )
  {
    v12 = 0;
    v13 = 0;
    v14 = 0;
    v15 = 256;
    DEVLOCKOBJ::vLock((DEVLOCKOBJ *)v11, (struct PDEVOBJ *)v17);
    (*(void (__stdcall **)(_DWORD, int, _DWORD, _DWORD))(a1 + 2272))(*(_DWORD *)(a1 + 1108), 65539 - (a2 != 0), 0, 0);
    DEVLOCKOBJ::~DEVLOCKOBJ((DEVLOCKOBJ *)v11);
  }
  LEAVE_GRE_DWM_CRIT(0, a1);
  if ( a1 )
  {
    if ( ((unsigned int)&loc_20000 & *(_DWORD *)(a1 + 24)) != 0 )
    {
      for ( i = **(_DWORD ***)(a1 + 1108); i; i = (_DWORD *)*i )
      {
        v9 = i[9];
        if ( v9 )
        {
          if ( (*(_BYTE *)(v9 + 24) & 1) != 0 )
          {
            v10 = *(_DWORD *)(v9 + 1820);
            if ( v10 )
              *(_DWORD *)(v10 + 452) = a4;
          }
        }
      }
    }
    else
    {
      *(_DWORD *)(*(_DWORD *)(a1 + 1820) + 452) = a4;
    }
  }
  if ( v16 )
  {
    EtwTraceGreLockReleaseSemaphore(L"ghsemDynamicModeChange", _ghsemDynamicModeChange);
    GreReleaseSemaphoreInternal(_ghsemDynamicModeChange);
  }
  return 0;
}
