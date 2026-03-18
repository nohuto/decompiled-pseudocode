/*
 * XREFs of ?BltMe4Times@@YAXIHHPEAUHDC__@@PEAUtagCURSOR@@I@Z @ 0x1C0246D38
 * Callers:
 *     ?DrawCaptionIcon@@YAXPEAUHDC__@@PEAUtagRECT@@PEAUtagCURSOR@@PEAUHBRUSH__@@I@Z @ 0x1C0246ECC (-DrawCaptionIcon@@YAXPEAUHDC__@@PEAUtagRECT@@PEAUtagCURSOR@@PEAUHBRUSH__@@I@Z.c)
 * Callees:
 *     FillRect @ 0x1C0037B08 (FillRect.c)
 *     GetDpiForSystem @ 0x1C005DE40 (GetDpiForSystem.c)
 *     BltIcon @ 0x1C0092070 (BltIcon.c)
 *     GetOemBitmapInfoForDpi @ 0x1C00FE61C (GetOemBitmapInfoForDpi.c)
 *     PrepareHDCBITSBitmap @ 0x1C00FE72C (PrepareHDCBITSBitmap.c)
 */

void __fastcall BltMe4Times(unsigned int a1, int a2, unsigned int a3, HDC a4, struct tagCURSOR *a5, char a6)
{
  unsigned int v6; // r15d
  int v9; // r14d
  HDC v10; // r13
  HBRUSH v11; // rsi
  __int64 v12; // rcx
  unsigned int DpiForSystem; // eax
  __int64 v14; // r8
  __int16 *OemBitmapInfoForDpi; // rax
  int v16; // r12d
  LONG v17; // edi
  LONG v18; // ebx
  LONG v19; // ecx
  int v20; // edi
  unsigned int v21; // esi
  __int64 v22; // rbx
  int v23; // [rsp+50h] [rbp-58h]
  __int64 v24; // [rsp+58h] [rbp-50h]
  RECT v25; // [rsp+60h] [rbp-48h] BYREF
  unsigned int v26; // [rsp+B0h] [rbp+8h]
  unsigned int v29; // [rsp+D8h] [rbp+30h]

  v26 = a1;
  v6 = a1;
  v9 = 1;
  v10 = (HDC)PrepareHDCBITSBitmap(0LL);
  if ( v10 )
  {
    v29 = a6 & 0x10;
    if ( v29 )
      v11 = *(HBRUSH *)(gpsi + 4856LL);
    else
      v11 = *(HBRUSH *)(gpsi + 4712LL);
    v12 = 2LL;
    v24 = 2LL;
    v23 = (int)(a2 - a3) / 2;
    do
    {
      DpiForSystem = GetDpiForSystem(v12);
      OemBitmapInfoForDpi = (__int16 *)GetOemBitmapInfoForDpi(v6, DpiForSystem, v14);
      v16 = 8913094;
      v17 = *OemBitmapInfoForDpi;
      v18 = OemBitmapInfoForDpi[1];
      v19 = v17 + OemBitmapInfoForDpi[2];
      LODWORD(OemBitmapInfoForDpi) = OemBitmapInfoForDpi[3];
      v25.right = v19;
      v25.left = v17;
      v25.top = v18;
      v25.bottom = v18 + (_DWORD)OemBitmapInfoForDpi;
      FillRect(v10, &v25, v11);
      v20 = v23 + v17;
      v21 = v23 + v18;
      v22 = 2LL;
      do
      {
        BltIcon(v10, v20 + 1, v21, a3, a3, a4, (__int64)a5, (v9 ^ 1) + 1, v16);
        v9 ^= 1u;
        v16 = 6684742;
        --v22;
      }
      while ( v22 );
      v6 = ++v26;
      v12 = gpsi;
      if ( v29 )
        v11 = *(HBRUSH *)(gpsi + 4816LL);
      else
        v11 = *(HBRUSH *)(gpsi + 4720LL);
      --v24;
    }
    while ( v24 );
  }
}
