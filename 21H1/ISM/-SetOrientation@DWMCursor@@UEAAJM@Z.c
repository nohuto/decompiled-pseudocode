/*
 * XREFs of ?SetOrientation@DWMCursor@@UEAAJM@Z @ 0x18019D1A0
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180035710 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?FeedOrientationAnimationData@DWMCursor@@AEAAJXZ @ 0x18019CE34 (-FeedOrientationAnimationData@DWMCursor@@AEAAJXZ.c)
 */

__int64 __fastcall DWMCursor::SetOrientation(DWMCursor *this, float a2)
{
  int v2; // eax
  unsigned int v3; // ebx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  if ( a2 == *((float *)this + 23) )
    return 0LL;
  *((float *)this + 23) = a2;
  v2 = DWMCursor::FeedOrientationAnimationData(this);
  v3 = v2;
  if ( v2 >= 0 )
    return 0LL;
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x176,
    (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\systeminputrouters\\dwm\\components\\cursor\\lib\\dwmcursor.cpp",
    (const char *)(unsigned int)v2);
  return v3;
}
