/*
 * XREFs of KeQuerySecureSpeculationInformation @ 0x140515B20
 * Callers:
 *     ExpQuerySystemInformation @ 0x1405E5DF0 (ExpQuerySystemInformation.c)
 * Callees:
 *     VslGetSecureSpeculationControlInformation @ 0x1403CB72C (VslGetSecureSpeculationControlInformation.c)
 *     memset @ 0x140408F80 (memset.c)
 *     ExSystemExceptionFilter @ 0x1407BEDE0 (ExSystemExceptionFilter.c)
 */

__int64 __fastcall KeQuerySecureSpeculationInformation(unsigned int *a1, size_t Size, _DWORD *a3)
{
  size_t v4; // r14
  __int16 SecureSpeculationControlInformation; // si
  unsigned int v8; // eax

  v4 = (unsigned int)Size;
  SecureSpeculationControlInformation = VslGetSecureSpeculationControlInformation();
  *a3 = 4;
  if ( (unsigned int)v4 < 4 )
    return 3221225476LL;
  memset(a1, 0, v4);
  if ( (SecureSpeculationControlInformation & 1) != 0 )
    *a1 |= 1u;
  if ( (SecureSpeculationControlInformation & 2) != 0 )
    *a1 |= 2u;
  if ( (SecureSpeculationControlInformation & 4) != 0 )
  {
    *a1 |= 4u;
    v8 = *a1 & 0xFFFFFFF7;
LABEL_11:
    *a1 = v8;
    goto LABEL_12;
  }
  if ( (SecureSpeculationControlInformation & 8) != 0 )
  {
    *a1 |= 8u;
    v8 = *a1 & 0xFFFFFFFB;
    goto LABEL_11;
  }
LABEL_12:
  if ( (SecureSpeculationControlInformation & 0x2000) != 0 )
    *a1 |= 0x10u;
  return 0LL;
}
