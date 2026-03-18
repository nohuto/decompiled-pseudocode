/*
 * XREFs of ?ProcessLegacyTranslateTransformUpdateCommand@@YAJPEAVCTranslateTransform@@PEAVCChannelContext@@PEBUtagMILCMD_TRANSLATETRANSFORM@@@Z @ 0x180020D4C
 * Callers:
 *     ?ProcessMessage@CComposition@@AEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z @ 0x1800A643C (-ProcessMessage@CComposition@@AEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800EED40 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall ProcessLegacyTranslateTransformUpdateCommand(
        struct CTranslateTransform *a1,
        struct CChannelContext *a2,
        const struct tagMILCMD_TRANSLATETRANSFORM *a3)
{
  float v3; // xmm0_4
  float v6; // xmm0_4
  __int64 v8; // rax
  __int64 v9; // rax

  v3 = *((float *)a3 + 2);
  if ( v3 != *((float *)a1 + 38) )
  {
    v8 = *(_QWORD *)a1;
    *((float *)a1 + 38) = v3;
    (*(void (__fastcall **)(struct CTranslateTransform *, _QWORD, _QWORD))(v8 + 72))(a1, 0LL, 0LL);
  }
  v6 = *((float *)a3 + 3);
  if ( v6 != *((float *)a1 + 39) )
  {
    v9 = *(_QWORD *)a1;
    *((float *)a1 + 39) = v6;
    (*(void (__fastcall **)(struct CTranslateTransform *, _QWORD, _QWORD))(v9 + 72))(a1, 0LL, 0LL);
  }
  return 0LL;
}
