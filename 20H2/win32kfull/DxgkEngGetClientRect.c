/*
 * XREFs of DxgkEngGetClientRect @ 0x1C0276F90
 * Callers:
 *     <none>
 * Callees:
 *     ?vAltUnlockFast@XDCOBJ@@QEAAXXZ @ 0x1C00FA978 (-vAltUnlockFast@XDCOBJ@@QEAAXXZ.c)
 *     ??0MDCOBJA@@QEAA@PEAUHDC__@@H@Z @ 0x1C00FAA80 (--0MDCOBJA@@QEAA@PEAUHDC__@@H@Z.c)
 */

__int64 __fastcall DxgkEngGetClientRect(HDC a1, _OWORD *a2)
{
  __int64 *v3; // rax
  unsigned int v4; // ebx
  __int64 *v6[3]; // [rsp+20h] [rbp-18h] BYREF

  MDCOBJA::MDCOBJA((MDCOBJA *)v6, a1);
  v3 = v6[0];
  if ( v6[0] )
  {
    *a2 = *(_OWORD *)(v6[0] + 129);
    v4 = 1;
  }
  else
  {
    v4 = 0;
  }
  if ( v3 )
    XDCOBJ::vAltUnlockFast(v6);
  return v4;
}
