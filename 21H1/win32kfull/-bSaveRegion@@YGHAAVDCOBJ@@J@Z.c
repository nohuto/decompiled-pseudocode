/*
 * XREFs of ?bSaveRegion@@YGHAAVDCOBJ@@J@Z @ 0x9309C
 * Callers:
 *     _GreSaveDCInternal@8 @ 0xF7458 (_GreSaveDCInternal@8.c)
 * Callees:
 *     ??0DYNAMICMODECHANGESHARELOCK@@QAE@XZ @ 0x213BE (--0DYNAMICMODECHANGESHARELOCK@@QAE@XZ.c)
 *     ?vLock@XDCOBJ@@QAEXPAUHDC__@@@Z @ 0x5A410 (-vLock@XDCOBJ@@QAEXPAUHDC__@@@Z.c)
 *     ?vUnlockFast@XDCOBJ@@QAEXXZ @ 0x5E684 (-vUnlockFast@XDCOBJ@@QAEXXZ.c)
 *     @__security_check_cookie@4 @ 0xED840 (@__security_check_cookie@4.c)
 */

int __stdcall bSaveRegion(struct DCOBJ *a1, int a2)
{
  int v2; // esi
  _DWORD *v3; // eax
  int v4; // eax
  int v5; // ecx
  int v6; // ecx
  LONG v8; // ecx
  LONG v9; // eax
  HDC v10; // [esp-4h] [ebp-3Ch]
  _DWORD v11[3]; // [esp+Ch] [ebp-2Ch] BYREF
  int v12; // [esp+18h] [ebp-20h] BYREF
  int v13; // [esp+1Ch] [ebp-1Ch]
  char v14; // [esp+23h] [ebp-15h] BYREF
  struct _RECTL v15; // [esp+24h] [ebp-14h] BYREF

  v2 = 0;
  v3 = *(_DWORD **)a1;
  if ( a2 == 1 )
  {
    v8 = v3[128];
    v9 = v3[129];
    v15.right = v8;
    v15.left = 0;
    v15.bottom = 0;
    v15.top = v9;
    RGNMEMOBJ::RGNMEMOBJ((RGNMEMOBJ *)&v12);
    if ( v12 )
    {
      if ( *(_DWORD *)(*(_DWORD *)a1 + 504) )
      {
        DYNAMICMODECHANGESHARELOCK::DYNAMICMODECHANGESHARELOCK((DYNAMICMODECHANGESHARELOCK *)&v14);
        EtwTraceGreLockReleaseSemaphore(L"ghsemDynamicModeChange", _ghsemDynamicModeChange);
        GreReleaseSemaphoreInternal(_ghsemDynamicModeChange);
      }
      RGNOBJ::vSet((RGNOBJ *)&v12, &v15);
      *(_DWORD *)(*(_DWORD *)a1 + 1148) = v12;
      if ( v13 == 1 )
        RGNOBJ::vDeleteRGNOBJ((RGNOBJ *)&v12);
      return 1;
    }
    else
    {
      if ( v13 == 1 )
        RGNOBJ::vDeleteRGNOBJ((RGNOBJ *)&v12);
      return 0;
    }
  }
  else
  {
    v10 = (HDC)v3[19];
    memset(v11, 0, sizeof(v11));
    XDCOBJ::vLock((XDCOBJ *)v11, v10);
    v4 = v11[0];
    if ( v11[0] )
    {
      v5 = *(_DWORD *)(v11[0] + 108);
      if ( v5 )
      {
        ++*(_DWORD *)(v5 + 24);
        v4 = v11[0];
      }
      v6 = *(_DWORD *)(v4 + 104);
      if ( v6 )
      {
        ++*(_DWORD *)(v6 + 24);
        v4 = v11[0];
      }
      v2 = 1;
      if ( v4 )
        XDCOBJ::vUnlockFast((XDCOBJ *)v11);
    }
    return v2;
  }
}
