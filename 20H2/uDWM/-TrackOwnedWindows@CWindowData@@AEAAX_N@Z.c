/*
 * XREFs of ?TrackOwnedWindows@CWindowData@@AEAAX_N@Z @ 0x180028A68
 * Callers:
 *     ?AddSecondaryWindowRepresentation@CWindowData@@AEAAJPEAVCSecondaryWindowRepresentation@@W4WindowRepresentationType@@_N@Z @ 0x180012E90 (-AddSecondaryWindowRepresentation@CWindowData@@AEAAJPEAVCSecondaryWindowRepresentation@@W4Window.c)
 *     ?RemoveSecondaryWindowRepresentation@CWindowData@@AEAAXPEAVCSecondaryWindowRepresentation@@W4WindowRepresentationType@@_N@Z @ 0x1800271E4 (-RemoveSecondaryWindowRepresentation@CWindowData@@AEAAXPEAVCSecondaryWindowRepresentation@@W4Win.c)
 * Callees:
 *     ?CheckOwnedWindowEligibilityForOwner@CWindowData@@QEAAXXZ @ 0x180028AD4 (-CheckOwnedWindowEligibilityForOwner@CWindowData@@QEAAXXZ.c)
 */

void __fastcall CWindowData::TrackOwnedWindows(CWindowData *this, char a2)
{
  char v3; // cl
  __int64 v4; // r9
  __int64 v5; // rdx

  v3 = *((_BYTE *)this + 610);
  if ( a2 != (v3 & 1) )
  {
    v4 = 0LL;
    *((_BYTE *)this + 610) = a2 | v3 & 0xFE;
    if ( a2 )
    {
      CWindowData::CheckOwnedWindowEligibilityForOwner(this);
    }
    else if ( *((_DWORD *)this + 142) )
    {
      do
      {
        v5 = *(_QWORD *)(*((_QWORD *)this + 68) + 8 * v4);
        v4 = (unsigned int)(v4 + 1);
        *(_BYTE *)(v5 + 610) &= ~2u;
      }
      while ( (unsigned int)v4 < *((_DWORD *)this + 142) );
    }
  }
}
