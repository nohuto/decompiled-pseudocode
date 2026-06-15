/*
 * XREFs of ??$MakeAndInitialize@VAudioStateMonitorManager@@V1@AEAPEAVCWindowsPolicyManager@@PEAVCProcess@@@Details@WRL@Microsoft@@YAJPEAPEAVAudioStateMonitorManager@@AEAPEAVCWindowsPolicyManager@@$$QEAPEAVCProcess@@@Z @ 0x18001DC68
 * Callers:
 *     ?RegisterAudioStateMonitor@CProcess@@UEAAJPEAW4AUDIO_DIRECTION@@PEAW4_AUDIO_STREAM_CATEGORY@@PEBGPEA_K@Z @ 0x18001C930 (-RegisterAudioStateMonitor@CProcess@@UEAAJPEAW4AUDIO_DIRECTION@@PEAW4_AUDIO_STREAM_CATEGORY@@PEB.c)
 *     ?GetSoundLevel@CProcess@@UEAAJPEAW4AUDIO_DIRECTION@@PEAW4_AUDIO_STREAM_CATEGORY@@PEBGPEAW4__MIDL___MIDL_itf_audiosrv_0000_0000_0004@@@Z @ 0x18001CA60 (-GetSoundLevel@CProcess@@UEAAJPEAW4AUDIO_DIRECTION@@PEAW4_AUDIO_STREAM_CATEGORY@@PEBGPEAW4__MIDL.c)
 * Callees:
 *     ??0AudioStateMonitorManager@@QEAA@XZ @ 0x18001F604 (--0AudioStateMonitorManager@@QEAA@XZ.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x18003F69C (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x180040700 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall Microsoft::WRL::Details::MakeAndInitialize<AudioStateMonitorManager,AudioStateMonitorManager,CWindowsPolicyManager * &,CProcess *>(
        AudioStateMonitorManager **a1,
        __int64 a2,
        _QWORD *a3)
{
  unsigned int v5; // edi
  AudioStateMonitorManager *v6; // rax
  AudioStateMonitorManager *v7; // rbx
  CWindowsPolicyManager *v8; // r8

  v5 = 0;
  *a1 = 0LL;
  v6 = (AudioStateMonitorManager *)operator new(0x88uLL, (const struct std::nothrow_t *)&std::nothrow);
  if ( v6 )
  {
    v7 = AudioStateMonitorManager::AudioStateMonitorManager(v6);
    v8 = g_PolicyManager;
    *((_QWORD *)v7 + 16) = (*a3 + 16LL) & -(__int64)(*a3 != 0LL);
    *((_QWORD *)v7 + 15) = v8;
    (*(void (__fastcall **)(AudioStateMonitorManager *))(*(_QWORD *)v7 + 8LL))(v7);
    *a1 = v7;
    (*(void (__fastcall **)(AudioStateMonitorManager *))(*(_QWORD *)v7 + 16LL))(v7);
  }
  else
  {
    return (unsigned int)-2147024882;
  }
  return v5;
}
