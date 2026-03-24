/*
 * XREFs of ACPIDetectCouldExtensionBeInRelation @ 0x1C009DDA4
 * Callers:
 *     ACPIDetectEjectDevices @ 0x1C004F600 (ACPIDetectEjectDevices.c)
 *     ACPIDetectPdoMatch @ 0x1C009DCB0 (ACPIDetectPdoMatch.c)
 *     ACPIDetectFilterMatch @ 0x1C009DD14 (ACPIDetectFilterMatch.c)
 * Callees:
 *     ACPIGet @ 0x1C0003E70 (ACPIGet.c)
 *     ACPIDeviceHasFirmwareDependencies @ 0x1C00147FC (ACPIDeviceHasFirmwareDependencies.c)
 *     WPP_RECORDER_SF_IqL @ 0x1C0019900 (WPP_RECORDER_SF_IqL.c)
 *     WPP_RECORDER_SF_IqLL @ 0x1C0019A80 (WPP_RECORDER_SF_IqLL.c)
 *     ACPIInternalQueryExtendedAddress @ 0x1C002D3A0 (ACPIInternalQueryExtendedAddress.c)
 *     __security_check_cookie @ 0x1C0031C80 (__security_check_cookie.c)
 *     memset @ 0x1C0032480 (memset.c)
 *     ACPIInternalSendSynchronousIrp @ 0x1C009E0DC (ACPIInternalSendSynchronousIrp.c)
 *     ACPIMatchHardwareId @ 0x1C00A141C (ACPIMatchHardwareId.c)
 */

__int64 __fastcall ACPIDetectCouldExtensionBeInRelation(__int64 *a1, _DWORD *a2, char a3, char a4, _QWORD *a5)
{
  char v6; // dl
  char v8; // r13
  __int64 result; // rax
  __int64 v10; // rax
  int v11; // esi
  __int64 v12; // r14
  struct _DEVICE_OBJECT *v13; // r12
  bool v14; // bl
  __int64 v15; // rdx
  __int64 v16; // r8
  __int64 v17; // r9
  __int64 *v18; // rcx
  int v19; // [rsp+20h] [rbp-E0h]
  char v20; // [rsp+50h] [rbp-B0h]
  int v21; // [rsp+58h] [rbp-A8h]
  __int64 v22; // [rsp+60h] [rbp-A0h] BYREF
  __int64 v23; // [rsp+68h] [rbp-98h] BYREF
  UNICODE_STRING String2; // [rsp+70h] [rbp-90h] BYREF
  _QWORD *v25; // [rsp+80h] [rbp-80h]
  _QWORD v26[9]; // [rsp+88h] [rbp-78h] BYREF
  _DWORD v27[16]; // [rsp+D0h] [rbp-30h] BYREF

  v25 = a5;
  v23 = 0LL;
  v6 = 0;
  v20 = 0;
  *a5 = 0LL;
  v8 = 0;
  String2 = 0LL;
  if ( a3 && (a1[1] & 0x100000000000LL) == 0 || a4 && (a1[1] & 0x200000000000LL) == 0 )
    return 3221225524LL;
  if ( !a2 || !*a2 )
    return 0LL;
  v10 = a1[1];
  if ( (v10 & 0x2000100000000000LL) != 0 )
  {
    v8 = 1;
    ACPIGet(a1, 1380204895, -1878785022, 0LL, 0, 0LL, 0LL, (__int64)&v23, 0LL);
    v10 = a1[1];
    v6 = 0;
  }
  if ( (v10 & 0xA00000000000LL) == 0 || ACPIDeviceHasFirmwareDependencies((__int64)a1) )
  {
LABEL_10:
    v11 = 0;
    if ( *a2 )
    {
      while ( 1 )
      {
        if ( (!v6 || (int)ACPIMatchHardwareId(*(PDEVICE_OBJECT *)&a2[2 * v11 + 2], &String2) >= 0) && v8 )
        {
          v12 = v23;
          v13 = *(struct _DEVICE_OBJECT **)&a2[2 * v11 + 2];
          v22 = 0LL;
          memset(v26, 0, sizeof(v26));
          LOWORD(v26[0]) = 2331;
          v26[1] = v27;
          memset(v27, 0, sizeof(v27));
          v27[0] = 65600;
          v27[2] = -1;
          v27[3] = -1;
          v14 = 0;
          v21 = ACPIInternalSendSynchronousIrp(v13);
          if ( v21 >= 0 )
          {
            if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
              WPP_RECORDER_SF_IqL((__int64)WPP_GLOBAL_Control->DeviceExtension, v15, v16, v17, v19);
            v22 = v27[2];
            if ( (_DWORD)v12 == v27[2] )
            {
              v14 = 1;
              if ( (int)ACPIInternalQueryExtendedAddress(v13, (__int64)&v22) >= 0 )
                v14 = v12 == v22;
            }
          }
          if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
            WPP_RECORDER_SF_IqLL((__int64)WPP_GLOBAL_Control->DeviceExtension, v15, v16, v17, v19);
          if ( v21 >= 0 && v14 )
            break;
        }
        v6 = v20;
        if ( (unsigned int)++v11 >= *a2 )
          return 0LL;
      }
      *v25 = *(_QWORD *)&a2[2 * v11 + 2];
    }
    return 0LL;
  }
  result = ACPIGet(v18, 1145653343, 268960278, 0LL, 0, 0LL, 0LL, (__int64)&String2.Buffer, (__int64)&String2);
  if ( (int)result >= 0 )
  {
    v6 = 1;
    String2.MaximumLength = String2.Length;
    v20 = 1;
    goto LABEL_10;
  }
  return result;
}
