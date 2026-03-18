/*
 * XREFs of AcpiValidatePepDeviceControlResources @ 0x1C00B0BB4
 * Callers:
 *     AcpiTranslatePepDeviceControlResourcesInternal @ 0x1C00B09D0 (AcpiTranslatePepDeviceControlResourcesInternal.c)
 * Callees:
 *     WPP_RECORDER_SF_Dd @ 0x1C005CD20 (WPP_RECORDER_SF_Dd.c)
 *     WPP_RECORDER_SF_iiid @ 0x1C005CED0 (WPP_RECORDER_SF_iiid.c)
 *     AMLICheckIfIoRangeValid @ 0x1C00646A0 (AMLICheckIfIoRangeValid.c)
 *     AMLIValidateFirmwareMemoryAddress @ 0x1C0064A88 (AMLIValidateFirmwareMemoryAddress.c)
 */

__int64 __fastcall AcpiValidatePepDeviceControlResources(_DWORD *a1, unsigned __int64 a2, __int64 a3, __int64 a4)
{
  int v5; // ebx
  int v6; // edi
  _DWORD *v7; // r10
  ULONGLONG v8; // rsi
  unsigned __int16 v9; // r9
  ULONGLONG v10; // rax
  int v12; // [rsp+20h] [rbp-40h]
  unsigned __int64 v13; // [rsp+50h] [rbp-10h] BYREF
  unsigned __int64 MaximumAddress; // [rsp+A0h] [rbp+40h] BYREF
  unsigned __int64 MinimumAddress; // [rsp+A8h] [rbp+48h] BYREF
  unsigned __int64 v16; // [rsp+B0h] [rbp+50h] BYREF
  unsigned __int64 v17; // [rsp+B8h] [rbp+58h] BYREF

  v17 = 0LL;
  v16 = 0LL;
  v5 = -1073741823;
  MaximumAddress = 0LL;
  MinimumAddress = 0LL;
  if ( !*a1 || !a1[9] )
    return (unsigned int)v5;
  v5 = 0;
  v6 = 0;
  while ( 1 )
  {
    v7 = &a1[8 * v6];
    if ( *((_BYTE *)v7 + 41) == 1 )
    {
      v10 = RtlIoDecodeMemIoResource((PIO_RESOURCE_DESCRIPTOR)(v7 + 10), 0LL, &v16, &v17);
      if ( v10 + v16 - 1 != v17 )
      {
        if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          return (unsigned int)-1073741823;
        v9 = 33;
        goto LABEL_31;
      }
      if ( !AMLICheckIfIoRangeValid(v16, v10) )
      {
        if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          return (unsigned int)-1073741823;
        v9 = 35;
        goto LABEL_31;
      }
      goto LABEL_18;
    }
    if ( *((_BYTE *)v7 + 41) == 2 )
      break;
    if ( *((_BYTE *)v7 + 41) != 3 )
    {
      if ( *((_BYTE *)v7 + 41) == 5 )
        goto LABEL_10;
      if ( *((_BYTE *)v7 + 41) != 7 )
      {
        if ( *((unsigned __int8 *)v7 + 41) != 132 )
          return (unsigned int)-1073741637;
LABEL_10:
        v5 = 0;
        goto LABEL_18;
      }
    }
    v8 = RtlIoDecodeMemIoResource((PIO_RESOURCE_DESCRIPTOR)(v7 + 10), 0LL, &MinimumAddress, &MaximumAddress);
    a2 = MaximumAddress;
    if ( v8 + MinimumAddress - 1 != MaximumAddress )
    {
      if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        return (unsigned int)-1073741823;
      v9 = 36;
      goto LABEL_31;
    }
    if ( v8 > 0xFFFFFFFF )
    {
      if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        return (unsigned int)-1073741823;
      v9 = 37;
      goto LABEL_31;
    }
    v13 = MinimumAddress;
    v5 = AMLIValidateFirmwareMemoryAddress((__int64 *)&v13, v8);
    if ( v5 < 0 )
    {
      if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        return (unsigned int)-1073741823;
      v9 = 39;
LABEL_31:
      WPP_RECORDER_SF_iiid((__int64)WPP_GLOBAL_Control->DeviceExtension, a2, a3, v9, v12);
      return (unsigned int)-1073741823;
    }
LABEL_18:
    if ( (unsigned int)++v6 >= a1[9] )
      return (unsigned int)v5;
  }
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_Dd((__int64)WPP_GLOBAL_Control->DeviceExtension, a2, a3, a4, v12);
  return (unsigned int)-1073741823;
}
