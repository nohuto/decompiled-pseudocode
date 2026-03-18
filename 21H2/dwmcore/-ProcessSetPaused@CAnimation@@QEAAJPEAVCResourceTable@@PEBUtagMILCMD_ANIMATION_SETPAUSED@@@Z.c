/*
 * XREFs of ?ProcessSetPaused@CAnimation@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_ANIMATION_SETPAUSED@@@Z @ 0x1800EFB18
 * Callers:
 *     ?ProcessMessage@CComposition@@AEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z @ 0x1800C0A08 (-ProcessMessage@CComposition@@AEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CAnimation::ProcessSetPaused(
        CAnimation *this,
        struct CResourceTable *a2,
        const struct tagMILCMD_ANIMATION_SETPAUSED *a3)
{
  unsigned __int64 v4; // rcx
  __int64 result; // rax

  v4 = *(_QWORD *)(*((_QWORD *)this + 2) + 608LL);
  if ( v4 >= *((_QWORD *)this + 18) )
  {
    if ( (*((_BYTE *)this + 120) & 0x10) != 0 )
    {
      if ( !*((_BYTE *)a3 + 8) )
        *((_QWORD *)this + 27) = v4;
    }
    else if ( *((_BYTE *)a3 + 8) )
    {
      *((_QWORD *)this + 26) += v4 - *((_QWORD *)this + 27);
    }
  }
  result = 0LL;
  *((_BYTE *)this + 120) = *((_BYTE *)this + 120) & 0xEF | (*((_BYTE *)a3 + 8) != 0 ? 0x10 : 0);
  return result;
}
