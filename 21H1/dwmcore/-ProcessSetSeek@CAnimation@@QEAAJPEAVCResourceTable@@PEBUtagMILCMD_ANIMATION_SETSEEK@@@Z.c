/*
 * XREFs of ?ProcessSetSeek@CAnimation@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_ANIMATION_SETSEEK@@@Z @ 0x1800CD14C
 * Callers:
 *     ?ProcessMessage@CComposition@@AEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z @ 0x180080BFC (-ProcessMessage@CComposition@@AEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CAnimation::ProcessSetSeek(
        CAnimation *this,
        struct CResourceTable *a2,
        const struct tagMILCMD_ANIMATION_SETSEEK *a3)
{
  unsigned __int64 v3; // rdx
  __int64 v4; // rax

  v3 = *(_QWORD *)(*((_QWORD *)this + 2) + 456LL);
  v4 = *((_QWORD *)a3 + 2);
  if ( v4 )
  {
    *((_QWORD *)this + 26) = v4;
  }
  else if ( v3 >= *((_QWORD *)this + 17) )
  {
    *((_QWORD *)this + 26) = v3;
  }
  *((_QWORD *)this + 25) = *((_QWORD *)a3 + 1);
  return 0LL;
}
