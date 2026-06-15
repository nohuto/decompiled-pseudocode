/*
 * XREFs of ?GetPBMRelatedAudioStreamCategory@@YAJPEAUIAudioProcess@@KPEAK@Z @ 0x1800250BC
 * Callers:
 *     ?GetPolicyVolumeForStreamClass@CStreamClassPolicyManager@@QEAAJPEAUIAudioStreamPolicyVolumeClient@@AEA_NAEAMAEA_J@Z @ 0x180024994 (-GetPolicyVolumeForStreamClass@CStreamClassPolicyManager@@QEAAJPEAUIAudioStreamPolicyVolumeClien.c)
 *     ?Invoke@CStreamStartedWorkItem@@UEAAXXZ @ 0x18002BB70 (-Invoke@CStreamStartedWorkItem@@UEAAXXZ.c)
 *     ?Invoke@CStreamStoppedWorkItem@@UEAAXXZ @ 0x18002C120 (-Invoke@CStreamStoppedWorkItem@@UEAAXXZ.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x18003AE40 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall GetPBMRelatedAudioStreamCategory(struct IAudioProcess *a1, unsigned int a2, unsigned int *a3)
{
  unsigned int v5; // ebx

  *a3 = a2;
  v5 = 0;
  if ( (*(unsigned int (__fastcall **)(struct IAudioProcess *))(*(_QWORD *)a1 + 96LL))(a1) && dword_180044A80[*a3] )
  {
    if ( (*(unsigned int (__fastcall **)(struct IAudioProcess *))(*(_QWORD *)a1 + 136LL))(a1)
      || (*(unsigned int (__fastcall **)(struct IAudioProcess *))(*(_QWORD *)a1 + 376LL))(a1) )
    {
      v5 = *a3;
    }
    *a3 = v5;
  }
  return 0LL;
}
