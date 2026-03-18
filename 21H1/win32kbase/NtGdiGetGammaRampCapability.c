/*
 * XREFs of NtGdiGetGammaRampCapability @ 0x1C0152B60
 * Callers:
 *     <none>
 * Callees:
 *     ?vLockGammaRamp@DEVLOCKOBJ@@QEAAXAEAVXDCOBJ@@@Z @ 0x1C00433F0 (-vLockGammaRamp@DEVLOCKOBJ@@QEAAXAEAVXDCOBJ@@@Z.c)
 *     ??0DEVLOCKOBJ@@QEAA@XZ @ 0x1C0074A78 (--0DEVLOCKOBJ@@QEAA@XZ.c)
 *     ?vLock@XDCOBJ@@QEAAXPEAUHDC__@@@Z @ 0x1C0081D80 (-vLock@XDCOBJ@@QEAAXPEAUHDC__@@@Z.c)
 *     ?vDestructor@DEVLOCKOBJ@@QEAAXXZ @ 0x1C008C364 (-vDestructor@DEVLOCKOBJ@@QEAAXXZ.c)
 *     ?vUnlockFast@XDCOBJ@@QEAAXXZ @ 0x1C00B4C68 (-vUnlockFast@XDCOBJ@@QEAAXXZ.c)
 *     ?bLddmDriver@PDEVOBJ@@QEBAHXZ @ 0x1C00B4CE8 (-bLddmDriver@PDEVOBJ@@QEBAHXZ.c)
 *     ?bGammaRampCapable@PDEVOBJ@@QEAAHXZ @ 0x1C01527F4 (-bGammaRampCapable@PDEVOBJ@@QEAAHXZ.c)
 */

_BOOL8 __fastcall NtGdiGetGammaRampCapability(HDC a1)
{
  BOOL v1; // ebx
  __int64 v2; // rdi
  int v3; // r8d
  __int64 v4; // rdx
  int v5; // r8d
  __int64 v6; // rax
  __int64 v8; // [rsp+20h] [rbp-60h] BYREF
  int v9; // [rsp+28h] [rbp-58h]
  int v10; // [rsp+2Ch] [rbp-54h]
  _BYTE v11[32]; // [rsp+30h] [rbp-50h] BYREF
  __int64 v12; // [rsp+50h] [rbp-30h] BYREF
  char v13; // [rsp+60h] [rbp-20h]
  __int64 v14; // [rsp+98h] [rbp+18h] BYREF

  v1 = 0;
  v9 = 0;
  v10 = 0;
  XDCOBJ::vLock((XDCOBJ *)&v8, a1);
  v2 = v8;
  if ( v8 )
  {
    if ( !*(_DWORD *)(v8 + 32) )
    {
      DEVLOCKOBJ::DEVLOCKOBJ((DEVLOCKOBJ *)v11);
      DEVLOCKOBJ::vLockGammaRamp((DEVLOCKOBJ *)v11, (struct XDCOBJ *)&v8, v3);
      v14 = *(_QWORD *)(v2 + 48);
      if ( (unsigned int)PDEVOBJ::bGammaRampCapable((PDEVOBJ *)&v14) )
        v1 = PDEVOBJ::bLddmDriver((PDEVOBJ *)&v14) != 0;
      DEVLOCKOBJ::vDestructor((DEVLOCKOBJ *)v11, v4, v5);
      v6 = v12;
      if ( v12 )
      {
        if ( v13 )
        {
          *(_DWORD *)(v12 + 40) &= ~2u;
          v6 = v12;
          v13 = 0;
        }
        if ( v6 )
          XDCOBJ::vUnlockFast((XDCOBJ *)&v12);
      }
    }
    XDCOBJ::vUnlockFast((XDCOBJ *)&v8);
  }
  return v1;
}
