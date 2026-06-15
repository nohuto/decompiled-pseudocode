/*
 * XREFs of ?IsCaptureStream@CAudioStream@@UEAA_NXZ @ 0x1800363A0
 * Callers:
 *     ?IsCaptureStream@CAudioStream@@W7EAA_NXZ @ 0x1800744C0 (-IsCaptureStream@CAudioStream@@W7EAA_NXZ.c)
 * Callees:
 *     <none>
 */

bool __fastcall CAudioStream::IsCaptureStream(CAudioStream *this)
{
  return (unsigned int)(*((_DWORD *)this + 83) - 1) <= 1;
}
