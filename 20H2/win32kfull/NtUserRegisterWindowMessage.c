/*
 * XREFs of NtUserRegisterWindowMessage @ 0x1C00ED710
 * Callers:
 *     <none>
 * Callees:
 *     UserSetLastStatus @ 0x1C008004C (UserSetLastStatus.c)
 *     UserSetLastError @ 0x1C00D60E0 (UserSetLastError.c)
 *     __security_check_cookie @ 0x1C015A0C0 (__security_check_cookie.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C02DE410 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

__int64 __fastcall NtUserRegisterWindowMessage(ULONG64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  unsigned int *v4; // rdi
  __int64 v5; // rcx
  _WORD *v6; // rdi
  ULONG64 v7; // rdx
  _BYTE **v8; // rax
  unsigned int v9; // ebx
  __int64 v10; // r9
  __int64 v11; // r8
  _WORD *v12; // rax
  NTSTATUS v13; // ecx
  __int64 v14; // rdx
  int v16; // [rsp+20h] [rbp-278h]
  _BYTE v17[512]; // [rsp+80h] [rbp-218h] BYREF

  v4 = (unsigned int *)a1;
  if ( a1 >= MmUserProbeAddress )
    v4 = (unsigned int *)MmUserProbeAddress;
  v5 = *v4;
  v16 = *v4;
  v6 = (_WORD *)*((_QWORD *)v4 + 1);
  if ( ((unsigned __int8)v6 & 1) != 0 )
    ExRaiseDatatypeMisalignment();
  v7 = (ULONG64)v6 + (unsigned __int16)v5 + 2;
  v8 = (_BYTE **)MmUserProbeAddress;
  if ( v7 >= MmUserProbeAddress || (unsigned __int16)v5 > HIWORD(v16) )
    goto LABEL_10;
  if ( (v5 & 1) != 0 )
    goto LABEL_11;
  if ( v7 <= (unsigned __int64)v6 )
  {
LABEL_10:
    if ( (v5 & 1) == 0 )
    {
LABEL_12:
      v9 = 0;
      **v8 = 0;
      goto LABEL_13;
    }
LABEL_11:
    MicrosoftTelemetryAssertTriggeredNoArgsKM(v5, v7, a3, a4);
    v8 = (_BYTE **)MmUserProbeAddress;
    goto LABEL_12;
  }
  v9 = 0;
LABEL_13:
  v10 = 2147483646LL;
  v11 = 256LL;
  v12 = v17;
  v13 = 0;
  v14 = 0LL;
  while ( v11 )
  {
    if ( !v10 || !*v6 )
      goto LABEL_20;
    *v12++ = *v6++;
    --v11;
    --v10;
    ++v14;
  }
  --v12;
  v13 = -2147483643;
LABEL_20:
  *v12 = 0;
  if ( v13 >= 0 )
    return (unsigned __int16)UserAddAtomEx(v17, 0LL, 2LL);
  else
    UserSetLastStatus(v13, 1);
  return v9;
}
