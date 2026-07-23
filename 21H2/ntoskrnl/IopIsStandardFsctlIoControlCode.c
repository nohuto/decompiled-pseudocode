/*
 * XREFs of IopIsStandardFsctlIoControlCode @ 0x1403F0FF4
 * Callers:
 *     IopXxxControlFile @ 0x1407153F0 (IopXxxControlFile.c)
 * Callees:
 *     <none>
 */

bool __fastcall IopIsStandardFsctlIoControlCode(unsigned int a1)
{
  unsigned int v1; // ecx
  unsigned int v2; // ecx
  unsigned int v3; // ecx
  unsigned int v4; // ecx
  unsigned int v5; // ecx

  if ( a1 > 0x110030 )
  {
    if ( a1 == 1114168 || a1 == 1130508 || a1 == 1142784 || a1 == 1159164 )
      return 1;
    return a1 == 1163287;
  }
  else
  {
    if ( a1 == 1114160 )
      return 1;
    v1 = a1 - 589864;
    if ( !v1 )
      return 1;
    v2 = v1 - 524252;
    if ( !v2 )
      return 1;
    v3 = v2 - 4;
    if ( !v3 )
      return 1;
    v4 = v3 - 16;
    if ( !v4 )
      return 1;
    v5 = v4 - 4;
    if ( !v5 )
      return 1;
    return v5 == 12;
  }
}
