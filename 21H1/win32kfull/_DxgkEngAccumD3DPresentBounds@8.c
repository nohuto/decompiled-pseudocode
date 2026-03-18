/*
 * XREFs of _DxgkEngAccumD3DPresentBounds@8 @ 0x1D388A
 * Callers:
 *     <none>
 * Callees:
 *     ?bEmpty@ERECTL@@QBEHXZ @ 0x4F396 (-bEmpty@ERECTL@@QBEHXZ.c)
 *     ?vAltUnlockFast@XDCOBJ@@QAEXXZ @ 0x7AB50 (-vAltUnlockFast@XDCOBJ@@QAEXXZ.c)
 *     ??0DCOBJA@@QAE@PAUHDC__@@@Z @ 0x7AB76 (--0DCOBJA@@QAE@PAUHDC__@@@Z.c)
 *     ?vAccumulate@XDCOBJ@@QAEXAAVERECTL@@@Z @ 0x7B8B6 (-vAccumulate@XDCOBJ@@QAEXAAVERECTL@@@Z.c)
 */

void __stdcall DxgkEngAccumD3DPresentBounds(HDC a1, int *a2)
{
  int v2; // esi
  int v3; // ebx
  int v4; // edi
  HDC v5; // eax
  int v6; // edx
  int v7; // ecx
  int v8; // eax
  int v9; // edi
  int v10; // eax
  int v11; // [esp+0h] [ebp-1Ch] BYREF
  int v12; // [esp+4h] [ebp-18h]
  int v13; // [esp+8h] [ebp-14h]
  char *v14; // [esp+Ch] [ebp-10h]
  int *v15[3]; // [esp+10h] [ebp-Ch] BYREF
  HDC v16; // [esp+24h] [ebp+8h]

  DCOBJA::DCOBJA((DCOBJA *)v15, a1);
  if ( v15[0] )
  {
    v2 = *a2;
    v3 = a2[1];
    v4 = a2[2];
    v5 = (HDC)a2[3];
    v11 = *a2;
    v12 = v3;
    v13 = v4;
    v16 = v5;
    v14 = (char *)v5;
    if ( !ERECTL::bEmpty((ERECTL *)&v11) && (*(_BYTE *)(v6 + 24) & 0xE0) != 0 )
    {
      v7 = *(_DWORD *)(v6 + 28) & 1;
      v8 = *(_DWORD *)(v6 + 8 * v7 + 1048);
      v9 = v4 - v8;
      v11 = v2 - v8;
      v10 = *(_DWORD *)(v6 + 8 * v7 + 1052);
      v13 = v9;
      v14 = (char *)v16 - v10;
      v12 = v3 - v10;
      XDCOBJ::vAccumulate((XDCOBJ *)v15, (struct ERECTL *)&v11);
    }
    XDCOBJ::vAltUnlockFast(v15);
  }
}
