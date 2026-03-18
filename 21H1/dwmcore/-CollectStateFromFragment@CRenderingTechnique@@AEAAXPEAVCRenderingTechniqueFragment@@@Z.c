/*
 * XREFs of ?CollectStateFromFragment@CRenderingTechnique@@AEAAXPEAVCRenderingTechniqueFragment@@@Z @ 0x18009BB84
 * Callers:
 *     ?CollectStateFromAllFragments@CRenderingTechnique@@AEAAXXZ @ 0x18009B878 (-CollectStateFromAllFragments@CRenderingTechnique@@AEAAXXZ.c)
 * Callees:
 *     ?GetSurfaceDescription@CRenderingTechniqueFragment@@AEBAXPEBVCBrushRenderingGraph@@IPEAUSurfaceDescription@1@@Z @ 0x18009C358 (-GetSurfaceDescription@CRenderingTechniqueFragment@@AEBAXPEBVCBrushRenderingGraph@@IPEAUSurfaceD.c)
 *     ??8SurfaceDescription@CRenderingTechniqueFragment@@QEBA_NAEBU01@@Z @ 0x18009C484 (--8SurfaceDescription@CRenderingTechniqueFragment@@QEBA_NAEBU01@@Z.c)
 */

void __fastcall CRenderingTechnique::CollectStateFromFragment(
        CRenderingTechnique *this,
        struct CRenderingTechniqueFragment *a2)
{
  __int64 v3; // rcx
  unsigned int v4; // edi
  __int64 v6; // rax
  _QWORD *v7; // rcx
  __int64 v8; // rdx
  bool v9; // zf
  unsigned int v10; // eax
  unsigned int i; // ebp
  int v12; // eax
  __int64 v13; // r9
  unsigned int v14; // r8d
  const struct CBrushRenderingGraph *v15; // rdx
  __int64 v16; // rcx
  int v17; // eax
  unsigned int v18; // r9d
  unsigned int j; // r8d
  __int64 v20; // xmm0_8
  __int64 v21; // rcx
  int v22; // eax
  __int64 v23; // [rsp+20h] [rbp-18h] BYREF
  int v24; // [rsp+28h] [rbp-10h]

  v3 = *((_QWORD *)a2 + 4);
  v4 = 0;
  v6 = (*((_QWORD *)a2 + 5) - v3) >> 4;
  if ( (_DWORD)v6 )
  {
    v7 = (_QWORD *)(v3 + 8);
    v8 = (unsigned int)v6;
    do
    {
      v9 = *v7 == 0LL;
      v10 = v4 + 1;
      v7 += 2;
      if ( !v9 )
        v10 = v4;
      v4 = v10;
      --v8;
    }
    while ( v8 );
  }
  for ( i = 0; i < v4; ++i )
  {
    v13 = *((_QWORD *)a2 + 4);
    v14 = 0;
    LODWORD(v15) = i;
    v16 = (*((_QWORD *)a2 + 5) - v13) >> 4;
    if ( (_DWORD)v16 )
    {
      while ( 1 )
      {
        if ( !*(_QWORD *)(v13 + 16LL * v14 + 8) )
        {
          v17 = (int)v15;
          v15 = (const struct CBrushRenderingGraph *)(unsigned int)((_DWORD)v15 - 1);
          if ( !v17 )
            break;
        }
        if ( ++v14 >= (unsigned int)v16 )
          goto LABEL_14;
      }
      CRenderingTechniqueFragment::GetSurfaceDescription(
        a2,
        v15,
        v14,
        (struct CRenderingTechniqueFragment::SurfaceDescription *)&v23);
    }
LABEL_14:
    if ( BYTE4(v23) )
      goto LABEL_17;
    v18 = *((_DWORD *)this + 15);
    for ( j = 0; j < v18; ++j )
    {
      if ( (unsigned __int8)CRenderingTechniqueFragment::SurfaceDescription::operator==(&v23) )
        break;
    }
    if ( j >= v18 )
    {
LABEL_17:
      v20 = v23;
      v21 = 44LL * (unsigned int)(*((_DWORD *)this + 15))++;
      v22 = v24;
      *(_QWORD *)((char *)this + v21 + 68) = v20;
      *(_DWORD *)((char *)this + v21 + 76) = v22;
    }
    else
    {
      *((_WORD *)this + 22 * j + 39) |= HIWORD(v24);
    }
  }
  *((_DWORD *)this + 16) |= *((_DWORD *)a2 + 7);
  v12 = *((_DWORD *)a2 + 5);
  if ( (v12 & 0xF) != 0 )
    v12 = v12 - (*((_DWORD *)a2 + 5) & 0xF) + 16;
  *((_DWORD *)this + 14) += v12;
}
