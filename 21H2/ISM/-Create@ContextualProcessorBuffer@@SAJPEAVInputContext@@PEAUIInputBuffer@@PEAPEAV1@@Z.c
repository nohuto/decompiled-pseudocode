/*
 * XREFs of ?Create@ContextualProcessorBuffer@@SAJPEAVInputContext@@PEAUIInputBuffer@@PEAPEAV1@@Z @ 0x180019834
 * Callers:
 *     ?OnFocusRequest@ContextualProcessorManager@@QEAAJPEAUDeviceInfo@@PEAVInputContext@@PEAUIInputBuffer@@PEAPEAUIInputTarget@@@Z @ 0x1800189A0 (-OnFocusRequest@ContextualProcessorManager@@QEAAJPEAUDeviceInfo@@PEAVInputContext@@PEAUIInputBuf.c)
 *     ?OnHitTest@ContextualProcessorManager@@QEAAJPEAUHitTestInfo@@PEAVInputContext@@PEAUIInputBuffer@@PEAPEAUIInputTarget@@PEAW4ContextualProcessorState@@@Z @ 0x180149834 (-OnHitTest@ContextualProcessorManager@@QEAAJPEAUHitTestInfo@@PEAVInputContext@@PEAUIInputBuffer@.c)
 * Callees:
 *     ??2RefCountedObject@@SAPEAX_K@Z @ 0x18002819C (--2RefCountedObject@@SAPEAX_K@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180035760 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??0ContextualProcessorBuffer@@IEAA@PEAVInputContext@@PEAUIInputBuffer@@@Z @ 0x180049B88 (--0ContextualProcessorBuffer@@IEAA@PEAVInputContext@@PEAUIInputBuffer@@@Z.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall ContextualProcessorBuffer::Create(
        struct InputContext *a1,
        struct IInputBuffer *a2,
        struct ContextualProcessorBuffer **a3)
{
  unsigned int v6; // ebx
  __int64 v7; // rdx
  ContextualProcessorBuffer *v9; // rax
  int v10; // [rsp+20h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  if ( !a3 )
  {
    v6 = -2147024809;
    v7 = 72LL;
LABEL_3:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v7,
      (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\contextualprocessors\\manager\\lib\\contextualprocessorbuffer.cpp",
      (const char *)v6,
      v10);
    return v6;
  }
  v9 = (ContextualProcessorBuffer *)RefCountedObject::operator new(0xB0uLL);
  if ( v9 )
    v9 = ContextualProcessorBuffer::ContextualProcessorBuffer(v9, a1, a2);
  if ( !v9 )
  {
    v6 = -2147024882;
    v7 = 79LL;
    goto LABEL_3;
  }
  *a3 = v9;
  return 0LL;
}
