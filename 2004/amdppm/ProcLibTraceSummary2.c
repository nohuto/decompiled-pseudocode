/*
 * XREFs of ProcLibTraceSummary2 @ 0x1C001E1CC
 * Callers:
 *     ProcLibTraceControlCallback @ 0x1C001C5F0 (ProcLibTraceControlCallback.c)
 *     ProcLibDeviceStart @ 0x1C0027B70 (ProcLibDeviceStart.c)
 * Callees:
 *     __security_check_cookie @ 0x1C0001E90 (__security_check_cookie.c)
 *     ProcLibGetEventDescriptorAndProcessorId @ 0x1C0003404 (ProcLibGetEventDescriptorAndProcessorId.c)
 *     _guard_dispatch_icall_nop @ 0x1C000EA90 (_guard_dispatch_icall_nop.c)
 *     GetRegistryDwordValue @ 0x1C001EFC0 (GetRegistryDwordValue.c)
 */

char __fastcall ProcLibTraceSummary2(__int64 a1, char a2)
{
  void *v3; // rdx
  void *v4; // r8
  const EVENT_DESCRIPTOR *EventDescriptorAndProcessorId; // rax
  const EVENT_DESCRIPTOR *v6; // rdi
  __int64 v7; // r9
  unsigned int v8; // r8d
  int *v9; // rcx
  _DWORD *v10; // rdx
  _DWORD *v11; // r10
  int v12; // eax
  _DWORD *v13; // rcx
  unsigned int v14; // eax
  _DWORD *v15; // rcx
  unsigned __int64 v16; // r8
  unsigned __int64 v17; // rcx
  unsigned __int64 v18; // rax
  unsigned __int64 v19; // rax
  unsigned int v21; // [rsp+38h] [rbp-69h] BYREF
  unsigned int v22; // [rsp+3Ch] [rbp-65h] BYREF
  unsigned int v23; // [rsp+40h] [rbp-61h] BYREF
  int v24; // [rsp+44h] [rbp-5Dh] BYREF
  int v25; // [rsp+48h] [rbp-59h] BYREF
  int v26; // [rsp+4Ch] [rbp-55h] BYREF
  int v27; // [rsp+50h] [rbp-51h] BYREF
  int v28; // [rsp+54h] [rbp-4Dh] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+58h] [rbp-49h] BYREF
  int *v30; // [rsp+68h] [rbp-39h]
  __int64 v31; // [rsp+70h] [rbp-31h]
  int *v32; // [rsp+78h] [rbp-29h]
  __int64 v33; // [rsp+80h] [rbp-21h]
  unsigned int *v34; // [rsp+88h] [rbp-19h]
  __int64 v35; // [rsp+90h] [rbp-11h]
  int *v36; // [rsp+98h] [rbp-9h]
  __int64 v37; // [rsp+A0h] [rbp-1h]
  unsigned int *v38; // [rsp+A8h] [rbp+7h]
  __int64 v39; // [rsp+B0h] [rbp+Fh]
  unsigned int *v40; // [rsp+B8h] [rbp+17h]
  __int64 v41; // [rsp+C0h] [rbp+1Fh]
  int *v42; // [rsp+C8h] [rbp+27h]
  __int64 v43; // [rsp+D0h] [rbp+2Fh]

  v28 = 0;
  if ( a2 )
  {
    v4 = &PPM_ETW_SUMMARY2_RUNDOWN_HV;
    v3 = &PPM_ETW_SUMMARY2_RUNDOWN;
  }
  else
  {
    v3 = (void *)qword_1C0013800;
    v4 = &PPM_ETW_SUMMARY2_HV;
  }
  EventDescriptorAndProcessorId = (const EVENT_DESCRIPTOR *)ProcLibGetEventDescriptorAndProcessorId(
                                                              a1,
                                                              (__int64)v3,
                                                              (__int64)v4,
                                                              (__int64)&v28,
                                                              (__int64)&UserData);
  v6 = EventDescriptorAndProcessorId;
  if ( EventDescriptorAndProcessorId )
  {
    LOBYTE(EventDescriptorAndProcessorId) = EtwEventEnabled(
                                              (REGHANDLE)WPP_MAIN_CB.Queue.ListEntry.Flink,
                                              EventDescriptorAndProcessorId);
    if ( (_BYTE)EventDescriptorAndProcessorId )
    {
      (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD, _QWORD))(WdfFunctions_01015 + 2504))(
        WdfDriverGlobals,
        *(_QWORD *)(a1 + 208),
        0LL);
      v7 = *(_QWORD *)(a1 + 272);
      v8 = 100;
      v9 = *(int **)(a1 + 512);
      v10 = *(_DWORD **)(a1 + 432);
      v11 = *(_DWORD **)(a1 + 488);
      v25 = 0;
      v26 = 0;
      v24 = 0;
      v27 = 100;
      v22 = 100;
      v23 = 100;
      v21 = 0;
      if ( (v7 & 0x300000300LL) != 0 )
      {
        v25 = *(_DWORD *)(a1 + 1116);
        v26 = ((v7 & 0x200000200LL) != 0) + 2;
      }
      else if ( (v7 & 0xE0000000000LL) != 0 )
      {
        v25 = *(_DWORD *)(*(_QWORD *)(a1 + 528) + 16LL);
        v26 = 4;
      }
      else if ( (v7 & 0x7F077) != 0 )
      {
        v12 = *v9;
        v25 = v12;
        v26 = 1;
        if ( !v12 || *((_BYTE *)v9 + 16) != 1 )
          v25 = v12 + 1;
      }
      if ( (v7 & 0x1000000000LL) != 0 )
      {
        v13 = *(_DWORD **)(a1 + 1176);
        if ( !v13 )
          goto LABEL_37;
        v24 = 4;
        v27 = v13[5];
        v22 = v13[6];
        v23 = v13[7];
        v14 = v13[4];
      }
      else
      {
        if ( (v7 & 0x8000000) == 0 )
        {
          if ( (v7 & 0x80000000) != 0 )
          {
            v24 = 2;
            v21 = *(_DWORD *)(qword_1C00138E0 + 28);
            v22 = 100 * *(_DWORD *)(qword_1C00138E0 + 36) / v21;
            v23 = 100 * *(_DWORD *)(qword_1C00138E0 + 32) / v21;
          }
          else
          {
            if ( (v7 & 0x73300000) == 0 )
              goto LABEL_37;
            v24 = 1;
            if ( (v7 & 0x40000000) != 0 )
              v10 = *(_DWORD **)(a1 + 440);
            if ( (v7 & 0x70000000) != 0 )
            {
              v21 = v10[2];
              v8 = 100 * v10[12 * (*v10 - 1) + 2] / v21;
              v22 = v8;
            }
            if ( (v7 & 0x3300000) != 0 )
              v23 = v8 * v11[5 * (*v11 - 1) + 1] / 0x64;
            else
              v23 = v8;
          }
          goto LABEL_36;
        }
        v15 = *(_DWORD **)(a1 + 240);
        if ( !v15 )
        {
          if ( !*(_QWORD *)(a1 + 384) )
            goto LABEL_37;
          v24 = 3;
          GetRegistryDwordValue(
            L"\\Registry\\Machine\\Hardware\\Description\\System\\CentralProcessor\\0",
            L"~MHz",
            &v21);
          v16 = *(_QWORD *)(a1 + 384);
          v27 = 100LL * *(_QWORD *)(a1 + 376) / v16;
          v17 = 100LL * *(_QWORD *)(a1 + 392) / v16;
          v18 = 100LL * *(_QWORD *)(a1 + 400);
          v22 = v17;
          v19 = v18 / v16;
          if ( !(_DWORD)v19 )
            LODWORD(v19) = 1;
          v23 = v19;
          if ( !(_DWORD)v17 )
            v22 = 1;
          goto LABEL_36;
        }
        v24 = 3;
        v27 = v15[17];
        v22 = v15[19];
        v23 = v15[20];
        v14 = v15[16];
      }
      v21 = v14;
LABEL_36:
      if ( v21 )
      {
LABEL_38:
        v30 = &v25;
        v31 = 4LL;
        v32 = &v26;
        v33 = 4LL;
        v34 = &v21;
        v35 = 4LL;
        v36 = &v27;
        v38 = &v22;
        v40 = &v23;
        v42 = &v24;
        v37 = 4LL;
        v39 = 4LL;
        v41 = 4LL;
        v43 = 4LL;
        EtwWrite((REGHANDLE)WPP_MAIN_CB.Queue.ListEntry.Flink, v6, 0LL, 8u, &UserData);
        LOBYTE(EventDescriptorAndProcessorId) = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD))(WdfFunctions_01015 + 2512))(
                                                  WdfDriverGlobals,
                                                  *(_QWORD *)(a1 + 208));
        return (char)EventDescriptorAndProcessorId;
      }
LABEL_37:
      GetRegistryDwordValue(L"\\Registry\\Machine\\Hardware\\Description\\System\\CentralProcessor\\0", L"~MHz", &v21);
      goto LABEL_38;
    }
  }
  return (char)EventDescriptorAndProcessorId;
}
