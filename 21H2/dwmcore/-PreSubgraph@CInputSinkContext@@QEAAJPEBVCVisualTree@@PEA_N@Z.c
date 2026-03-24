/*
 * XREFs of ?PreSubgraph@CInputSinkContext@@QEAAJPEBVCVisualTree@@PEA_N@Z @ 0x180058B28
 * Callers:
 *     ??$WalkSubtree@VCInputSinkContext@@@CVisualTreeIterator@@QEAAJPEBVCVisual@@PEAVCInputSinkContext@@W4WalkReason@@@Z @ 0x18005893C (--$WalkSubtree@VCInputSinkContext@@@CVisualTreeIterator@@QEAAJPEBVCVisual@@PEAVCInputSinkContext.c)
 * Callees:
 *     ?GetInputHandle@CVisual@@QEBAPEAXXZ @ 0x18009EE18 (-GetInputHandle@CVisual@@QEBAPEAXXZ.c)
 *     IsNotifyInputSinkParentedPresent @ 0x1800E8588 (IsNotifyInputSinkParentedPresent.c)
 */

__int64 __fastcall CInputSinkContext::PreSubgraph(CInputSinkContext *this, const struct CVisualTree *a2, bool *a3)
{
  CVisual *v4; // rsi
  CVisual *v6; // r11
  bool v7; // al
  void *InputHandle; // rax
  CVisual *v10; // r11

  v4 = (CVisual *)*((_QWORD *)this + 4);
  if ( CVisual::GetInputHandle(v4) )
  {
    if ( !*((_BYTE *)this + 8) )
    {
      while ( v6 )
      {
        if ( CVisual::GetInputHandle(v6) )
        {
          *(_QWORD *)this = CVisual::GetInputHandle(v10);
          break;
        }
        v6 = (CVisual *)*((_QWORD *)v10 + 10);
      }
      *((_BYTE *)this + 8) = 1;
    }
    if ( (unsigned __int8)IsNotifyInputSinkParentedPresent() )
    {
      InputHandle = CVisual::GetInputHandle(v4);
      NotifyInputSinkParented(InputHandle, *(_QWORD *)this);
    }
  }
  else if ( (*((_DWORD *)v4 + 22) & 0x2000) != 0 )
  {
    v7 = 1;
    goto LABEL_4;
  }
  v7 = 0;
LABEL_4:
  *a3 = v7;
  return 0LL;
}
