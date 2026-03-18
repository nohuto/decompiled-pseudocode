/*
 * XREFs of NtUserGetClassInfoEx @ 0x1C00B9B70
 * Callers:
 *     <none>
 * Callees:
 *     PopAndFreeAlwaysW32ThreadLock @ 0x1C00B9A60 (PopAndFreeAlwaysW32ThreadLock.c)
 *     PushW32ThreadLock @ 0x1C00B9AE0 (PushW32ThreadLock.c)
 *     _GetClassInfoEx @ 0x1C00B9EB0 (_GetClassInfoEx.c)
 *     RegisterDefaultClass @ 0x1C00CFCF0 (RegisterDefaultClass.c)
 *     UserSetLastError @ 0x1C00D60E0 (UserSetLastError.c)
 *     RegisterIconTitleClass @ 0x1C011018C (RegisterIconTitleClass.c)
 *     memmove @ 0x1C015F5C0 (memmove.c)
 *     memset @ 0x1C015F880 (memset.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C02DE410 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

__int64 __fastcall NtUserGetClassInfoEx(__int64 a1, ULONG64 a2, ULONG64 a3, _QWORD *a4, int a5)
{
  _QWORD *v5; // r12
  __int64 v8; // rdx
  __int64 v9; // r8
  __int64 v10; // r9
  int v11; // edi
  __int64 v12; // rcx
  ULONG64 v13; // rcx
  int v14; // edi
  wchar_t *v15; // r14
  _BYTE **v16; // rax
  unsigned __int64 v17; // r15
  __int64 v18; // rax
  void *v19; // rdi
  __int64 v20; // rax
  _BYTE *v21; // rdx
  _DWORD *v22; // rdx
  unsigned __int16 ClassInfo; // ax
  int v25; // [rsp+30h] [rbp-E8h]
  int v26; // [rsp+34h] [rbp-E4h]
  wchar_t *Str1_8; // [rsp+50h] [rbp-C8h]
  __int64 v28; // [rsp+58h] [rbp-C0h] BYREF
  __int64 v29; // [rsp+68h] [rbp-B0h]
  __int128 v30; // [rsp+70h] [rbp-A8h] BYREF
  __int64 v31; // [rsp+80h] [rbp-98h]
  _OWORD v32[6]; // [rsp+90h] [rbp-88h] BYREF

  v5 = a4;
  v28 = 0LL;
  memset(v32, 0, 0x50uLL);
  v30 = 0LL;
  v31 = 0LL;
  v25 = 0;
  EnterCrit(0LL, 1LL);
  if ( (*(_DWORD *)(*(_QWORD *)(gptiCurrent + 424LL) + 12LL) & 0x10000000) == 0
    && !(unsigned int)RegisterIconTitleClass() )
  {
LABEL_3:
    v11 = 0;
    UserSetLastError(87LL);
    goto LABEL_33;
  }
  v13 = MmUserProbeAddress;
  if ( a2 >= MmUserProbeAddress )
    a2 = MmUserProbeAddress;
  v14 = *(_DWORD *)a2;
  v26 = *(_DWORD *)a2;
  v15 = *(wchar_t **)(a2 + 8);
  Str1_8 = v15;
  if ( ((unsigned __int64)v15 & 0xFFFFFFFFFFFF0000uLL) != 0 )
  {
    if ( ((unsigned __int8)v15 & 1) != 0 )
      ExRaiseDatatypeMisalignment();
    v13 = (ULONG64)v15 + (unsigned __int16)v14 + 2;
    v16 = (_BYTE **)MmUserProbeAddress;
    if ( v13 < MmUserProbeAddress && (unsigned __int16)v14 <= HIWORD(v26) )
    {
      if ( (v14 & 1) != 0 )
        goto LABEL_14;
      if ( v13 > (unsigned __int64)v15 )
        goto LABEL_16;
    }
    if ( (v14 & 1) == 0 )
    {
LABEL_15:
      **v16 = 0;
      goto LABEL_16;
    }
LABEL_14:
    MicrosoftTelemetryAssertTriggeredNoArgsKM(v13, v8, v9, v10);
    v16 = (_BYTE **)MmUserProbeAddress;
    goto LABEL_15;
  }
LABEL_16:
  if ( ((unsigned __int64)v15 & 0xFFFFFFFFFFFF0000uLL) != 0 )
  {
    v17 = (unsigned __int16)v14;
    v18 = Win32AllocPoolWithQuota((unsigned __int16)v14 + 2LL, 2020897621LL);
    v19 = (void *)v18;
    Str1_8 = (wchar_t *)v18;
    if ( !v18 )
      ExRaiseStatus(-1073741801);
    v25 = 1;
    PushW32ThreadLock(v18, &v30, (__int64)Win32FreePool);
    memmove(v19, v15, (unsigned int)v17);
    *((_WORD *)v19 + (v17 >> 1)) = 0;
    v5 = a4;
  }
  if ( PsGetCurrentProcessWow64Process(v13) )
  {
    v29 = 1LL;
    v20 = 0LL;
  }
  else
  {
    v29 = 4LL;
    v20 = 3LL;
  }
  if ( (v20 & a3) != 0 )
    ExRaiseDatatypeMisalignment();
  v21 = (_BYTE *)a3;
  if ( a3 >= MmUserProbeAddress )
    v21 = (_BYTE *)MmUserProbeAddress;
  *v21 = *v21;
  v21[79] = v21[79];
  v22 = v5;
  if ( (unsigned __int64)v5 >= MmUserProbeAddress )
    v22 = (_DWORD *)MmUserProbeAddress;
  *v22 = *v22;
  v32[0] = *(_OWORD *)a3;
  v32[1] = *(_OWORD *)(a3 + 16);
  v32[2] = *(_OWORD *)(a3 + 32);
  v32[3] = *(_OWORD *)(a3 + 48);
  v32[4] = *(_OWORD *)(a3 + 64);
  if ( (*(_DWORD *)(*(_QWORD *)(gptiCurrent + 424LL) + 12LL) & 0x2000) == 0
    && !(unsigned int)RegisterDefaultClass(Str1_8) )
  {
    goto LABEL_3;
  }
  ClassInfo = GetClassInfoEx(a1, Str1_8, v32, &v28, a5);
  v11 = ClassInfo;
  if ( ClassInfo )
  {
    *(_OWORD *)a3 = v32[0];
    *(_OWORD *)(a3 + 16) = v32[1];
    *(_OWORD *)(a3 + 32) = v32[2];
    *(_OWORD *)(a3 + 48) = v32[3];
    *(_OWORD *)(a3 + 64) = v32[4];
    *v5 = v28;
  }
LABEL_33:
  if ( v25 )
    PopAndFreeAlwaysW32ThreadLock((__int64)&v30);
  UserSessionSwitchLeaveCrit(v12);
  return v11;
}
