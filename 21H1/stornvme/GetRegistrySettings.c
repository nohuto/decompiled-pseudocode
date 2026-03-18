/*
 * XREFs of GetRegistrySettings @ 0x1C001BDB8
 * Callers:
 *     NVMeHwFindAdapter @ 0x1C0009230 (NVMeHwFindAdapter.c)
 * Callees:
 *     NVMeZeroMemory @ 0x1C00044E0 (NVMeZeroMemory.c)
 *     __security_check_cookie @ 0x1C00050E0 (__security_check_cookie.c)
 *     ReadMultiSzRegistryValueAndCompareId @ 0x1C001CF34 (ReadMultiSzRegistryValueAndCompareId.c)
 *     UlongToHex @ 0x1C001D100 (UlongToHex.c)
 */

char __fastcall GetRegistrySettings(__int64 a1)
{
  __int64 v1; // rax
  unsigned int v3; // eax
  void *v4; // r10
  _BYTE *v5; // rax
  unsigned int v6; // ecx
  int v7; // edi
  int v8; // r8d
  int v9; // r8d
  int v10; // r8d
  int v11; // r8d
  int v12; // r8d
  int v13; // r8d
  int v14; // r8d
  int v15; // r8d
  int v16; // r8d
  int v17; // r8d
  int v18; // r8d
  int v19; // r8d
  int v20; // r8d
  void *v21; // rsi
  int v22; // r8d
  int v23; // r8d
  int v24; // r8d
  void *v25; // rcx
  int v26; // r8d
  int v27; // r8d
  int v28; // r8d
  int v29; // r8d
  int v30; // r8d
  int v31; // r8d
  int v32; // r8d
  int v33; // r8d
  int v34; // r8d
  int v35; // r8d
  int v36; // r8d
  int v37; // r8d
  int v38; // r8d
  int v39; // r8d
  int v40; // r8d
  int v41; // r8d
  int v42; // r8d
  int v43; // r8d
  int v45; // [rsp+28h] [rbp-29h]
  __int64 v46; // [rsp+30h] [rbp-21h]
  __int64 v47; // [rsp+38h] [rbp-19h]
  int v48; // [rsp+40h] [rbp-11h]
  int v49; // [rsp+48h] [rbp-9h]
  __int64 v50; // [rsp+50h] [rbp-1h]
  __int64 v51; // [rsp+58h] [rbp+7h] BYREF
  __int64 v52; // [rsp+60h] [rbp+Fh] BYREF
  void *v53; // [rsp+68h] [rbp+17h] BYREF
  _QWORD v54[5]; // [rsp+70h] [rbp+1Fh] BYREF

  LOBYTE(v1) = aVenVvvvDevDddd[24];
  strcpy((char *)v54, "VEN_vvvv&DEV_dddd&REV_rr");
  LODWORD(v52) = 512;
  if ( !*(_BYTE *)(a1 + 16) )
  {
    *(_QWORD *)(a1 + 32) = 0LL;
    *(_DWORD *)(a1 + 84) = -1;
    *(_DWORD *)(a1 + 100) = -1;
    *(_DWORD *)(a1 + 104) = -1;
    *(_DWORD *)(a1 + 116) = -1;
    v3 = *(_DWORD *)(a1 + 56) & 0xFFFFFFE8;
    *(_DWORD *)(a1 + 40) = 0;
    *(_DWORD *)(a1 + 44) = 16711680;
    *(_DWORD *)(a1 + 56) = v3 | 8;
    *(_DWORD *)(a1 + 132) = -694967296;
    *(_QWORD *)(a1 + 48) = 0LL;
    *(_QWORD *)(a1 + 60) = 1823LL;
    *(_QWORD *)(a1 + 76) = 0x4000LL;
    *(_QWORD *)(a1 + 108) = 0LL;
    *(_QWORD *)(a1 + 124) = 0LL;
    *(_DWORD *)(a1 + 88) = 50;
    *(_DWORD *)(a1 + 92) = 3000;
    *(_DWORD *)(a1 + 96) = 1000;
    *(_DWORD *)(a1 + 68) = 0;
    *(_DWORD *)(a1 + 72) = 100;
    *(_DWORD *)(a1 + 136) = 600000000;
    v1 = StorPortAllocateRegistryBuffer(a1, &v52);
    v53 = (void *)v1;
    if ( v1 )
    {
      UlongToHex((char *)v54 + 4, *(unsigned __int16 *)(a1 + 4), 4LL);
      UlongToHex((char *)&v54[1] + 5, *(unsigned __int16 *)(a1 + 6), 4LL);
      UlongToHex((char *)&v54[2] + 6, *(unsigned __int8 *)(a1 + 8), 2LL);
      v5 = v54;
      v6 = 0;
      v7 = 29;
      do
      {
        if ( !*v5 )
          break;
        ++v6;
        ++v5;
      }
      while ( v6 < 0x1D );
      HIDWORD(v52) = v52;
      if ( v6 < 0x1D )
        v7 = v6;
      NVMeZeroMemory(v4, v52);
      HIDWORD(v51) = 0;
      LOBYTE(v1) = ReadMultiSzRegistryValueAndCompareId(
                     a1,
                     (unsigned int)"MaxTransferSize",
                     v8,
                     (unsigned int)&v53,
                     (__int64)&v52,
                     (__int64)&v52 + 4,
                     (__int64)v54,
                     v7,
                     (__int64)&v51 + 4);
      LOBYTE(v51) = v1;
      if ( (_BYTE)v1 == 1 )
      {
        LODWORD(v1) = HIDWORD(v51);
        if ( HIDWORD(v51) )
        {
          if ( HIDWORD(v51) > 0x800 )
            LODWORD(v1) = 2048;
          LODWORD(v1) = (_DWORD)v1 << 10;
          *(_DWORD *)(a1 + 32) = v1;
        }
      }
      if ( v53 )
      {
        HIDWORD(v52) = v52;
        NVMeZeroMemory(v53, v52);
        HIDWORD(v51) = 0;
        LOBYTE(v1) = ReadMultiSzRegistryValueAndCompareId(
                       a1,
                       (unsigned int)"IoQueueDepth",
                       v9,
                       (unsigned int)&v53,
                       (__int64)&v52,
                       (__int64)&v52 + 4,
                       (__int64)v54,
                       v7,
                       (__int64)&v51 + 4);
        LOBYTE(v51) = v1;
        if ( (_BYTE)v1 == 1 )
        {
          LOBYTE(v1) = BYTE4(v51);
          if ( HIDWORD(v51) )
            *(_DWORD *)(a1 + 36) = HIDWORD(v51);
        }
        if ( v53 )
        {
          HIDWORD(v52) = v52;
          NVMeZeroMemory(v53, v52);
          HIDWORD(v51) = 0;
          LOBYTE(v1) = ReadMultiSzRegistryValueAndCompareId(
                         a1,
                         (unsigned int)"IoSubmissionQueueCount",
                         v10,
                         (unsigned int)&v53,
                         (__int64)&v52,
                         (__int64)&v52 + 4,
                         (__int64)v54,
                         v7,
                         (__int64)&v51 + 4);
          LOBYTE(v51) = v1;
          if ( (_BYTE)v1 == 1 )
          {
            LOBYTE(v1) = BYTE4(v51);
            if ( HIDWORD(v51) )
              *(_WORD *)(a1 + 40) = WORD2(v51);
          }
          if ( v53 )
          {
            HIDWORD(v52) = v52;
            NVMeZeroMemory(v53, v52);
            HIDWORD(v51) = 0;
            LOBYTE(v1) = ReadMultiSzRegistryValueAndCompareId(
                           a1,
                           (unsigned int)"IoCompletionQueueCount",
                           v11,
                           (unsigned int)&v53,
                           (__int64)&v52,
                           (__int64)&v52 + 4,
                           (__int64)v54,
                           v7,
                           (__int64)&v51 + 4);
            LOBYTE(v51) = v1;
            if ( (_BYTE)v1 == 1 )
            {
              LOBYTE(v1) = BYTE4(v51);
              if ( HIDWORD(v51) )
                *(_WORD *)(a1 + 42) = WORD2(v51);
            }
            if ( v53 )
            {
              HIDWORD(v52) = v52;
              NVMeZeroMemory(v53, v52);
              HIDWORD(v51) = 0;
              LOBYTE(v1) = ReadMultiSzRegistryValueAndCompareId(
                             a1,
                             (unsigned int)"InterruptCoalescingTime",
                             v12,
                             (unsigned int)&v53,
                             (__int64)&v52,
                             (__int64)&v52 + 4,
                             (__int64)v54,
                             v7,
                             (__int64)&v51 + 4);
              LOBYTE(v51) = v1;
              if ( (_BYTE)v1 == 1 )
              {
                LOBYTE(v1) = BYTE4(v51);
                if ( HIDWORD(v51) )
                  *(_BYTE *)(a1 + 44) = BYTE4(v51);
              }
              if ( v53 )
              {
                HIDWORD(v52) = v52;
                NVMeZeroMemory(v53, v52);
                HIDWORD(v51) = 0;
                LOBYTE(v1) = ReadMultiSzRegistryValueAndCompareId(
                               a1,
                               (unsigned int)"InterruptCoalescingEntry",
                               v13,
                               (unsigned int)&v53,
                               (__int64)&v52,
                               (__int64)&v52 + 4,
                               (__int64)v54,
                               v7,
                               (__int64)&v51 + 4);
                LOBYTE(v51) = v1;
                if ( (_BYTE)v1 == 1 )
                {
                  LOBYTE(v1) = BYTE4(v51);
                  if ( HIDWORD(v51) )
                    *(_BYTE *)(a1 + 45) = BYTE4(v51);
                }
                if ( v53 )
                {
                  HIDWORD(v52) = v52;
                  NVMeZeroMemory(v53, v52);
                  HIDWORD(v51) = 0;
                  LOBYTE(v1) = ReadMultiSzRegistryValueAndCompareId(
                                 a1,
                                 (unsigned int)"ArbitrationBurst",
                                 v14,
                                 (unsigned int)&v53,
                                 (__int64)&v52,
                                 (__int64)&v52 + 4,
                                 (__int64)v54,
                                 v7,
                                 (__int64)&v51 + 4);
                  LOBYTE(v51) = v1;
                  if ( (_BYTE)v1 == 1 )
                  {
                    LOBYTE(v1) = BYTE4(v51);
                    if ( HIDWORD(v51) )
                      *(_BYTE *)(a1 + 46) = BYTE4(v51);
                  }
                  if ( v53 )
                  {
                    HIDWORD(v52) = v52;
                    NVMeZeroMemory(v53, v52);
                    HIDWORD(v51) = 0;
                    LOBYTE(v1) = ReadMultiSzRegistryValueAndCompareId(
                                   a1,
                                   (unsigned int)"ContiguousMemoryFromAnyNode",
                                   v15,
                                   (unsigned int)&v53,
                                   (__int64)&v52,
                                   (__int64)&v52 + 4,
                                   (__int64)v54,
                                   v7,
                                   (__int64)&v51 + 4);
                    LOBYTE(v51) = v1;
                    if ( (_BYTE)v1 == 1 && HIDWORD(v51) )
                      *(_DWORD *)(a1 + 56) |= 2u;
                    if ( v53 )
                    {
                      HIDWORD(v52) = v52;
                      NVMeZeroMemory(v53, v52);
                      HIDWORD(v51) = 0;
                      LOBYTE(v1) = ReadMultiSzRegistryValueAndCompareId(
                                     a1,
                                     (unsigned int)"ShutdownTimeout",
                                     v16,
                                     (unsigned int)&v53,
                                     (__int64)&v52,
                                     (__int64)&v52 + 4,
                                     (__int64)v54,
                                     v7,
                                     (__int64)&v51 + 4);
                      LOBYTE(v51) = v1;
                      if ( (_BYTE)v1 == 1 )
                      {
                        LOBYTE(v1) = BYTE4(v51);
                        if ( HIDWORD(v51) )
                        {
                          if ( HIDWORD(v51) > 0xFF )
                            LOBYTE(v1) = -1;
                          *(_BYTE *)(a1 + 47) = v1;
                        }
                      }
                      if ( v53 )
                      {
                        HIDWORD(v52) = v52;
                        NVMeZeroMemory(v53, v52);
                        HIDWORD(v51) = 0;
                        LOBYTE(v1) = ReadMultiSzRegistryValueAndCompareId(
                                       a1,
                                       (unsigned int)"DeallocateMaxLbaCount",
                                       v17,
                                       (unsigned int)&v53,
                                       (__int64)&v52,
                                       (__int64)&v52 + 4,
                                       (__int64)v54,
                                       v7,
                                       (__int64)&v51 + 4);
                        LOBYTE(v51) = v1;
                        if ( (_BYTE)v1 == 1 )
                        {
                          LOBYTE(v1) = BYTE4(v51);
                          if ( HIDWORD(v51) )
                            *(_DWORD *)(a1 + 48) = HIDWORD(v51);
                        }
                        if ( v53 )
                        {
                          HIDWORD(v52) = v52;
                          NVMeZeroMemory(v53, v52);
                          HIDWORD(v51) = 0;
                          LOBYTE(v1) = ReadMultiSzRegistryValueAndCompareId(
                                         a1,
                                         (unsigned int)"DisableDeallocate",
                                         v18,
                                         (unsigned int)&v53,
                                         (__int64)&v52,
                                         (__int64)&v52 + 4,
                                         (__int64)v54,
                                         v7,
                                         (__int64)&v51 + 4);
                          LOBYTE(v51) = v1;
                          if ( (_BYTE)v1 == 1 && HIDWORD(v51) )
                            *(_DWORD *)(a1 + 56) |= 1u;
                          if ( v53 )
                          {
                            HIDWORD(v52) = v52;
                            NVMeZeroMemory(v53, v52);
                            HIDWORD(v51) = 0;
                            LOBYTE(v1) = ReadMultiSzRegistryValueAndCompareId(
                                           a1,
                                           (unsigned int)"ControllerBasicInit",
                                           v19,
                                           (unsigned int)&v53,
                                           (__int64)&v52,
                                           (__int64)&v52 + 4,
                                           (__int64)v54,
                                           v7,
                                           (__int64)&v51 + 4);
                            LOBYTE(v51) = v1;
                            if ( (_BYTE)v1 == 1 && HIDWORD(v51) )
                              *(_DWORD *)(a1 + 56) |= 4u;
                            if ( v53 )
                            {
                              HIDWORD(v52) = v52;
                              NVMeZeroMemory(v53, v52);
                              HIDWORD(v51) = 0;
                              LOBYTE(v1) = ReadMultiSzRegistryValueAndCompareId(
                                             a1,
                                             (unsigned int)"AsyncEventMask",
                                             v20,
                                             (unsigned int)&v53,
                                             (__int64)&v52,
                                             (__int64)&v52 + 4,
                                             (__int64)v54,
                                             v7,
                                             (__int64)&v51 + 4);
                              if ( (_BYTE)v1 == 1 )
                              {
                                LOBYTE(v1) = BYTE4(v51);
                                if ( HIDWORD(v51) )
                                {
                                  LODWORD(v1) = BYTE4(v51) & 0x1F;
                                  *(_DWORD *)(a1 + 60) = v1;
                                }
                              }
                              v21 = v53;
                              if ( v53 )
                              {
                                LOBYTE(v51) = 0;
                                if ( !(unsigned int)StorPortExtendedFunction(
                                                      97LL,
                                                      a1,
                                                      0LL,
                                                      &v51,
                                                      v45,
                                                      v46,
                                                      v47,
                                                      v48,
                                                      v49,
                                                      v50,
                                                      v51,
                                                      v52,
                                                      v53,
                                                      v54[0],
                                                      v54[1],
                                                      v54[2],
                                                      v54[3],
                                                      v54[4])
                                  && (_BYTE)v51 )
                                {
                                  *(_DWORD *)(a1 + 80) = 2;
LABEL_71:
                                  HIDWORD(v52) = v52;
                                  NVMeZeroMemory(v21, v52);
                                  HIDWORD(v51) = 0;
                                  LOBYTE(v51) = ReadMultiSzRegistryValueAndCompareId(
                                                  a1,
                                                  (unsigned int)"DiagnosticFlags",
                                                  v23,
                                                  (unsigned int)&v53,
                                                  (__int64)&v52,
                                                  (__int64)&v52 + 4,
                                                  (__int64)v54,
                                                  v7,
                                                  (__int64)&v51 + 4);
                                  if ( (_BYTE)v51 == 1 && HIDWORD(v51) )
                                    *(_DWORD *)(a1 + 108) = HIDWORD(v51);
                                  LODWORD(v1) = *(_DWORD *)(a1 + 108);
                                  if ( (v1 & 2) != 0 )
                                    *(_DWORD *)(a1 + 112) = 0x100000;
                                  if ( v53 )
                                  {
                                    HIDWORD(v52) = v52;
                                    NVMeZeroMemory(v53, v52);
                                    HIDWORD(v51) = 0;
                                    LOBYTE(v51) = ReadMultiSzRegistryValueAndCompareId(
                                                    a1,
                                                    (unsigned int)"LogSize",
                                                    v24,
                                                    (unsigned int)&v53,
                                                    (__int64)&v52,
                                                    (__int64)&v52 + 4,
                                                    (__int64)v54,
                                                    v7,
                                                    (__int64)&v51 + 4);
                                    if ( (_BYTE)v51 == 1 && HIDWORD(v51) )
                                      *(_DWORD *)(a1 + 112) = HIDWORD(v51) << 10;
                                    LODWORD(v1) = -1431655765 * *(_DWORD *)(a1 + 112);
                                    v25 = v53;
                                    *(_DWORD *)(a1 + 3844) = *(_DWORD *)(a1 + 112) / 0x18u;
                                    if ( v25 )
                                    {
                                      HIDWORD(v52) = v52;
                                      NVMeZeroMemory(v25, v52);
                                      HIDWORD(v51) = 0;
                                      LOBYTE(v1) = ReadMultiSzRegistryValueAndCompareId(
                                                     a1,
                                                     (unsigned int)"IoStripeAlignment",
                                                     v26,
                                                     (unsigned int)&v53,
                                                     (__int64)&v52,
                                                     (__int64)&v52 + 4,
                                                     (__int64)v54,
                                                     v7,
                                                     (__int64)&v51 + 4);
                                      LOBYTE(v51) = v1;
                                      if ( (_BYTE)v1 == 1 )
                                      {
                                        LOBYTE(v1) = BYTE4(v51);
                                        if ( HIDWORD(v51) )
                                        {
                                          LODWORD(v1) = HIDWORD(v51) << 10;
                                          if ( ((HIDWORD(v51) << 10) & 0xFFF) == 0 )
                                            *(_DWORD *)(a1 + 52) = v1;
                                        }
                                      }
                                      if ( v53 )
                                      {
                                        HIDWORD(v52) = v52;
                                        NVMeZeroMemory(v53, v52);
                                        HIDWORD(v51) = 0;
                                        LOBYTE(v1) = ReadMultiSzRegistryValueAndCompareId(
                                                       a1,
                                                       (unsigned int)"MedPowerFxIdleTimeout",
                                                       v27,
                                                       (unsigned int)&v53,
                                                       (__int64)&v52,
                                                       (__int64)&v52 + 4,
                                                       (__int64)v54,
                                                       v7,
                                                       (__int64)&v51 + 4);
                                        LOBYTE(v51) = v1;
                                        if ( (_BYTE)v1 == 1 )
                                        {
                                          LOBYTE(v1) = BYTE4(v51);
                                          *(_DWORD *)(a1 + 84) = HIDWORD(v51);
                                        }
                                        if ( v53 )
                                        {
                                          HIDWORD(v52) = v52;
                                          NVMeZeroMemory(v53, v52);
                                          HIDWORD(v51) = 0;
                                          LOBYTE(v1) = ReadMultiSzRegistryValueAndCompareId(
                                                         a1,
                                                         (unsigned int)"LowestPowerFxIdleTimeout",
                                                         v28,
                                                         (unsigned int)&v53,
                                                         (__int64)&v52,
                                                         (__int64)&v52 + 4,
                                                         (__int64)v54,
                                                         v7,
                                                         (__int64)&v51 + 4);
                                          LOBYTE(v51) = v1;
                                          if ( (_BYTE)v1 == 1 )
                                          {
                                            LOBYTE(v1) = BYTE4(v51);
                                            *(_DWORD *)(a1 + 88) = HIDWORD(v51);
                                          }
                                          if ( v53 )
                                          {
                                            HIDWORD(v52) = v52;
                                            NVMeZeroMemory(v53, v52);
                                            HIDWORD(v51) = 0;
                                            LOBYTE(v1) = ReadMultiSzRegistryValueAndCompareId(
                                                           a1,
                                                           (unsigned int)"MedPowerD3IdleTimeout",
                                                           v29,
                                                           (unsigned int)&v53,
                                                           (__int64)&v52,
                                                           (__int64)&v52 + 4,
                                                           (__int64)v54,
                                                           v7,
                                                           (__int64)&v51 + 4);
                                            LOBYTE(v51) = v1;
                                            if ( (_BYTE)v1 == 1 )
                                            {
                                              LOBYTE(v1) = BYTE4(v51);
                                              *(_DWORD *)(a1 + 92) = HIDWORD(v51);
                                            }
                                            if ( v53 )
                                            {
                                              HIDWORD(v52) = v52;
                                              NVMeZeroMemory(v53, v52);
                                              HIDWORD(v51) = 0;
                                              LOBYTE(v1) = ReadMultiSzRegistryValueAndCompareId(
                                                             a1,
                                                             (unsigned int)"LowestPowerD3IdleTimeout",
                                                             v30,
                                                             (unsigned int)&v53,
                                                             (__int64)&v52,
                                                             (__int64)&v52 + 4,
                                                             (__int64)v54,
                                                             v7,
                                                             (__int64)&v51 + 4);
                                              LOBYTE(v51) = v1;
                                              if ( (_BYTE)v1 == 1 )
                                              {
                                                LOBYTE(v1) = BYTE4(v51);
                                                *(_DWORD *)(a1 + 96) = HIDWORD(v51);
                                              }
                                              if ( v53 )
                                              {
                                                HIDWORD(v52) = v52;
                                                NVMeZeroMemory(v53, v52);
                                                HIDWORD(v51) = 0;
                                                LOBYTE(v1) = ReadMultiSzRegistryValueAndCompareId(
                                                               a1,
                                                               (unsigned int)"MedPowerResumeLatency",
                                                               v31,
                                                               (unsigned int)&v53,
                                                               (__int64)&v52,
                                                               (__int64)&v52 + 4,
                                                               (__int64)v54,
                                                               v7,
                                                               (__int64)&v51 + 4);
                                                LOBYTE(v51) = v1;
                                                if ( (_BYTE)v1 == 1 )
                                                {
                                                  LOBYTE(v1) = BYTE4(v51);
                                                  *(_DWORD *)(a1 + 100) = HIDWORD(v51);
                                                }
                                                if ( v53 )
                                                {
                                                  HIDWORD(v52) = v52;
                                                  NVMeZeroMemory(v53, v52);
                                                  HIDWORD(v51) = 0;
                                                  LOBYTE(v1) = ReadMultiSzRegistryValueAndCompareId(
                                                                 a1,
                                                                 (unsigned int)"LowestPowerResumeLatency",
                                                                 v32,
                                                                 (unsigned int)&v53,
                                                                 (__int64)&v52,
                                                                 (__int64)&v52 + 4,
                                                                 (__int64)v54,
                                                                 v7,
                                                                 (__int64)&v51 + 4);
                                                  LOBYTE(v51) = v1;
                                                  if ( (_BYTE)v1 == 1 )
                                                  {
                                                    LOBYTE(v1) = BYTE4(v51);
                                                    *(_DWORD *)(a1 + 104) = HIDWORD(v51);
                                                  }
                                                  if ( v53 )
                                                  {
                                                    HIDWORD(v52) = v52;
                                                    NVMeZeroMemory(v53, v52);
                                                    HIDWORD(v51) = 0;
                                                    LOBYTE(v1) = ReadMultiSzRegistryValueAndCompareId(
                                                                   a1,
                                                                   (unsigned int)"HostMemoryBufferBytes",
                                                                   v33,
                                                                   (unsigned int)&v53,
                                                                   (__int64)&v52,
                                                                   (__int64)&v52 + 4,
                                                                   (__int64)v54,
                                                                   v7,
                                                                   (__int64)&v51 + 4);
                                                    LOBYTE(v51) = v1;
                                                    if ( (_BYTE)v1 == 1 )
                                                    {
                                                      LOBYTE(v1) = BYTE4(v51);
                                                      *(_DWORD *)(a1 + 116) = HIDWORD(v51);
                                                    }
                                                    if ( v53 )
                                                    {
                                                      HIDWORD(v52) = v52;
                                                      NVMeZeroMemory(v53, v52);
                                                      HIDWORD(v51) = 0;
                                                      LOBYTE(v1) = ReadMultiSzRegistryValueAndCompareId(
                                                                     a1,
                                                                     (unsigned int)"BypassSgl",
                                                                     v34,
                                                                     (unsigned int)&v53,
                                                                     (__int64)&v52,
                                                                     (__int64)&v52 + 4,
                                                                     (__int64)v54,
                                                                     v7,
                                                                     (__int64)&v51 + 4);
                                                      LOBYTE(v51) = v1;
                                                      if ( (_BYTE)v1 == 1 )
                                                      {
                                                        LODWORD(v1) = (*(_DWORD *)(a1 + 56) ^ (8 * HIDWORD(v51))) & 8;
                                                        *(_DWORD *)(a1 + 56) ^= v1;
                                                      }
                                                      if ( v53 )
                                                      {
                                                        HIDWORD(v52) = v52;
                                                        NVMeZeroMemory(v53, v52);
                                                        HIDWORD(v51) = 0;
                                                        LOBYTE(v1) = ReadMultiSzRegistryValueAndCompareId(
                                                                       a1,
                                                                       (unsigned int)"TestMdlDataBufferOffsetInBytes",
                                                                       v35,
                                                                       (unsigned int)&v53,
                                                                       (__int64)&v52,
                                                                       (__int64)&v52 + 4,
                                                                       (__int64)v54,
                                                                       v7,
                                                                       (__int64)&v51 + 4);
                                                        LOBYTE(v51) = v1;
                                                        if ( (_BYTE)v1 == 1 )
                                                        {
                                                          LOBYTE(v1) = BYTE4(v51);
                                                          *(_DWORD *)(a1 + 120) = HIDWORD(v51);
                                                        }
                                                        if ( v53 )
                                                        {
                                                          HIDWORD(v52) = v52;
                                                          NVMeZeroMemory(v53, v52);
                                                          LOBYTE(v1) = ReadMultiSzRegistryValueAndCompareId(
                                                                         a1,
                                                                         (unsigned int)"UseDumpPointers",
                                                                         v36,
                                                                         (unsigned int)&v53,
                                                                         (__int64)&v52,
                                                                         (__int64)&v52 + 4,
                                                                         (__int64)v54,
                                                                         v7,
                                                                         0LL);
                                                          LOBYTE(v51) = v1;
                                                          if ( (_BYTE)v1 == 1 )
                                                            *(_DWORD *)(a1 + 56) |= 0x10u;
                                                          if ( v53 )
                                                          {
                                                            HIDWORD(v52) = v52;
                                                            NVMeZeroMemory(v53, v52);
                                                            HIDWORD(v51) = 0;
                                                            LOBYTE(v1) = ReadMultiSzRegistryValueAndCompareId(
                                                                           a1,
                                                                           (unsigned int)"ReservedQueuePairCount",
                                                                           v37,
                                                                           (unsigned int)&v53,
                                                                           (__int64)&v52,
                                                                           (__int64)&v52 + 4,
                                                                           (__int64)v54,
                                                                           v7,
                                                                           (__int64)&v51 + 4);
                                                            LOBYTE(v51) = v1;
                                                            if ( (_BYTE)v1 == 1 )
                                                            {
                                                              LOBYTE(v1) = BYTE4(v51) - 1;
                                                              if ( (unsigned int)(HIDWORD(v51) - 1) <= 0xFFFE )
                                                                *(_DWORD *)(a1 + 124) = HIDWORD(v51);
                                                            }
                                                            if ( v53 )
                                                            {
                                                              HIDWORD(v52) = v52;
                                                              NVMeZeroMemory(v53, v52);
                                                              HIDWORD(v51) = 0;
                                                              LOBYTE(v1) = ReadMultiSzRegistryValueAndCompareId(
                                                                             a1,
                                                                             (unsigned int)"NvmeTestSwitch",
                                                                             v38,
                                                                             (unsigned int)&v53,
                                                                             (__int64)&v52,
                                                                             (__int64)&v52 + 4,
                                                                             (__int64)v54,
                                                                             v7,
                                                                             (__int64)&v51 + 4);
                                                              LOBYTE(v51) = v1;
                                                              if ( (_BYTE)v1 == 1 )
                                                              {
                                                                LOBYTE(v1) = BYTE4(v51);
                                                                if ( HIDWORD(v51) )
                                                                  *(_DWORD *)(a1 + 128) = HIDWORD(v51);
                                                              }
                                                              if ( v53 )
                                                              {
                                                                HIDWORD(v52) = v52;
                                                                NVMeZeroMemory(v53, v52);
                                                                HIDWORD(v51) = 0;
                                                                LOBYTE(v1) = ReadMultiSzRegistryValueAndCompareId(
                                                                               a1,
                                                                               (unsigned int)"IoQueuePercentageInPollingMode",
                                                                               v39,
                                                                               (unsigned int)&v53,
                                                                               (__int64)&v52,
                                                                               (__int64)&v52 + 4,
                                                                               (__int64)v54,
                                                                               v7,
                                                                               (__int64)&v51 + 4);
                                                                LOBYTE(v51) = v1;
                                                                if ( (_BYTE)v1 == 1 )
                                                                {
                                                                  if ( HIDWORD(v51) <= 0x64 )
                                                                  {
                                                                    LOBYTE(v1) = BYTE4(v51);
                                                                    *(_DWORD *)(a1 + 64) = WORD2(v51);
                                                                  }
                                                                  else
                                                                  {
                                                                    *(_DWORD *)(a1 + 64) = 100;
                                                                  }
                                                                }
                                                                if ( v53 )
                                                                {
                                                                  HIDWORD(v52) = v52;
                                                                  NVMeZeroMemory(v53, v52);
                                                                  HIDWORD(v51) = 0;
                                                                  LOBYTE(v1) = ReadMultiSzRegistryValueAndCompareId(
                                                                                 a1,
                                                                                 (unsigned int)"IoPollingInterval",
                                                                                 v40,
                                                                                 (unsigned int)&v53,
                                                                                 (__int64)&v52,
                                                                                 (__int64)&v52 + 4,
                                                                                 (__int64)v54,
                                                                                 v7,
                                                                                 (__int64)&v51 + 4);
                                                                  LOBYTE(v51) = v1;
                                                                  if ( (_BYTE)v1 == 1 )
                                                                  {
                                                                    LODWORD(v1) = 100000;
                                                                    if ( HIDWORD(v51) < 0x186A0 )
                                                                      LODWORD(v1) = HIDWORD(v51);
                                                                    *(_DWORD *)(a1 + 68) = v1;
                                                                  }
                                                                  if ( v53 )
                                                                  {
                                                                    HIDWORD(v52) = v52;
                                                                    NVMeZeroMemory(v53, v52);
                                                                    HIDWORD(v51) = 0;
                                                                    LOBYTE(v1) = ReadMultiSzRegistryValueAndCompareId(
                                                                                   a1,
                                                                                   (unsigned int)"IoCompletionCapInDPC",
                                                                                   v41,
                                                                                   (unsigned int)&v53,
                                                                                   (__int64)&v52,
                                                                                   (__int64)&v52 + 4,
                                                                                   (__int64)v54,
                                                                                   v7,
                                                                                   (__int64)&v51 + 4);
                                                                    LOBYTE(v51) = v1;
                                                                    if ( (_BYTE)v1 == 1 )
                                                                    {
                                                                      LODWORD(v1) = HIDWORD(v51);
                                                                      if ( HIDWORD(v51) )
                                                                      {
                                                                        if ( HIDWORD(v51) > 0x80 )
                                                                          LODWORD(v1) = 128;
                                                                        *(_DWORD *)(a1 + 72) = v1;
                                                                      }
                                                                    }
                                                                    if ( v53 )
                                                                    {
                                                                      HIDWORD(v52) = v52;
                                                                      NVMeZeroMemory(v53, v52);
                                                                      HIDWORD(v51) = 0;
                                                                      LOBYTE(v1) = ReadMultiSzRegistryValueAndCompareId(
                                                                                     a1,
                                                                                     (unsigned int)"IoPollingSize",
                                                                                     v42,
                                                                                     (unsigned int)&v53,
                                                                                     (__int64)&v52,
                                                                                     (__int64)&v52 + 4,
                                                                                     (__int64)v54,
                                                                                     v7,
                                                                                     (__int64)&v51 + 4);
                                                                      LOBYTE(v51) = v1;
                                                                      if ( (_BYTE)v1 == 1 )
                                                                      {
                                                                        LOBYTE(v1) = BYTE4(v51);
                                                                        if ( HIDWORD(v51) )
                                                                          *(_DWORD *)(a1 + 76) = HIDWORD(v51);
                                                                      }
                                                                      if ( v53 )
                                                                      {
                                                                        HIDWORD(v52) = v52;
                                                                        NVMeZeroMemory(v53, v52);
                                                                        HIDWORD(v51) = 0;
                                                                        LOBYTE(v1) = ReadMultiSzRegistryValueAndCompareId(
                                                                                       a1,
                                                                                       (unsigned int)"ErrorEtwThrottleInterval",
                                                                                       v43,
                                                                                       (unsigned int)&v53,
                                                                                       (__int64)&v52,
                                                                                       (__int64)&v52 + 4,
                                                                                       (__int64)v54,
                                                                                       v7,
                                                                                       (__int64)&v51 + 4);
                                                                        LOBYTE(v51) = v1;
                                                                        if ( (_BYTE)v1 == 1 )
                                                                        {
                                                                          LODWORD(v1) = HIDWORD(v51);
                                                                          if ( HIDWORD(v51) )
                                                                          {
                                                                            if ( HIDWORD(v51) > 0xD693A400 )
                                                                              LODWORD(v1) = -694967296;
                                                                            *(_DWORD *)(a1 + 132) = v1;
                                                                          }
                                                                        }
                                                                        if ( v53 )
                                                                          LOBYTE(v1) = StorPortFreeRegistryBuffer(a1);
                                                                      }
                                                                    }
                                                                  }
                                                                }
                                                              }
                                                            }
                                                          }
                                                        }
                                                      }
                                                    }
                                                  }
                                                }
                                              }
                                            }
                                          }
                                        }
                                      }
                                    }
                                  }
                                  return v1;
                                }
                                HIDWORD(v52) = v52;
                                NVMeZeroMemory(v21, v52);
                                HIDWORD(v51) = 0;
                                LOBYTE(v1) = ReadMultiSzRegistryValueAndCompareId(
                                               a1,
                                               (unsigned int)"IdlePowerMode",
                                               v22,
                                               (unsigned int)&v53,
                                               (__int64)&v52,
                                               (__int64)&v52 + 4,
                                               (__int64)v54,
                                               v7,
                                               (__int64)&v51 + 4);
                                LOBYTE(v51) = v1;
                                if ( (_BYTE)v1 == 1 )
                                {
                                  LOBYTE(v1) = BYTE4(v51);
                                  if ( HIDWORD(v51) < 6 )
                                    *(_DWORD *)(a1 + 80) = HIDWORD(v51);
                                }
                                v21 = v53;
                                if ( v53 )
                                  goto LABEL_71;
                              }
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
  }
  return v1;
}
