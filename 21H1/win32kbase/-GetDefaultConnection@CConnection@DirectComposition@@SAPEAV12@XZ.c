/*
 * XREFs of ?GetDefaultConnection@CConnection@DirectComposition@@SAPEAV12@XZ @ 0x1C00BAD24
 * Callers:
 *     ?Create@CDwmChannel@DirectComposition@@SAJPEAI@Z @ 0x1C004A1DC (-Create@CDwmChannel@DirectComposition@@SAJPEAI@Z.c)
 *     ??_GCProcessData@DirectComposition@@AEAAPEAXI@Z @ 0x1C00947A8 (--_GCProcessData@DirectComposition@@AEAAPEAXI@Z.c)
 *     DCompositionIsShellProcess @ 0x1C00B5F8C (DCompositionIsShellProcess.c)
 *     ?Create@CApplicationChannel@DirectComposition@@SAJPEAI0PEAPEAX@Z @ 0x1C00B633C (-Create@CApplicationChannel@DirectComposition@@SAJPEAI0PEAPEAX@Z.c)
 *     ?ObjectInit@ResourceObject@DirectComposition@@KAJPEAUCompositionObject@@PEAXPEAPEAVICompositionObject@@@Z @ 0x1C00B81B0 (-ObjectInit@ResourceObject@DirectComposition@@KAJPEAUCompositionObject@@PEAXPEAPEAVICompositionO.c)
 *     NtDCompositionGetFrameStatistics @ 0x1C00BA640 (NtDCompositionGetFrameStatistics.c)
 *     NtDCompositionGetFrameSurfaceUpdates @ 0x1C00BA890 (NtDCompositionGetFrameSurfaceUpdates.c)
 *     NtDCompositionGetFrameLegacyTokens @ 0x1C00BAAC0 (NtDCompositionGetFrameLegacyTokens.c)
 *     DCompositionForceRender @ 0x1C00CB6F0 (DCompositionForceRender.c)
 *     DCompositionDDAChange @ 0x1C01D44A4 (DCompositionDDAChange.c)
 *     NtDCompositionCommitSynchronizationObject @ 0x1C01D4660 (NtDCompositionCommitSynchronizationObject.c)
 *     NtDCompositionCreateSynchronizationObject @ 0x1C01D47A0 (NtDCompositionCreateSynchronizationObject.c)
 *     NtDCompositionEnableMMCSS @ 0x1C01D4DF0 (NtDCompositionEnableMMCSS.c)
 *     NtDesktopCaptureBits @ 0x1C01D51F0 (NtDesktopCaptureBits.c)
 * Callees:
 *     <none>
 */

struct DirectComposition::CConnection *__fastcall DirectComposition::CConnection::GetDefaultConnection(__int64 a1)
{
  volatile signed __int32 *v1; // rbx
  __int64 CurrentProcessWin32Process; // rax
  __int64 v3; // rdi
  struct _ERESOURCE *v4; // rbx
  struct _ERESOURCE *v6; // rdi

  v1 = 0LL;
  CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(a1);
  if ( !CurrentProcessWin32Process )
    goto LABEL_7;
  v3 = *(_QWORD *)(CurrentProcessWin32Process + 256);
  if ( !v3 )
    goto LABEL_7;
  v4 = *(struct _ERESOURCE **)(v3 + 32);
  KeEnterCriticalRegion();
  ExAcquireResourceSharedLite(v4, 1u);
  v1 = *(volatile signed __int32 **)(v3 + 24);
  if ( v1 )
    _InterlockedIncrement(v1);
  ExReleaseResourceLite(*(PERESOURCE *)(v3 + 32));
  KeLeaveCriticalRegion();
  if ( !v1 )
  {
LABEL_7:
    v6 = DirectComposition::CConnection::s_pSessionConnectionLock;
    if ( DirectComposition::CConnection::s_pSessionConnectionLock )
    {
      KeEnterCriticalRegion();
      ExAcquireResourceExclusiveLite(v6, 1u);
      v1 = (volatile signed __int32 *)DirectComposition::CConnection::s_pSessionConnection;
      if ( DirectComposition::CConnection::s_pSessionConnection )
        _InterlockedIncrement((volatile signed __int32 *)DirectComposition::CConnection::s_pSessionConnection);
      ExReleaseResourceLite(DirectComposition::CConnection::s_pSessionConnectionLock);
      KeLeaveCriticalRegion();
    }
  }
  return (struct DirectComposition::CConnection *)v1;
}
