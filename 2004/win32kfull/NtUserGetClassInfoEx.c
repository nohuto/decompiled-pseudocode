/*
 * XREFs of NtUserGetClassInfoEx @ 0x1C001DF70
 * Callers:
 *     <none>
 * Callees:
 *     PushW32ThreadLock @ 0x1C001DE60 (PushW32ThreadLock.c)
 *     PopAndFreeAlwaysW32ThreadLock @ 0x1C001DEF0 (PopAndFreeAlwaysW32ThreadLock.c)
 *     _GetClassInfoEx @ 0x1C001E340 (_GetClassInfoEx.c)
 *     UserSetLastError @ 0x1C0090F00 (UserSetLastError.c)
 *     RegisterDefaultClass @ 0x1C00A2B84 (RegisterDefaultClass.c)
 *     RegisterIconTitleClass @ 0x1C010F4AC (RegisterIconTitleClass.c)
 *     memmove @ 0x1C015BD40 (memmove.c)
 *     memset @ 0x1C015C000 (memset.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C02DF7C4 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

__int64 __fastcall NtUserGetClassInfoEx(__int64 a1, ULONG64 a2, ULONG64 a3, _QWORD *a4, int a5)
{
  _QWORD *v5; // r12
  int v8; // edi
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // r8
  ULONG64 v12; // rcx
  int v13; // edi
  wchar_t *v14; // r14
  _BYTE **v15; // rax
  unsigned __int64 v16; // r15
  __int64 v17; // rax
  void *v18; // rdi
  __int64 v19; // rax
  _BYTE *v20; // rdx
  _DWORD *v21; // rdx
  unsigned __int16 ClassInfo; // ax
  int v24; // [rsp+30h] [rbp-E8h]
  int v25; // [rsp+34h] [rbp-E4h]
  wchar_t *Str1_8; // [rsp+50h] [rbp-C8h]
  __int64 v27; // [rsp+58h] [rbp-C0h] BYREF
  __int64 v28; // [rsp+68h] [rbp-B0h]
  __int128 v29; // [rsp+70h] [rbp-A8h] BYREF
  __int64 v30; // [rsp+80h] [rbp-98h]
  _OWORD v31[6]; // [rsp+90h] [rbp-88h] BYREF

  v5 = a4;
  v27 = 0LL;
  memset(v31, 0, 0x50uLL);
  v29 = 0LL;
  v30 = 0LL;
  v24 = 0;
  EnterCrit(0LL, 1LL);
  if ( (*(_DWORD *)(*(_QWORD *)(gptiCurrent + 416LL) + 12LL) & 0x10000000) == 0
    && !(unsigned int)RegisterIconTitleClass() )
  {
LABEL_3:
    v8 = 0;
    UserSetLastError(87LL);
    goto LABEL_33;
  }
  v12 = MmUserProbeAddress;
  if ( a2 >= MmUserProbeAddress )
    a2 = MmUserProbeAddress;
  v13 = *(_DWORD *)a2;
  v25 = *(_DWORD *)a2;
  v14 = *(wchar_t **)(a2 + 8);
  Str1_8 = v14;
  if ( ((unsigned __int64)v14 & 0xFFFFFFFFFFFF0000uLL) != 0 )
  {
    if ( ((unsigned __int8)v14 & 1) != 0 )
      ExRaiseDatatypeMisalignment();
    v12 = (ULONG64)v14 + (unsigned __int16)v13 + 2;
    v15 = (_BYTE **)MmUserProbeAddress;
    if ( v12 < MmUserProbeAddress && (unsigned __int16)v13 <= HIWORD(v25) )
    {
      if ( (v13 & 1) != 0 )
        goto LABEL_14;
      if ( v12 > (unsigned __int64)v14 )
        goto LABEL_16;
    }
    if ( (v13 & 1) == 0 )
    {
LABEL_15:
      **v15 = 0;
      goto LABEL_16;
    }
LABEL_14:
    MicrosoftTelemetryAssertTriggeredNoArgsKM();
    v15 = (_BYTE **)MmUserProbeAddress;
    goto LABEL_15;
  }
LABEL_16:
  if ( ((unsigned __int64)v14 & 0xFFFFFFFFFFFF0000uLL) != 0 )
  {
    v16 = (unsigned __int16)v13;
    v17 = Win32AllocPoolWithQuota((unsigned __int16)v13 + 2LL, 2020897621LL);
    v18 = (void *)v17;
    Str1_8 = (wchar_t *)v17;
    if ( !v17 )
      ExRaiseStatus(-1073741801);
    v24 = 1;
    PushW32ThreadLock(v17, &v29, (__int64)Win32FreePool);
    memmove(v18, v14, (unsigned int)v16);
    *((_WORD *)v18 + (v16 >> 1)) = 0;
    v5 = a4;
  }
  if ( PsGetCurrentProcessWow64Process(v12) )
  {
    v28 = 1LL;
    v19 = 0LL;
  }
  else
  {
    v28 = 4LL;
    v19 = 3LL;
  }
  if ( (v19 & a3) != 0 )
    ExRaiseDatatypeMisalignment();
  v20 = (_BYTE *)a3;
  if ( a3 >= MmUserProbeAddress )
    v20 = (_BYTE *)MmUserProbeAddress;
  *v20 = *v20;
  v20[79] = v20[79];
  v21 = v5;
  if ( (unsigned __int64)v5 >= MmUserProbeAddress )
    v21 = (_DWORD *)MmUserProbeAddress;
  *v21 = *v21;
  v31[0] = *(_OWORD *)a3;
  v31[1] = *(_OWORD *)(a3 + 16);
  v31[2] = *(_OWORD *)(a3 + 32);
  v31[3] = *(_OWORD *)(a3 + 48);
  v31[4] = *(_OWORD *)(a3 + 64);
  if ( (*(_DWORD *)(*(_QWORD *)(gptiCurrent + 416LL) + 12LL) & 0x2000) == 0
    && !(unsigned int)RegisterDefaultClass(Str1_8) )
  {
    goto LABEL_3;
  }
  ClassInfo = GetClassInfoEx(a1, Str1_8, v31, &v27, a5);
  v8 = ClassInfo;
  if ( ClassInfo )
  {
    *(_OWORD *)a3 = v31[0];
    *(_OWORD *)(a3 + 16) = v31[1];
    *(_OWORD *)(a3 + 32) = v31[2];
    *(_OWORD *)(a3 + 48) = v31[3];
    *(_OWORD *)(a3 + 64) = v31[4];
    *v5 = v27;
  }
LABEL_33:
  if ( v24 )
    PopAndFreeAlwaysW32ThreadLock((__int64)&v29);
  UserSessionSwitchLeaveCrit(v10, v9, v11);
  return v8;
}
