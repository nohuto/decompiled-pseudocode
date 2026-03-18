/*
 * XREFs of ?ReleaseBuffers@CCaptureRenderTargetMarshaler@DirectComposition@@IEAAXXZ @ 0x1C01F6754
 * Callers:
 *     ?ReleaseAllReferences@CCaptureRenderTargetMarshaler@DirectComposition@@MEAAXPEAVCApplicationChannel@2@@Z @ 0x1C01F6700 (-ReleaseAllReferences@CCaptureRenderTargetMarshaler@DirectComposition@@MEAAXPEAVCApplicationChan.c)
 *     ?SetHandleArrayProperty@CCaptureRenderTargetMarshaler@DirectComposition@@UEAAJIPEAPEAX_KPEA_N@Z @ 0x1C01F6820 (-SetHandleArrayProperty@CCaptureRenderTargetMarshaler@DirectComposition@@UEAAJIPEAPEAX_KPEA_N@Z.c)
 * Callees:
 *     Win32FreePool @ 0x1C008C9A0 (Win32FreePool.c)
 */

void __fastcall DirectComposition::CCaptureRenderTargetMarshaler::ReleaseBuffers(
        DirectComposition::CCaptureRenderTargetMarshaler *this,
        __int64 a2,
        __int64 a3)
{
  __int64 v4; // rcx
  unsigned int v5; // edi
  __int64 v6; // rax

  v4 = *((_QWORD *)this + 11);
  if ( v4 )
  {
    v5 = 0;
    if ( *((_QWORD *)this + 13) )
    {
      v6 = 0LL;
      do
      {
        ObfDereferenceObject(*(PVOID *)(*((_QWORD *)this + 11) + 8 * v6));
        v6 = ++v5;
      }
      while ( (unsigned __int64)v5 < *((_QWORD *)this + 13) );
      v4 = *((_QWORD *)this + 11);
    }
    Win32FreePool(v4, a2, a3);
    *((_QWORD *)this + 11) = 0LL;
  }
}
