/*
 * XREFs of ?ProcessLegacyTranslateTransformUpdateCommand@@YAJPEAVCTranslateTransform@@PEAVCChannelContext@@PEBUtagMILCMD_TRANSLATETRANSFORM@@@Z @ 0x180206104
 * Callers:
 *     ?ProcessMessage@CComposition@@AEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z @ 0x1800C0A08 (-ProcessMessage@CComposition@@AEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x1801051D0 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall ProcessLegacyTranslateTransformUpdateCommand(
        struct CTranslateTransform *a1,
        struct CChannelContext *a2,
        const struct tagMILCMD_TRANSLATETRANSFORM *a3)
{
  float v3; // xmm0_4
  __int64 v6; // rax
  float v7; // xmm0_4
  __int64 v8; // rax

  v3 = *((float *)a3 + 2);
  if ( v3 != *((float *)a1 + 40) )
  {
    v6 = *(_QWORD *)a1;
    *((float *)a1 + 40) = v3;
    (*(void (__fastcall **)(struct CTranslateTransform *, _QWORD, _QWORD))(v6 + 72))(a1, 0LL, 0LL);
  }
  v7 = *((float *)a3 + 3);
  if ( v7 != *((float *)a1 + 41) )
  {
    v8 = *(_QWORD *)a1;
    *((float *)a1 + 41) = v7;
    (*(void (__fastcall **)(struct CTranslateTransform *, _QWORD, _QWORD))(v8 + 72))(a1, 0LL, 0LL);
  }
  return 0LL;
}
