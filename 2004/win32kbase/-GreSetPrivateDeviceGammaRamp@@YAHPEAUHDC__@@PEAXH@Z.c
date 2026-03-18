/*
 * XREFs of ?GreSetPrivateDeviceGammaRamp@@YAHPEAUHDC__@@PEAXH@Z @ 0x1C014C19C
 * Callers:
 *     NtGdiSetPrivateDeviceGammaRamp @ 0x1C014C8E0 (NtGdiSetPrivateDeviceGammaRamp.c)
 * Callees:
 *     ?vLockGammaRamp@DEVLOCKOBJ@@QEAAXAEAVXDCOBJ@@@Z @ 0x1C0050E50 (-vLockGammaRamp@DEVLOCKOBJ@@QEAAXAEAVXDCOBJ@@@Z.c)
 *     ?vDestructor@DEVLOCKOBJ@@QEAAXXZ @ 0x1C007BEC0 (-vDestructor@DEVLOCKOBJ@@QEAAXXZ.c)
 *     ?vLock@XDCOBJ@@QEAAXPEAUHDC__@@@Z @ 0x1C0088E50 (-vLock@XDCOBJ@@QEAAXPEAUHDC__@@@Z.c)
 *     ?vUnlockFast@XDCOBJ@@QEAAXXZ @ 0x1C00A5238 (-vUnlockFast@XDCOBJ@@QEAAXXZ.c)
 *     ??0DEVLOCKOBJ@@QEAA@XZ @ 0x1C00A58A8 (--0DEVLOCKOBJ@@QEAA@XZ.c)
 *     ?GreSetPrivateDeviceGammaRampInternal@@YAHPEAUHDEV__@@PEAXH@Z @ 0x1C014C26C (-GreSetPrivateDeviceGammaRampInternal@@YAHPEAUHDEV__@@PEAXH@Z.c)
 */

__int64 __fastcall GreSetPrivateDeviceGammaRamp(HDC a1, void *a2, int a3)
{
  unsigned int v4; // edi
  __int64 v6; // rbx
  int v7; // r8d
  __int64 v8; // rdx
  int v9; // r8d
  __int64 v10; // rcx
  __int64 v12; // [rsp+20h] [rbp-60h] BYREF
  int v13; // [rsp+28h] [rbp-58h]
  int v14; // [rsp+2Ch] [rbp-54h]
  _BYTE v15[32]; // [rsp+30h] [rbp-50h] BYREF
  __int64 v16; // [rsp+50h] [rbp-30h] BYREF
  char v17; // [rsp+60h] [rbp-20h]

  v4 = 0;
  v13 = 0;
  v14 = 0;
  XDCOBJ::vLock((XDCOBJ *)&v12, a1);
  v6 = v12;
  if ( v12 )
  {
    if ( !*(_DWORD *)(v12 + 32) )
    {
      DEVLOCKOBJ::DEVLOCKOBJ((DEVLOCKOBJ *)v15);
      DEVLOCKOBJ::vLockGammaRamp((DEVLOCKOBJ *)v15, (struct XDCOBJ *)&v12, v7);
      v4 = GreSetPrivateDeviceGammaRampInternal(*(HDEV *)(v6 + 48), a2, a3);
      DEVLOCKOBJ::vDestructor((DEVLOCKOBJ *)v15, v8, v9);
      v10 = v16;
      if ( v16 )
      {
        if ( v17 )
        {
          *(_DWORD *)(v16 + 40) &= ~2u;
          v10 = v16;
          v17 = 0;
        }
        if ( v10 )
          XDCOBJ::vUnlockFast((XDCOBJ *)&v16);
      }
    }
    XDCOBJ::vUnlockFast((XDCOBJ *)&v12);
  }
  return v4;
}
