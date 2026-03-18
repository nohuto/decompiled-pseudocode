/*
 * XREFs of ?ReleaseCompositorComment@CAnimationLoggingManagerMarshaler@DirectComposition@@AEAAXXZ @ 0x1C00A7C98
 * Callers:
 *     ?SetBufferProperty@CAnimationLoggingManagerMarshaler@DirectComposition@@UEAAJPEAVCApplicationChannel@2@IPEBX_KPEA_N@Z @ 0x1C00A79A0 (-SetBufferProperty@CAnimationLoggingManagerMarshaler@DirectComposition@@UEAAJPEAVCApplicationCha.c)
 *     ?ReleaseAllReferences@CAnimationLoggingManagerMarshaler@DirectComposition@@MEAAXPEAVCApplicationChannel@2@@Z @ 0x1C00A8C30 (-ReleaseAllReferences@CAnimationLoggingManagerMarshaler@DirectComposition@@MEAAXPEAVCApplication.c)
 * Callees:
 *     Win32FreePool @ 0x1C0096F60 (Win32FreePool.c)
 */

void __fastcall DirectComposition::CAnimationLoggingManagerMarshaler::ReleaseCompositorComment(
        DirectComposition::CAnimationLoggingManagerMarshaler *this)
{
  __int64 v2; // rcx

  v2 = *((_QWORD *)this + 31);
  if ( v2 )
  {
    Win32FreePool(v2);
    *((_QWORD *)this + 31) = 0LL;
  }
}
