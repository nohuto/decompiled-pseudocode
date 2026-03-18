/*
 * XREFs of ?SetBufferProperty@CVirtualMonitorCaptureRenderTargetMarshaler@DirectComposition@@UEAAJPEAVCApplicationChannel@2@IPEBX_KPEA_N@Z @ 0x1C01EFAF0
 * Callers:
 *     <none>
 * Callees:
 *     ?SetBufferProperty@CCaptureRenderTargetMarshaler@DirectComposition@@UEAAJPEAVCApplicationChannel@2@IPEBX_KPEA_N@Z @ 0x1C01EF460 (-SetBufferProperty@CCaptureRenderTargetMarshaler@DirectComposition@@UEAAJPEAVCApplicationChannel.c)
 */

__int64 __fastcall DirectComposition::CVirtualMonitorCaptureRenderTargetMarshaler::SetBufferProperty(
        DirectComposition::CVirtualMonitorCaptureRenderTargetMarshaler *this,
        struct DirectComposition::CApplicationChannel *a2,
        int a3,
        __int64 *a4,
        unsigned __int64 a5,
        bool *a6)
{
  __int64 result; // rax

  result = 0LL;
  *a6 = 0;
  switch ( a3 )
  {
    case 8:
      if ( a5 == 16 )
      {
        *(_OWORD *)((char *)this + 136) = *(_OWORD *)a4;
        *a6 = 1;
        return result;
      }
      break;
    case 10:
      if ( a5 == 16 )
      {
        *(_OWORD *)((char *)this + 152) = *(_OWORD *)a4;
        *a6 = 1;
        *((_DWORD *)this + 4) |= 0x4000u;
        return result;
      }
      break;
    case 13:
      if ( a5 == 16 )
      {
        *(_OWORD *)((char *)this + 168) = *(_OWORD *)a4;
        *a6 = 1;
        *((_DWORD *)this + 4) |= 0x2000u;
        return result;
      }
      break;
    default:
      return DirectComposition::CCaptureRenderTargetMarshaler::SetBufferProperty(this, a2, a3, a4, a5, a6);
  }
  return 3221225485LL;
}
