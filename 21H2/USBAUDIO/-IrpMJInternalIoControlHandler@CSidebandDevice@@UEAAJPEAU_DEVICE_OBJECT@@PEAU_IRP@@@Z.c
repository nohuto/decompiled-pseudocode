/*
 * XREFs of ?IrpMJInternalIoControlHandler@CSidebandDevice@@UEAAJPEAU_DEVICE_OBJECT@@PEAU_IRP@@@Z @ 0x1C000D120
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C0001008 (WPP_RECORDER_SF_.c)
 *     WPP_RECORDER_SF_d @ 0x1C00010CC (WPP_RECORDER_SF_d.c)
 */

__int64 __fastcall CSidebandDevice::IrpMJInternalIoControlHandler(
        CSidebandDevice *this,
        struct _DEVICE_OBJECT *a2,
        struct _IRP *a3)
{
  __int64 v5; // rdx
  unsigned int inserted; // ebx
  unsigned int v8; // [rsp+28h] [rbp-10h]

  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
    WPP_RECORDER_SF_(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      (__int64)a2,
      9u,
      0x88u,
      (__int64)&WPP_2758cf178eb33941c178507ca09d62b1_Traceguids);
  switch ( a3->Tail.Overlay.CurrentStackLocation->Parameters.Read.ByteOffset.LowPart )
  {
    case 0x220007u:
    case 0x22000Bu:
    case 0x22000Fu:
    case 0x220017u:
    case 0x22001Bu:
    case 0x22001Fu:
    case 0x220023u:
    case 0x220027u:
    case 0x22002Bu:
    case 0x22002Fu:
    case 0x220033u:
    case 0x220037u:
    case 0x22003Bu:
    case 0x22003Fu:
    case 0x220043u:
    case 0x220047u:
    case 0x22004Bu:
    case 0x22004Fu:
    case 0x220053u:
    case 0x22005Fu:
    case 0x220063u:
      inserted = IoCsqInsertIrpEx((PIO_CSQ)(*((_QWORD *)this + 5) + 160LL), a3, 0LL, (char *)this + 64);
      break;
    default:
      inserted = -1073741822;
      a3->IoStatus.Information = 0LL;
      a3->IoStatus.Status = -1073741822;
      IofCompleteRequest(a3, 0);
      break;
  }
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
  {
    v8 = inserted;
    WPP_RECORDER_SF_d(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      v5,
      9u,
      0x89u,
      (__int64)&WPP_2758cf178eb33941c178507ca09d62b1_Traceguids,
      v8);
  }
  return inserted;
}
