/*
 * XREFs of RootHub_HandlePortStatusChangeEvent @ 0x1C001171C
 * Callers:
 *     Interrupter_DeferredWorkProcessor @ 0x1C0002BB0 (Interrupter_DeferredWorkProcessor.c)
 * Callees:
 *     WPP_RECORDER_SF_d @ 0x1C0010010 (WPP_RECORDER_SF_d.c)
 *     RootHub_DetectAndAcknowledgePortResume @ 0x1C0011EE8 (RootHub_DetectAndAcknowledgePortResume.c)
 *     RootHub_ReleaseReadModifyWriteLock @ 0x1C0011F9C (RootHub_ReleaseReadModifyWriteLock.c)
 *     RootHub_DumpPortData @ 0x1C00133B0 (RootHub_DumpPortData.c)
 *     XilRegister_ReadUlong @ 0x1C00139CC (XilRegister_ReadUlong.c)
 *     RootHub_HideInvalidDebugPortStatusAndChange @ 0x1C00139F0 (RootHub_HideInvalidDebugPortStatusAndChange.c)
 *     RootHub_AcquireReadModifyWriteLock @ 0x1C0013A48 (RootHub_AcquireReadModifyWriteLock.c)
 *     XilRegister_WriteUlong @ 0x1C0013B7C (XilRegister_WriteUlong.c)
 *     _guard_dispatch_icall_nop @ 0x1C00199B0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall RootHub_HandlePortStatusChangeEvent(_QWORD *a1, __int64 a2)
{
  __int64 v2; // r10
  unsigned int v4; // ebx
  __int64 v5; // rbp
  unsigned int v6; // r14d
  __int64 v7; // rsi
  int v8; // edx
  __int64 result; // rax
  __int64 v10; // rsi
  int Ulong; // eax
  int v12; // edx
  int v13; // ebx
  int v14; // edx
  char v15; // [rsp+28h] [rbp-20h]

  v2 = a1[1];
  v4 = *(unsigned __int8 *)(a2 + 3);
  v5 = *(_QWORD *)(v2 + 88);
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    v15 = *(_BYTE *)(a2 + 3);
    LOBYTE(a2) = 4;
    WPP_RECORDER_SF_d(*(_QWORD *)(v2 + 72), a2, 11, 208, (__int64)&WPP_6daf7e8d9b993c4f7f4c28abffa2458f_Traceguids, v15);
    v2 = a1[1];
  }
  v6 = v4 - 1;
  v7 = 16LL * (v4 - 1);
  RootHub_DumpPortData(v7 + a1[5], v2);
  if ( (unsigned __int8)RootHub_HideInvalidDebugPortStatusAndChange(a1, v4) )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(v8) = 4;
      WPP_RECORDER_SF_d(
        *(_QWORD *)(a1[1] + 72LL),
        v8,
        11,
        209,
        (__int64)&WPP_6daf7e8d9b993c4f7f4c28abffa2458f_Traceguids,
        v4);
    }
    RootHub_AcquireReadModifyWriteLock(a1, v6);
    v10 = a1[5] + v7;
    Ulong = XilRegister_ReadUlong(v5, v10);
    v13 = Ulong;
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(v12) = 4;
      WPP_RECORDER_SF_d(
        *(_QWORD *)(a1[1] + 72LL),
        v12,
        11,
        210,
        (__int64)&WPP_6daf7e8d9b993c4f7f4c28abffa2458f_Traceguids,
        Ulong);
    }
    XilRegister_WriteUlong(v5, v10, v13 & 0xE00C200 | 0xFA0000u);
    RootHub_ReleaseReadModifyWriteLock(a1, v6);
    result = XilRegister_ReadUlong(v5, v10);
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(v14) = 4;
      return WPP_RECORDER_SF_d(
               *(_QWORD *)(a1[1] + 72LL),
               v14,
               11,
               211,
               (__int64)&WPP_6daf7e8d9b993c4f7f4c28abffa2458f_Traceguids,
               result);
    }
  }
  else
  {
    result = RootHub_DetectAndAcknowledgePortResume(a1, v4, 0LL);
    if ( !(_BYTE)result )
      return ((__int64 (__fastcall *)(__int64, _QWORD))qword_1C00627D0)(UcxDriverGlobals, *a1);
  }
  return result;
}
