/*
 * XREFs of RootHub_WaitForResumeCompletion @ 0x1C000D648
 * Callers:
 *     RootHub_HandleResumedPorts @ 0x1C000D530 (RootHub_HandleResumedPorts.c)
 * Callees:
 *     WPP_RECORDER_SF_DD @ 0x1C00043B8 (WPP_RECORDER_SF_DD.c)
 *     WPP_RECORDER_SF_d @ 0x1C0010010 (WPP_RECORDER_SF_d.c)
 *     XilRegister_ReadUlong @ 0x1C00139CC (XilRegister_ReadUlong.c)
 *     MicrosoftTelemetryAssertTriggeredMsgKM @ 0x1C005118C (MicrosoftTelemetryAssertTriggeredMsgKM.c)
 */

__int64 __fastcall RootHub_WaitForResumeCompletion(_QWORD *a1, int a2, int *a3)
{
  char v3; // bp
  __int64 v6; // r13
  __int64 v7; // r12
  __int64 v8; // r15
  __int64 result; // rax
  void *v10; // rdx
  int v11; // ebx
  unsigned int v12; // esi
  int v13; // ecx
  int v14; // ecx
  int v15; // edx
  int v16; // edx
  __int64 v17; // rax

  v3 = a2;
  v6 = *(_QWORD *)(a1[1] + 88LL);
  v7 = a1[6] + 112LL * (unsigned int)(a2 - 1);
  v8 = a1[5] + 16LL * (unsigned int)(a2 - 1);
  result = XilRegister_ReadUlong(v6, v8);
  *a3 = result;
  v10 = &WPP_6daf7e8d9b993c4f7f4c28abffa2458f_Traceguids;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(v10) = 4;
    result = WPP_RECORDER_SF_DD(
               *(_QWORD *)(a1[1] + 72LL),
               (_DWORD)v10,
               11,
               225,
               (__int64)&WPP_6daf7e8d9b993c4f7f4c28abffa2458f_Traceguids,
               v3,
               result);
    v10 = &WPP_6daf7e8d9b993c4f7f4c28abffa2458f_Traceguids;
  }
  v11 = *a3;
  v12 = 0;
  v13 = *a3;
  while ( 1 )
  {
    if ( v13 == -1
      || !*(_BYTE *)(v7 + 18)
      || (result = v13 & 0x20203, (_DWORD)result != 515)
      || (v14 = v13 & 0x1E0, v14 != 256) && v14 != 480 )
    {
      if ( v12 > 0x4B0 )
      {
        result = a1[1];
        ++*(_DWORD *)(result + 488);
        *(_BYTE *)(result + 472) = 1;
      }
      return result;
    }
    if ( v12 == 6400 )
      break;
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(v10) = 4;
      WPP_RECORDER_SF_DD(
        *(_QWORD *)(a1[1] + 72LL),
        (_DWORD)v10,
        11,
        227,
        (__int64)&WPP_6daf7e8d9b993c4f7f4c28abffa2458f_Traceguids,
        v3,
        v12);
    }
    ++v12;
    KeStallExecutionProcessor(0xAu);
    result = XilRegister_ReadUlong(v6, v8);
    *a3 = result;
    v13 = result;
    if ( (_DWORD)result != v11 && WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(v15) = 4;
      result = WPP_RECORDER_SF_DD(
                 *(_QWORD *)(a1[1] + 72LL),
                 v15,
                 11,
                 228,
                 (__int64)&WPP_6daf7e8d9b993c4f7f4c28abffa2458f_Traceguids,
                 v3,
                 result);
      v13 = *a3;
    }
    v10 = &WPP_6daf7e8d9b993c4f7f4c28abffa2458f_Traceguids;
  }
  MicrosoftTelemetryAssertTriggeredMsgKM(
    "HW_COMPLIANCE: Port %2d Resume failed to complete before timeout",
    (unsigned int)&WPP_6daf7e8d9b993c4f7f4c28abffa2458f_Traceguids);
  v17 = a1[1];
  ++*(_DWORD *)(v17 + 484);
  *(_BYTE *)(v17 + 472) = 1;
  result = (__int64)&WPP_RECORDER_INITIALIZED;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(v16) = 2;
    return WPP_RECORDER_SF_d(
             *(_QWORD *)(a1[1] + 72LL),
             v16,
             11,
             226,
             (__int64)&WPP_6daf7e8d9b993c4f7f4c28abffa2458f_Traceguids,
             v3);
  }
  return result;
}
