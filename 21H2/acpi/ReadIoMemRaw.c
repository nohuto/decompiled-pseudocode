/*
 * XREFs of ReadIoMemRaw @ 0x1C005B278
 * Callers:
 *     AcpiPccRingDoorbell @ 0x1C005B060 (AcpiPccRingDoorbell.c)
 * Callees:
 *     WPP_RECORDER_SF_D @ 0x1C0001C0C (WPP_RECORDER_SF_D.c)
 */

__int64 __fastcall ReadIoMemRaw(unsigned __int8 *a1, int a2, int a3)
{
  __int64 v3; // rbx
  unsigned __int16 v4; // r9

  v3 = 0LL;
  if ( a2 )
  {
    if ( a2 == 1 )
    {
      switch ( a3 )
      {
        case 8:
          return __inbyte((unsigned __int16)a1);
        case 16:
          return __inword((unsigned __int16)a1);
        case 32:
          return __indword((unsigned __int16)a1);
        default:
          if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          {
            v4 = 12;
LABEL_17:
            WPP_RECORDER_SF_D(
              (__int64)WPP_GLOBAL_Control->DeviceExtension,
              2u,
              0x15u,
              v4,
              (__int64)&WPP_cb83180b771632eba63c2d8b4b5a28e5_Traceguids,
              a3);
          }
          break;
      }
    }
  }
  else
  {
    switch ( a3 )
    {
      case 8:
        return *a1;
      case 16:
        return *(unsigned __int16 *)a1;
      case 32:
        return *(unsigned int *)a1;
      case 64:
        return *(_QWORD *)a1;
    }
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      v4 = 13;
      goto LABEL_17;
    }
  }
  return v3;
}
