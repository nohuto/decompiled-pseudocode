/*
 * XREFs of ?GetTransform@CAtlasBitmapResource@@UEBA_NPEAVCMILMatrix@@PEAV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x18025B120
 * Callers:
 *     <none>
 * Callees:
 *     ?GetSize@CAtlasTexture@@QEBA?AUD2D_SIZE_U@@XZ @ 0x1800EDC2C (-GetSize@CAtlasTexture@@QEBA-AUD2D_SIZE_U@@XZ.c)
 */

char __fastcall CAtlasBitmapResource::GetTransform(__int64 a1, __int64 a2, __int64 a3)
{
  char v4; // al
  CAtlasTexture *v5; // rcx
  int v6; // eax
  float v7; // xmm1_4
  int v9; // [rsp+38h] [rbp+10h] BYREF
  int v10; // [rsp+3Ch] [rbp+14h]

  *(_QWORD *)a2 = 1065353216LL;
  *(_QWORD *)(a2 + 8) = 0LL;
  *(_DWORD *)(a2 + 16) = 0;
  *(_QWORD *)(a2 + 20) = 1065353216LL;
  *(_QWORD *)(a2 + 28) = 0LL;
  *(_DWORD *)(a2 + 36) = 0;
  *(_QWORD *)(a2 + 40) = 1065353216LL;
  *(_QWORD *)(a2 + 48) = 0LL;
  *(_DWORD *)(a2 + 56) = 0;
  *(_DWORD *)(a2 + 60) = 1065353216;
  v4 = *(_BYTE *)(a2 + 65) & 0xD7;
  *(_BYTE *)(a2 + 64) = 85;
  *(_BYTE *)(a2 + 65) = v4 | 0x17;
  if ( a3 )
  {
    v5 = *(CAtlasTexture **)(a1 + 16);
    if ( v5 )
    {
      CAtlasTexture::GetSize(v5, (__int64)&v9);
      v6 = v9;
      *(_QWORD *)a3 = 0LL;
      v7 = (float)v10;
      *(float *)(a3 + 8) = (float)v6;
      *(float *)(a3 + 12) = v7;
    }
    else
    {
      *(_QWORD *)(a3 + 8) = 0LL;
      *(_QWORD *)a3 = 0LL;
    }
  }
  return 0;
}
