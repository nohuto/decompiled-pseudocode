/*
 * XREFs of ?VailSendWnfToDwm@DXGSESSIONDATA@@QEAAJH@Z @ 0x1C02B3988
 * Callers:
 *     ?NotifyVailSessionCallback@DXGVAILOBJECT@@SAEPEAXW4_SESSION_CALLBACK_REASON@@K@Z @ 0x1C02B0FA0 (-NotifyVailSessionCallback@DXGVAILOBJECT@@SAEPEAXW4_SESSION_CALLBACK_REASON@@K@Z.c)
 * Callees:
 *     ?Release@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C000CF20 (-Release@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C000D070 (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ??0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z @ 0x1C000DBC4 (--0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z.c)
 */

__int64 __fastcall DXGSESSIONDATA::VailSendWnfToDwm(DXGSESSIONDATA *this, int a2)
{
  __int64 v3; // rdi
  __int64 v4; // rdx
  struct _KPROCESS *v5; // rcx
  HANDLE ProcessId; // rax
  NTSTATUS v7; // eax
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // rax
  struct _CLIENT_ID ClientId; // [rsp+48h] [rbp+7h] BYREF
  _BYTE v13[16]; // [rsp+58h] [rbp+17h] BYREF
  struct _OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+68h] [rbp+27h] BYREF
  void *ProcessHandle; // [rsp+A8h] [rbp+67h] BYREF
  int v16; // [rsp+B0h] [rbp+6Fh] BYREF

  v16 = a2;
  LODWORD(v3) = 0;
  DXGAUTOMUTEX::DXGAUTOMUTEX((DXGAUTOMUTEX *)v13, (DXGSESSIONDATA *)((char *)this + 18648), 0);
  DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v13);
  v5 = (struct _KPROCESS *)*((_QWORD *)this + 2336);
  if ( v5 )
  {
    ClientId.UniqueThread = 0LL;
    ProcessId = PsGetProcessId(v5);
    memset(&ObjectAttributes.Length + 1, 0, 20);
    memset(&ObjectAttributes.Attributes + 1, 0, 20);
    ProcessHandle = 0LL;
    ClientId.UniqueProcess = ProcessId;
    ObjectAttributes.Length = 48;
    ObjectAttributes.Attributes = 576;
    v7 = ZwOpenProcess(&ProcessHandle, 0x2000000u, &ObjectAttributes, &ClientId);
    v3 = v7;
    if ( v7 < 0 )
    {
      v10 = WdLogNewEntry5_WdError(v9, v8);
      *(_QWORD *)(v10 + 24) = ClientId.UniqueProcess;
      *(_QWORD *)(v10 + 32) = v3;
      WdLogEvent5_WdError(v10);
    }
    else
    {
      LODWORD(v3) = ZwUpdateWnfStateData(&WNF_DX_VAIL_CHANGE_NOTIFICATION, &v16, 4LL, 0LL, ProcessHandle, 0, 0);
      ZwClose(ProcessHandle);
    }
  }
  if ( v13[8] )
    DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v13, v4);
  return (unsigned int)v3;
}
