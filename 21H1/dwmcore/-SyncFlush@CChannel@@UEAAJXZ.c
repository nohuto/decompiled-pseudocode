/*
 * XREFs of ?SyncFlush@CChannel@@UEAAJXZ @ 0x1800D8FC0
 * Callers:
 *     ?SyncDesktopCaptureBits@CChannel@@UEAAJU_LUID@@HHIIW4DXGI_FORMAT@@_KPEAX@Z @ 0x1800D8DD0 (-SyncDesktopCaptureBits@CChannel@@UEAAJU_LUID@@HHIIW4DXGI_FORMAT@@_KPEAX@Z.c)
 *     ?SendSyncCommand@CChannel@@AEAAJPEBXIPEAUMIL_MESSAGE@@@Z @ 0x1801543A4 (-SendSyncCommand@CChannel@@AEAAJPEBXIPEAUMIL_MESSAGE@@@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18002E8BC (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?SynchronizeChannel@CInternalMilCmdConnection@@QEAAJI@Z @ 0x1800D9008 (-SynchronizeChannel@CInternalMilCmdConnection@@QEAAJI@Z.c)
 */

__int64 __fastcall CChannel::SyncFlush(CChannel *this)
{
  unsigned int v1; // edx
  int v3; // eax
  __int64 v4; // rcx
  unsigned int v5; // edi

  v1 = *((_DWORD *)this + 14);
  *((_BYTE *)this + 208) = 1;
  v3 = CInternalMilCmdConnection::SynchronizeChannel(*((CInternalMilCmdConnection **)this + 6), v1);
  v5 = v3;
  if ( v3 < 0 )
    MilInstrumentationCheckHR_MaybeFailFast(v4, 0LL, 0, v3, 0x252u, 0LL);
  *((_BYTE *)this + 208) = 0;
  return v5;
}
