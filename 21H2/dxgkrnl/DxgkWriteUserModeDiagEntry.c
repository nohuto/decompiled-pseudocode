/*
 * XREFs of DxgkWriteUserModeDiagEntry @ 0x1C0226C8C
 * Callers:
 *     DxgkEscape @ 0x1C00F9100 (DxgkEscape.c)
 * Callees:
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C00041C0 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?WriteDiagnosticEntry@DXGDIAGNOSTICS@@QEBAJPEAU_DXGK_DIAG_HEADER@@@Z @ 0x1C000AAD8 (-WriteDiagnosticEntry@DXGDIAGNOSTICS@@QEBAJPEAU_DXGK_DIAG_HEADER@@@Z.c)
 */

__int64 __fastcall DxgkWriteUserModeDiagEntry(struct _DXGK_DIAG_HEADER *a1, __int64 a2)
{
  __int64 v3; // rax
  __int64 v5; // rdx
  __int64 v6; // rcx
  struct DXGGLOBAL *Global; // rdi
  __int64 v8; // rax
  __int64 CurrentProcess; // rax
  __int128 v10; // xmm0
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // rdx
  DXGFASTMUTEX **v14; // rcx
  __int64 v15; // [rsp+30h] [rbp+8h]

  if ( *((_DWORD *)a1 + 1) >= 0x400u )
  {
    v3 = WdLogNewEntry5_WdError(a1, a2);
    *(_QWORD *)(v3 + 24) = *((unsigned int *)a1 + 1);
    *(_QWORD *)(v3 + 32) = 1024LL;
    WdLogEvent5_WdError(v3);
    return 3221225485LL;
  }
  Global = DXGGLOBAL::GetGlobal((__int64)a1, a2);
  if ( !Global )
  {
    v8 = WdLogNewEntry5_WdError(v6, v5);
LABEL_5:
    *(_QWORD *)(v8 + 24) = a1;
    WdLogEvent5_WdError(v8);
    return 3221225860LL;
  }
  CurrentProcess = PsGetCurrentProcess(v6, v5);
  v10 = *(_OWORD *)PsGetProcessImageFileName(CurrentProcess);
  *((_DWORD *)a1 + 9) &= ~0x80000000;
  *((_OWORD *)a1 + 1) = v10;
  *((_DWORD *)a1 + 9) ^= (PsGetCurrentProcessSessionId(v12, v11) ^ *((_DWORD *)a1 + 9)) & 0x7FFFFFFF;
  *((_DWORD *)a1 + 8) = (unsigned int)PsGetCurrentThreadId();
  v15 = MEMORY[0xFFFFF78000000320];
  *((_QWORD *)a1 + 1) = v15 * KeQueryTimeIncrement();
  v14 = (DXGFASTMUTEX **)*((_QWORD *)Global + 101);
  if ( !v14 )
  {
    v8 = WdLogNewEntry5_WdError(0LL, v13);
    *(_QWORD *)(v8 + 32) = Global;
    goto LABEL_5;
  }
  return DXGDIAGNOSTICS::WriteDiagnosticEntry(v14, a1);
}
