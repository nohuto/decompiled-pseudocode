/*
 * XREFs of ?SetOpacity@CMultitaskingViewElementBase@@UEAAJNW4DCompThumbnailAnimation@@PEAUIUIAnimationStoryboardEventHandler2@@@Z @ 0x1803A3980
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180062D64 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800F0410 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CMultitaskingViewElementBase::SetOpacity(__int64 a1)
{
  __int64 v1; // rcx
  unsigned int v2; // ebx
  __int64 v3; // rdx
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]

  v1 = *(_QWORD *)(a1 + 88);
  if ( !v1 )
  {
    v2 = -2147023728;
    v3 = 862LL;
LABEL_5:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v3,
      (__int64)"pcshell\\twinui\\multitaskingview\\lib\\baseelement.cpp",
      (const char *)v2);
    return v2;
  }
  v2 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v1 + 32LL))(v1);
  if ( (v2 & 0x80000000) != 0 )
  {
    v3 = 863LL;
    goto LABEL_5;
  }
  return v2;
}
