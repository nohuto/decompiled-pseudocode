/*
 * XREFs of NtUserSetClassLongPtr @ 0x1C010E740
 * Callers:
 *     <none>
 * Callees:
 *     UserSetLastError @ 0x1C00D60E0 (UserSetLastError.c)
 *     xxxSetClassLongPtr @ 0x1C010E984 (xxxSetClassLongPtr.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C02DE410 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

__int64 __fastcall NtUserSetClassLongPtr(__int64 a1, unsigned int a2, ULONG64 a3, unsigned int a4)
{
  __int64 v8; // rcx
  __int64 v9; // rbx
  __int64 v10; // rdx
  __int64 v11; // r8
  __int64 v12; // r9
  ULONG64 v13; // rdx
  unsigned int *v14; // rdx
  __int64 v15; // rcx
  ULONG64 v16; // r8
  ULONG64 v17; // rdx
  _BYTE **v18; // rax
  __int64 v19; // r8
  ULONG64 v20; // rcx
  ULONG64 v21; // rdx
  int v23; // [rsp+20h] [rbp-98h]
  __int128 v24; // [rsp+38h] [rbp-80h] BYREF
  __int128 *v25; // [rsp+48h] [rbp-70h]
  ULONG64 v26; // [rsp+58h] [rbp-60h]
  __int128 v27; // [rsp+60h] [rbp-58h] BYREF
  __int128 v28; // [rsp+70h] [rbp-48h] BYREF
  __int64 v29; // [rsp+80h] [rbp-38h]
  __int128 v30; // [rsp+98h] [rbp-20h]
  ULONG64 v31; // [rsp+A8h] [rbp-10h]

  v27 = 0LL;
  v24 = 0LL;
  v25 = 0LL;
  v26 = 0LL;
  v28 = 0LL;
  v29 = 0LL;
  EnterCrit(0LL, 1LL);
  v9 = ValidateHwnd(a1);
  if ( v9 )
  {
    *(_QWORD *)&v28 = *(_QWORD *)(gptiCurrent + 416LL);
    *(_QWORD *)(gptiCurrent + 416LL) = &v28;
    *((_QWORD *)&v28 + 1) = v9;
    HMLockObject(v9);
    if ( a2 == -26 )
    {
      if ( (a3 & 0x10000) != 0 )
      {
        UserSetLastError(13LL, v10, v11);
        v9 = 0LL;
LABEL_25:
        ThreadUnlock1(v20, v21, v19);
        goto LABEL_26;
      }
    }
    else if ( a2 == -8 )
    {
      v26 = a3;
      v13 = a3;
      if ( a3 + 24 < a3 || a3 + 24 > MmUserProbeAddress )
        v13 = MmUserProbeAddress;
      v30 = *(_OWORD *)v13;
      v31 = *(_QWORD *)(v13 + 16);
      v24 = v30;
      v25 = (__int128 *)v31;
      v14 = (unsigned int *)v31;
      if ( v31 >= MmUserProbeAddress )
        v14 = (unsigned int *)MmUserProbeAddress;
      v15 = *v14;
      v23 = *v14;
      LODWORD(v27) = *v14;
      v16 = *((_QWORD *)v14 + 1);
      *((_QWORD *)&v27 + 1) = v16;
      if ( (v16 & 0xFFFFFFFFFFFF0000uLL) == 0 )
        goto LABEL_19;
      if ( (v16 & 1) != 0 )
        ExRaiseDatatypeMisalignment();
      v17 = (unsigned __int16)v15 + v16 + 2;
      v18 = (_BYTE **)MmUserProbeAddress;
      if ( v17 < MmUserProbeAddress && (unsigned __int16)v15 <= HIWORD(v23) )
      {
        if ( (v15 & 1) != 0 )
          goto LABEL_17;
        if ( v17 > v16 )
        {
LABEL_19:
          v25 = &v27;
          v9 = xxxSetClassLongPtr(v9, 4294967288LL, &v24, a4);
          v25 = 0LL;
          v20 = MmUserProbeAddress;
          v21 = MmUserProbeAddress;
          if ( a3 >= MmUserProbeAddress )
            a3 = MmUserProbeAddress;
          *(_OWORD *)a3 = v24;
          *(_QWORD *)(a3 + 16) = v25;
          goto LABEL_25;
        }
      }
      if ( (v15 & 1) == 0 )
      {
LABEL_18:
        **v18 = 0;
        goto LABEL_19;
      }
LABEL_17:
      MicrosoftTelemetryAssertTriggeredNoArgsKM(v15, v17, v16, v12);
      v18 = (_BYTE **)MmUserProbeAddress;
      goto LABEL_18;
    }
    v9 = xxxSetClassLongPtr(v9, a2, a3, a4);
    goto LABEL_25;
  }
LABEL_26:
  UserSessionSwitchLeaveCrit(v8);
  return v9;
}
