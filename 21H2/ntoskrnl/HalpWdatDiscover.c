/*
 * XREFs of HalpWdatDiscover @ 0x1403ACE40
 * Callers:
 *     HalpTimerRegisterBuiltinPluginsCommon @ 0x1403AB318 (HalpTimerRegisterBuiltinPluginsCommon.c)
 * Callees:
 *     HalpTimerRegister @ 0x1403AC990 (HalpTimerRegister.c)
 *     HalSocGetAcpiTable @ 0x1403ACED4 (HalSocGetAcpiTable.c)
 *     memset @ 0x140414300 (memset.c)
 *     HalpWdatExecuteActionBeforeInitialize @ 0x1404D4E74 (HalpWdatExecuteActionBeforeInitialize.c)
 *     HalpWdatProcessWdatInternalData @ 0x1404D51E8 (HalpWdatProcessWdatInternalData.c)
 *     HalpWdatProcessWdrtInternalData @ 0x1404D5244 (HalpWdatProcessWdrtInternalData.c)
 */

__int64 HalpWdatDiscover()
{
  __int64 AcpiTable; // rsi
  __int64 v1; // rax
  __int64 v2; // rbx
  int v4; // eax
  unsigned __int64 v5; // rdx
  int v6; // ecx
  char v7; // di
  __int64 v8; // r15
  int v9; // edx
  int v10; // ecx
  unsigned __int64 v11; // rcx
  _QWORD v12[18]; // [rsp+30h] [rbp-D0h] BYREF
  _QWORD v13[18]; // [rsp+C0h] [rbp-40h] BYREF
  char v14; // [rsp+160h] [rbp+60h] BYREF
  int v15; // [rsp+168h] [rbp+68h] BYREF
  int v16; // [rsp+170h] [rbp+70h] BYREF

  v16 = 0;
  v15 = 0;
  memset(v12, 0, sizeof(v12));
  memset(v13, 0, 0x70uLL);
  v12[0] = 0x9000000001LL;
  v14 = 0;
  AcpiTable = HalSocGetAcpiTable(1413563479LL);
  v1 = HalSocGetAcpiTable(1414677591LL);
  v2 = v1;
  if ( AcpiTable )
  {
    v4 = HalpWdatProcessWdatInternalData(AcpiTable, v13, &v15, &v14);
  }
  else
  {
    if ( !v1 )
      return 0LL;
    v13[1] = v1;
    v4 = HalpWdatProcessWdrtInternalData(v1, v13, &v15, &v14);
  }
  v7 = v14;
  if ( v4 >= 0 )
  {
    if ( !v14 )
      return 0LL;
    if ( LODWORD(v13[3]) )
    {
      v8 = LODWORD(v13[2]);
      if ( LODWORD(v13[2]) >= HIDWORD(v13[2]) )
      {
        HIDWORD(v12[14]) = 163872;
        LOBYTE(v6) = 32;
        if ( (int)HalpWdatExecuteActionBeforeInitialize(v6, v5, (unsigned int)&v16, AcpiTable, v2) >= 0 && v16 == 1 )
        {
          HIDWORD(v12[14]) = 426016;
          LOBYTE(v10) = 33;
          HalpWdatExecuteActionBeforeInitialize(v10, v9, 0, AcpiTable, v2);
        }
        v11 = (unsigned __int64)LODWORD(v13[3]) * v8 / 0x3E8;
        if ( v11 <= 0x12C436C73CE5LL )
        {
          v5 = 894000 * v11;
          v6 = 63;
          HIDWORD(v12[12]) = 63;
          do
          {
            if ( (1LL << v6) - 1 < v5 )
              break;
            --v6;
          }
          while ( v6 );
          HIDWORD(v12[12]) = v6;
          if ( !v6 )
            goto LABEL_20;
        }
        else
        {
          HIDWORD(v12[12]) = 64;
        }
        v12[3] = 0LL;
        v12[11] = 0LL;
        v12[1] = HalpWdatInitialize;
        v12[4] = HalpWdatArmTimer;
        v12[5] = HalpWdatStop;
        LODWORD(v12[12]) = v15;
        v12[13] = 894000LL;
        v12[17] = 13LL;
        HalpTimerRegister((__int64)v12, 0LL);
      }
    }
  }
LABEL_20:
  if ( v7 )
  {
    LOBYTE(v6) = 11;
    HalpWdatExecuteActionBeforeInitialize(v6, v5, 0, AcpiTable, v2);
  }
  return 0LL;
}
