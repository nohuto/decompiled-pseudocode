/*
 * XREFs of ?SetParent@CTopLevelWindow3D@@UEAAJPEAVCVisual@@@Z @ 0x18003B7A0
 * Callers:
 *     <none>
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800039DC (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?StopAnimation@CTopLevelWindow3D@@QEAAJXZ @ 0x18001A8C0 (-StopAnimation@CTopLevelWindow3D@@QEAAJXZ.c)
 *     ?SetParent@CVisual@@UEAAJPEAV1@@Z @ 0x18003B800 (-SetParent@CVisual@@UEAAJPEAV1@@Z.c)
 */

__int64 __fastcall CTopLevelWindow3D::SetParent(CTopLevelWindow3D *this, struct CVisual *a2)
{
  int v4; // eax
  unsigned int v5; // ebx
  int v7; // eax

  v4 = CVisual::SetParent(this, a2);
  v5 = v4;
  if ( v4 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v4, 0x585u);
  }
  else if ( !a2 )
  {
    v7 = CTopLevelWindow3D::StopAnimation((unsigned __int64)this);
    v5 = v7;
    if ( v7 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v7, 0x58Au);
  }
  return v5;
}
