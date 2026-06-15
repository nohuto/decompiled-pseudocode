/*
 * XREFs of ?IsCaptureStream@CStreamPolicyVolumeClient@@UEAA_NXZ @ 0x180035760
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

bool __fastcall CStreamPolicyVolumeClient::IsCaptureStream(CStreamPolicyVolumeClient *this)
{
  return *((_DWORD *)this + 4) == 1;
}
