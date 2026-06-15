/*
 * XREFs of ?IsCaptureStream@CAudioStream@@UEAA_NXZ @ 0x180037290
 * Callers:
 *     ?IsCaptureStream@CAudioStream@@W7EAA_NXZ @ 0x180074E80 (-IsCaptureStream@CAudioStream@@W7EAA_NXZ.c)
 * Callees:
 *     <none>
 */

bool __fastcall CAudioStream::IsCaptureStream(CAudioStream *this)
{
  return (unsigned int)(*((_DWORD *)this + 83) - 1) <= 1;
}
