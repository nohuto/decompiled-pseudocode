/*
 * XREFs of TranslateToExtendedSrb @ 0x1C0041A04
 * Callers:
 *     RaidUnitClaimIrp @ 0x1C0005450 (RaidUnitClaimIrp.c)
 * Callees:
 *     McTemplateK0zx_EtwWriteTransfer @ 0x1C00414B8 (McTemplateK0zx_EtwWriteTransfer.c)
 *     TranslateScsiRequestBlockToIoInfoSrbExData @ 0x1C0041728 (TranslateScsiRequestBlockToIoInfoSrbExData.c)
 *     TranslateScsiRequestBlockToScsiCdb16SrbExData @ 0x1C004188C (TranslateScsiRequestBlockToScsiCdb16SrbExData.c)
 *     TranslateScsiRequestBlockToStorageRequestBlock @ 0x1C00418E4 (TranslateScsiRequestBlockToStorageRequestBlock.c)
 */

__int64 __fastcall TranslateToExtendedSrb(__int64 a1, __int64 a2, unsigned int a3, __int64 a4, __int64 a5, char a6)
{
  __int64 v6; // rsi
  unsigned __int64 v7; // r15
  int v10; // ebp
  LARGE_INTEGER v11; // rax
  LARGE_INTEGER v12; // rbx
  unsigned __int8 v13; // al
  unsigned int v14; // eax
  __int64 v15; // rdx
  char v16; // r9
  __int64 v17; // rdx
  LARGE_INTEGER PerformanceCounter; // rax
  LARGE_INTEGER v19; // rdx
  LARGE_INTEGER v20; // rcx
  LARGE_INTEGER v21; // r8
  unsigned __int64 v22; // rax
  unsigned __int64 v23; // rtt
  unsigned __int64 v24; // rtt
  LARGE_INTEGER v26; // [rsp+60h] [rbp+8h] BYREF

  LOBYTE(v6) = 0;
  v7 = a3;
  v10 = 0;
  v26.QuadPart = 1LL;
  if ( !a1 || !a2 )
    return 3221225485LL;
  if ( UseQPCTime )
    v11 = KeQueryPerformanceCounter(&v26);
  else
    v11.QuadPart = KeQueryUnbiasedInterruptTime();
  v12 = v11;
  v13 = *(_BYTE *)(a2 + 2);
  if ( v13 <= 0x15u )
  {
    if ( v13 != 21 )
    {
      if ( !v13 )
      {
        v14 = 224;
        if ( a6 != 1 )
          v14 = 184;
        if ( (unsigned int)v7 < v14 )
          goto LABEL_50;
        TranslateScsiRequestBlockToStorageRequestBlock(a1, a2, 1, a6, v14);
        v15 = 152LL;
        if ( v16 != 1 )
          v15 = 144LL;
        *(_DWORD *)(a1 + 120) = v15;
        if ( v15 + 40 > v7 )
          v10 = -1073741670;
        else
          TranslateScsiRequestBlockToScsiCdb16SrbExData(a1 + (unsigned int)v15, a2);
        if ( a6 == 1 && *(_DWORD *)(a1 + 56) > 1u )
        {
          *(_DWORD *)(a1 + 124) = 192;
          if ( v7 < 0xE0 )
            v10 = -1073741670;
          else
            TranslateScsiRequestBlockToIoInfoSrbExData(a1 + 192, a2, a5);
        }
        if ( v10 < 0 )
          goto LABEL_51;
        goto LABEL_48;
      }
      if ( v13 > 2u && v13 != 4 && (v13 <= 5u || v13 > 9u && v13 != 16 && (v13 <= 0x11u || v13 > 0x13u)) )
        goto LABEL_16;
    }
    goto LABEL_39;
  }
  if ( v13 == 23 )
  {
    if ( (unsigned int)v7 < 0xA8 )
      goto LABEL_50;
    TranslateScsiRequestBlockToStorageRequestBlock(a1, a2, 1, 0, 168);
    *(_DWORD *)(a1 + 120) = 144;
    *(_DWORD *)(a1 + 144) = 96;
    *(_DWORD *)(a1 + 148) = 16;
    *(_BYTE *)(a1 + 152) = *(_BYTE *)(a2 + 4);
    *(_BYTE *)(a1 + 153) = *(_BYTE *)(a2 + 9);
    *(_QWORD *)(a1 + 160) = *(_QWORD *)(a2 + 32);
    goto LABEL_48;
  }
  if ( v13 <= 0x17u )
    goto LABEL_16;
  if ( v13 <= 0x1Au || v13 == 32 )
    goto LABEL_39;
  switch ( v13 )
  {
    case '$':
      if ( (unsigned int)v7 < 0xA8 )
        goto LABEL_50;
      TranslateScsiRequestBlockToStorageRequestBlock(a1, a2, 1, 0, 168);
      *(_DWORD *)(a1 + 120) = 144;
      *(_DWORD *)(a1 + 144) = 97;
      *(_DWORD *)(a1 + 148) = 12;
LABEL_43:
      *(_BYTE *)(a1 + 152) = *(_BYTE *)(a2 + 4);
      *(_DWORD *)(a1 + 156) = *(_DWORD *)(a2 + 8);
      *(_DWORD *)(a1 + 160) = *(_DWORD *)(a2 + 64);
      goto LABEL_48;
    case '%':
      if ( (unsigned int)v7 < 0xA8 )
        goto LABEL_50;
      TranslateScsiRequestBlockToStorageRequestBlock(a1, a2, 1, 0, 168);
      *(_DWORD *)(a1 + 120) = 144;
      *(_DWORD *)(a1 + 144) = 98;
      *(_DWORD *)(a1 + 148) = 16;
      goto LABEL_43;
    case '&':
LABEL_39:
      if ( (unsigned int)v7 < 0x90 )
        goto LABEL_50;
      TranslateScsiRequestBlockToStorageRequestBlock(a1, a2, 0, 0, 144);
LABEL_48:
      v17 = *(unsigned int *)(a1 + 52);
      if ( v17 + 16 <= v7 )
      {
        *(_DWORD *)(v17 + a1) = 1;
        *(_DWORD *)(v17 + a1 + 4) = 4;
        *(_BYTE *)(v17 + a1 + 8) = *(_BYTE *)(a2 + 5);
        *(_BYTE *)(v17 + a1 + 9) = *(_BYTE *)(a2 + 6);
        *(_BYTE *)(v17 + a1 + 10) = *(_BYTE *)(a2 + 7);
        goto LABEL_51;
      }
LABEL_50:
      v10 = -1073741670;
      goto LABEL_51;
  }
LABEL_16:
  v10 = -1073741811;
LABEL_51:
  if ( UseQPCTime )
    PerformanceCounter = KeQueryPerformanceCounter(0LL);
  else
    PerformanceCounter.QuadPart = KeQueryUnbiasedInterruptTime();
  if ( PerformanceCounter.QuadPart <= 0 || PerformanceCounter.QuadPart >= v12.QuadPart )
    v22 = PerformanceCounter.QuadPart - v12.QuadPart;
  else
    v22 = PerformanceCounter.QuadPart - v12.QuadPart - 1;
  if ( UseQPCTime )
  {
    v20 = v26;
    if ( v26.QuadPart && v22 )
    {
      v23 = 1000 * (v22 % v26.QuadPart);
      v21.QuadPart = v23 / v26.QuadPart + 1000 * (v22 / v26.QuadPart);
      v24 = 10000 * (v23 % v26.QuadPart);
      v19.QuadPart = v24 % v26.QuadPart;
      v6 = v24 / v26.QuadPart + 10000 * v21.QuadPart;
    }
  }
  else
  {
    LOBYTE(v6) = v22;
  }
  if ( (Microsoft_Windows_StorPortEnableBits & 0x40) != 0 )
    McTemplateK0zx_EtwWriteTransfer(v20.QuadPart, v19.QuadPart, v21.QuadPart, L"Translate SCSI_REQUEST_BLOCK", v6);
  return (unsigned int)v10;
}
