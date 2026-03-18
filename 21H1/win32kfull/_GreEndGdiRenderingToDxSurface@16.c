/*
 * XREFs of _GreEndGdiRenderingToDxSurface@16 @ 0xA6DFC
 * Callers:
 *     _NtGdiEndGdiRendering@16 @ 0xA6DB8 (_NtGdiEndGdiRendering@16.c)
 * Callees:
 *     ??0DYNAMICMODECHANGESHARELOCK@@QAE@XZ @ 0x213BE (--0DYNAMICMODECHANGESHARELOCK@@QAE@XZ.c)
 */

int __fastcall GreEndGdiRenderingToDxSurface(int a1, int a2, int a3, int a4)
{
  int v5; // edx
  int v6; // esi
  int v7; // edi
  int v8; // eax
  int v9; // ecx
  int (__stdcall *v11)(int, int, int, int); // ecx
  char v14; // [esp+13h] [ebp-1h] BYREF

  if ( a3 )
    GreDxgkEnableUnorderedWaitsForDevice(a3, 1);
  DYNAMICMODECHANGESHARELOCK::DYNAMICMODECHANGESHARELOCK((DYNAMICMODECHANGESHARELOCK *)&v14);
  LOBYTE(v5) = 5;
  v6 = HmgShareLockCheck(a1, v5);
  v7 = 0;
  if ( v6 )
  {
    if ( (a1 & 0x800000) == 0 )
    {
      if ( GreGetObjectOwner(a1, 5) )
      {
        v8 = *(_DWORD *)(v6 + 28);
        v9 = *(_DWORD *)(v6 + 76) & 8;
        if ( v9 || *(_DWORD *)(v6 + 144) )
        {
          *(_WORD *)(v6 + 66) |= 0x200u;
          v7 = 1;
          if ( v9 )
          {
            v11 = *(int (__stdcall **)(int, int, int, int))(v8 + 2300);
            v7 = 0;
            if ( v11 )
              v7 = v11(v6 + 16, a2, a4, a3);
          }
        }
      }
    }
    DEC_SHARE_REF_CNT(v6);
  }
  EtwTraceGreLockReleaseSemaphore(L"ghsemDynamicModeChange", _ghsemDynamicModeChange);
  GreReleaseSemaphoreInternal(_ghsemDynamicModeChange);
  return v7;
}
