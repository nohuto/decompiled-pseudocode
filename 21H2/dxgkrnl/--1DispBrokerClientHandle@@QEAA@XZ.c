/*
 * XREFs of ??1DispBrokerClientHandle@@QEAA@XZ @ 0x1C001EEEC
 * Callers:
 *     ?Assign@DispBrokerClientReference@@QEAAXPEAVDispBrokerClientHandle@@@Z @ 0x1C001EE84 (-Assign@DispBrokerClientReference@@QEAAXPEAVDispBrokerClientHandle@@@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall DispBrokerClientHandle::~DispBrokerClientHandle(DispBrokerClientHandle *this)
{
  ZwAlpcDisconnectPort(*((_QWORD *)this + 1), 0LL);
  ZwClose(*((HANDLE *)this + 1));
}
