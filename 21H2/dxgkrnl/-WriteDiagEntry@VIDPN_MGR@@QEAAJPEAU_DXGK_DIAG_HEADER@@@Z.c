/*
 * XREFs of ?WriteDiagEntry@VIDPN_MGR@@QEAAJPEAU_DXGK_DIAG_HEADER@@@Z @ 0x1C0013920
 * Callers:
 *     _BmlLogDiagnosticsPacket @ 0x1C01C0A6C (_BmlLogDiagnosticsPacket.c)
 * Callees:
 *     ?WriteDiagnosticEntry@DXGDIAGNOSTICS@@QEBAJPEAU_DXGK_DIAG_HEADER@@@Z @ 0x1C00124C0 (-WriteDiagnosticEntry@DXGDIAGNOSTICS@@QEBAJPEAU_DXGK_DIAG_HEADER@@@Z.c)
 */

__int64 __fastcall VIDPN_MGR::WriteDiagEntry(VIDPN_MGR *this, struct _DXGK_DIAG_HEADER *a2)
{
  __int64 CurrentProcess; // rax
  __int128 v5; // xmm0
  __int64 v6; // rbx
  DXGDIAGNOSTICS *v7; // rcx

  if ( (a2 && *((_DWORD *)a2 + 1) || (WdLogSingleEntry0(1LL), a2)) && *((_DWORD *)a2 + 1) >= 0x30u )
  {
    CurrentProcess = PsGetCurrentProcess();
    v5 = *(_OWORD *)PsGetProcessImageFileName(CurrentProcess);
    *((_DWORD *)a2 + 9) &= ~0x80000000;
    *((_OWORD *)a2 + 1) = v5;
    *((_DWORD *)a2 + 9) ^= (PsGetCurrentProcessSessionId() ^ *((_DWORD *)a2 + 9)) & 0x7FFFFFFF;
    *((_DWORD *)a2 + 8) = (unsigned int)PsGetCurrentThreadId();
    v6 = MEMORY[0xFFFFF78000000320];
    *((_QWORD *)a2 + 1) = v6 * KeQueryTimeIncrement();
    v7 = (DXGDIAGNOSTICS *)*((_QWORD *)this + 70);
    if ( v7 )
    {
      if ( *((struct _KTHREAD **)this + 8) != KeGetCurrentThread() )
      {
        WdLogSingleEntry0(1LL);
        v7 = (DXGDIAGNOSTICS *)*((_QWORD *)this + 70);
      }
      return DXGDIAGNOSTICS::WriteDiagnosticEntry(v7, a2);
    }
    else
    {
      WdLogSingleEntry2(2LL, a2, this);
      return 3221225860LL;
    }
  }
  else
  {
    WdLogSingleEntry1(2LL, a2);
    return 3221225485LL;
  }
}
