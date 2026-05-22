/*
 * XREFs of ?CancelManualDrag@DragNDropProcessor@@AEAAXKPEAVDragAreaClientProxy@@@Z @ 0x1800F88FC
 * Callers:
 *     ?StartManualDrag@DragNDropProcessor@@QEAAXKPEAVBamoDragAreaClientProxy@@@Z @ 0x1800FB488 (-StartManualDrag@DragNDropProcessor@@QEAAXKPEAVBamoDragAreaClientProxy@@@Z.c)
 * Callees:
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18003E44C (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18004A6B0 (_guard_dispatch_icall_nop.c)
 *     ?ManualDragCancelled@DragNDrop@InputETW@@SAXKPEAUtagPOINT@@00_KW4VirtualKeyModifiers@System@Windows@@@Z @ 0x1800F9D8C (-ManualDragCancelled@DragNDrop@InputETW@@SAXKPEAUtagPOINT@@00_KW4VirtualKeyModifiers@System@Wind.c)
 */

void __fastcall DragNDropProcessor::CancelManualDrag(
        DragNDropProcessor *this,
        unsigned int a2,
        struct DragAreaClientProxy *a3)
{
  int v5; // eax
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  __int64 v7; // [rsp+40h] [rbp+8h] BYREF

  v7 = 0LL;
  InputETW::DragNDrop::ManualDragCancelled(a2, &v7, &v7, &v7);
  *((_BYTE *)a3 + 72) = 0;
  v5 = (*(__int64 (__fastcall **)(char *, _QWORD))(*((_QWORD *)a3 + 1) + 24LL))((char *)a3 + 8, a2);
  if ( v5 < 0 )
  {
    wil::details::in1diag3::FailFast_Hr(
      retaddr,
      32LL,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\contextualprocessors\\processors\\dragndrop\\system\\lib\\draga"
               "reaclientproxy.cpp",
      (const char *)(unsigned int)v5);
    __debugbreak();
  }
}
