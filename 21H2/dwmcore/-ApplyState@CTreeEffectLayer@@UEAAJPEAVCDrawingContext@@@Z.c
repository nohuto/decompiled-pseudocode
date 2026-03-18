/*
 * XREFs of ?ApplyState@CTreeEffectLayer@@UEAAJPEAVCDrawingContext@@@Z @ 0x1801D8DB0
 * Callers:
 *     <none>
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800734B4 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?ApplyState@CExternalLayer@@UEAAJPEAVCDrawingContext@@@Z @ 0x1801D8060 (-ApplyState@CExternalLayer@@UEAAJPEAVCDrawingContext@@@Z.c)
 */

__int64 __fastcall CTreeEffectLayer::ApplyState(CTreeEffectLayer *this, struct CDrawingContext *a2)
{
  int v2; // ebx
  int v4; // eax
  int v6; // r8d
  int v7; // eax
  __int64 v8; // rcx
  unsigned int v9; // esi

  v2 = 0;
  *((_BYTE *)this + 120) = *((_BYTE *)a2 + 8043);
  v4 = *((_DWORD *)a2 + 75);
  *((_BYTE *)a2 + 8043) = 0;
  v6 = 0;
  if ( v4 == 1 )
  {
    v6 = 1;
  }
  else
  {
    if ( v4 <= 1 )
      goto LABEL_11;
    if ( v4 <= 3 )
    {
      v6 = 2;
    }
    else
    {
      if ( v4 == 4 )
      {
LABEL_7:
        v6 = 3;
        goto LABEL_11;
      }
      if ( v4 != 5 )
      {
        if ( v4 != 6 )
          goto LABEL_11;
        goto LABEL_7;
      }
      v6 = 4;
    }
  }
LABEL_11:
  *((_DWORD *)this + 31) = v6;
  *((_DWORD *)a2 + 75) = 1;
  v7 = CExternalLayer::ApplyState(this, a2);
  v9 = v7;
  if ( v7 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v8, 0LL, 0LL, v7, 0x229u);
    *((_BYTE *)a2 + 8043) = *((_BYTE *)this + 120);
    switch ( *((_DWORD *)this + 31) )
    {
      case 1:
        v2 = 1;
        break;
      case 2:
        v2 = 2;
        break;
      case 3:
        v2 = 6;
        break;
      case 4:
        v2 = 5;
        break;
      case 5:
        v2 = 7;
        break;
    }
    *((_DWORD *)a2 + 75) = v2;
  }
  return v9;
}
