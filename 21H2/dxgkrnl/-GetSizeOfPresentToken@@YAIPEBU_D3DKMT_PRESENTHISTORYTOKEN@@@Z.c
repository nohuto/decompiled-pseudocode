/*
 * XREFs of ?GetSizeOfPresentToken@@YAIPEBU_D3DKMT_PRESENTHISTORYTOKEN@@@Z @ 0x1C027FE14
 * Callers:
 *     ?SubmitPresentHistoryTokenFromVm@DXGADAPTER@@QEAAJIU_VIDSCH_SUBMIT_FLAGS@@PEAVDXGPRESENTHISTORYTOKENQUEUE@@PEAU_D3DKMT_PRESENTHISTORYTOKEN@@2PEAVCRefCountedBuffer@@II3K@Z @ 0x1C023ACE8 (-SubmitPresentHistoryTokenFromVm@DXGADAPTER@@QEAAJIU_VIDSCH_SUBMIT_FLAGS@@PEAVDXGPRESENTHISTORYT.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall GetSizeOfPresentToken(const struct _D3DKMT_PRESENTHISTORYTOKEN *a1)
{
  __int64 v1; // rax
  int v2; // eax
  D3DDDI_VIDEO_PRESENT_SOURCE_ID VidPnSourceId; // eax
  __int64 v4; // rax
  UINT NumRects; // eax
  D3DDDI_FLIPINTERVAL_TYPE FlipInterval; // eax

  if ( a1->Model == D3DKMT_PM_REDIRECTED_GDI )
  {
    FlipInterval = a1->Token.Flip.FlipInterval;
    if ( (unsigned int)FlipInterval > 0x10 )
    {
      v4 = WdLogNewEntry5_WdAssertion(a1, (unsigned int)(a1->Model - 1));
      *(_QWORD *)(v4 + 24) = 53LL;
      goto LABEL_20;
    }
    v2 = 16 * FlipInterval + 67;
  }
  else if ( a1->Model == D3DKMT_PM_REDIRECTED_FLIP )
  {
    NumRects = a1->Token.Flip.DirtyRegions.NumRects;
    if ( NumRects > 0x10 )
    {
      v4 = WdLogNewEntry5_WdAssertion(a1, (unsigned int)(a1->Model - 2));
      *(_QWORD *)(v4 + 24) = 63LL;
      goto LABEL_20;
    }
    v2 = 16 * NumRects + 831;
  }
  else
  {
    if ( a1->Model != D3DKMT_PM_REDIRECTED_BLT )
    {
      if ( a1->Model == D3DKMT_PM_REDIRECTED_VISTABLT
        || a1->Model == D3DKMT_PM_SCREENCAPTUREFENCE
        || a1->Model == D3DKMT_PM_REDIRECTED_COMPOSITION
        || a1->Model == D3DKMT_PM_SURFACECOMPLETE )
      {
        v2 = 31;
      }
      else if ( a1->Model == D3DKMT_PM_FLIPMANAGER )
      {
        v2 = 47;
      }
      else
      {
        v1 = WdLogNewEntry5_WdAssertion(a1, (unsigned int)(a1->Model - 8));
        *(_QWORD *)(v1 + 24) = 96LL;
        WdLogEvent5_WdAssertion(v1);
        v2 = 7;
      }
      return v2 & 0xFFFFFFF8;
    }
    VidPnSourceId = a1->Token.Flip.VidPnSourceId;
    if ( VidPnSourceId > 0x10 )
    {
      v4 = WdLogNewEntry5_WdAssertion(a1, (unsigned int)(a1->Model - 3));
      *(_QWORD *)(v4 + 24) = 73LL;
LABEL_20:
      WdLogEvent5_WdAssertion(v4);
      return 0LL;
    }
    v2 = 16 * VidPnSourceId + 51;
  }
  return v2 & 0xFFFFFFF8;
}
