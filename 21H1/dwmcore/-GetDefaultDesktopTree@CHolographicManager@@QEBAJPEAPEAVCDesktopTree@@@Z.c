/*
 * XREFs of ?GetDefaultDesktopTree@CHolographicManager@@QEBAJPEAPEAVCDesktopTree@@@Z @ 0x1802546E4
 * Callers:
 *     ?GetDesktopTree@CHolographicInteropTarget@@UEBAJPEAPEAVCDesktopTree@@@Z @ 0x180258890 (-GetDesktopTree@CHolographicInteropTarget@@UEBAJPEAPEAVCDesktopTree@@@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18002E8BC (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?InternalAddRef@CMILCOMBase@@QEAAKXZ @ 0x1800B5D50 (-InternalAddRef@CMILCOMBase@@QEAAKXZ.c)
 */

__int64 __fastcall CHolographicManager::GetDefaultDesktopTree(RTL_SRWLOCK *this, struct CDesktopTree **a2)
{
  unsigned int v4; // edi
  __int64 v5; // rcx
  _QWORD *Ptr; // rax
  struct CDesktopTree *v7; // rcx

  v4 = 0;
  AcquireSRWLockShared(this + 13);
  Ptr = this[19].Ptr;
  if ( this[18].Ptr == Ptr || (v5 = *(Ptr - 1)) == 0 )
  {
    *a2 = 0LL;
    v4 = -2147023728;
    MilInstrumentationCheckHR_MaybeFailFast(v5, 0LL, 0, -2147023728, 0x2BEu, 0LL);
  }
  else
  {
    v7 = *(struct CDesktopTree **)(v5 + 88);
    if ( v7 )
    {
      *a2 = v7;
      CMILCOMBase::InternalAddRef(v7);
    }
    else
    {
      *a2 = 0LL;
      v4 = -2003292412;
      MilInstrumentationCheckHR_MaybeFailFast(0LL, 0LL, 0, -2003292412, 0x2B8u, 0LL);
    }
  }
  ReleaseSRWLockShared(this + 13);
  return v4;
}
