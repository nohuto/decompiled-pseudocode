/*
 * XREFs of ?RmpActivityHostCheckAndUpdateGpuInterference@@YAJPEAU_RM_ACTIVITY_HOST@@K@Z @ 0x1800749F4
 * Callers:
 *     ?RmpGpuMonitorTimerCallback@@YAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_TIMER@@@Z @ 0x180075080 (-RmpGpuMonitorTimerCallback@@YAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_TIMER@@@Z.c)
 * Callees:
 *     _tlgKeywordOn @ 0x180010380 (_tlgKeywordOn.c)
 *     _tlgWriteTransfer_EventWriteTransfer @ 0x18002E148 (_tlgWriteTransfer_EventWriteTransfer.c)
 *     ?RmpActivityHostCheckQueueWork@@YAKPEAU_RM_ACTIVITY_HOST@@@Z @ 0x1800354C0 (-RmpActivityHostCheckQueueWork@@YAKPEAU_RM_ACTIVITY_HOST@@@Z.c)
 *     __security_check_cookie @ 0x1800448B0 (__security_check_cookie.c)
 *     ?RmpActivityHostIsGpuInterfering@@YAJPEAU_RM_ACTIVITY_HOST@@PEAE@Z @ 0x180074B5C (-RmpActivityHostIsGpuInterfering@@YAJPEAU_RM_ACTIVITY_HOST@@PEAE@Z.c)
 */

__int64 __fastcall RmpActivityHostCheckAndUpdateGpuInterference(struct _RM_ACTIVITY_HOST *a1, int a2)
{
  int v2; // r9d
  __int64 v4; // rax
  int IsGpuInterfering; // edi
  __int64 v6; // rax
  unsigned __int8 v8[8]; // [rsp+30h] [rbp-50h] BYREF
  __int64 v9; // [rsp+38h] [rbp-48h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v10; // [rsp+40h] [rbp-40h] BYREF
  __int64 *v11; // [rsp+60h] [rbp-20h]
  int v12; // [rsp+68h] [rbp-18h]
  int v13; // [rsp+6Ch] [rbp-14h]

  v2 = *((_DWORD *)a1 + 310);
  if ( (v2 & 1) != 0 )
  {
    if ( !a2 )
    {
      if ( (unsigned int)dword_1800B31E0 > 4 && tlgKeywordOn((__int64)&dword_1800B31E0, 1LL) )
      {
        v4 = *((_QWORD *)a1 + 4);
        v13 = 0;
        v9 = v4;
        v12 = 8;
        v11 = &v9;
        tlgWriteTransfer_EventWriteTransfer(
          (__int64)&dword_1800B31E0,
          (unsigned __int8 *)dword_18009DC5B,
          0LL,
          0LL,
          3u,
          &v10);
        v2 = *((_DWORD *)a1 + 310);
      }
      *((_DWORD *)a1 + 310) = v2 & 0xFFFFFFFE;
    }
LABEL_13:
    IsGpuInterfering = 0;
    goto LABEL_14;
  }
  IsGpuInterfering = RmpActivityHostIsGpuInterfering(a1, v8);
  if ( IsGpuInterfering >= 0 )
  {
    if ( v8[0] )
    {
      if ( (unsigned int)dword_1800B31E0 > 4 && tlgKeywordOn((__int64)&dword_1800B31E0, 1LL) )
      {
        v6 = *((_QWORD *)a1 + 4);
        v13 = 0;
        v9 = v6;
        v12 = 8;
        v11 = &v9;
        tlgWriteTransfer_EventWriteTransfer(
          (__int64)&dword_1800B31E0,
          (unsigned __int8 *)dword_18009DB4E,
          0LL,
          0LL,
          3u,
          &v10);
      }
      *((_DWORD *)a1 + 310) |= 1u;
    }
    goto LABEL_13;
  }
LABEL_14:
  RmpActivityHostCheckQueueWork(a1);
  return (unsigned int)IsGpuInterfering;
}
