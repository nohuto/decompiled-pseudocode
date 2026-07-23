/*
 * XREFs of PopCallPowerSettingCallback @ 0x14066F158
 * Callers:
 *     PopDispatchPowerSettingCallbacks @ 0x14066D620 (PopDispatchPowerSettingCallbacks.c)
 * Callees:
 *     KeReleaseGuardedMutex @ 0x140253C70 (KeReleaseGuardedMutex.c)
 *     EtwWrite @ 0x14027F7C0 (EtwWrite.c)
 *     EtwEventEnabled @ 0x1402C0830 (EtwEventEnabled.c)
 *     ExAcquireFastMutex @ 0x140354DD0 (ExAcquireFastMutex.c)
 *     __security_check_cookie @ 0x1403D05D0 (__security_check_cookie.c)
 *     KeBugCheckEx @ 0x1403FE0D0 (KeBugCheckEx.c)
 *     _guard_dispatch_icall @ 0x140408790 (_guard_dispatch_icall.c)
 *     ExFreePoolWithTag @ 0x1409B5010 (ExFreePoolWithTag.c)
 */

void __fastcall PopCallPowerSettingCallback(_QWORD *a1, __int64 a2)
{
  _DWORD *v3; // rdi
  unsigned int v4; // r14d
  unsigned int v5; // r15d
  void (__fastcall *v6)(_QWORD, _QWORD, _QWORD, _QWORD); // rsi
  REGHANDLE v7; // r12
  unsigned __int8 CurrentIrql; // r14
  unsigned __int8 v9; // al
  REGHANDLE v10; // rsi
  _DWORD *v11; // rax
  bool v12; // si
  unsigned int v14; // [rsp+30h] [rbp-59h] BYREF
  void (__fastcall *v15)(_QWORD, _QWORD, _QWORD, _QWORD); // [rsp+38h] [rbp-51h] BYREF
  __int64 v16; // [rsp+40h] [rbp-49h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v17; // [rsp+48h] [rbp-41h] BYREF
  char *v18; // [rsp+58h] [rbp-31h]
  int v19; // [rsp+60h] [rbp-29h]
  int v20; // [rsp+64h] [rbp-25h]
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+70h] [rbp-19h] BYREF
  char *v22; // [rsp+80h] [rbp-9h]
  __int64 v23; // [rsp+88h] [rbp-1h]
  int *v24; // [rsp+90h] [rbp+7h]
  __int64 v25; // [rsp+98h] [rbp+Fh]
  _DWORD *v26; // [rsp+A0h] [rbp+17h]
  unsigned int v27; // [rsp+A8h] [rbp+1Fh]
  int v28; // [rsp+ACh] [rbp+23h]

  if ( a2 )
  {
    if ( a1 )
    {
      a1[9] = a2;
      if ( !a1[3] )
      {
        a1[3] = KeGetCurrentThread();
        do
        {
          v3 = (_DWORD *)a1[9];
          ++*v3;
          KeReleaseGuardedMutex(&PopSettingLock);
          v4 = v3[1];
          v5 = v4;
          v6 = (void (__fastcall *)(_QWORD, _QWORD, _QWORD, _QWORD))a1[10];
          v15 = v6;
          v14 = v4;
          if ( PopDiagHandleRegistered )
          {
            v7 = PopDiagHandle;
            if ( EtwEventEnabled(PopDiagHandle, &POP_ETW_EVENT_POWER_SETTING_CALLBACK_START) )
            {
              v28 = 0;
              v25 = 4LL;
              UserData.Ptr = (ULONGLONG)&v15;
              *(_QWORD *)&UserData.Size = 8LL;
              v22 = (char *)a1 + 36;
              v23 = 16LL;
              v24 = (int *)&v14;
              v27 = v4;
              v26 = v3 + 3;
              EtwWrite(v7, &POP_ETW_EVENT_POWER_SETTING_CALLBACK_START, 0LL, 4u, &UserData);
              v5 = v3[1];
              v6 = (void (__fastcall *)(_QWORD, _QWORD, _QWORD, _QWORD))a1[10];
            }
          }
          CurrentIrql = KeGetCurrentIrql();
          v6((char *)a1 + 52, v3 + 3, v5, a1[11]);
          v9 = KeGetCurrentIrql();
          if ( v9 != CurrentIrql )
            KeBugCheckEx(0xA0u, 0x900uLL, a1[10], CurrentIrql, v9);
          v16 = a1[10];
          if ( PopDiagHandleRegistered )
          {
            v10 = PopDiagHandle;
            if ( EtwEventEnabled(PopDiagHandle, &POP_ETW_EVENT_POWER_SETTING_CALLBACK_STOP) )
            {
              v17.Reserved = 0;
              v20 = 0;
              v17.Ptr = (ULONGLONG)&v16;
              v17.Size = 8;
              v18 = (char *)a1 + 36;
              v19 = 16;
              EtwWrite(v10, &POP_ETW_EVENT_POWER_SETTING_CALLBACK_STOP, 0LL, 2u, &v17);
            }
          }
          if ( KeGetCurrentThread()->WaitBlock[3].SpareLong )
            __fastfail(0x20u);
          ExAcquireFastMutex(&PopSettingLock);
          v11 = (_DWORD *)a1[9];
          v12 = v11 && v3 != v11;
          if ( (*v3)-- == 1 )
            ExFreePoolWithTag(v3, 0x74655350u);
        }
        while ( v12 );
        a1[3] = 0LL;
      }
    }
  }
}
