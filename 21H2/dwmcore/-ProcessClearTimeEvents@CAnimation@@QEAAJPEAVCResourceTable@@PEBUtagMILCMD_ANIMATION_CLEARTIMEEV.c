/*
 * XREFs of ?ProcessClearTimeEvents@CAnimation@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_ANIMATION_CLEARTIMEEVENTS@@@Z @ 0x1802097A8
 * Callers:
 *     ?ProcessMessage@CComposition@@AEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z @ 0x1800C0A08 (-ProcessMessage@CComposition@@AEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z.c)
 * Callees:
 *     ?ShrinkToSize@?$DynArrayImpl@$0A@@@IEAAXI@Z @ 0x1800D0F68 (-ShrinkToSize@-$DynArrayImpl@$0A@@@IEAAXI@Z.c)
 */

__int64 __fastcall CAnimation::ProcessClearTimeEvents(
        CAnimation *this,
        struct CResourceTable *a2,
        const struct tagMILCMD_ANIMATION_CLEARTIMEEVENTS *a3)
{
  char *v4; // rcx

  v4 = (char *)this + 160;
  *((_DWORD *)v4 + 6) = 0;
  DynArrayImpl<0>::ShrinkToSize((__int64)v4, 0x10u);
  *((_DWORD *)this + 48) = 0;
  return 0LL;
}
