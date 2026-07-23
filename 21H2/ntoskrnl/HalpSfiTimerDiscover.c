/*
 * XREFs of HalpSfiTimerDiscover @ 0x1403AB4DC
 * Callers:
 *     HalpTimerRegisterBuiltinPlugins @ 0x1403AB34C (HalpTimerRegisterBuiltinPlugins.c)
 * Callees:
 *     HalpTimerRegister @ 0x1403AC990 (HalpTimerRegister.c)
 *     HalRegisterPermanentAddressUsage @ 0x1403ACDC0 (HalRegisterPermanentAddressUsage.c)
 *     HalSocGetAcpiTable @ 0x1403ACED4 (HalSocGetAcpiTable.c)
 *     __security_check_cookie @ 0x1403D05D0 (__security_check_cookie.c)
 *     memset @ 0x140414300 (memset.c)
 */

__int64 HalpSfiTimerDiscover()
{
  __int64 AcpiTable; // rax
  __int64 v1; // rbx
  __int64 v3; // rax
  unsigned int v4; // edi
  unsigned __int64 v5; // rsi
  unsigned int *v6; // rbx
  unsigned __int64 v7; // rcx
  unsigned __int64 v8; // rax
  LARGE_INTEGER v9; // rcx
  __int128 v10; // [rsp+28h] [rbp-69h] BYREF
  __int64 v11; // [rsp+38h] [rbp-59h]
  _QWORD v12[18]; // [rsp+48h] [rbp-49h] BYREF

  memset(v12, 0, sizeof(v12));
  v11 = 0LL;
  v10 = 0LL;
  AcpiTable = HalSocGetAcpiTable(1380799565LL);
  v1 = AcpiTable;
  if ( AcpiTable )
  {
    v3 = *(unsigned int *)(AcpiTable + 4);
    if ( (unsigned int)v3 >= 0x38 )
    {
      v4 = 0;
      v5 = (v3 - 36) / 0x14uLL;
      if ( (_DWORD)v5 )
      {
        v6 = (unsigned int *)(v1 + 48);
        do
        {
          if ( !*((_BYTE *)v6 - 12) && *((_BYTE *)v6 - 11) == 32 && !*((_BYTE *)v6 - 10) && *v6 && *((_QWORD *)v6 - 1) )
          {
            memset(v12, 0, sizeof(v12));
            v12[0] = 0x9000000001LL;
            v11 = 0LL;
            v10 = 0LL;
            v7 = *v6;
            v12[12] = 0x2000000018LL;
            v8 = ((v7 >> 1) + 1000000000000000LL) / v7;
            v9 = *(LARGE_INTEGER *)(v6 - 2);
            v12[13] = v8;
            v12[11] = &v10;
            HIDWORD(v12[15]) = v6[1];
            v12[1] = HalpSfiTimerInitialize;
            v12[2] = HalpSfiTimerQueryCounter;
            v12[3] = HalpSfiTimerAcknowledgeInterrupt;
            v12[4] = HalpSfiTimerArm;
            v12[5] = HalpSfiTimerStop;
            v12[16] = 0x100000001LL;
            LODWORD(v12[17]) = 6;
            v12[14] = 0x26200000001LL;
            if ( HalRegisterPermanentAddressUsage(v9, 0x14u) < 0 )
              return 0LL;
            HIDWORD(v11) = v4;
            *(_QWORD *)&v10 = *((_QWORD *)v6 - 1);
            HalpTimerRegister(v12, 0LL);
          }
          ++v4;
          v6 += 5;
        }
        while ( v4 < (unsigned int)v5 );
      }
    }
  }
  return 0LL;
}
