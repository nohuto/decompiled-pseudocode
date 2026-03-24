/*
 * XREFs of ExternalRequestBiosNameDeviceAssociation @ 0x1C00AF6D4
 * Callers:
 *     AcpiExternalTranslateBiosToNtResources @ 0x1C00AF1D0 (AcpiExternalTranslateBiosToNtResources.c)
 * Callees:
 *     AMLIGetNameSpaceObject @ 0x1C000B01C (AMLIGetNameSpaceObject.c)
 *     AMLIDereferenceHandleEx @ 0x1C000BC6C (AMLIDereferenceHandleEx.c)
 *     WPP_RECORDER_SF_qSD @ 0x1C0054E38 (WPP_RECORDER_SF_qSD.c)
 *     WPP_RECORDER_SF_qsD @ 0x1C0054FBC (WPP_RECORDER_SF_qsD.c)
 *     ACPIInternalGetDeviceFromNSOBJ @ 0x1C0056ECC (ACPIInternalGetDeviceFromNSOBJ.c)
 *     AMLISetNSObjectNotifyFlag @ 0x1C00637F4 (AMLISetNSObjectNotifyFlag.c)
 *     ACPIInitUnicodeString @ 0x1C0099D70 (ACPIInitUnicodeString.c)
 *     AcpiExternalAddBiosNameDeviceAssociation @ 0x1C00AF084 (AcpiExternalAddBiosNameDeviceAssociation.c)
 */

__int64 __fastcall ExternalRequestBiosNameDeviceAssociation(char *a1, __int64 a2, char a3)
{
  void *v5; // rdi
  int v7; // ebx
  __int64 v8; // r8
  __int64 v9; // rdx
  __int64 v10; // r8
  __int64 v11; // r9
  __int64 v12; // rdx
  __int64 v13; // r8
  __int64 v14; // r9
  int v16; // [rsp+20h] [rbp-40h]
  __int64 *v17; // [rsp+40h] [rbp-20h] BYREF
  void *v18; // [rsp+48h] [rbp-18h] BYREF
  PVOID P[2]; // [rsp+50h] [rbp-10h] BYREF
  int v20; // [rsp+A8h] [rbp+48h] BYREF

  v17 = 0LL;
  v20 = 0;
  v5 = 0LL;
  v18 = 0LL;
  *(_OWORD *)P = 0LL;
  v7 = AMLIGetNameSpaceObject(a1, 0LL, (unsigned __int64 *)&v17, 0);
  if ( v7 >= 0 )
  {
    AMLISetNSObjectNotifyFlag(v17);
    v7 = ACPIInitUnicodeString((PUNICODE_STRING)P, a1);
    if ( v7 >= 0 )
    {
      ACPIInternalGetDeviceFromNSOBJ((__int64)v17, &v18, v8, &v20);
      v5 = v18;
      if ( v20 == 3 )
      {
        v7 = AcpiExternalAddBiosNameDeviceAssociation((__int64)P, (__int64)v18);
        if ( v7 < 0 )
        {
          if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
            WPP_RECORDER_SF_qSD(
              (__int64)WPP_GLOBAL_Control->DeviceExtension,
              v9,
              v10,
              v11,
              v16,
              (char)v5,
              (const wchar_t *)P[1]);
          v7 = 0;
        }
      }
      if ( (a3 & 4) == 0 )
      {
        v7 = IoReserveDependency(*(_QWORD *)(a2 + 744), P, 2LL);
        if ( v7 < 0 )
        {
          if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
            WPP_RECORDER_SF_qsD((__int64)WPP_GLOBAL_Control->DeviceExtension, v12, v13, v14, v16, a2, a1);
          v7 = 0;
        }
      }
    }
  }
  if ( P[1] )
  {
    ExFreePoolWithTag(P[1], 0x53706341u);
    *(_OWORD *)P = 0LL;
  }
  if ( v5 )
    ObfDereferenceObject(v5);
  if ( v17 )
    AMLIDereferenceHandleEx((__int64)v17);
  return (unsigned int)v7;
}
