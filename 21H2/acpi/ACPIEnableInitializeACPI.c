/*
 * XREFs of ACPIEnableInitializeACPI @ 0x1C00244C0
 * Callers:
 *     ACPIInitialize @ 0x1C00BE48C (ACPIInitialize.c)
 * Callees:
 *     ACPIGpeClearRegisters @ 0x1C001FDEC (ACPIGpeClearRegisters.c)
 *     ACPIGpeEnableDisableEvents @ 0x1C00200A4 (ACPIGpeEnableDisableEvents.c)
 *     ACPIEnableEnterACPIMode @ 0x1C0024388 (ACPIEnableEnterACPIMode.c)
 *     READ_PM1_CONTROL @ 0x1C0024548 (READ_PM1_CONTROL.c)
 *     WRITE_PM1_CONTROL @ 0x1C00245D4 (WRITE_PM1_CONTROL.c)
 *     WRITE_PM1_ENABLE @ 0x1C0024674 (WRITE_PM1_ENABLE.c)
 *     READ_PM1_STATUS @ 0x1C00246E8 (READ_PM1_STATUS.c)
 *     CLEAR_PM1_STATUS_REGISTER @ 0x1C0024774 (CLEAR_PM1_STATUS_REGISTER.c)
 */

void *__fastcall ACPIEnableInitializeACPI(__int64 a1, __int64 a2)
{
  void *result; // rax
  char v3; // bl
  __int64 v4; // rdx
  __int64 v5; // rcx
  unsigned __int16 v6; // ax
  __int64 v7; // rdx
  __int64 v8; // rdx

  result = AcpiInformation;
  v3 = a1;
  if ( !*((_BYTE *)AcpiInformation + 133) )
  {
    if ( (READ_PM1_CONTROL(a1, a2) & 1) != 0 )
    {
      if ( (_DWORD)AcpiKsrContext == 1481917259 )
        *((_BYTE *)AcpiInformation + 84) = BYTE8(AcpiKsrContext) & 1;
    }
    else
    {
      *((_BYTE *)AcpiInformation + 84) = 0;
      ACPIEnableEnterACPIMode(v3);
    }
    CLEAR_PM1_STATUS_REGISTER();
    if ( (READ_PM1_STATUS() & 0xFBEF) != 0 )
    {
      CLEAR_PM1_STATUS_REGISTER();
      READ_PM1_STATUS();
    }
    WRITE_PM1_ENABLE(*((unsigned __int16 *)AcpiInformation + 56));
    if ( v3 )
    {
      ACPIGpeClearRegisters();
      ACPIGpeEnableDisableEvents(1, v8);
    }
    v6 = READ_PM1_CONTROL(v5, v4);
    LOBYTE(v7) = 1;
    return (void *)WRITE_PM1_CONTROL(v6 & 0xDFFD, v7);
  }
  return result;
}
