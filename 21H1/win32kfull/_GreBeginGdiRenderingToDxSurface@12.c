/*
 * XREFs of _GreBeginGdiRenderingToDxSurface@12 @ 0xA5D46
 * Callers:
 *     _NtGdiBeginGdiRendering@12 @ 0xA5D2E (_NtGdiBeginGdiRendering@12.c)
 * Callees:
 *     ??0DYNAMICMODECHANGESHARELOCK@@QAE@XZ @ 0x213BE (--0DYNAMICMODECHANGESHARELOCK@@QAE@XZ.c)
 *     ?vLock@XDCOBJ@@QAEXPAUHDC__@@@Z @ 0x5A410 (-vLock@XDCOBJ@@QAEXPAUHDC__@@@Z.c)
 *     ?vUnlockFast@XDCOBJ@@QAEXXZ @ 0x5E684 (-vUnlockFast@XDCOBJ@@QAEXXZ.c)
 *     ?bReset@DC@@QAEHXZ @ 0xA5E1C (-bReset@DC@@QAEHXZ.c)
 */

int __fastcall GreBeginGdiRenderingToDxSurface(int a1, int a2, int a3)
{
  int v4; // edx
  int v5; // esi
  int v6; // ebx
  int v7; // edi
  HDC v8; // eax
  int (__stdcall *v10)(int, int, int); // ecx
  int v11; // eax
  DC *v12[3]; // [esp+4h] [ebp-14h] BYREF
  int v13; // [esp+10h] [ebp-8h]
  char v14; // [esp+17h] [ebp-1h] BYREF

  v13 = a2;
  if ( a3 && (int)GreDxgkEnableUnorderedWaitsForDevice(a3, 0) < 0 )
    return 0;
  DYNAMICMODECHANGESHARELOCK::DYNAMICMODECHANGESHARELOCK((DYNAMICMODECHANGESHARELOCK *)&v14);
  LOBYTE(v4) = 5;
  v5 = HmgShareLockCheck(a1, v4);
  v6 = 0;
  if ( v5 )
  {
    if ( (a1 & 0x800000) == 0 )
    {
      if ( GreGetObjectOwner(a1, 5) )
      {
        v7 = *(_DWORD *)(v5 + 28);
        if ( (*(_BYTE *)(v5 + 76) & 8) != 0 || *(_DWORD *)(v5 + 144) )
        {
          *(_WORD *)(v5 + 66) &= ~0x200u;
          v8 = *(HDC *)(v5 + 108);
          if ( v8 )
          {
            memset(v12, 0, sizeof(v12));
            XDCOBJ::vLock((XDCOBJ *)v12, v8);
            if ( v12[0] )
            {
              v6 = DC::bReset(v12[0]);
              if ( v12[0] )
                XDCOBJ::vUnlockFast((XDCOBJ *)v12);
              if ( v6 && (*(_BYTE *)(v5 + 76) & 8) != 0 )
              {
                v10 = *(int (__stdcall **)(int, int, int))(v7 + 2296);
                v6 = 0;
                if ( v10 )
                {
                  v11 = v10(v5 + 16, v13, a3);
                  *(_DWORD *)(v5 + 76) |= 0x200u;
                  v6 = v11;
                }
              }
            }
          }
        }
      }
    }
    DEC_SHARE_REF_CNT(v5);
  }
  EtwTraceGreLockReleaseSemaphore(L"ghsemDynamicModeChange", _ghsemDynamicModeChange);
  GreReleaseSemaphoreInternal(_ghsemDynamicModeChange);
  return v6;
}
