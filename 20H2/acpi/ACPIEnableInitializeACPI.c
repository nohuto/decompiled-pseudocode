/*
 * XREFs of ACPIEnableInitializeACPI @ 0x1C000FC80
 * Callers:
 *     ACPIInitialize @ 0x1C00BEBFC (ACPIInitialize.c)
 * Callees:
 *     WRITE_PM1_CONTROL @ 0x1C000FA30 (WRITE_PM1_CONTROL.c)
 *     ACPIEnableEnterACPIMode @ 0x1C000FB4C (ACPIEnableEnterACPIMode.c)
 *     READ_PM1_CONTROL @ 0x1C000FD08 (READ_PM1_CONTROL.c)
 *     READ_PM1_STATUS @ 0x1C000FD94 (READ_PM1_STATUS.c)
 *     CLEAR_PM1_STATUS_REGISTER @ 0x1C000FE20 (CLEAR_PM1_STATUS_REGISTER.c)
 *     ACPIGpeEnableDisableEvents @ 0x1C0026370 (ACPIGpeEnableDisableEvents.c)
 *     ACPIGpeClearRegisters @ 0x1C00265D4 (ACPIGpeClearRegisters.c)
 *     WRITE_PM1_ENABLE @ 0x1C0026750 (WRITE_PM1_ENABLE.c)
 */

void *__fastcall ACPIEnableInitializeACPI(__int64 a1, __int64 a2)
{
  void *result; // rax
  char v3; // bl
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int16 v6; // ax
  __int64 v7; // rcx

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
      LOBYTE(v7) = 1;
      ACPIGpeEnableDisableEvents(v7);
    }
    v6 = READ_PM1_CONTROL(v5, v4);
    return (void *)WRITE_PM1_CONTROL(v6 & 0xDFFD, 1);
  }
  return result;
}
