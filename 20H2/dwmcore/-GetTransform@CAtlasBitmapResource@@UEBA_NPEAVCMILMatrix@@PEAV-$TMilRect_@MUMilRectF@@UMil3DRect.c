/*
 * XREFs of ?GetTransform@CAtlasBitmapResource@@UEBA_NPEAVCMILMatrix@@PEAV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x180207C40
 * Callers:
 *     <none>
 * Callees:
 *     ?GetSize@CAtlasTexture@@QEBA?AUD2D_SIZE_U@@XZ @ 0x180207C04 (-GetSize@CAtlasTexture@@QEBA-AUD2D_SIZE_U@@XZ.c)
 */

char __fastcall CAtlasBitmapResource::GetTransform(__int64 a1, __int64 a2, __int64 a3)
{
  CAtlasTexture *v4; // rcx
  int v5; // eax
  float v6; // xmm1_4
  int v8; // [rsp+38h] [rbp+10h] BYREF
  int v9; // [rsp+3Ch] [rbp+14h]

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
  *(_WORD *)(a2 + 64) = 32085;
  if ( a3 )
  {
    v4 = *(CAtlasTexture **)(a1 + 16);
    if ( v4 )
    {
      CAtlasTexture::GetSize(v4, (__int64)&v8);
      v5 = v8;
      *(_QWORD *)a3 = 0LL;
      v6 = (float)v9;
      *(float *)(a3 + 8) = (float)v5;
      *(float *)(a3 + 12) = v6;
    }
    else
    {
      *(_QWORD *)(a3 + 8) = 0LL;
      *(_QWORD *)a3 = 0LL;
    }
  }
  return 0;
}
