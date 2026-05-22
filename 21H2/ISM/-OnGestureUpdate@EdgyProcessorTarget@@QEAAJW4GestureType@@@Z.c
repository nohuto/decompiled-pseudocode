/*
 * XREFs of ?OnGestureUpdate@EdgyProcessorTarget@@QEAAJW4GestureType@@@Z @ 0x18017B07C
 * Callers:
 *     ?OnTouchInfo@EdgyProcessorTarget@@UEAAJPEAUTouchInfo@@@Z @ 0x18017B2D0 (-OnTouchInfo@EdgyProcessorTarget@@UEAAJPEAUTouchInfo@@@Z.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180035760 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?OnEdgeGestureDetected@EdgyProcessorTarget@@AEAAJXZ @ 0x18017AE5C (-OnEdgeGestureDetected@EdgyProcessorTarget@@AEAAJXZ.c)
 *     ?OnFlick@EdgyProcessorTarget@@AEAAJXZ @ 0x18017AF8C (-OnFlick@EdgyProcessorTarget@@AEAAJXZ.c)
 *     ?OnHorizontalDrag@EdgyProcessorTarget@@AEAAJXZ @ 0x18017B134 (-OnHorizontalDrag@EdgyProcessorTarget@@AEAAJXZ.c)
 *     ?OnVerticalDrag@EdgyProcessorTarget@@AEAAJXZ @ 0x18017B4E8 (-OnVerticalDrag@EdgyProcessorTarget@@AEAAJXZ.c)
 */

__int64 __fastcall EdgyProcessorTarget::OnGestureUpdate(
        EdgyProcessorTarget *a1,
        __int64 a2,
        __int64 a3,
        const char *a4)
{
  int v5; // edi
  __int64 v6; // rdx
  int v8; // eax
  unsigned int v9; // ebx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  if ( *((_DWORD *)a1 + 8) )
    return 0LL;
  if ( (a2 & 0x10) != 0 )
  {
    v5 = EdgyProcessorTarget::OnHorizontalDrag(a1);
    if ( v5 < 0 )
    {
      v6 = 639LL;
LABEL_5:
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v6,
        (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\contextualprocessors\\processors\\edgy\\processor\\edgytarget.cpp",
        (const char *)(unsigned int)v5);
      return (unsigned int)v5;
    }
  }
  else if ( (a2 & 0x20) != 0 )
  {
    v5 = EdgyProcessorTarget::OnVerticalDrag(a1);
    if ( v5 < 0 )
    {
      v6 = 643LL;
      goto LABEL_5;
    }
  }
  else if ( (a2 & 0x100) != 0 )
  {
    v5 = EdgyProcessorTarget::OnFlick(a1);
    if ( v5 < 0 )
    {
      v6 = 647LL;
      goto LABEL_5;
    }
  }
  if ( *((_DWORD *)a1 + 8) != 2 )
    return 0LL;
  v8 = EdgyProcessorTarget::OnEdgeGestureDetected(a1, a2, a3, a4);
  v9 = v8;
  if ( v8 >= 0 )
    return 0LL;
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x290,
    (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\contextualprocessors\\processors\\edgy\\processor\\edgytarget.cpp",
    (const char *)(unsigned int)v8);
  return v9;
}
