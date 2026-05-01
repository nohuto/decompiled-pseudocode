/*
 * XREFs of ?RuntimeClassInitialize@LegacyViewWrapper@@QEAAJIPEAUIUnknown@@PEBG1W4ViewLifetimePolicy@1@PEAVViewEventDispatcher@@@Z @ 0x1802A80F0
 * Callers:
 *     ??$MakeAndInitialize@VLegacyViewWrapper@@UIViewWrapperInternal@@IPEAUIUnknown@@PEBGPEBGW4ViewLifetimePolicy@1@PEAVViewEventDispatcher@@@Details@WRL@Microsoft@@YAJPEAPEAUIViewWrapperInternal@@$$QEAI$$QEAPEAUIUnknown@@$$QEAPEBG3$$QEAW4ViewLifetimePolicy@LegacyViewWrapper@@$$QEAPEAVViewEventDispatcher@@@Z @ 0x18027C528 (--$MakeAndInitialize@VLegacyViewWrapper@@UIViewWrapperInternal@@IPEAUIUnknown@@PEBGPEBGW4ViewLif.c)
 *     ??$MakeAndInitialize@VLegacyViewWrapper@@UIViewWrapperInternal@@I$$TPEBGAEAY0DF@$$CBGW4ViewLifetimePolicy@1@PEAVViewEventDispatcher@@@Details@WRL@Microsoft@@YAJPEAPEAUIViewWrapperInternal@@$$QEAI$$QEA$$T$$QEAPEBGAEAY0DF@$$CBG$$QEAW4ViewLifetimePolicy@LegacyViewWrapper@@$$QEAPEAVViewEventDispatcher@@@Z @ 0x18027C688 (--$MakeAndInitialize@VLegacyViewWrapper@@UIViewWrapperInternal@@I$$TPEBGAEAY0DF@$$CBGW4ViewLifet.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180068524 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?LoadQuirksForApp@LegacyViewWrapper@@AEAAJXZ @ 0x1802A7F74 (-LoadQuirksForApp@LegacyViewWrapper@@AEAAJXZ.c)
 *     ?RuntimeClassInitialize@ViewWrapperBase@@QEAAJIPEAUIUnknown@@PEBG1PEAVViewEventDispatcher@@@Z @ 0x1802AF240 (-RuntimeClassInitialize@ViewWrapperBase@@QEAAJIPEAUIUnknown@@PEBG1PEAVViewEventDispatcher@@@Z.c)
 */

__int64 __fastcall LegacyViewWrapper::RuntimeClassInitialize(
        _DWORD *a1,
        unsigned int a2,
        struct IUnknown *a3,
        const unsigned __int16 *a4,
        unsigned __int16 *a5,
        int a6,
        struct ViewEventDispatcher *a7)
{
  int v8; // eax
  unsigned int v9; // ebx
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]

  a1[144] = a6;
  v8 = ViewWrapperBase::RuntimeClassInitialize((ViewWrapperBase *)(a1 + 2), a2, a3, a4, a5, a7);
  v9 = v8;
  if ( v8 >= 0 )
  {
    LegacyViewWrapper::LoadQuirksForApp((LegacyViewWrapper *)a1);
    return 0LL;
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x1C,
      (__int64)"pcshell\\twinui\\viewmanagerinterop\\lib\\ntuserviewwrapper.cpp",
      (const char *)(unsigned int)v8);
    return v9;
  }
}
