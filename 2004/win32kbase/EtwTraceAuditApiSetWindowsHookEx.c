/*
 * XREFs of EtwTraceAuditApiSetWindowsHookEx @ 0x1C01275A0
 * Callers:
 *     <none>
 * Callees:
 *     McTemplateK0qzppq_EtwWriteTransfer @ 0x1C001B1D8 (McTemplateK0qzppq_EtwWriteTransfer.c)
 *     ?RtlStringCchCopyW@@YAJPEAG_KPEBG@Z @ 0x1C002F194 (-RtlStringCchCopyW@@YAJPEAG_KPEBG@Z.c)
 *     __security_check_cookie @ 0x1C00CCA30 (__security_check_cookie.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C01FBBDC (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

void __fastcall EtwTraceAuditApiSetWindowsHookEx(__int64 a1, unsigned int *a2, __int64 a3, char a4, char a5)
{
  char v6; // r14
  int v7; // esi
  char v8; // al
  unsigned __int16 *v9; // rbx
  __int64 v10; // rcx
  size_t *v11; // rdi
  ULONG64 v12; // rdx
  _BYTE **v13; // rax
  int v14; // [rsp+40h] [rbp-288h]
  unsigned __int16 v15[264]; // [rsp+80h] [rbp-248h] BYREF

  v6 = a3;
  v7 = a1;
  if ( (W32kEtwEnabledKeyword & 0x400) != 0 )
  {
    LOBYTE(a3) = 1;
    if ( (unsigned __int8)(byte_1C0245748 - 1) > 2u
      && (qword_1C0245730 & 0x400) != 0
      && (qword_1C0245738 & 0x400) == qword_1C0245738 )
    {
      v8 = 1;
      v9 = 0LL;
    }
    else
    {
      v9 = 0LL;
      v8 = 0;
    }
    if ( v8 )
    {
      if ( !a2 )
        goto LABEL_21;
      if ( (unsigned __int64)a2 >= MmUserProbeAddress )
        a2 = (unsigned int *)MmUserProbeAddress;
      v10 = *a2;
      v14 = *a2;
      v11 = (size_t *)*((_QWORD *)a2 + 1);
      if ( ((unsigned __int8)v11 & 1) != 0 )
        ExRaiseDatatypeMisalignment();
      v12 = (ULONG64)v11 + (unsigned __int16)v10 + 2;
      v13 = (_BYTE **)MmUserProbeAddress;
      if ( v12 < MmUserProbeAddress && (unsigned __int16)v10 <= HIWORD(v14) )
      {
        if ( (v10 & 1) != 0 )
          goto LABEL_18;
        if ( v12 > (unsigned __int64)v11 )
        {
LABEL_20:
          RtlStringCchCopyW(v15, 0x104uLL, v11);
          v9 = v15;
LABEL_21:
          if ( (Microsoft_Windows_Win32kEnableBits & 0x800000000LL) != 0 )
            McTemplateK0qzppq_EtwWriteTransfer(a1, (__int64)a2, a3, v7, v9, v6, a4, a5);
          return;
        }
      }
      if ( (v10 & 1) == 0 )
      {
LABEL_19:
        **v13 = 0;
        goto LABEL_20;
      }
LABEL_18:
      MicrosoftTelemetryAssertTriggeredNoArgsKM(v10, v12, a3, 1024LL);
      v13 = (_BYTE **)MmUserProbeAddress;
      goto LABEL_19;
    }
  }
}
