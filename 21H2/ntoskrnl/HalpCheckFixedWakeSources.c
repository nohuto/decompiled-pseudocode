/*
 * XREFs of HalpCheckFixedWakeSources @ 0x1409970B0
 * Callers:
 *     HalpAcpiPostSleep @ 0x140996B2C (HalpAcpiPostSleep.c)
 * Callees:
 *     HalpAcpiPmRegisterAvailable @ 0x14037C570 (HalpAcpiPmRegisterAvailable.c)
 *     HalpAcpiPmRegisterRead @ 0x140399790 (HalpAcpiPmRegisterRead.c)
 */

bool HalpCheckFixedWakeSources()
{
  int v0; // edi
  char v1; // si
  __int16 v2; // bx
  int v3; // edx
  bool result; // al
  __int16 v5; // [rsp+40h] [rbp+8h] BYREF

  v0 = dword_140C4A090;
  v1 = byte_140C4A028;
  v5 = 0;
  v2 = 0;
  if ( (int)HalpAcpiPmRegisterAvailable(0) >= 0 )
  {
    HalpAcpiPmRegisterRead(0, 0, (__int64)&v5, 2u, 0LL);
    v2 = v5;
    if ( (int)HalpAcpiPmRegisterAvailable(3) >= 0 )
    {
      HalpAcpiPmRegisterRead(3, 0, (__int64)&v5, 2u, 0LL);
      v2 |= v5;
    }
  }
  v3 = (v2 & 0x100) != 0 && (v0 & 0x10) == 0;
  if ( (v0 & 0x20) == 0 && (v2 & 0x200) != 0 )
    v3 |= 2u;
  result = (v0 & 0x40) == 0;
  if ( (v2 & 0x400) != 0 && result )
  {
    v3 |= 4u;
    if ( HalpResumeFromHibernate )
    {
      if ( (v0 & 0x80u) == 0 || (unsigned __int8)v1 >= 4u && (v0 & 0x10000) == 0 )
        v3 &= ~4u;
    }
  }
  PopFixedWakeSourceMask |= v3;
  return result;
}
