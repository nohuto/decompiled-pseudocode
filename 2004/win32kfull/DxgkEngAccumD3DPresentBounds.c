/*
 * XREFs of DxgkEngAccumD3DPresentBounds @ 0x1C02776E0
 * Callers:
 *     <none>
 * Callees:
 *     ?vAccumulate@XDCOBJ@@QEAAXAEAVERECTL@@@Z @ 0x1C001ACC8 (-vAccumulate@XDCOBJ@@QEAAXAEAVERECTL@@@Z.c)
 *     ?vAltUnlockFast@XDCOBJ@@QEAAXXZ @ 0x1C002E05C (-vAltUnlockFast@XDCOBJ@@QEAAXXZ.c)
 *     ??0MDCOBJA@@QEAA@PEAUHDC__@@H@Z @ 0x1C002EF70 (--0MDCOBJA@@QEAA@PEAUHDC__@@H@Z.c)
 *     ?bEmpty@ERECTL@@QEBAHXZ @ 0x1C0071268 (-bEmpty@ERECTL@@QEBAHXZ.c)
 */

void __fastcall DxgkEngAccumD3DPresentBounds(HDC a1, int *a2)
{
  int v3; // r10d
  int v4; // r9d
  int v5; // r11d
  int v6; // edx
  __int64 v7; // r8
  int v8; // r9d
  int v9; // r10d
  int v10; // r11d
  __int64 v11; // rcx
  int v12; // eax
  int v13; // r9d
  int v14; // eax
  int v15; // [rsp+20h] [rbp-20h] BYREF
  int v16; // [rsp+24h] [rbp-1Ch]
  int v17; // [rsp+28h] [rbp-18h]
  int v18; // [rsp+2Ch] [rbp-14h]
  __int64 *v19[2]; // [rsp+30h] [rbp-10h] BYREF

  MDCOBJA::MDCOBJA((MDCOBJA *)v19, a1);
  if ( v19[0] )
  {
    v3 = a2[1];
    v4 = a2[2];
    v5 = a2[3];
    v15 = *a2;
    v16 = v3;
    v17 = v4;
    v18 = v5;
    if ( !ERECTL::bEmpty((ERECTL *)&v15) && (*(_DWORD *)(v7 + 36) & 0xE0) != 0 )
    {
      v11 = *(_DWORD *)(v7 + 40) & 1;
      v12 = *(_DWORD *)(v7 + 8 * v11 + 1016);
      v13 = v8 - v12;
      v15 = v6 - v12;
      v14 = *(_DWORD *)(v7 + 8 * v11 + 1020);
      v17 = v13;
      v16 = v9 - v14;
      v18 = v10 - v14;
      XDCOBJ::vAccumulate((XDCOBJ *)v19, (struct ERECTL *)&v15);
    }
    XDCOBJ::vAltUnlockFast(v19);
  }
}
