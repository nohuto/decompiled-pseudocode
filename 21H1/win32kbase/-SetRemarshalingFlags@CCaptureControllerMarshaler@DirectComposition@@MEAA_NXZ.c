/*
 * XREFs of ?SetRemarshalingFlags@CCaptureControllerMarshaler@DirectComposition@@MEAA_NXZ @ 0x1C01F75D0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

char __fastcall DirectComposition::CCaptureControllerMarshaler::SetRemarshalingFlags(
        DirectComposition::CCaptureControllerMarshaler *this)
{
  if ( *((_QWORD *)this + 7) )
    *((_DWORD *)this + 4) |= 0x20u;
  if ( !*((_BYTE *)this + 72) )
    *((_DWORD *)this + 4) |= 0x40u;
  if ( *((float *)this + 16) != 0.0 || *((float *)this + 17) != 0.0 )
    *((_DWORD *)this + 4) |= 0x80u;
  if ( *((_QWORD *)this + 10) )
    *((_DWORD *)this + 4) |= 0x100u;
  if ( !*((_BYTE *)this + 73) )
    *((_DWORD *)this + 4) |= 0x200u;
  return 1;
}
