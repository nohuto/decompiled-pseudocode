/*
 * XREFs of ?WriteDiagEntry@VIDPN_MGR@@QEAAJPEAU_DXGK_DIAG_HEADER@@@Z @ 0x1C0018EC0
 * Callers:
 *     _BmlLogDiagnosticsPacket @ 0x1C014EBF0 (_BmlLogDiagnosticsPacket.c)
 * Callees:
 *     ?WriteDiagnosticEntry@DXGDIAGNOSTICS@@QEBAJPEAU_DXGK_DIAG_HEADER@@@Z @ 0x1C0008F34 (-WriteDiagnosticEntry@DXGDIAGNOSTICS@@QEBAJPEAU_DXGK_DIAG_HEADER@@@Z.c)
 */

__int64 __fastcall VIDPN_MGR::WriteDiagEntry(DXGFASTMUTEX ***this, struct _DXGK_DIAG_HEADER *a2)
{
  __int64 CurrentProcess; // rax
  __int128 v5; // xmm0
  __int64 v6; // rdx
  __int64 v7; // rcx
  DXGFASTMUTEX **v8; // r8
  struct _KTHREAD *CurrentThread; // rcx
  __int64 v11; // rax
  __int64 v12; // rax
  __int64 v13; // rax
  __int64 v14; // rax
  __int64 v15; // [rsp+38h] [rbp+10h]

  if ( !a2 || !*((_DWORD *)a2 + 1) )
  {
    v12 = WdLogNewEntry5_WdAssertion(this, a2);
    WdLogEvent5_WdAssertion(v12);
  }
  if ( a2 && *((_DWORD *)a2 + 1) >= 0x30u )
  {
    CurrentProcess = PsGetCurrentProcess();
    v5 = *(_OWORD *)PsGetProcessImageFileName(CurrentProcess);
    *((_DWORD *)a2 + 9) &= ~0x80000000;
    *((_OWORD *)a2 + 1) = v5;
    *((_DWORD *)a2 + 9) ^= (PsGetCurrentProcessSessionId() ^ *((_DWORD *)a2 + 9)) & 0x7FFFFFFF;
    *((_DWORD *)a2 + 8) = (unsigned int)PsGetCurrentThreadId();
    v15 = MEMORY[0xFFFFF78000000320];
    *((_QWORD *)a2 + 1) = v15 * KeQueryTimeIncrement();
    v8 = this[63];
    if ( v8 )
    {
      CurrentThread = KeGetCurrentThread();
      if ( this[5][2] != CurrentThread )
      {
        v11 = WdLogNewEntry5_WdAssertion(CurrentThread, v6);
        WdLogEvent5_WdAssertion(v11);
        v8 = this[63];
      }
      return DXGDIAGNOSTICS::WriteDiagnosticEntry(v8, a2);
    }
    else
    {
      v13 = WdLogNewEntry5_WdError(v7, v6);
      *(_QWORD *)(v13 + 24) = a2;
      *(_QWORD *)(v13 + 32) = this;
      WdLogEvent5_WdError(v13);
      return 3221225860LL;
    }
  }
  else
  {
    v14 = WdLogNewEntry5_WdError(this, a2);
    *(_QWORD *)(v14 + 24) = a2;
    WdLogEvent5_WdError(v14);
    return 3221225485LL;
  }
}
