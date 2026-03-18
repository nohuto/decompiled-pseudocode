/*
 * XREFs of ?CreateDPIBitmapStrip@@YGHI@Z @ 0x90002
 * Callers:
 *     _CreateBitmapStrip@0 @ 0x8E78C (_CreateBitmapStrip@0.c)
 *     _PrepareHDCBITSBitmap@4 @ 0xC37BA (_PrepareHDCBITSBitmap@4.c)
 * Callees:
 *     _GreCreateCompatibleBitmapInternal@24 @ 0x21480 (_GreCreateCompatibleBitmapInternal@24.c)
 *     ??0UserAtomicCheck@@QAE@XZ @ 0x2C3CC (--0UserAtomicCheck@@QAE@XZ.c)
 *     ??1UserAtomicCheck@@QAE@XZ @ 0x2C40C (--1UserAtomicCheck@@QAE@XZ.c)
 *     _GetDpiDependentMetric@8 @ 0x6E48A (_GetDpiDependentMetric@8.c)
 *     _FillRect@12 @ 0x7226C (_FillRect@12.c)
 *     _DrawFrameControl@16 @ 0x901FE (_DrawFrameControl@16.c)
 *     _BitBltSysBmp@20 @ 0x910DA (_BitBltSysBmp@20.c)
 *     ?EnsureOemBitmapInfoForDpiSlot@@YGXPAUOEMBITMAPSET@@I@Z @ 0x91206 (-EnsureOemBitmapInfoForDpiSlot@@YGXPAUOEMBITMAPSET@@I@Z.c)
 */

int __fastcall CreateDPIBitmapStrip(int a1)
{
  struct OEMBITMAPSET **v1; // edi
  int v2; // ecx
  HDC v3; // ebx
  int CompatibleBitmapInternal; // eax
  struct OEMBITMAPSET *v5; // esi
  __int16 *v6; // edi
  unsigned int i; // ebx
  __int16 v8; // ax
  int v9; // esi
  int v10; // eax
  int v11; // ecx
  int v12; // eax
  HDC v14; // eax
  struct OEMBITMAPSET *v15; // [esp+0h] [ebp-30h]
  const RECT *v16; // [esp+0h] [ebp-30h]
  unsigned int v17; // [esp+4h] [ebp-2Ch]
  HBRUSH v18; // [esp+4h] [ebp-2Ch]
  HDC v19; // [esp+Ch] [ebp-24h]
  int v20; // [esp+10h] [ebp-20h]
  int v21; // [esp+10h] [ebp-20h]
  INT v22; // [esp+14h] [ebp-1Ch]
  _BYTE v23[8]; // [esp+18h] [ebp-18h] BYREF
  int v24; // [esp+20h] [ebp-10h] BYREF
  int v25; // [esp+24h] [ebp-Ch]
  int v26; // [esp+28h] [ebp-8h]
  int v27; // [esp+2Ch] [ebp-4h]

  v24 = 0;
  v25 = 0;
  v26 = 0;
  v27 = 0;
  v1 = &gOemBitmapSet + 189 * a1;
  if ( a1 )
    v2 = 24 * (a1 + 3);
  else
    v2 = *(unsigned __int16 *)(_gpsi + 6242);
  v22 = v2;
  v3 = *(HDC *)(_gpDispInfo + 32);
  v19 = v3;
  EnsureOemBitmapInfoForDpiSlot(v15, v17);
  CompatibleBitmapInternal = GreCreateCompatibleBitmapInternal(
                               *(HDC *)(_gpDispInfo + 28),
                               (int)v1[1],
                               (int)v1[2],
                               0,
                               0,
                               0);
  v5 = (struct OEMBITMAPSET *)CompatibleBitmapInternal;
  if ( !CompatibleBitmapInternal )
    return 0;
  GreSetBitmapOwner(CompatibleBitmapInternal, 0);
  GreSelectBitmap(v3, v5);
  if ( *v1 )
    GreDeleteObject(*v1);
  *v1 = v5;
  UserAtomicCheck::UserAtomicCheck((UserAtomicCheck *)v23);
  v6 = (__int16 *)(v1 + 3);
  for ( i = 0; i < 186; i += 2 )
  {
    v8 = v6[2];
    if ( v8 )
    {
      v9 = *v6;
      v20 = v6[1];
      v26 = v9 + v8;
      v10 = v20 + v6[3];
      v25 = v20;
      v11 = (unsigned __int16)word_250F5A[i];
      v27 = v10;
      v12 = (unsigned __int16)word_250F58[i];
      v24 = v9;
      if ( v12 == 0xFFFF )
      {
        if ( (v11 & 1) != 0 )
        {
          if ( _gbDisableAlpha || ((unsigned int)_gpdwCPUserPreferencesMask & 0x80000010) != 0x80000010 )
          {
            if ( (v11 & 0x100) != 0 )
              v14 = *(HDC *)(_gpsi + 4304);
            else
              v14 = *(HDC *)(_gpsi + 4300);
          }
          else if ( (v11 & 0x100) != 0 )
          {
            v14 = *(HDC *)(_gpsi + 4404);
          }
          else
          {
            v14 = *(HDC *)(_gpsi + 4400);
          }
          FillRect(v14, v16, v18);
          v21 = v20 + 2;
          BitBltSysBmp(v19, v21, 4, 0);
          GetDpiDependentMetric(12, v22);
          BitBltSysBmp(v19, v21, 14, 0);
          GetDpiDependentMetric(12, v22);
          BitBltSysBmp(v19, v21, 0, 0);
          GetDpiDependentMetric(12, v22);
          BitBltSysBmp(v19, v21, 11, 0);
        }
      }
      else
      {
        DrawFrameControl(v19, &v24, v12, v11);
      }
    }
    v6 += 4;
  }
  UserAtomicCheck::~UserAtomicCheck((UserAtomicCheck *)v23);
  return 1;
}
