/*
 * XREFs of EngHangNotification @ 0x1C0273630
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C015F580 (_guard_dispatch_icall_nop.c)
 *     memmove @ 0x1C015F5C0 (memmove.c)
 */

ULONG __stdcall EngHangNotification(HDEV hDev, PVOID Reserved)
{
  ULONG v3; // edi
  __int64 v4; // rax
  __int64 v5; // rbp
  __int64 v6; // rax
  __int64 v7; // rcx
  __int64 v8; // rax
  _WORD *v9; // r15
  unsigned int v10; // r12d
  unsigned int v11; // r13d
  UCHAR v12; // bl
  void *DriverObject; // rax
  char *ErrorLogEntry; // rax
  char *v15; // r14
  unsigned int (__fastcall *v16)(_QWORD, _QWORD); // rax
  __int64 v17; // rax

  v3 = 1;
  v4 = WdLogNewEntry5_WdEvent(hDev, Reserved);
  *(_QWORD *)(v4 + 24) = hDev;
  WdLogEvent5_WdEvent(v4);
  if ( hDev )
  {
    v5 = *((_QWORD *)hDev + 322);
    if ( ((v5 + 4) & 0xFFFFFFFFFFFFFFFBuLL) == 0 )
    {
      v17 = WdLogNewEntry5_WdTrace();
      goto LABEL_13;
    }
    DbgPrint("GDI: EngHangNotification: %ls is not responding.\n", (const wchar_t *)(v5 + 64));
    v6 = WdLogNewEntry5_WdTrace();
    *(_QWORD *)(v6 + 24) = v5;
    WdLogEvent5_WdTrace(v6);
    v7 = -1LL;
    v8 = -1LL;
    do
      ++v8;
    while ( *(_WORD *)(v5 + 2 * v8) );
    v9 = *(_WORD **)(v5 + 208);
    v10 = 2 * v8 + 2;
    do
      ++v7;
    while ( v9[v7] );
    v11 = 2 * v7 + 2;
    v12 = 2 * v7 + 2 + 2 * v8 + 42;
    DriverObject = (void *)UserGetDriverObject();
    ErrorLogEntry = (char *)IoAllocateErrorLogEntry(DriverObject, v12);
    v15 = ErrorLogEntry;
    if ( ErrorLogEntry )
    {
      *((_DWORD *)ErrorLogEntry + 3) = -1073741436;
      *((_DWORD *)ErrorLogEntry + 1) = 2621442;
      memmove(ErrorLogEntry + 40, (const void *)v5, v10);
      memmove(&v15[v10 + 40], v9, v11);
      IoWriteErrorLogEntry(v15);
    }
    v16 = (unsigned int (__fastcall *)(_QWORD, _QWORD))*((_QWORD *)hDev + 425);
    if ( v16 && !v16(*((_QWORD *)hDev + 225), 0LL) )
      v3 = 0;
  }
  v17 = WdLogNewEntry5_WdTrace();
  *(_QWORD *)(v17 + 24) = v3;
LABEL_13:
  WdLogEvent5_WdTrace(v17);
  return v3;
}
