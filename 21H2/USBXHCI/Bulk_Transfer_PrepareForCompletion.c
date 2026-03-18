/*
 * XREFs of Bulk_Transfer_PrepareForCompletion @ 0x1C000E550
 * Callers:
 *     Bulk_Transfer_Complete @ 0x1C000BCF8 (Bulk_Transfer_Complete.c)
 *     Bulk_Transfer_CompleteCancelable @ 0x1C000E3C8 (Bulk_Transfer_CompleteCancelable.c)
 * Callees:
 *     TR_GetUsbdStatusFromTrbCompletionCode @ 0x1C0006570 (TR_GetUsbdStatusFromTrbCompletionCode.c)
 *     TR_ReleaseDoubleBuffer @ 0x1C000E678 (TR_ReleaseDoubleBuffer.c)
 *     WPP_RECORDER_SF_DDDqdD @ 0x1C000E6EC (WPP_RECORDER_SF_DDDqdD.c)
 */

void __fastcall Bulk_Transfer_PrepareForCompletion(__int64 a1, __int64 a2, unsigned int a3)
{
  __int64 v3; // r10
  unsigned __int16 v6; // ax
  _DWORD *v7; // rcx
  int UsbdStatusFromTrbCompletionCode; // eax
  int v9; // r8d
  __int64 v10; // r9
  __int64 v11; // r10
  int v12; // eax
  __int64 v13; // rdx
  struct _MDL *v14; // rcx
  __int64 v15; // rdx
  unsigned __int16 v16; // ax

  v3 = *(_QWORD *)(a2 + 48);
  v6 = *(_WORD *)(v3 + 2);
  if ( v6 <= 0x38u || (v7 = (_DWORD *)(v3 + 52), v6 > 0x3Au) )
    v7 = (_DWORD *)(v3 + 36);
  *v7 = *(_DWORD *)(a2 + 108);
  UsbdStatusFromTrbCompletionCode = TR_GetUsbdStatusFromTrbCompletionCode(a1, *(_DWORD *)(a2 + 68), a3);
  *(_DWORD *)(v11 + 4) = UsbdStatusFromTrbCompletionCode;
  if ( UsbdStatusFromTrbCompletionCode <= -1073738240 )
  {
    if ( UsbdStatusFromTrbCompletionCode == -1073738240 )
    {
      v12 = -1073741637;
      goto LABEL_6;
    }
    if ( UsbdStatusFromTrbCompletionCode == -2147483136
      || UsbdStatusFromTrbCompletionCode == -2147482880
      || UsbdStatusFromTrbCompletionCode == -2147482112
      || UsbdStatusFromTrbCompletionCode == -1073739264 )
    {
      v12 = -1073741811;
      goto LABEL_6;
    }
    goto LABEL_27;
  }
  switch ( UsbdStatusFromTrbCompletionCode )
  {
    case -1073676288:
      v12 = -1073741536;
      break;
    case -1073737728:
      v12 = -1073741670;
      break;
    case -1073713152:
      v12 = -1073741810;
      break;
    default:
      if ( (unsigned int)UsbdStatusFromTrbCompletionCode <= 1 )
      {
        v12 = 0;
        break;
      }
LABEL_27:
      v12 = -1073741823;
      break;
  }
LABEL_6:
  *(_DWORD *)(a2 + 72) = v12;
  ++*(_DWORD *)(v10 + 240);
  *(_QWORD *)(v10 + 248) += *(unsigned int *)(a2 + 108);
  if ( *(int *)(a2 + 72) < 0 )
    ++*(_DWORD *)(v10 + 244);
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_DDDqdD(
      *(_QWORD *)(*(_QWORD *)(v10 + 56) + 80LL),
      *(unsigned __int8 *)(*(_QWORD *)(v10 + 48) + 135LL),
      v9,
      v10);
  v13 = *(_QWORD *)(a2 + 96);
  if ( v13 )
  {
    TR_ReleaseDoubleBuffer(*(_QWORD *)(a2 + 56), v13);
    *(_QWORD *)(a2 + 96) = 0LL;
  }
  v14 = *(struct _MDL **)(a2 + 80);
  if ( v14 )
  {
    if ( (v15 = *(_QWORD *)(a2 + 48), v16 = *(_WORD *)(v15 + 2), v16 > 0x38u) && v16 <= 0x3Au
      || v14 != *(struct _MDL **)(v15 + 48) )
    {
      if ( v14 != *(struct _MDL **)(*(_QWORD *)(a2 + 56) + 120LL) )
      {
        IoFreeMdl(v14);
        *(_QWORD *)(a2 + 80) = 0LL;
      }
    }
  }
  *(_BYTE *)(a2 + 16) = 0;
}
