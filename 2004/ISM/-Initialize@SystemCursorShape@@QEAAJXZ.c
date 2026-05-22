/*
 * XREFs of ?Initialize@SystemCursorShape@@QEAAJXZ @ 0x18013FCB4
 * Callers:
 *     _lambda_ba6101031141f0d6e8e74a4c358feff2_::operator() @ 0x18013E42C (_lambda_ba6101031141f0d6e8e74a4c358feff2_--operator().c)
 *     _lambda_e899d24a1372ab43d53191ccbd314951_::operator() @ 0x18013E5C8 (_lambda_e899d24a1372ab43d53191ccbd314951_--operator().c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180035770 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?FeedAnimationData@SystemCursorShape@@AEAAJXZ @ 0x18013F954 (-FeedAnimationData@SystemCursorShape@@AEAAJXZ.c)
 */

__int64 __fastcall SystemCursorShape::Initialize(SystemCursorShape *this)
{
  int v1; // eax
  unsigned int v2; // ebx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  v1 = SystemCursorShape::FeedAnimationData(this);
  v2 = v1;
  if ( v1 >= 0 )
    return 0LL;
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x246,
    (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\systeminputrouters\\dwm\\components\\cursor\\service\\lib\\system"
             "cursorservice.cpp",
    (const char *)(unsigned int)v1);
  return v2;
}
