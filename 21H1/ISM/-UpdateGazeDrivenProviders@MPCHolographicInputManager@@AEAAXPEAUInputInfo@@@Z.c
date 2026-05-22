/*
 * XREFs of ?UpdateGazeDrivenProviders@MPCHolographicInputManager@@AEAAXPEAUInputInfo@@@Z @ 0x180079160
 * Callers:
 *     ?Process3DInput@MPCHolographicInputManager@@QEAAJPEAUInputInfo@@PEAUIMPCInputProviderBase@@PEAPEAUIMPCTarget@@@Z @ 0x180077ACC (-Process3DInput@MPCHolographicInputManager@@QEAAJPEAUInputInfo@@PEAUIMPCInputProviderBase@@PEAPE.c)
 * Callees:
 *     ?GetInstance@MPCGamepadInputHelper@@SAPEAV1@XZ @ 0x18006CD70 (-GetInstance@MPCGamepadInputHelper@@SAPEAV1@XZ.c)
 *     ?UpdateGamepadFocus@MPCGamepadInputHelper@@AEAAXXZ @ 0x18006D048 (-UpdateGamepadFocus@MPCGamepadInputHelper@@AEAAXXZ.c)
 *     ?ForEachActiveProvider@MPCHolographicInputManager@@AEAAXV?$function@$$A6AXPEAUIMPCInputProviderBase@@@Z@std@@@Z @ 0x180075D7C (-ForEachActiveProvider@MPCHolographicInputManager@@AEAAXV-$function@$$A6AXPEAUIMPCInputProviderB.c)
 */

void __fastcall MPCHolographicInputManager::UpdateGazeDrivenProviders(
        MPCHolographicInputManager *this,
        struct InputInfo *a2)
{
  struct MPCGamepadInputHelper *Instance; // rdx
  struct InputInfo *v4; // rax
  __int64 v5; // r8
  char v6; // r8
  char v7; // r9
  _QWORD v8[9]; // [rsp+20h] [rbp-48h] BYREF
  struct InputInfo *v9; // [rsp+78h] [rbp+10h] BYREF

  v9 = a2;
  if ( *((_DWORD *)a2 + 16) == 8 )
  {
    Instance = MPCGamepadInputHelper::GetInstance((__int64)this);
    v4 = v9;
    v5 = *((_QWORD *)v9 + 24);
    if ( v5 == *((_QWORD *)Instance + 1) || v5 == *((_QWORD *)Instance + 2) )
    {
      v6 = 1;
      if ( !*((_BYTE *)v9 + 152) || (v7 = 1, *((_BYTE *)v9 + 154)) )
        v7 = 0;
      *((_BYTE *)Instance + 39) = v7;
      if ( v7 && !*((_DWORD *)v4 + 46) )
        goto LABEL_11;
    }
    else
    {
      *((_BYTE *)Instance + 39) = 0;
    }
    v6 = 0;
LABEL_11:
    *((_BYTE *)Instance + 40) = v6;
    *((_BYTE *)Instance + 41) = *((_BYTE *)v4 + 224) != 0;
    MPCGamepadInputHelper::UpdateGamepadFocus(Instance);
    v8[0] = off_1801B0CF0;
    v8[1] = &v9;
    v8[7] = v8;
    MPCHolographicInputManager::ForEachActiveProvider((__int64)this, (__int64)v8);
  }
}
