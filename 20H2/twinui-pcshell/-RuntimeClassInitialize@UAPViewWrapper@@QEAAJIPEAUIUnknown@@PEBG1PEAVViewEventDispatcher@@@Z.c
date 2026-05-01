/*
 * XREFs of ?RuntimeClassInitialize@UAPViewWrapper@@QEAAJIPEAUIUnknown@@PEBG1PEAVViewEventDispatcher@@@Z @ 0x1802CA110
 * Callers:
 *     ??$MakeAndInitialize@VUAPViewWrapper@@UIViewWrapperInternal@@AEAIPEAUIUnknown@@PEBGAEAY0DF@$$CBGPEAVViewEventDispatcher@@@Details@WRL@Microsoft@@YAJPEAPEAUIViewWrapperInternal@@AEAI$$QEAPEAUIUnknown@@$$QEAPEBGAEAY0DF@$$CBG$$QEAPEAVViewEventDispatcher@@@Z @ 0x18029DB84 (--$MakeAndInitialize@VUAPViewWrapper@@UIViewWrapperInternal@@AEAIPEAUIUnknown@@PEBGAEAY0DF@$$CBG.c)
 *     ??$MakeAndInitialize@VUAPViewWrapper@@UIViewWrapperInternal@@AEAIPEAUIUnknown@@PEBGPEBGAEAPEAVViewEventDispatcher@@@Details@WRL@Microsoft@@YAJPEAPEAUIViewWrapperInternal@@AEAI$$QEAPEAUIUnknown@@$$QEAPEBG3AEAPEAVViewEventDispatcher@@@Z @ 0x18029DCCC (--$MakeAndInitialize@VUAPViewWrapper@@UIViewWrapperInternal@@AEAIPEAUIUnknown@@PEBGPEBGAEAPEAVVi.c)
 * Callees:
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180062CC4 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180062D64 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800F0410 (_guard_dispatch_icall_nop.c)
 *     ?RuntimeClassInitialize@ViewWrapperBase@@QEAAJIPEAUIUnknown@@PEBG1PEAVViewEventDispatcher@@@Z @ 0x1802D04F0 (-RuntimeClassInitialize@ViewWrapperBase@@QEAAJIPEAUIUnknown@@PEBG1PEAVViewEventDispatcher@@@Z.c)
 */

__int64 __fastcall UAPViewWrapper::RuntimeClassInitialize(
        UAPViewWrapper *this,
        unsigned int a2,
        struct IUnknown *a3,
        const unsigned __int16 *a4,
        const unsigned __int16 *a5,
        struct ViewEventDispatcher *a6)
{
  struct ViewEventDispatcher *v6; // rsi
  int v11; // eax
  int v12; // eax
  unsigned int v13; // ebx
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]

  v6 = a6;
  v11 = (*(__int64 (__fastcall **)(_QWORD, struct IUnknown *, struct ViewEventDispatcher **))(**((_QWORD **)a6 + 63)
                                                                                            + 272LL))(
          *((_QWORD *)a6 + 63),
          a3,
          &a6);
  if ( v11 >= 0 )
    *((_BYTE *)this + 572) = (_BYTE)a6 != 0;
  else
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      (void *)0x21,
      (__int64)"pcshell\\twinui\\viewmanagerinterop\\lib\\uapviewwrapper.cpp",
      (const char *)(unsigned int)v11);
  v12 = ViewWrapperBase::RuntimeClassInitialize((UAPViewWrapper *)((char *)this + 8), a2, a3, a4, a5, v6);
  v13 = v12;
  if ( v12 < 0 )
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x26,
      (__int64)"pcshell\\twinui\\viewmanagerinterop\\lib\\uapviewwrapper.cpp",
      (const char *)(unsigned int)v12);
  return v13;
}
