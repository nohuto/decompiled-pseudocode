/*
 * XREFs of ?CheckIndependentFlipAttributes@CFlipExBuffer@@IEAA_NAEBU_D3DKMT_FLIPMODEL_PRESENTHISTORYTOKEN@@PEA_N@Z @ 0x1C0017E88
 * Callers:
 *     ?NotifyPendingFlipPresent@CFlipExBuffer@@UEAAXAEBU_D3DKMT_FLIPMODEL_PRESENTHISTORYTOKEN@@PEA_N1@Z @ 0x1C0017E40 (-NotifyPendingFlipPresent@CFlipExBuffer@@UEAAXAEBU_D3DKMT_FLIPMODEL_PRESENTHISTORYTOKEN@@PEA_N1@.c)
 * Callees:
 *     ?SetPendingIndependentFlipAttributes@CFlipExBuffer@@IEAAXAEBU_D3DKMT_FLIPMODEL_PRESENTHISTORYTOKEN@@@Z @ 0x1C001C660 (-SetPendingIndependentFlipAttributes@CFlipExBuffer@@IEAAXAEBU_D3DKMT_FLIPMODEL_PRESENTHISTORYTOK.c)
 *     ?CalcTransformChange@CCompositionBuffer@@SA?AW4TransformComparison@1@PEBM0@Z @ 0x1C001CB98 (-CalcTransformChange@CCompositionBuffer@@SA-AW4TransformComparison@1@PEBM0@Z.c)
 */

bool __fastcall CFlipExBuffer::CheckIndependentFlipAttributes(
        CFlipExBuffer *this,
        const struct _D3DKMT_FLIPMODEL_PRESENTHISTORYTOKEN *a2,
        bool *a3)
{
  int v4; // eax
  const struct _D3DKMT_FLIPMODEL_PRESENTHISTORYTOKEN *v5; // r9
  CFlipExBuffer *v6; // r11
  bool v7; // sf
  bool v8; // of
  char v10; // di
  LONG left; // ebx
  __int64 v12; // r8
  int v13; // eax
  float *v14; // rdx
  float *v15; // rcx
  int v16; // r10d
  struct _D3DKMT_FLIPMODEL_PRESENTHISTORYTOKENFLAGS::$999A3466B180106FECC6453D6FF00F87::$CDA7573B07EF0A4513B0E43B6C419F7F Value; // ecx
  int v18; // edx
  __int64 v19; // r11
  int v20; // eax
  bool v21; // zf

  *a3 = 0;
  v4 = *((_DWORD *)this + 88);
  v5 = a2;
  v6 = this;
  v8 = __OFSUB__(v4, 1);
  v7 = v4 - 1 < 0;
  if ( v4 >= 1 )
  {
    v10 = 0;
    left = a2->SourceRect.left;
    v12 = *((_BYTE *)this + 572) != 0 ? 360LL : 48LL;
    if ( *(_QWORD *)((char *)this + v12 + 48) != *(_QWORD *)&a2->SourceRect.left
      || *(_DWORD *)((char *)this + v12 + 56) != a2->SourceRect.right
      || *(_DWORD *)((char *)this + v12 + 60) != a2->SourceRect.bottom )
    {
      v10 = 1;
    }
    if ( *((_BYTE *)this + 568) )
    {
      if ( *(_DWORD *)((char *)this + v12 + 100) != a2->TargetRect.left
        || *(_DWORD *)((char *)this + v12 + 104) != a2->TargetRect.top
        || *(_DWORD *)((char *)this + v12 + 108) != a2->TargetRect.right
        || *(_DWORD *)((char *)this + v12 + 112) != a2->TargetRect.bottom
        || *(_DWORD *)((char *)this + v12 + 92) != a2->DestWidth )
      {
        goto LABEL_38;
      }
      v21 = *(_DWORD *)((char *)this + v12 + 96) == a2->DestHeight;
    }
    else
    {
      v13 = CCompositionBuffer::CalcTransformChange((char *)this + v12 + 68, a2->Transform);
      if ( v13 != 1 )
      {
        if ( *(_DWORD *)((char *)v6 + v12 + 64) != 1
          || v13 != 2
          || COERCE_INT((float)((float)(*(_DWORD *)((char *)v6 + v12 + 56) - v16) * *v15) + 0.5) != COERCE_INT((float)((float)(v5->SourceRect.right - left) * *v14) + 0.5)
          || COERCE_INT(
               (float)((float)(*(_DWORD *)((char *)v6 + v12 + 60) - *(_DWORD *)((char *)v6 + v12 + 52))
                     * *(float *)((char *)v6 + v12 + 80))
             + 0.5) != COERCE_INT((float)((float)(v5->SourceRect.bottom - v5->SourceRect.top) * v5->Transform[3]) + 0.5) )
        {
          goto LABEL_38;
        }
        goto LABEL_9;
      }
      if ( !v10 )
      {
LABEL_9:
        Value = (struct _D3DKMT_FLIPMODEL_PRESENTHISTORYTOKENFLAGS::$999A3466B180106FECC6453D6FF00F87::$CDA7573B07EF0A4513B0E43B6C419F7F)v5->Flags.Value;
        v18 = *(_DWORD *)((char *)v6 + v12 + 116);
        if ( (((unsigned __int8)v18 ^ (unsigned __int8)(*(unsigned int *)&Value >> 1)) & 1) == 0
          && *(_DWORD *)((char *)v6 + v12 + 64) == v5->Rotation
          && (((unsigned __int8)v18 ^ (unsigned __int8)(*(unsigned int *)&Value >> 1)) & 4) == 0
          && *(_DWORD *)((char *)v6 + v12 + 36) == v5->CustomDuration
          && *(_DWORD *)((char *)v6 + v12) == ((*(unsigned int *)&Value >> 7) & 3)
          && (((unsigned __int8)v18 ^ (unsigned __int8)(*(unsigned int *)&Value >> 1)) & 8) == 0 )
        {
          if ( v10
            || *(float *)((char *)v6 + v12 + 20) != v5->RevealColor[0]
            || *(float *)((char *)v6 + v12 + 24) != v5->RevealColor[1]
            || *(float *)((char *)v6 + v12 + 28) != v5->RevealColor[2]
            || *(float *)((char *)v6 + v12 + 32) != v5->RevealColor[3]
            || *(_DWORD *)((char *)v6 + v12 + 44) != v5->ColorSpace )
          {
            *a3 = 1;
          }
          goto LABEL_21;
        }
LABEL_38:
        *((_DWORD *)v6 + 88) = -1;
LABEL_21:
        CFlipExBuffer::SetPendingIndependentFlipAttributes(v6, v5);
        v20 = *(_DWORD *)(v19 + 352);
        v8 = __OFSUB__(v20, 1);
        v7 = v20 - 1 < 0;
        return v7 == v8;
      }
      if ( *(_DWORD *)((char *)v6 + v12 + 56) - v16 != v5->SourceRect.right - left )
        goto LABEL_38;
      v21 = *(_DWORD *)((char *)v6 + v12 + 60) - *(_DWORD *)((char *)v6 + v12 + 52) == v5->SourceRect.bottom
                                                                                     - v5->SourceRect.top;
    }
    if ( !v21 )
      goto LABEL_38;
    goto LABEL_9;
  }
  return v7 == v8;
}
