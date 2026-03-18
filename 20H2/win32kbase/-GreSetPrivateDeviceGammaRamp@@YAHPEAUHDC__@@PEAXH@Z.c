/*
 * XREFs of ?GreSetPrivateDeviceGammaRamp@@YAHPEAUHDC__@@PEAXH@Z @ 0x1C0149CCC
 * Callers:
 *     NtGdiSetPrivateDeviceGammaRamp @ 0x1C014A400 (NtGdiSetPrivateDeviceGammaRamp.c)
 * Callees:
 *     ?vUnlockNoNullSet@XDCOBJ@@QEAAXXZ @ 0x1C0041720 (-vUnlockNoNullSet@XDCOBJ@@QEAAXXZ.c)
 *     ?vLock@XDCOBJ@@QEAAXPEAUHDC__@@@Z @ 0x1C0042800 (-vLock@XDCOBJ@@QEAAXPEAUHDC__@@@Z.c)
 *     ?vDestructor@DEVLOCKOBJ@@QEAAXXZ @ 0x1C004C148 (-vDestructor@DEVLOCKOBJ@@QEAAXXZ.c)
 *     ??0DEVLOCKOBJ@@QEAA@XZ @ 0x1C005E6A8 (--0DEVLOCKOBJ@@QEAA@XZ.c)
 *     ?vUnlockFast@XDCOBJ@@QEAAXXZ @ 0x1C0060C28 (-vUnlockFast@XDCOBJ@@QEAAXXZ.c)
 *     ?vLockGammaRamp@DEVLOCKOBJ@@QEAAXAEAVXDCOBJ@@@Z @ 0x1C00B15B0 (-vLockGammaRamp@DEVLOCKOBJ@@QEAAXAEAVXDCOBJ@@@Z.c)
 *     ?GreSetPrivateDeviceGammaRampInternal@@YAHPEAUHDEV__@@PEAXH@Z @ 0x1C0149D94 (-GreSetPrivateDeviceGammaRampInternal@@YAHPEAUHDEV__@@PEAXH@Z.c)
 */

__int64 __fastcall GreSetPrivateDeviceGammaRamp(HDC a1, void *a2, int a3)
{
  unsigned int v4; // edi
  __int64 v6; // rbx
  int v7; // r8d
  __int64 v9; // [rsp+20h] [rbp-60h] BYREF
  int v10; // [rsp+28h] [rbp-58h]
  int v11; // [rsp+2Ch] [rbp-54h]
  _BYTE v12[32]; // [rsp+30h] [rbp-50h] BYREF
  __int64 v13; // [rsp+50h] [rbp-30h] BYREF
  char v14; // [rsp+60h] [rbp-20h]

  v4 = 0;
  v10 = 0;
  v11 = 0;
  XDCOBJ::vLock((XDCOBJ *)&v9, a1);
  v6 = v9;
  if ( v9 )
  {
    if ( !*(_DWORD *)(v9 + 32) )
    {
      DEVLOCKOBJ::DEVLOCKOBJ((DEVLOCKOBJ *)v12);
      DEVLOCKOBJ::vLockGammaRamp((DEVLOCKOBJ *)v12, (struct XDCOBJ *)&v9, v7);
      v4 = GreSetPrivateDeviceGammaRampInternal(*(HDEV *)(v6 + 48), a2, a3);
      DEVLOCKOBJ::vDestructor((DEVLOCKOBJ *)v12);
      if ( v13 )
      {
        if ( v14 )
        {
          *(_DWORD *)(v13 + 40) &= ~2u;
          v14 = 0;
        }
        XDCOBJ::vUnlockNoNullSet((XDCOBJ *)&v13);
      }
    }
    XDCOBJ::vUnlockFast((XDCOBJ *)&v9);
  }
  return v4;
}
