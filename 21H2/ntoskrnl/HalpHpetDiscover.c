/*
 * XREFs of HalpHpetDiscover @ 0x1403AC1CC
 * Callers:
 *     HalpTimerRegisterBuiltinPlugins @ 0x1403AB34C (HalpTimerRegisterBuiltinPlugins.c)
 * Callees:
 *     HalSocRequestConfigurationData @ 0x1403A1FEC (HalSocRequestConfigurationData.c)
 *     HalpTimerRegister @ 0x1403AC990 (HalpTimerRegister.c)
 *     HalRegisterPermanentAddressUsage @ 0x1403ACDC0 (HalRegisterPermanentAddressUsage.c)
 *     HalSocGetAcpiTable @ 0x1403ACED4 (HalSocGetAcpiTable.c)
 *     HalMapIoSpace @ 0x1403AD060 (HalMapIoSpace.c)
 *     HalpUnmapVirtualAddress @ 0x1403BBA00 (HalpUnmapVirtualAddress.c)
 *     __security_check_cookie @ 0x1403D05D0 (__security_check_cookie.c)
 *     memset @ 0x140414300 (memset.c)
 */

__int64 HalpHpetDiscover()
{
  __int64 AcpiTable; // rax
  __int64 v1; // rdx
  __int64 v2; // r15
  unsigned int *v3; // r14
  unsigned int v4; // esi
  unsigned int v5; // r8d
  unsigned __int64 v6; // rax
  int v7; // r12d
  unsigned int v8; // r13d
  unsigned int v9; // esi
  __int64 v10; // rbx
  unsigned int *v11; // r14
  __int64 v12; // rdx
  unsigned int v13; // ebx
  int v14; // edi
  int v15; // eax
  char v16; // cl
  int v18; // r9d
  unsigned __int8 v19; // dl
  signed __int32 v20[8]; // [rsp+8h] [rbp-100h] BYREF
  int v21; // [rsp+28h] [rbp-E0h] BYREF
  unsigned int v22; // [rsp+30h] [rbp-D8h]
  _QWORD v23[18]; // [rsp+38h] [rbp-D0h] BYREF
  __int64 v24; // [rsp+C8h] [rbp-40h]
  unsigned int *v25; // [rsp+D0h] [rbp-38h]
  unsigned __int64 v26; // [rsp+D8h] [rbp-30h]
  _OWORD v27[2]; // [rsp+E0h] [rbp-28h] BYREF
  __int64 v28; // [rsp+100h] [rbp-8h]

  LOWORD(v21) = 0;
  memset(v27, 0, sizeof(v27));
  v28 = 0LL;
  AcpiTable = HalSocGetAcpiTable(1413828680LL);
  v2 = AcpiTable;
  if ( AcpiTable )
  {
    if ( !*(_BYTE *)(AcpiTable + 40) && (int)HalSocRequestConfigurationData(1, v1, (char *)&v21 + 1) >= 0 )
    {
      HalpHpetPhysicalAddress = *(LARGE_INTEGER *)(v2 + 44);
      if ( !HalpHpetPhysicalAddress.HighPart || BYTE1(v21) )
      {
        v25 = (unsigned int *)HalMapIoSpace(HalpHpetPhysicalAddress, 0x400uLL, MmNonCached);
        v3 = v25;
        if ( v25 )
        {
          if ( HalRegisterPermanentAddressUsage(HalpHpetPhysicalAddress, 0x400u) >= 0 )
          {
            v4 = *v3;
            v5 = HIWORD(*v3);
            if ( v5 )
            {
              if ( v5 != 0xFFFF )
              {
                if ( (v4 & 0x8000) != 0 )
                  HalpHpetLegacyInterrupts = 1;
                v6 = (((unsigned __int64)v3[1] >> 1) + 1000000000000000LL) / v3[1];
                v26 = v6;
                if ( v5 != 4318 )
                {
                  v7 = 1;
                  v8 = 0;
                  v9 = ((v4 >> 8) & 0x1F) + 1;
                  if ( !v9 )
                    goto LABEL_27;
                  v10 = (unsigned int)v6;
                  v11 = v3 + 64;
                  v24 = (unsigned int)v6;
                  while ( 1 )
                  {
                    memset(v23, 0, sizeof(v23));
                    v28 = 0LL;
                    v23[11] = v27;
                    v23[0] = 0x9000000001LL;
                    v23[1] = HalpHpetInitialize;
                    v23[3] = HalpHpetAcknowledgeInterrupt;
                    v23[4] = HalpHpetArmTimer;
                    v23[5] = HalpHpetStop;
                    memset((char *)v27 + 4, 0, 20);
                    HIDWORD(v23[17]) = (v8 + 1) | (*(unsigned __int8 *)(v2 + 52) << 16);
                    *((LARGE_INTEGER *)&v27[1] + 1) = HalpHpetPhysicalAddress;
                    v23[13] = v10;
                    v23[12] = 0x1F00000028LL;
                    v23[16] = 0x100000001LL;
                    LODWORD(v23[17]) = 3;
                    v23[14] = 0x3000000001LL;
                    v22 = v8 + 1;
                    LODWORD(v27[0]) = v8;
                    v13 = *v11 & 0xFFFFBFFB;
                    *v11 = v13;
                    _InterlockedOr(v20, 0);
                    if ( (v13 & 0x10) != 0 )
                    {
                      v14 = 112;
                      BYTE12(v27[0]) = 1;
                      HIDWORD(v23[14]) = 112;
                    }
                    else
                    {
                      v14 = HIDWORD(v23[14]);
                    }
                    if ( (v13 & 0x20) != 0 )
                    {
                      *v11 = v13 | 0x100;
                      _InterlockedOr(v20, 0);
                      v13 = *v11;
                      if ( (*v11 & 0x100) == 0 )
                        goto LABEL_25;
                      v14 = HIDWORD(v23[14]);
                    }
                    LODWORD(v28) = v13;
                    if ( HalpHpetLegacyInterrupts )
                    {
                      v15 = HalSocRequestConfigurationData(2, v12, (char *)&v21);
                      v16 = v21;
                      if ( v15 < 0 )
                        v16 = 0;
                      LOBYTE(v21) = v16;
                      if ( !v8 )
                      {
                        v14 |= 0x100u;
                        LODWORD(v23[15]) = v16 == 0 ? 2 : 0;
                        v7 |= 4u;
LABEL_31:
                        HIDWORD(v23[14]) = v14;
LABEL_23:
                        if ( (v14 & 0xF00) != 0 )
                          HalpTimerRegister(v23, 0LL);
                        goto LABEL_25;
                      }
                      if ( v8 == 1 )
                      {
                        LODWORD(v23[15]) = 8;
                        v14 |= 0x100u;
                        v7 |= 0x100u;
                        goto LABEL_31;
                      }
                      if ( (v13 & 0x8000) != 0 )
                        goto LABEL_23;
                    }
                    else
                    {
                      v18 = ~v7 & v11[1];
                      if ( v18 )
                      {
                        v19 = 0;
                        while ( ((1 << v19) & v18) == 0 )
                        {
                          if ( ++v19 >= 0x20u )
                          {
                            LOWORD(v14) = WORD2(v23[14]);
                            goto LABEL_23;
                          }
                        }
                        v14 = HIDWORD(v23[14]) | 0x200;
                        HIDWORD(v23[15]) = v19 + (unsigned __int16)HalpHpetGsiOffset;
                        v7 |= 1 << v19;
                        BYTE4(v27[0]) = v19;
                        goto LABEL_31;
                      }
                    }
LABEL_25:
                    v8 = v22;
                    v11 += 8;
                    v10 = v24;
                    if ( v22 >= v9 )
                    {
                      v3 = v25;
                      goto LABEL_27;
                    }
                  }
                }
                HalpHpetLegacyInterrupts = 0;
LABEL_27:
                memset(v23, 0, sizeof(v23));
                v23[0] = 0x9000000001LL;
                v28 = 0LL;
                v23[13] = (unsigned int)v26;
                memset(v27, 0, sizeof(v27));
                LODWORD(v27[0]) = -1;
                v23[11] = v27;
                v23[1] = HalpHpetInitialize;
                v23[2] = HalpHpetQueryCounter;
                v23[3] = HalpHpetAcknowledgeInterrupt;
                v23[4] = HalpHpetArmTimer;
                HIDWORD(v23[17]) = *(unsigned __int8 *)(v2 + 52) << 16;
                v23[12] = 0x2000000028LL;
                LODWORD(v23[17]) = 3;
                v23[14] = 0x200000001LL;
                HalpTimerRegister(v23, 0LL);
              }
            }
          }
          HalpUnmapVirtualAddress(v3, 1LL, 0LL);
        }
      }
    }
  }
  return 0LL;
}
