/*
 * XREFs of DxgkEngLockVisRgn @ 0x1C0278730
 * Callers:
 *     <none>
 * Callees:
 *     ?vAltUnlockFast@XDCOBJ@@QEAAXXZ @ 0x1C002E05C (-vAltUnlockFast@XDCOBJ@@QEAAXXZ.c)
 *     ??0MDCOBJA@@QEAA@PEAUHDC__@@H@Z @ 0x1C002EF70 (--0MDCOBJA@@QEAA@PEAUHDC__@@H@Z.c)
 */

__int64 __fastcall DxgkEngLockVisRgn(HDC a1)
{
  __int64 v1; // rbx
  __int64 *v3[3]; // [rsp+20h] [rbp-18h] BYREF

  v1 = 0LL;
  MDCOBJA::MDCOBJA((MDCOBJA *)v3, a1);
  if ( v3[0] )
  {
    v1 = v3[0][6];
    XDCOBJ::vAltUnlockFast(v3);
  }
  return v1;
}
