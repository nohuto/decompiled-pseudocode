/*
 * XREFs of ?GetPolicyVolumeForStreamClass@CWindowsPolicyManager@@UEAAJPEAUIAudioStreamPolicyVolumeClient@@AEAUStreamCategoryPolicyVolumes@@@Z @ 0x18000B8C0
 * Callers:
 *     <none>
 * Callees:
 *     ?GetPolicyVolumeForStreamClass@CStreamClassPolicyManager@@QEAAJPEAUIAudioStreamPolicyVolumeClient@@AEA_NAEAMAEA_J@Z @ 0x18002A294 (-GetPolicyVolumeForStreamClass@CStreamClassPolicyManager@@QEAAJPEAUIAudioStreamPolicyVolumeClien.c)
 */

int __fastcall CWindowsPolicyManager::GetPolicyVolumeForStreamClass(
        CWindowsPolicyManager *this,
        struct IAudioStreamPolicyVolumeClient *a2,
        struct StreamCategoryPolicyVolumes *a3)
{
  *((_DWORD *)a3 + 3) = 1065353216;
  *((_BYTE *)a3 + 8) = 0;
  return CStreamClassPolicyManager::GetPolicyVolumeForStreamClass(
           this,
           a2,
           (bool *)a3,
           (float *)a3 + 1,
           (__int64 *)a3 + 2);
}
