/*
 * XREFs of NtGdiGetGammaRampCapability @ 0x1C014A330
 * Callers:
 *     <none>
 * Callees:
 *     ?vUnlockNoNullSet@XDCOBJ@@QEAAXXZ @ 0x1C0041720 (-vUnlockNoNullSet@XDCOBJ@@QEAAXXZ.c)
 *     ?vLock@XDCOBJ@@QEAAXPEAUHDC__@@@Z @ 0x1C0042800 (-vLock@XDCOBJ@@QEAAXPEAUHDC__@@@Z.c)
 *     ?vDestructor@DEVLOCKOBJ@@QEAAXXZ @ 0x1C004C148 (-vDestructor@DEVLOCKOBJ@@QEAAXXZ.c)
 *     ??0DEVLOCKOBJ@@QEAA@XZ @ 0x1C005E6A8 (--0DEVLOCKOBJ@@QEAA@XZ.c)
 *     ?vUnlockFast@XDCOBJ@@QEAAXXZ @ 0x1C0060C28 (-vUnlockFast@XDCOBJ@@QEAAXXZ.c)
 *     ?bLddmDriver@PDEVOBJ@@QEBAHXZ @ 0x1C0060CA8 (-bLddmDriver@PDEVOBJ@@QEBAHXZ.c)
 *     ?vLockGammaRamp@DEVLOCKOBJ@@QEAAXAEAVXDCOBJ@@@Z @ 0x1C00B15B0 (-vLockGammaRamp@DEVLOCKOBJ@@QEAAXAEAVXDCOBJ@@@Z.c)
 *     ?bGammaRampCapable@PDEVOBJ@@QEAAHXZ @ 0x1C0149FCC (-bGammaRampCapable@PDEVOBJ@@QEAAHXZ.c)
 */

_BOOL8 __fastcall NtGdiGetGammaRampCapability(HDC a1)
{
  BOOL v1; // ebx
  __int64 v2; // rdi
  int v3; // r8d
  __int64 v5; // [rsp+20h] [rbp-60h] BYREF
  int v6; // [rsp+28h] [rbp-58h]
  int v7; // [rsp+2Ch] [rbp-54h]
  _BYTE v8[32]; // [rsp+30h] [rbp-50h] BYREF
  __int64 v9; // [rsp+50h] [rbp-30h] BYREF
  char v10; // [rsp+60h] [rbp-20h]
  __int64 v11; // [rsp+98h] [rbp+18h] BYREF

  v1 = 0;
  v6 = 0;
  v7 = 0;
  XDCOBJ::vLock((XDCOBJ *)&v5, a1);
  v2 = v5;
  if ( v5 )
  {
    if ( !*(_DWORD *)(v5 + 32) )
    {
      DEVLOCKOBJ::DEVLOCKOBJ((DEVLOCKOBJ *)v8);
      DEVLOCKOBJ::vLockGammaRamp((DEVLOCKOBJ *)v8, (struct XDCOBJ *)&v5, v3);
      v11 = *(_QWORD *)(v2 + 48);
      if ( (unsigned int)PDEVOBJ::bGammaRampCapable((PDEVOBJ *)&v11) )
        v1 = PDEVOBJ::bLddmDriver((PDEVOBJ *)&v11) != 0;
      DEVLOCKOBJ::vDestructor((DEVLOCKOBJ *)v8);
      if ( v9 )
      {
        if ( v10 )
        {
          *(_DWORD *)(v9 + 40) &= ~2u;
          v10 = 0;
        }
        XDCOBJ::vUnlockNoNullSet((XDCOBJ *)&v9);
      }
    }
    XDCOBJ::vUnlockFast((XDCOBJ *)&v5);
  }
  return v1;
}
