/*
 * XREFs of ?SetStartTimeIfNecessary@CNaturalAnimation@@AEAAX_K@Z @ 0x180227AD0
 * Callers:
 *     ?ProcessSetCommonParameters@CNaturalAnimation@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_NATURALANIMATION_SETCOMMONPARAMETERS@@@Z @ 0x1802272E8 (-ProcessSetCommonParameters@CNaturalAnimation@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_NATURALANI.c)
 *     ?SetupAnimationIfNecessary@CNaturalAnimation@@AEAAJXZ @ 0x180227D6C (-SetupAnimationIfNecessary@CNaturalAnimation@@AEAAJXZ.c)
 * Callees:
 *     <none>
 */

void __fastcall CNaturalAnimation::SetStartTimeIfNecessary(CNaturalAnimation *this, __int64 a2)
{
  char v2; // al

  v2 = *((_BYTE *)this + 588);
  if ( (v2 & 2) == 0 )
  {
    *((_QWORD *)this + 50) = a2 - Time::s_luBegin.QuadPart;
    *((_BYTE *)this + 588) = v2 | 2;
  }
}
