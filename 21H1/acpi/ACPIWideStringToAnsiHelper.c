/*
 * XREFs of ACPIWideStringToAnsiHelper @ 0x1C0027F40
 * Callers:
 *     ACPIGetConvertToCompatibleID @ 0x1C0027A90 (ACPIGetConvertToCompatibleID.c)
 *     ACPIGetConvertToInstanceID @ 0x1C0027E08 (ACPIGetConvertToInstanceID.c)
 *     ACPIGetConvertToPnpID @ 0x1C0027E70 (ACPIGetConvertToPnpID.c)
 *     ACPIGetConvertToDeviceID @ 0x1C0027ED8 (ACPIGetConvertToDeviceID.c)
 *     ACPIGetConvertToHardwareID @ 0x1C0055918 (ACPIGetConvertToHardwareID.c)
 *     ACPIGetConvertToString @ 0x1C0055A4C (ACPIGetConvertToString.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ACPIWideStringToAnsiHelper(_BYTE *a1, unsigned int a2)
{
  unsigned int v2; // r10d
  unsigned int v3; // edx
  _BYTE *v4; // r8
  __int64 v5; // r11
  char *v6; // r9
  char v7; // al
  __int64 result; // rax

  if ( a1 && a2 > 2 )
  {
    v2 = 0;
    v3 = a2 >> 1;
    if ( v3 )
    {
      v4 = a1;
      v5 = v3;
      v6 = a1;
      v2 = v3;
      do
      {
        v7 = *v6;
        v6 += 2;
        *v4++ = v7;
        --v5;
      }
      while ( v5 );
    }
    result = v2;
    a1[v2] = 0;
  }
  return result;
}
