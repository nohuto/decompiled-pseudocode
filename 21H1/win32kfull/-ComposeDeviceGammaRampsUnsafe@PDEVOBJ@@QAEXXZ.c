/*
 * XREFs of ?ComposeDeviceGammaRampsUnsafe@PDEVOBJ@@QAEXXZ @ 0x21B5E0
 * Callers:
 *     ?GreSetDeviceGammaRampInternal@@YGHPAUHDEV__@@PAXHHPAW4_SETGAMMARAMP_FAILED_REASON@@PAK@Z @ 0xCEC02 (-GreSetDeviceGammaRampInternal@@YGHPAUHDEV__@@PAXHHPAW4_SETGAMMARAMP_FAILED_REASON@@PAK@Z.c)
 * Callees:
 *     <none>
 */

void __thiscall PDEVOBJ::ComposeDeviceGammaRampsUnsafe(PDEVOBJ *this)
{
  int v1; // eax
  _WORD *v2; // ecx
  int v3; // edi
  int v4; // ebx
  int v5; // edi
  int v6; // esi
  int v7; // edx
  int v8; // ebx
  int v9; // esi
  int v10; // [esp+Ch] [ebp-14h]
  int v11; // [esp+10h] [ebp-10h]

  v1 = *(_DWORD *)this;
  v2 = *(_WORD **)(*(_DWORD *)this + 1056);
  v3 = *(_DWORD *)(v1 + 1048);
  v4 = v3 + 512;
  v5 = v3 - (_DWORD)v2;
  v10 = v5;
  v6 = v4 + 512 - (_DWORD)v2;
  v7 = *(_DWORD *)(v1 + 1052);
  v8 = v4 - (_DWORD)v2;
  v11 = v6;
  v9 = 256;
  do
  {
    *v2 = *(_WORD *)(v7 + 2 * *((unsigned __int8 *)v2 + v5 + 1));
    v2[256] = *(_WORD *)(v7 + 2 * *((unsigned __int8 *)v2 + v8 + 1) + 512);
    v2[512] = *(_WORD *)(v7 + 2 * *((unsigned __int8 *)v2 + v11 + 1) + 1024);
    ++v2;
    v5 = v10;
    --v9;
  }
  while ( v9 );
}
