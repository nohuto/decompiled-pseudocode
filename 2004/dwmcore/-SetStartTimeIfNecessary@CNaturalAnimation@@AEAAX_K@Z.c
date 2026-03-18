/*
 * XREFs of ?SetStartTimeIfNecessary@CNaturalAnimation@@AEAAX_K@Z @ 0x1801DA528
 * Callers:
 *     ?ProcessSetCommonParameters@CNaturalAnimation@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_NATURALANIMATION_SETCOMMONPARAMETERS@@@Z @ 0x1801D9E30 (-ProcessSetCommonParameters@CNaturalAnimation@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_NATURALANI.c)
 *     ?SetupAnimationIfNecessary@CNaturalAnimation@@AEAAJXZ @ 0x1801DA7B0 (-SetupAnimationIfNecessary@CNaturalAnimation@@AEAAJXZ.c)
 * Callees:
 *     <none>
 */

void __fastcall CNaturalAnimation::SetStartTimeIfNecessary(CNaturalAnimation *this, __int64 a2)
{
  char v2; // al

  v2 = *((_BYTE *)this + 564);
  if ( (v2 & 2) == 0 )
  {
    *((_QWORD *)this + 47) = a2 - Time::s_luBegin.QuadPart;
    *((_BYTE *)this + 564) = v2 | 2;
  }
}
