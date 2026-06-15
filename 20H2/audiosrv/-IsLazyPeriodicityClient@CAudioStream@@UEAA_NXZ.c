/*
 * XREFs of ?IsLazyPeriodicityClient@CAudioStream@@UEAA_NXZ @ 0x180046870
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

bool __fastcall CAudioStream::IsLazyPeriodicityClient(CAudioStream *this)
{
  return *((_DWORD *)this + 84) == 2;
}
