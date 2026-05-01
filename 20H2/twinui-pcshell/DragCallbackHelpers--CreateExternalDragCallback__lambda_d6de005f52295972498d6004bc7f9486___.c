/*
 * XREFs of DragCallbackHelpers::CreateExternalDragCallback__lambda_d6de005f52295972498d6004bc7f9486___ @ 0x1803BC7D0
 * Callers:
 *     ?StartExternalDrag@ElementDragData@@AEAAJXZ @ 0x1803BE478 (-StartExternalDrag@ElementDragData@@AEAAJXZ.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180062D64 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x18008CE34 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800F0410 (_guard_dispatch_icall_nop.c)
 *     DragCallbackHelpers::ExternalDragCallback__lambda_d6de005f52295972498d6004bc7f9486___::ExternalDragCallback__lambda_d6de005f52295972498d6004bc7f9486___ @ 0x1803BCD78 (DragCallbackHelpers--ExternalDragCallback__lambda_d6de005f52295972498d6004bc7f9486___--ExternalD.c)
 */

__int64 __fastcall DragCallbackHelpers::CreateExternalDragCallback__lambda_d6de005f52295972498d6004bc7f9486___(
        __int64 a1,
        _QWORD *a2,
        __int64 a3)
{
  void *v6; // rax
  __int64 (__fastcall ***v7)(_QWORD, GUID *, _QWORD *); // rax
  __int64 (__fastcall ***v8)(_QWORD, GUID *, _QWORD *); // rdi
  int v9; // eax
  unsigned int v10; // ebx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  *a2 = 0LL;
  v6 = operator new(0x28uLL, (const struct std::nothrow_t *)&std::nothrow);
  if ( v6
    && (v7 = (__int64 (__fastcall ***)(_QWORD, GUID *, _QWORD *))DragCallbackHelpers::ExternalDragCallback__lambda_d6de005f52295972498d6004bc7f9486___::ExternalDragCallback__lambda_d6de005f52295972498d6004bc7f9486___(
                                                                   v6,
                                                                   a1,
                                                                   a3),
        (v8 = v7) != 0LL) )
  {
    v9 = (**v7)(v7, &GUID_8253a5da_57e3_4257_bbe4_a0d563ae8ff1, a2);
    v10 = v9;
    if ( v9 < 0 )
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x43,
        (__int64)"pcshell\\twinui\\multitaskingview\\lib\\DragCallback.h",
        (const char *)(unsigned int)v9);
    ((void (__fastcall *)(__int64 (__fastcall ***)(_QWORD, GUID *, _QWORD *)))(*v8)[2])(v8);
  }
  else
  {
    v10 = -2147024882;
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x42,
      (__int64)"pcshell\\twinui\\multitaskingview\\lib\\DragCallback.h",
      (const char *)0x8007000ELL);
  }
  return v10;
}
