/*
 * XREFs of NtUserSetClassLongPtr @ 0x1C010C940
 * Callers:
 *     <none>
 * Callees:
 *     UserSetLastError @ 0x1C0090F00 (UserSetLastError.c)
 *     xxxSetClassLongPtr @ 0x1C010CB8C (xxxSetClassLongPtr.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C02DF7C4 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

__int64 __fastcall NtUserSetClassLongPtr(__int64 a1, unsigned int a2, ULONG64 a3, unsigned int a4)
{
  __int64 v8; // rdi
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // rbx
  __int64 v12; // r8
  __int64 v13; // rdx
  __int64 v14; // r8
  ULONG64 v15; // rdx
  unsigned int *v16; // rdx
  __int64 v17; // rcx
  ULONG64 v18; // r8
  ULONG64 v19; // rdx
  _BYTE **v20; // rax
  __int64 v21; // r8
  ULONG64 v22; // rcx
  ULONG64 v23; // rdx
  int v25; // [rsp+20h] [rbp-98h]
  __int128 v26; // [rsp+38h] [rbp-80h] BYREF
  __int128 *v27; // [rsp+48h] [rbp-70h]
  ULONG64 v28; // [rsp+58h] [rbp-60h]
  __int128 v29; // [rsp+60h] [rbp-58h] BYREF
  __int128 v30; // [rsp+70h] [rbp-48h] BYREF
  __int64 v31; // [rsp+80h] [rbp-38h]
  __int128 v32; // [rsp+98h] [rbp-20h]
  ULONG64 v33; // [rsp+A8h] [rbp-10h]

  v29 = 0LL;
  v26 = 0LL;
  v27 = 0LL;
  v8 = 0LL;
  v28 = 0LL;
  v30 = 0LL;
  v31 = 0LL;
  EnterCrit(0LL, 1LL);
  v11 = ValidateHwnd(a1);
  if ( v11 )
  {
    *(_QWORD *)&v30 = *(_QWORD *)(gptiCurrent + 408LL);
    *(_QWORD *)(gptiCurrent + 408LL) = &v30;
    *((_QWORD *)&v30 + 1) = v11;
    HMLockObject(v11);
    if ( a2 == -26 )
    {
      if ( (a3 & 0x10000) != 0 )
      {
        UserSetLastError(13LL, v13, v14);
LABEL_25:
        ThreadUnlock1(v22, v23, v21);
        goto LABEL_26;
      }
    }
    else if ( a2 == -8 )
    {
      v28 = a3;
      v15 = a3;
      if ( a3 + 24 < a3 || a3 + 24 > MmUserProbeAddress )
        v15 = MmUserProbeAddress;
      v32 = *(_OWORD *)v15;
      v33 = *(_QWORD *)(v15 + 16);
      v26 = v32;
      v27 = (__int128 *)v33;
      v16 = (unsigned int *)v33;
      if ( v33 >= MmUserProbeAddress )
        v16 = (unsigned int *)MmUserProbeAddress;
      v17 = *v16;
      v25 = *v16;
      LODWORD(v29) = *v16;
      v18 = *((_QWORD *)v16 + 1);
      *((_QWORD *)&v29 + 1) = v18;
      if ( (v18 & 0xFFFFFFFFFFFF0000uLL) == 0 )
        goto LABEL_19;
      if ( (v18 & 1) != 0 )
        ExRaiseDatatypeMisalignment();
      v19 = (unsigned __int16)v17 + v18 + 2;
      v20 = (_BYTE **)MmUserProbeAddress;
      if ( v19 < MmUserProbeAddress && (unsigned __int16)v17 <= HIWORD(v25) )
      {
        if ( (v17 & 1) != 0 )
          goto LABEL_17;
        if ( v19 > v18 )
        {
LABEL_19:
          v27 = &v29;
          v8 = xxxSetClassLongPtr(v11, 4294967288LL, &v26, a4);
          v22 = MmUserProbeAddress;
          v23 = MmUserProbeAddress;
          if ( a3 >= MmUserProbeAddress )
            a3 = MmUserProbeAddress;
          *(_OWORD *)a3 = v26;
          *(_QWORD *)(a3 + 16) = v27;
          goto LABEL_25;
        }
      }
      if ( (v17 & 1) == 0 )
      {
LABEL_18:
        **v20 = 0;
        goto LABEL_19;
      }
LABEL_17:
      MicrosoftTelemetryAssertTriggeredNoArgsKM(v17, v19);
      v20 = (_BYTE **)MmUserProbeAddress;
      goto LABEL_18;
    }
    v8 = xxxSetClassLongPtr(v11, a2, a3, a4);
    goto LABEL_25;
  }
LABEL_26:
  UserSessionSwitchLeaveCrit(v10, v9, v12);
  return v8;
}
