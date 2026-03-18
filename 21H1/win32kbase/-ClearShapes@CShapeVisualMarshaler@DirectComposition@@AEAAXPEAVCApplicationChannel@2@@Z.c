/*
 * XREFs of ?ClearShapes@CShapeVisualMarshaler@DirectComposition@@AEAAXPEAVCApplicationChannel@2@@Z @ 0x1C01E7DB8
 * Callers:
 *     ?ReleaseAllReferences@CShapeVisualMarshaler@DirectComposition@@UEAAXPEAVCApplicationChannel@2@@Z @ 0x1C01E7F00 (-ReleaseAllReferences@CShapeVisualMarshaler@DirectComposition@@UEAAXPEAVCApplicationChannel@2@@Z.c)
 *     ?SetReferenceArrayProperty@CShapeVisualMarshaler@DirectComposition@@UEAAJPEAVCApplicationChannel@2@IPEAPEAVCResourceMarshaler@2@_KPEA_N@Z @ 0x1C01E7F50 (-SetReferenceArrayProperty@CShapeVisualMarshaler@DirectComposition@@UEAAJPEAVCApplicationChannel.c)
 * Callees:
 *     Win32FreePool @ 0x1C008C9A0 (Win32FreePool.c)
 *     ?ReleaseResource@CApplicationChannel@DirectComposition@@QEAAKPEAVCResourceMarshaler@2@@Z @ 0x1C008F624 (-ReleaseResource@CApplicationChannel@DirectComposition@@QEAAKPEAVCResourceMarshaler@2@@Z.c)
 */

void __fastcall DirectComposition::CShapeVisualMarshaler::ClearShapes(
        DirectComposition::CShapeVisualMarshaler *this,
        struct DirectComposition::CApplicationChannel *a2,
        __int64 a3)
{
  __int64 i; // rdi
  __int64 v6; // rcx

  for ( i = 0LL; (unsigned int)i < *((_DWORD *)this + 96); i = (unsigned int)(i + 1) )
    DirectComposition::CApplicationChannel::ReleaseResource(
      a2,
      *(struct DirectComposition::CResourceMarshaler **)(*((_QWORD *)this + 47) + 8 * i));
  v6 = *((_QWORD *)this + 47);
  if ( v6 )
  {
    Win32FreePool(v6, (__int64)a2, a3);
    *((_QWORD *)this + 47) = 0LL;
    *((_DWORD *)this + 96) = 0;
  }
}
