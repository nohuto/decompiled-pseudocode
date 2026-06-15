/*
 * XREFs of ?IsFormatSensitiveClient@CAudioStream@@UEAA_NXZ @ 0x18004D790
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

bool __fastcall CAudioStream::IsFormatSensitiveClient(CAudioStream *this)
{
  return *((_BYTE *)this + 340);
}
