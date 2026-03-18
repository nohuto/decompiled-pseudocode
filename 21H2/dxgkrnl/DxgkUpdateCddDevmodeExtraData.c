/*
 * XREFs of DxgkUpdateCddDevmodeExtraData @ 0x1C01E8930
 * Callers:
 *     <none>
 * Callees:
 *     ?DmmMapVSyncFromRationalToInteger@@YAIAEBU_D3DDDI_RATIONAL@@W4_D3DDDI_VIDEO_SIGNAL_SCANLINE_ORDERING@@PEAE@Z @ 0x1C01BE360 (-DmmMapVSyncFromRationalToInteger@@YAIAEBU_D3DDDI_RATIONAL@@W4_D3DDDI_VIDEO_SIGNAL_SCANLINE_ORDE.c)
 */

__int64 __fastcall DxgkUpdateCddDevmodeExtraData(_DWORD *a1, __int64 a2)
{
  int v4; // eax
  int v5; // eax
  int v6; // eax
  int v7; // eax
  int v8; // eax
  int v9; // ecx
  unsigned __int8 v11; // [rsp+30h] [rbp+8h] BYREF

  if ( (a1[18] & 0x40000) != 0 )
  {
    v4 = a1[42];
    if ( v4 )
    {
      switch ( v4 )
      {
        case 32:
          v5 = 21;
          break;
        case 8:
          v5 = 41;
          break;
        case 16:
          v5 = 23;
          break;
        case 24:
          v5 = 20;
          break;
        default:
          WdLogSingleEntry1(2LL, (unsigned int)a1[42]);
          v5 = 0;
          break;
      }
      *(_DWORD *)(a2 + 228) = v5;
    }
  }
  v6 = a1[18];
  if ( (v6 & 0x400000) != 0 && (v6 & 0x200000) != 0 )
  {
    v7 = a1[45];
    v11 = 0;
    v8 = DmmMapVSyncFromRationalToInteger(
           (const struct _D3DDDI_RATIONAL *)(a2 + 220),
           (enum _D3DDDI_VIDEO_SIGNAL_SCANLINE_ORDERING)(((v7 & 2) != 0) + 1),
           &v11);
    v9 = a1[46];
    if ( v8 != v9 && (v8 + 1 != v9 || !v11) )
    {
      *(_DWORD *)(a2 + 220) = v9;
      *(_DWORD *)(a2 + 224) = 1;
    }
  }
  return 0LL;
}
