/*
 * XREFs of ?ExecutingInSensorHostingProcess@CBaseInput@@IEBA_NXZ @ 0x1C0023698
 * Callers:
 *     ?HandleDirectStartStopDeviceReadRequest@CHidInput@@QEAAXXZ @ 0x1C0023600 (-HandleDirectStartStopDeviceReadRequest@CHidInput@@QEAAXXZ.c)
 *     ?HandleRemoteLocalDeviceDetached@CBaseInput@@AEAAJXZ @ 0x1C00236D0 (-HandleRemoteLocalDeviceDetached@CBaseInput@@AEAAJXZ.c)
 * Callees:
 *     <none>
 */

bool __fastcall CBaseInput::ExecutingInSensorHostingProcess(CBaseInput *this, __int64 a2)
{
  if ( *((_QWORD *)this + 2) )
    return *(_QWORD *)(*((_QWORD *)this + 2) + 32LL) == PsGetCurrentProcess(this, a2);
  else
    return *((_DWORD *)this + 318) == ((unsigned int)PsGetCurrentProcessId() & 0xFFFFFFFC);
}
