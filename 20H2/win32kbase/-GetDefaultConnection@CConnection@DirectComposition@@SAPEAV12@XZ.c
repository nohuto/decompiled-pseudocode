/*
 * XREFs of ?GetDefaultConnection@CConnection@DirectComposition@@SAPEAV12@XZ @ 0x1C0061F54
 * Callers:
 *     ??_GCProcessData@DirectComposition@@AEAAPEAXI@Z @ 0x1C0061750 (--_GCProcessData@DirectComposition@@AEAAPEAXI@Z.c)
 *     NtDCompositionGetFrameStatistics @ 0x1C0061870 (NtDCompositionGetFrameStatistics.c)
 *     NtDCompositionGetFrameSurfaceUpdates @ 0x1C0061AC0 (NtDCompositionGetFrameSurfaceUpdates.c)
 *     NtDCompositionGetFrameLegacyTokens @ 0x1C0061CF0 (NtDCompositionGetFrameLegacyTokens.c)
 *     ?ObjectInit@ResourceObject@DirectComposition@@KAJPEAUCompositionObject@@PEAXPEAPEAVICompositionObject@@@Z @ 0x1C0062040 (-ObjectInit@ResourceObject@DirectComposition@@KAJPEAUCompositionObject@@PEAXPEAPEAVICompositionO.c)
 *     ?Create@CApplicationChannel@DirectComposition@@SAJPEAI0PEAPEAX@Z @ 0x1C0064EE8 (-Create@CApplicationChannel@DirectComposition@@SAJPEAI0PEAPEAX@Z.c)
 *     DCompositionIsShellProcess @ 0x1C00652E0 (DCompositionIsShellProcess.c)
 *     ?Create@CDwmChannel@DirectComposition@@SAJPEAI@Z @ 0x1C00B79BC (-Create@CDwmChannel@DirectComposition@@SAJPEAI@Z.c)
 *     DCompositionForceRender @ 0x1C00CB0E4 (DCompositionForceRender.c)
 *     DCompositionDDAChange @ 0x1C01CC1A4 (DCompositionDDAChange.c)
 *     NtDCompositionCommitSynchronizationObject @ 0x1C01CC360 (NtDCompositionCommitSynchronizationObject.c)
 *     NtDCompositionCreateSynchronizationObject @ 0x1C01CC4A0 (NtDCompositionCreateSynchronizationObject.c)
 *     NtDCompositionEnableMMCSS @ 0x1C01CCAF0 (NtDCompositionEnableMMCSS.c)
 *     NtDesktopCaptureBits @ 0x1C01CCEF0 (NtDesktopCaptureBits.c)
 * Callees:
 *     <none>
 */

struct DirectComposition::CConnection *__fastcall DirectComposition::CConnection::GetDefaultConnection(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4)
{
  volatile signed __int32 *v4; // rbx
  __int64 CurrentProcessWin32Process; // rax
  __int64 v6; // rdi
  struct _ERESOURCE *v7; // rbx
  struct _ERESOURCE *v9; // rdi

  v4 = 0LL;
  CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(a1, a2, a3, a4);
  if ( !CurrentProcessWin32Process )
    goto LABEL_7;
  v6 = *(_QWORD *)(CurrentProcessWin32Process + 256);
  if ( !v6 )
    goto LABEL_7;
  v7 = *(struct _ERESOURCE **)(v6 + 32);
  KeEnterCriticalRegion();
  ExAcquireResourceSharedLite(v7, 1u);
  v4 = *(volatile signed __int32 **)(v6 + 24);
  if ( v4 )
    _InterlockedIncrement(v4);
  ExReleaseResourceLite(*(PERESOURCE *)(v6 + 32));
  KeLeaveCriticalRegion();
  if ( !v4 )
  {
LABEL_7:
    v9 = DirectComposition::CConnection::s_pSessionConnectionLock;
    if ( DirectComposition::CConnection::s_pSessionConnectionLock )
    {
      KeEnterCriticalRegion();
      ExAcquireResourceExclusiveLite(v9, 1u);
      v4 = (volatile signed __int32 *)DirectComposition::CConnection::s_pSessionConnection;
      if ( DirectComposition::CConnection::s_pSessionConnection )
        _InterlockedIncrement((volatile signed __int32 *)DirectComposition::CConnection::s_pSessionConnection);
      ExReleaseResourceLite(DirectComposition::CConnection::s_pSessionConnectionLock);
      KeLeaveCriticalRegion();
    }
  }
  return (struct DirectComposition::CConnection *)v4;
}
