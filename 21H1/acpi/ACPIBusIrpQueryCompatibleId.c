/*
 * XREFs of ACPIBusIrpQueryCompatibleId @ 0x1C00963FC
 * Callers:
 *     ACPIBusIrpQueryId @ 0x1C008FBF0 (ACPIBusIrpQueryId.c)
 * Callees:
 *     RtlStringCbPrintfExW @ 0x1C00023D0 (RtlStringCbPrintfExW.c)
 *     AMLIGetNSObjectType @ 0x1C000256C (AMLIGetNSObjectType.c)
 *     ACPIGet @ 0x1C0003AB0 (ACPIGet.c)
 *     memmove @ 0x1C0031EC0 (memmove.c)
 *     memset @ 0x1C0032180 (memset.c)
 *     WPP_RECORDER_SF_qdLqss @ 0x1C004E384 (WPP_RECORDER_SF_qdLqss.c)
 *     ACPIAllocateBuffer @ 0x1C008F780 (ACPIAllocateBuffer.c)
 *     ACPIValidateStringVendorDeviceIdFormat @ 0x1C008F824 (ACPIValidateStringVendorDeviceIdFormat.c)
 */

__int64 __fastcall ACPIBusIrpQueryCompatibleId(wchar_t **a1, SIZE_T *a2, __int64 a3)
{
  void *v6; // r15
  __int64 v7; // rdi
  wchar_t *v8; // rax
  NTSTRSAFE_PWSTR v9; // rsi
  size_t v10; // rbx
  __int64 v11; // r9
  __int64 v12; // rcx
  __int64 v13; // rax
  __int64 v14; // rax
  size_t v15; // rdx
  PVOID PoolWithTag; // rax
  size_t v17; // r8
  char *v18; // rdx
  SIZE_T v19; // rdx
  PVOID v20; // rax
  unsigned __int64 v21; // rdi
  __int64 v22; // rax
  size_t v24; // rdx
  int v25; // eax
  const char *v26; // rax
  __int64 v27; // r8
  const char *v28; // rcx
  __int64 v29; // rdx
  int dwFlags; // [rsp+20h] [rbp-58h]
  int pszFormat; // [rsp+28h] [rbp-50h]
  int v32; // [rsp+30h] [rbp-48h]
  size_t v33; // [rsp+60h] [rbp-18h] BYREF
  PVOID P[2]; // [rsp+68h] [rbp-10h] BYREF
  size_t pcbRemaining; // [rsp+C0h] [rbp+48h] BYREF
  NTSTRSAFE_PWSTR ppszDestEnd; // [rsp+C8h] [rbp+50h] BYREF
  void *v37; // [rsp+D0h] [rbp+58h] BYREF
  size_t Size; // [rsp+D8h] [rbp+60h] BYREF

  Size = 0LL;
  v37 = 0LL;
  P[0] = 0LL;
  v33 = 0LL;
  v6 = 0LL;
  v7 = 0LL;
  v8 = (wchar_t *)ACPIAllocateBuffer(a2, a3, 0x294uLL);
  *a1 = v8;
  v9 = v8;
  v10 = *a2;
  v11 = 0x200000000000LL;
  pcbRemaining = *a2;
  ppszDestEnd = v8;
  if ( !v8 )
  {
    LODWORD(v7) = -1073741670;
    goto LABEL_41;
  }
  v12 = *(_QWORD *)(a3 + 720);
  if ( v12 && (unsigned int)AMLIGetNSObjectType(v12) == 12 )
  {
    LODWORD(v7) = ACPIGet((__int64 *)a3, 1145652063, 268960023, 0LL, 0, 0LL, 0LL, (__int64)P, (__int64)&v33);
    if ( (int)v7 >= 0 )
    {
      if ( v10 >= v33 )
      {
        memmove(v9, P[0], v33);
        v24 = v33;
        if ( v10 < v33 )
          goto LABEL_20;
        goto LABEL_33;
      }
LABEL_40:
      LODWORD(v7) = -1073741670;
      goto LABEL_41;
    }
    goto LABEL_21;
  }
  v13 = *(_QWORD *)(a3 + 8);
  if ( (v13 & v11) == 0 || (v13 & 0x800000000000LL) != 0 )
    goto LABEL_17;
  v14 = *(_QWORD *)(a3 + 568);
  if ( !v14 )
  {
    v25 = ACPIGet((__int64 *)a3, 1145653343, 268959782, 0LL, 0, 0LL, 0LL, (__int64)&v37, (__int64)&Size);
    goto LABEL_34;
  }
  v15 = -1LL;
  do
    ++v15;
  while ( *(_BYTE *)(v14 + v15) );
  Size = v15;
  PoolWithTag = ExAllocatePoolWithTag(PagedPool, v15, 0x42706341u);
  v37 = PoolWithTag;
  if ( PoolWithTag )
  {
    memset(PoolWithTag, 0, Size);
    v17 = Size;
    v18 = *(char **)(a3 + 568);
    if ( Size >= 5 )
    {
      v17 = Size - 5;
      Size -= 5LL;
      v18 += 5;
    }
    memmove(v37, v18, v17);
    if ( !ACPIValidateStringVendorDeviceIdFormat((__int64)v37, Size) && (*(_BYTE *)(a3 + 960) & 0x1C) == 0 )
    {
LABEL_18:
      LODWORD(v7) = ACPIGet((__int64 *)a3, 1145652063, 268960023, 0LL, 0, 0LL, 0LL, (__int64)P, (__int64)&v33);
      if ( (int)v7 < 0 && v10 == *a2 )
        goto LABEL_20;
      LODWORD(v7) = 0;
      if ( v10 >= v33 )
      {
        memmove(v9, P[0], v33);
        if ( !v9 )
          goto LABEL_22;
        v24 = v33;
        if ( v10 < v33 )
          goto LABEL_22;
LABEL_33:
        v25 = RtlStringCbPrintfExW(&v9[v24 >> 1], v10 - v24, &ppszDestEnd, &pcbRemaining, 0, &word_1C006F7EC);
LABEL_34:
        LODWORD(v7) = v25;
        goto LABEL_20;
      }
      goto LABEL_40;
    }
    v20 = ExAllocatePoolWithTag(PagedPool, v19, 0x42706341u);
    v6 = v20;
    if ( !v20 )
      goto LABEL_22;
    memset(v20, 0, Size);
    LOBYTE(v7) = Size != 7;
    v21 = v7 + 3;
    memset(v6, 0, Size);
    if ( Size > v21 )
    {
      memmove(v6, (char *)v37 + v21, Size - v21);
      *((_BYTE *)v37 + v21) = 0;
    }
    v22 = *(_QWORD *)(a3 + 960);
    if ( (v22 & 0x10) != 0 )
    {
      if ( (v22 & 8) != 0 )
      {
        v32 = (int)v37;
        LODWORD(v7) = RtlStringCbPrintfExW(v9, v10, &ppszDestEnd, &pcbRemaining, 0, L"ACPI\\VEN_%S&DEV_%S&REV_%04X");
        if ( (int)v7 < 0 )
          goto LABEL_21;
        if ( !ppszDestEnd || pcbRemaining < 2 )
          goto LABEL_20;
        v9 = ppszDestEnd + 1;
        v10 = pcbRemaining - 2;
        ++ppszDestEnd;
        pcbRemaining -= 2LL;
      }
      v32 = (int)v37;
      LODWORD(v7) = RtlStringCbPrintfExW(v9, v10, &ppszDestEnd, &pcbRemaining, 0, L"ACPI\\VEN_%S&DEV_%S");
      if ( (int)v7 < 0 )
      {
LABEL_21:
        if ( (_DWORD)v7 == -1073741772 )
          goto LABEL_22;
LABEL_41:
        v26 = byte_1C00701BA;
        v27 = 0LL;
        v28 = byte_1C00701BA;
        if ( a3 )
        {
          v29 = *(_QWORD *)(a3 + 8);
          v27 = a3;
          if ( (v29 & 0x200000000000LL) != 0 )
          {
            v26 = *(const char **)(a3 + 568);
            if ( (v29 & 0x400000000000LL) != 0 )
              v28 = *(const char **)(a3 + 576);
          }
        }
        if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          WPP_RECORDER_SF_qdLqss(
            (__int64)WPP_GLOBAL_Control->DeviceExtension,
            (__int64)&WPP_RECORDER_INITIALIZED,
            v27,
            0x26u,
            dwFlags,
            pszFormat,
            v32,
            v7,
            v27,
            v26,
            v28);
        goto LABEL_22;
      }
      if ( !ppszDestEnd || pcbRemaining < 2 )
        goto LABEL_20;
      v9 = ppszDestEnd + 1;
      v10 = pcbRemaining - 2;
      ++ppszDestEnd;
      pcbRemaining -= 2LL;
    }
LABEL_17:
    if ( (*(_BYTE *)(a3 + 960) & 4) == 0 )
      goto LABEL_18;
    v32 = (int)v37;
    LODWORD(v7) = RtlStringCbPrintfExW(
                    v9,
                    v10,
                    &ppszDestEnd,
                    &pcbRemaining,
                    0,
                    L"ACPI\\VEN_%S&CLS_%04I64X&SUBCLS_%04I64X&PI_%02I64X");
    if ( (int)v7 >= 0 )
    {
      if ( !ppszDestEnd || pcbRemaining < 2 )
        goto LABEL_20;
      v32 = (int)v37;
      ++ppszDestEnd;
      pcbRemaining -= 2LL;
      LODWORD(v7) = RtlStringCbPrintfExW(
                      ppszDestEnd,
                      pcbRemaining,
                      &ppszDestEnd,
                      &pcbRemaining,
                      0,
                      L"ACPI\\VEN_%S&CLS_%04I64X&SUBCLS_%04I64X");
      if ( (int)v7 >= 0 )
      {
        if ( !ppszDestEnd || pcbRemaining < 2 )
          goto LABEL_20;
        v32 = (int)v37;
        ++ppszDestEnd;
        pcbRemaining -= 2LL;
        LODWORD(v7) = RtlStringCbPrintfExW(ppszDestEnd, pcbRemaining, &ppszDestEnd, &pcbRemaining, 0, L"ACPI\\VEN_%S");
        if ( (int)v7 >= 0 )
        {
          if ( !ppszDestEnd || pcbRemaining < 2 )
            goto LABEL_20;
          v32 = *(unsigned __int16 *)(a3 + 606);
          ++ppszDestEnd;
          pcbRemaining -= 2LL;
          LODWORD(v7) = RtlStringCbPrintfExW(
                          ppszDestEnd,
                          pcbRemaining,
                          &ppszDestEnd,
                          &pcbRemaining,
                          0,
                          L"ACPI\\CLS_%04I64X&SUBCLS_%04I64X&PI_%02I64X");
          if ( (int)v7 >= 0 )
          {
            if ( !ppszDestEnd || pcbRemaining < 2 )
              goto LABEL_20;
            v32 = *(unsigned __int16 *)(a3 + 606);
            ++ppszDestEnd;
            pcbRemaining -= 2LL;
            LODWORD(v7) = RtlStringCbPrintfExW(
                            ppszDestEnd,
                            pcbRemaining,
                            &ppszDestEnd,
                            &pcbRemaining,
                            0,
                            L"ACPI\\CLS_%04I64X&SUBCLS_%04I64X");
            if ( (int)v7 >= 0 )
            {
              if ( ppszDestEnd && pcbRemaining >= 2 )
              {
                v9 = ppszDestEnd + 1;
                v10 = pcbRemaining - 2;
                goto LABEL_18;
              }
LABEL_20:
              if ( (int)v7 < 0 )
                goto LABEL_21;
LABEL_22:
              PoolWithTag = v37;
              goto LABEL_23;
            }
          }
        }
      }
    }
    goto LABEL_21;
  }
LABEL_23:
  if ( P[0] )
  {
    ExFreePoolWithTag(P[0], 0x53706341u);
    PoolWithTag = v37;
  }
  if ( v6 )
  {
    ExFreePoolWithTag(v6, 0x53706341u);
    PoolWithTag = v37;
  }
  if ( PoolWithTag )
    ExFreePoolWithTag(PoolWithTag, 0x53706341u);
  return (unsigned int)v7;
}
