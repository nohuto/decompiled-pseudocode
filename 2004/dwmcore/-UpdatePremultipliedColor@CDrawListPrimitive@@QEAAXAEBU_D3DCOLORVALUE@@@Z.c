/*
 * XREFs of ?UpdatePremultipliedColor@CDrawListPrimitive@@QEAAXAEBU_D3DCOLORVALUE@@@Z @ 0x1801A4E34
 * Callers:
 *     ?Render@CHWDrawListEntry@@UEAAJPEAVCDrawingContext@@AEBVCMILMatrix@@MW4Enum@MilCompositingMode@@@Z @ 0x1800643E0 (-Render@CHWDrawListEntry@@UEAAJPEAVCDrawingContext@@AEBVCMILMatrix@@MW4Enum@MilCompositingMode@@.c)
 * Callees:
 *     <none>
 */

void __fastcall CDrawListPrimitive::UpdatePremultipliedColor(CDrawListPrimitive *this, const struct _D3DCOLORVALUE *a2)
{
  unsigned int v2; // r9d
  __int64 v4; // r11
  int v6; // ebx
  __int64 v7; // rsi
  int v8; // edi
  __int64 v9; // rdx
  float v10; // xmm2_4
  float v11; // xmm0_4
  int v12; // ecx
  float v13; // xmm0_4
  unsigned int v14; // ecx
  float v15; // xmm0_4
  int v16; // edx
  float v17; // xmm0_4
  unsigned int v18; // ecx
  float v19; // xmm0_4
  int v20; // ecx
  float v21; // xmm0_4
  __int64 v22; // rax
  float v23; // [rsp+0h] [rbp-28h]
  float v24; // [rsp+0h] [rbp-28h]

  v2 = 0;
  v4 = *((_QWORD *)this + 4);
  v6 = 8 * *((_DWORD *)this + 4) + 16;
  if ( *((_DWORD *)this + 3) )
  {
    v7 = *((_QWORD *)this + 5);
    if ( *((_DWORD *)this + 2) )
    {
      v8 = 0;
      do
      {
        v9 = v8;
        ++v2;
        v8 += v6;
        v10 = *(float *)(v9 + v7 + 12);
        v11 = (float)((float)(v10 * a2->a) * 255.0) + 6291456.25;
        v12 = LODWORD(v11) << 23;
        v13 = (float)((float)(v10 * a2->b) * 255.0) + 6291456.25;
        v14 = (LODWORD(v13) << 15) & 0xFFFF00FF | v12 & 0xFF0000FF;
        v15 = (float)((float)(v10 * a2->g) * 255.0) + 6291456.25;
        v23 = (float)((float)(v10 * a2->r) * 255.0) + 6291456.25;
        *(_DWORD *)(v9 + v4 + 12) = ((int)(LODWORD(v23) << 10) >> 11) | (((int)(LODWORD(v15) << 10) >> 3) | v14) & 0xFFFFFF00;
      }
      while ( v2 < *((_DWORD *)this + 2) );
    }
  }
  else if ( *((_DWORD *)this + 2) )
  {
    v16 = 0;
    do
    {
      ++v2;
      v17 = (float)(a2->a * 255.0) + 6291456.25;
      v18 = (LODWORD(v17) << 23) & 0xFF00FFFF;
      v19 = (float)(a2->b * 255.0) + 6291456.25;
      v20 = (LODWORD(v19) << 15) | v18;
      v21 = (float)(a2->g * 255.0) + 6291456.25;
      v24 = (float)(a2->r * 255.0) + 6291456.25;
      v22 = v16;
      v16 += v6;
      *(_DWORD *)(v22 + v4 + 12) = ((int)(LODWORD(v24) << 10) >> 11) | ((int)(LODWORD(v21) << 10) >> 3) & 0xFFFFFF00 | v20 & 0xFFFF0000;
    }
    while ( v2 < *((_DWORD *)this + 2) );
  }
}
