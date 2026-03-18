/*
 * XREFs of ?BltMe4Times@@YGXIHHPAUHDC__@@PAUtagCURSOR@@I@Z @ 0x1A4FE9
 * Callers:
 *     ?DrawCaptionIcon@@YGXPAUHDC__@@PAUtagRECT@@PAUtagCURSOR@@PAUHBRUSH__@@I@Z @ 0x1A5106 (-DrawCaptionIcon@@YGXPAUHDC__@@PAUtagRECT@@PAUtagCURSOR@@PAUHBRUSH__@@I@Z.c)
 * Callees:
 *     _GetDpiForSystem@0 @ 0x3D2A0 (_GetDpiForSystem@0.c)
 *     _FillRect@12 @ 0x7226C (_FillRect@12.c)
 *     _BltIcon@36 @ 0x90D6C (_BltIcon@36.c)
 *     _GetOemBitmapInfoForDpi@8 @ 0x911CC (_GetOemBitmapInfoForDpi@8.c)
 *     _PrepareHDCBITSBitmap@4 @ 0xC37BA (_PrepareHDCBITSBitmap@4.c)
 */

void __userpurge BltMe4Times(
        int a1@<edx>,
        int a2@<ecx>,
        XLATEOBJ *a3,
        HDC a4,
        _DWORD *a5,
        HDC a6,
        struct tagCURSOR *a7,
        unsigned int a8)
{
  int v8; // edi
  int v10; // ebx
  int DpiForSystem; // eax
  struct OEMBITMAPSET **OemBitmapInfoForDpi; // eax
  int v13; // edi
  int v14; // edi
  struct XDCOBJ *v15; // ecx
  int v16; // eax
  int v17; // esi
  HDC v18; // eax
  bool v19; // zf
  const RECT *v20; // [esp+0h] [ebp-38h]
  HBRUSH v21; // [esp+4h] [ebp-34h]
  int v22; // [esp+14h] [ebp-24h]
  int v23; // [esp+24h] [ebp-14h]
  int v24; // [esp+28h] [ebp-10h]
  int v25; // [esp+2Ch] [ebp-Ch]
  HDC v26; // [esp+30h] [ebp-8h]
  HDC v27; // [esp+34h] [ebp-4h]
  HDC v28; // [esp+4Ch] [ebp+14h]

  v8 = a2;
  v25 = a2;
  v10 = 1;
  v26 = (HDC)PrepareHDCBITSBitmap(0);
  if ( v26 )
  {
    v28 = (HDC)((unsigned __int8)a6 & 0x10);
    if ( v28 )
      v27 = *(HDC *)(_gpsi + 4372);
    else
      v27 = *(HDC *)(_gpsi + 4300);
    v24 = 2;
    v23 = (a1 - (int)a3) / 2;
    do
    {
      DpiForSystem = GetDpiForSystem();
      OemBitmapInfoForDpi = GetOemBitmapInfoForDpi(v8, DpiForSystem);
      v13 = *(__int16 *)OemBitmapInfoForDpi;
      v22 = *((__int16 *)OemBitmapInfoForDpi + 1);
      FillRect(v27, v20, v21);
      v14 = v23 + v13;
      v15 = (struct XDCOBJ *)(v23 + v22);
      v16 = 8913094;
      v17 = 2;
      do
      {
        BltIcon(v26, v14 + 1, v15, (int)a3, a3, a4, a5, (v10 ^ 1) + 1, v16);
        v15 = (struct XDCOBJ *)(v23 + v22);
        v10 ^= 1u;
        v16 = 6684742;
        --v17;
      }
      while ( v17 );
      v8 = ++v25;
      if ( v28 )
        v18 = *(HDC *)(_gpsi + 4352);
      else
        v18 = *(HDC *)(_gpsi + 4304);
      v19 = v24-- == 1;
      v27 = v18;
    }
    while ( !v19 );
  }
}
