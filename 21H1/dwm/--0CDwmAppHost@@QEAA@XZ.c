/*
 * XREFs of ??0CDwmAppHost@@QEAA@XZ @ 0x140002C48
 * Callers:
 *     _dynamic_initializer_for__g_dwmAppHost__ @ 0x140001050 (_dynamic_initializer_for__g_dwmAppHost__.c)
 * Callees:
 *     <none>
 */

CDwmAppHost *__fastcall CDwmAppHost::CDwmAppHost(CDwmAppHost *this)
{
  HANDLE CurrentProcess; // rax
  NTSTATUS InformationProcess; // eax
  int v3; // ecx
  bool v4; // sf
  CDwmAppHost *result; // rax
  _OWORD ProcessInformation[2]; // [rsp+30h] [rbp-38h] BYREF
  __int128 v7; // [rsp+50h] [rbp-18h]

  byte_140015B60 = 1;
  qword_140015B20 = 0LL;
  *(_OWORD *)&g_dwmAppHost = 0LL;
  dword_140015B28 = 0;
  hwnd = 0LL;
  qword_140015B48 = (__int64)&CSettingsManager::`vftable';
  qword_140015B70 = 0LL;
  dword_140015B78 = 0;
  *(_QWORD *)&uExitCode = 0LL;
  byte_140015B90 = 0;
  qword_140015B98 = 0LL;
  byte_140015BA0 = 0;
  qword_140015BA8 = 0LL;
  word_140015BB0 = 0;
  memset(ProcessInformation, 0, sizeof(ProcessInformation));
  qword_140015B38 = 0LL;
  qword_140015B40 = 0LL;
  v7 = 0LL;
  dword_140015BA4 = 3000;
  CurrentProcess = GetCurrentProcess();
  InformationProcess = NtQueryInformationProcess(
                         CurrentProcess,
                         ProcessBasicInformation,
                         ProcessInformation,
                         0x30u,
                         0LL);
  v3 = qword_140015B20;
  v4 = InformationProcess < 0;
  result = (CDwmAppHost *)&g_dwmAppHost;
  if ( !v4 )
    v3 = DWORD2(v7);
  LODWORD(qword_140015B20) = v3;
  return result;
}
