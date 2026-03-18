/*
 * XREFs of EtwTraceUserIsActive @ 0x1C0065730
 * Callers:
 *     ?UpdateInputGlobals@CInputGlobals@@QEAA_N_KW4_LINP_SOURCE@@GKK@Z @ 0x1C0065400 (-UpdateInputGlobals@CInputGlobals@@QEAA_N_KW4_LINP_SOURCE@@GKK@Z.c)
 * Callees:
 *     McTemplateK0qqm_EtwWriteTransfer @ 0x1C0129378 (McTemplateK0qqm_EtwWriteTransfer.c)
 */

LONGLONG __fastcall EtwTraceUserIsActive(_DWORD *a1, LONGLONG *a2)
{
  LONGLONG result; // rax
  unsigned __int64 v5; // r9
  __int64 v6; // rcx
  int v7; // ebx
  struct _KPROCESS *v8; // rcx
  LONGLONG v9; // [rsp+50h] [rbp+18h] BYREF

  result = 0LL;
  v5 = (MEMORY[0xFFFFF78000000320] * (unsigned __int64)MEMORY[0xFFFFF78000000004]) >> 24;
  if ( (unsigned int)v5 - W32kEtwUserActiveLastEventLogMs < 0xEA60 )
    return result;
  W32kEtwUserActiveLastEventLogMs = v5;
  if ( !gptiForeground )
  {
    v7 = 0;
    goto LABEL_12;
  }
  v6 = *((_QWORD *)gptiForeground + 53);
  v7 = *(_DWORD *)(v6 + 56);
  v8 = *(struct _KPROCESS **)v6;
  if ( !v8 )
  {
LABEL_12:
    v9 = 0LL;
    goto LABEL_5;
  }
  result = PsGetProcessCreateTimeQuadPart(v8);
  v9 = result;
LABEL_5:
  if ( a1 )
    *a1 = v7;
  if ( a2 )
    *a2 = result;
  if ( (W32kEtwEnabledKeyword & 0x8000000000020000uLL) != 0
    && (unsigned __int8)(byte_1C0243738 - 1) > 2u
    && (qword_1C0243720 & 0x8000000000020000uLL) != 0
    && (qword_1C0243728 & 0x8000000000020000uLL) == qword_1C0243728
    && (Microsoft_Windows_Win32kEnableBits & 0x20) != 0 )
  {
    McTemplateK0qqm_EtwWriteTransfer((unsigned int)&v9, (_DWORD)a2, 0x20000, v5, v7, (__int64)&v9);
  }
  return 1LL;
}
