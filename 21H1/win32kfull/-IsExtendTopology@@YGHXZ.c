/*
 * XREFs of ?IsExtendTopology@@YGHXZ @ 0x1408CD
 * Callers:
 *     ?xxxSmoothRotateScreen@CLegacyRotationMgr@@AAEJPAUDISPLAYCONFIG_PATH_INFO_INTERNAL@@HPAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x141425 (-xxxSmoothRotateScreen@CLegacyRotationMgr@@AAEJPAUDISPLAYCONFIG_PATH_INFO_INTERNAL@@HPAU_DXGK_DI.c)
 * Callees:
 *     <none>
 */

int __stdcall IsExtendTopology()
{
  int v0; // esi
  int v1; // eax
  int v2; // edi
  unsigned int v3; // ecx
  _DWORD *v4; // eax
  unsigned int v6; // [esp+4h] [ebp-4h] BYREF

  v0 = 0;
  v6 = 0;
  if ( !DrvGetDisplayConfigBufferSizes(18, &v6) && v6 > 1 )
  {
    v1 = Win32AllocPool(200 * v6, 1665430357);
    v2 = v1;
    if ( v1 )
    {
      if ( !DrvQueryDisplayConfig(18, &v6, v1, 0) )
      {
        v3 = 0;
        if ( v6 )
        {
          v4 = (_DWORD *)(v2 + 120);
          while ( !*(v4 - 1) && !*v4 )
          {
            ++v3;
            v4 += 50;
            if ( v3 >= v6 )
              goto LABEL_12;
          }
          v0 = 1;
        }
      }
LABEL_12:
      Win32FreePool(v2);
    }
  }
  return v0;
}
