/*
 * XREFs of ?ReleaseExtraDataSection@CApiPortClient@@AEAAXXZ @ 0x18000BA90
 * Callers:
 *     ??1CApiPortClient@@QEAA@XZ @ 0x18000B354 (--1CApiPortClient@@QEAA@XZ.c)
 * Callees:
 *     <none>
 */

void __fastcall CApiPortClient::ReleaseExtraDataSection(CApiPortClient *this)
{
  PVOID v1; // rbx
  HANDLE CurrentProcess; // rax

  EnterCriticalSection(&stru_180014B90);
  v1 = BaseAddress;
  if ( BaseAddress )
  {
    CurrentProcess = GetCurrentProcess();
    NtUnmapViewOfSection(CurrentProcess, v1);
    BaseAddress = 0LL;
  }
  if ( hObject )
  {
    CloseHandle(hObject);
    hObject = 0LL;
  }
  LeaveCriticalSection(&stru_180014B90);
}
