/*
 * XREFs of AcpiValidatePepDeviceControlResources @ 0x1C00B1914
 * Callers:
 *     AcpiTranslatePepDeviceControlResourcesInternal @ 0x1C00B1730 (AcpiTranslatePepDeviceControlResourcesInternal.c)
 * Callees:
 *     WPP_RECORDER_SF_Dd @ 0x1C005BE84 (WPP_RECORDER_SF_Dd.c)
 *     WPP_RECORDER_SF_iiid @ 0x1C005C034 (WPP_RECORDER_SF_iiid.c)
 *     AMLICheckIfIoRangeValid @ 0x1C00633F4 (AMLICheckIfIoRangeValid.c)
 *     AMLIValidateFirmwareMemoryAddress @ 0x1C0063804 (AMLIValidateFirmwareMemoryAddress.c)
 */

__int64 __fastcall AcpiValidatePepDeviceControlResources(_DWORD *a1, unsigned __int64 a2, __int64 a3, __int64 a4)
{
  int v5; // ebx
  int v6; // edi
  _DWORD *v7; // r10
  ULONGLONG v8; // rsi
  unsigned __int16 v9; // r9
  ULONGLONG v10; // rax
  __int64 v11; // rdx
  __int64 v12; // r8
  int v14; // [rsp+20h] [rbp-40h]
  unsigned __int64 v15; // [rsp+50h] [rbp-10h] BYREF
  unsigned __int64 MaximumAddress; // [rsp+A0h] [rbp+40h] BYREF
  unsigned __int64 MinimumAddress; // [rsp+A8h] [rbp+48h] BYREF
  unsigned __int64 v18; // [rsp+B0h] [rbp+50h] BYREF
  unsigned __int64 v19; // [rsp+B8h] [rbp+58h] BYREF

  v19 = 0LL;
  v18 = 0LL;
  MaximumAddress = 0LL;
  v5 = -1073741823;
  MinimumAddress = 0LL;
  if ( !*a1 || !a1[9] )
    return (unsigned int)v5;
  v5 = 0;
  v6 = 0;
  while ( 1 )
  {
    v7 = &a1[8 * v6];
    if ( *((_BYTE *)v7 + 41) != 1 )
    {
      switch ( *((_BYTE *)v7 + 41) )
      {
        case 2:
          if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
            WPP_RECORDER_SF_Dd((__int64)WPP_GLOBAL_Control->DeviceExtension, a2, a3, a4, v14);
          return (unsigned int)-1073741823;
        case 3:
          goto LABEL_11;
        case 5:
          goto LABEL_10;
      }
      if ( *((_BYTE *)v7 + 41) != 7 )
      {
        if ( *((unsigned __int8 *)v7 + 41) != 132 )
          return (unsigned int)-1073741637;
LABEL_10:
        v5 = 0;
        goto LABEL_22;
      }
LABEL_11:
      v8 = RtlIoDecodeMemIoResource((PIO_RESOURCE_DESCRIPTOR)(v7 + 10), 0LL, &MinimumAddress, &MaximumAddress);
      a2 = MaximumAddress;
      if ( v8 + MinimumAddress - 1 == MaximumAddress )
      {
        if ( v8 > 0xFFFFFFFF )
        {
          if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          {
            v9 = 37;
            goto LABEL_29;
          }
        }
        else
        {
          v15 = MinimumAddress;
          v5 = AMLIValidateFirmwareMemoryAddress((__int64 *)&v15, v8);
          if ( v5 >= 0 )
            goto LABEL_22;
          if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          {
            v9 = 39;
LABEL_29:
            WPP_RECORDER_SF_iiid((__int64)WPP_GLOBAL_Control->DeviceExtension, a2, a3, v9, v14);
          }
        }
      }
      else if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        v9 = 36;
        goto LABEL_29;
      }
      return (unsigned int)-1073741823;
    }
    v10 = RtlIoDecodeMemIoResource((PIO_RESOURCE_DESCRIPTOR)(v7 + 10), 0LL, &v18, &v19);
    if ( v10 + v18 - 1 != v19 )
      break;
    if ( !AMLICheckIfIoRangeValid(v18, v10) )
    {
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        WPP_RECORDER_SF_iiid((__int64)WPP_GLOBAL_Control->DeviceExtension, a2, a3, 0x23u, v14);
      v5 = -1073741823;
    }
    if ( v5 < 0 )
      return (unsigned int)v5;
LABEL_22:
    if ( (unsigned int)++v6 >= a1[9] )
      return (unsigned int)v5;
  }
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_iiid((__int64)WPP_GLOBAL_Control->DeviceExtension, v11, v12, 0x21u, v14);
  return (unsigned int)-1073741823;
}
