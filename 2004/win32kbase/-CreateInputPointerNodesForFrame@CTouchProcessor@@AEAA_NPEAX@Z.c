/*
 * XREFs of ?CreateInputPointerNodesForFrame@CTouchProcessor@@AEAA_NPEAX@Z @ 0x1C018BF34
 * Callers:
 *     ?ProcessInput@CTouchProcessor@@QEAAXPEAX0HHH@Z @ 0x1C0197BB4 (-ProcessInput@CTouchProcessor@@QEAAXPEAX0HHH@Z.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C0072EBC (WPP_RECORDER_SF_.c)
 *     ?CreateInputPointerNode@CTouchProcessor@@AEAA_NPEAUtagPOINTEREVENTINT@@@Z @ 0x1C018BD50 (-CreateInputPointerNode@CTouchProcessor@@AEAA_NPEAUtagPOINTEREVENTINT@@@Z.c)
 */

char __fastcall CTouchProcessor::CreateInputPointerNodesForFrame(CTouchProcessor *this, _DWORD *a2)
{
  _DWORD *v2; // rdi
  unsigned int v4; // ebx

  v2 = a2;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
  {
    LOBYTE(a2) = 5;
    WPP_RECORDER_SF_(
      WPP_GLOBAL_Control->DeviceExtension,
      (_DWORD)a2,
      7,
      34,
      (__int64)&WPP_8113a81d21a7371434699e4b0bdc9bc8_Traceguids);
  }
  v4 = 0;
  if ( v2[12] )
  {
    while ( CTouchProcessor::CreateInputPointerNode(
              this,
              (struct tagPOINTEREVENTINT *)(480LL * v4 + *((_QWORD *)v2 + 17) + 160LL)) )
    {
      if ( ++v4 >= v2[12] )
        goto LABEL_7;
    }
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
    {
      LOBYTE(a2) = 5;
      WPP_RECORDER_SF_(
        WPP_GLOBAL_Control->DeviceExtension,
        (_DWORD)a2,
        7,
        35,
        (__int64)&WPP_8113a81d21a7371434699e4b0bdc9bc8_Traceguids);
    }
    return 0;
  }
  else
  {
LABEL_7:
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
      {
        LOBYTE(a2) = 5;
        WPP_RECORDER_SF_(
          WPP_GLOBAL_Control->DeviceExtension,
          (_DWORD)a2,
          7,
          36,
          (__int64)&WPP_8113a81d21a7371434699e4b0bdc9bc8_Traceguids);
      }
    }
    return 1;
  }
}
