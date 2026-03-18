/*
 * XREFs of _GreDwmShutdown@4 @ 0xCF60A
 * Callers:
 *     _xxxDwmStopRedirection@4 @ 0xCEE26 (_xxxDwmStopRedirection@4.c)
 *     _zzzDwmStartRedirection@0 @ 0xE08D6 (_zzzDwmStartRedirection@0.c)
 * Callees:
 *     ?vAccNotify@@YGXPAU_SURFOBJ@@KPAX@Z @ 0x213E8 (-vAccNotify@@YGXPAU_SURFOBJ@@KPAX@Z.c)
 *     ?vLock@DEVLOCKOBJ@@QAEXAAVPDEVOBJ@@@Z @ 0x219D2 (-vLock@DEVLOCKOBJ@@QAEXAAVPDEVOBJ@@@Z.c)
 *     ?ENTER_GRE_DWM_CRIT@@YGXVPDEVOBJ@@PAH@Z @ 0x21BFE (-ENTER_GRE_DWM_CRIT@@YGXVPDEVOBJ@@PAH@Z.c)
 *     ?LEAVE_GRE_DWM_CRIT@@YGXVPDEVOBJ@@H@Z @ 0x21D46 (-LEAVE_GRE_DWM_CRIT@@YGXVPDEVOBJ@@H@Z.c)
 *     ?bNeedRenderHint@@YGHAAVPDEVOBJ@@@Z @ 0x23160 (-bNeedRenderHint@@YGHAAVPDEVOBJ@@@Z.c)
 *     ??1DEVLOCKOBJ@@QAE@XZ @ 0x5A936 (--1DEVLOCKOBJ@@QAE@XZ.c)
 */

// write access to const memory has been detected, the output may be wrong!
int __thiscall GreDwmShutdown(int this)
{
  _DWORD **v2; // ebx
  _DWORD *v3; // eax
  _DWORD **v4; // ecx
  _DWORD *v5; // eax
  int v7; // ecx
  _DWORD *v8; // edx
  int v9; // edx
  _DWORD *v10; // ebx
  unsigned int v11; // [esp+0h] [ebp-48h]
  void *v12; // [esp+4h] [ebp-44h]
  _BYTE v13[20]; // [esp+10h] [ebp-38h] BYREF
  int v14; // [esp+24h] [ebp-24h]
  int v15; // [esp+28h] [ebp-20h]
  int v16; // [esp+2Ch] [ebp-1Ch]
  __int16 v17; // [esp+30h] [ebp-18h]
  void *v18; // [esp+40h] [ebp-8h] BYREF
  int v19; // [esp+44h] [ebp-4h] BYREF

  v18 = 0;
  v19 = this;
  ENTER_GRE_DWM_CRIT(&v18, this);
  if ( g_pDwmState )
  {
    ZwSetEvent(*((HANDLE *)g_pDwmState + 63), 0);
    ZwClose(*((HANDLE *)g_pDwmState + 63));
    GreSfmDwmShutdown();
    if ( bNeedRenderHint(&v19) )
    {
      v14 = 0;
      v15 = 0;
      v16 = 0;
      v17 = 256;
      DEVLOCKOBJ::vLock((DEVLOCKOBJ *)v13, (struct PDEVOBJ *)&v19);
      (*(void (__stdcall **)(_DWORD, int, _DWORD, _DWORD))(this + 2272))(*(_DWORD *)(this + 1108), 65537, 0, 0);
      DEVLOCKOBJ::~DEVLOCKOBJ((DEVLOCKOBJ *)v13);
    }
    vAccNotify(6, *(_DWORD *)(this + 1820) != 0 ? *(_DWORD *)(this + 1820) + 16 : 0, 0, v11, v12);
    GreDeleteObject(*((_DWORD *)g_pDwmState + 27));
    v2 = (_DWORD **)((char *)g_pDwmState + 68);
    while ( 1 )
    {
      v3 = *v2;
      if ( *v2 == v2 )
        break;
      v7 = *v3;
      if ( *(_DWORD **)(*v3 + 4) != v3 || (v8 = (_DWORD *)v3[1], (_DWORD *)*v8 != v3) )
LABEL_16:
        __fastfail(3u);
      *v8 = v7;
      *(_DWORD *)(v7 + 4) = v8;
      v3[1] = v3;
      *v3 = v3;
    }
    v4 = (_DWORD **)((char *)g_pDwmState + 60);
    while ( 1 )
    {
      v5 = *v4;
      if ( *v4 == v4 )
        break;
      v9 = *v5;
      if ( *(_DWORD **)(*v5 + 4) != v5 )
        goto LABEL_16;
      v10 = (_DWORD *)v5[1];
      if ( (_DWORD *)*v10 != v5 )
        goto LABEL_16;
      *v10 = v9;
      *(_DWORD *)(v9 + 4) = v10;
      v5[1] = v5;
      *v5 = v5;
    }
    g_pDwmState = 0;
    Win32FreePool(g_pDwmState);
    ++*(_DWORD *)(_gpGdiSharedMemory + 1048732);
  }
  return LEAVE_GRE_DWM_CRIT(v18, this);
}
