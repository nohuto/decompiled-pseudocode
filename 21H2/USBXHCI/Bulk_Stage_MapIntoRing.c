/*
 * XREFs of Bulk_Stage_MapIntoRing @ 0x1C000D560
 * Callers:
 *     Bulk_MapStage @ 0x1C000D4EC (Bulk_MapStage.c)
 *     Bulk_EvtDmaCallback @ 0x1C0044020 (Bulk_EvtDmaCallback.c)
 * Callees:
 *     TR_AddTRBRangeToSecureTransferRing @ 0x1C0005050 (TR_AddTRBRangeToSecureTransferRing.c)
 *     UsbDevice_DirectWriteDoorbell @ 0x1C000583C (UsbDevice_DirectWriteDoorbell.c)
 *     TR_CalculateTDSize @ 0x1C000D92C (TR_CalculateTDSize.c)
 *     TR_GetPacketCount @ 0x1C000D954 (TR_GetPacketCount.c)
 *     memmove @ 0x1C001B000 (memmove.c)
 *     Bulk_InsertLinkTrb @ 0x1C0044070 (Bulk_InsertLinkTrb.c)
 *     WPP_RECORDER_SF_DDDDq @ 0x1C0044C68 (WPP_RECORDER_SF_DDDDq.c)
 *     WPP_RECORDER_SF_DDDDqDD @ 0x1C0044DA4 (WPP_RECORDER_SF_DDDDqDD.c)
 *     XilUsbDevice_SendRequestToRingDoorbell @ 0x1C00457F0 (XilUsbDevice_SendRequestToRingDoorbell.c)
 */

int *__fastcall Bulk_Stage_MapIntoRing(unsigned __int64 a1)
{
  _DWORD *v1; // r13
  unsigned int v2; // r8d
  __int64 v4; // rdi
  __int64 v5; // r9
  __int64 v6; // rax
  __int64 v7; // r11
  __int64 v8; // rax
  __int64 v9; // rcx
  unsigned int v10; // r12d
  unsigned int PacketCount; // eax
  __int64 v12; // r9
  __int64 v13; // r8
  __int64 v14; // r10
  unsigned int v15; // ebx
  __int64 v16; // r14
  __int64 v17; // rax
  __int64 v18; // r14
  __int64 v19; // rax
  unsigned int v20; // r10d
  unsigned int v21; // ecx
  __int64 v22; // rsi
  __int64 v23; // r8
  __int64 v24; // rdx
  __int64 v25; // r11
  unsigned int v26; // esi
  unsigned int v27; // r14d
  int v28; // eax
  __int64 v29; // rcx
  KIRQL v30; // dl
  int *result; // rax
  __int64 v32; // r8
  __int64 v33; // rcx
  __int64 v34; // rdx
  int v35; // ecx
  unsigned int v36; // r14d
  int v37; // ecx
  int v38; // ecx
  int v39; // eax
  unsigned int v40; // esi
  int v41; // eax
  __int64 v42; // rdx
  unsigned int v43; // r12d
  __int64 v44; // rdx
  unsigned int v45; // ecx
  _QWORD *v46; // rax
  unsigned int v47; // r8d
  __int64 v48; // rdx
  unsigned int v49; // ebx
  unsigned int v50; // eax
  __int64 v51; // rdx
  int v52; // eax
  signed __int32 v53[8]; // [rsp+0h] [rbp-89h] BYREF
  int v54; // [rsp+20h] [rbp-69h]
  int v55; // [rsp+60h] [rbp-29h]
  unsigned int v56; // [rsp+64h] [rbp-25h]
  __int64 v57; // [rsp+68h] [rbp-21h]
  __int64 v58; // [rsp+70h] [rbp-19h]
  __int64 v59; // [rsp+78h] [rbp-11h]
  _OWORD *v60; // [rsp+80h] [rbp-9h]
  __int128 v61; // [rsp+88h] [rbp-1h] BYREF
  unsigned int v62; // [rsp+F0h] [rbp+67h]
  unsigned int v63; // [rsp+F8h] [rbp+6Fh]
  unsigned int v64; // [rsp+100h] [rbp+77h]
  unsigned int v65; // [rsp+108h] [rbp+7Fh]

  v1 = *(_DWORD **)a1;
  v2 = *(_DWORD *)(a1 + 40);
  v63 = 0;
  v4 = *(_QWORD *)(*(_QWORD *)a1 + 56LL);
  v5 = *(_QWORD *)(*(_QWORD *)a1 + 48LL);
  v6 = *(_QWORD *)(v4 + 40);
  v7 = *(_QWORD *)(v6 + 456);
  v8 = *(_QWORD *)(v6 + 336);
  v57 = v7;
  if ( (v8 & 0x400000000LL) != 0
    && (v9 = *(_QWORD *)(v4 + 48), *(_DWORD *)(v9 + 40))
    && (v42 = *(_QWORD *)(v4 + 56), *(char *)(v42 + 98) < 0)
    && *(_DWORD *)(v9 + 20) <= 1u
    && (v43 = *(_WORD *)(v42 + 100) & 0x7FF, v2 % v43) )
  {
    v10 = v43 - v2 % v43;
  }
  else
  {
    v10 = 0;
  }
  v55 = *(_DWORD *)(v5 + 32) & 1;
  PacketCount = TR_GetPacketCount(v4, v2);
  v12 = *(unsigned int *)(a1 + 80);
  v13 = 5LL;
  *(_DWORD *)(a1 + 88) = v14;
  v15 = 5;
  v16 = *(unsigned int *)(v4 + 192);
  v56 = PacketCount;
  v17 = *(_QWORD *)(v4 + 40);
  v18 = *(_QWORD *)(v4 + 184) + 16 * v16;
  v59 = v14;
  v19 = *(_QWORD *)(v17 + 336);
  v64 = v14;
  v65 = v14;
  v58 = v18;
  v62 = v12;
  if ( (v19 & 8) != 0 )
  {
    LOBYTE(v12) = 1;
    goto LABEL_51;
  }
  do
  {
    while ( 1 )
    {
      while ( 1 )
      {
        v20 = *(_DWORD *)(v4 + 192);
        v21 = *(_DWORD *)(v4 + 196);
        v22 = *(_QWORD *)(v4 + 184) + 16LL * v20;
        v60 = (_OWORD *)v22;
        v61 = 0LL;
        if ( v20 + (unsigned int)v12 > v21 )
        {
          if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED
            && LOWORD(WPP_GLOBAL_Control->DeviceType) )
          {
            WPP_RECORDER_SF_DDDDq(
              *(_QWORD *)(*(_QWORD *)(v4 + 56) + 80LL),
              *(unsigned __int8 *)(*(_QWORD *)(v4 + 48) + 135LL),
              v13,
              17,
              v54,
              *(_BYTE *)(*(_QWORD *)(v4 + 48) + 135LL),
              *(_DWORD *)(*(_QWORD *)(v4 + 56) + 144LL),
              *(_DWORD *)(v4 + 64),
              v20,
              v22);
          }
          LOBYTE(v12) = v22 == v18;
          Bulk_InsertLinkTrb(v4, a1, v15, v12);
          v12 = v62;
          goto LABEL_78;
        }
        if ( (*(_QWORD *)(*(_QWORD *)(v4 + 40) + 336LL) & 0x2000000000000LL) == 0
          || (v44 = *(_QWORD *)(v4 + 48), *(_DWORD *)(v44 + 20) != 3)
          || (v23 = *(_QWORD *)(v4 + 56), *(_DWORD *)(v23 + 120) != 6) )
        {
          v23 = *(_QWORD *)(v4 + 56);
          break;
        }
        if ( v15 != 7 || v20 + 9 <= v21 )
          break;
        if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
          WPP_RECORDER_SF_DDDDq(
            *(_QWORD *)(v23 + 80),
            *(unsigned __int8 *)(v44 + 135),
            v23,
            18,
            v54,
            *(_BYTE *)(v44 + 135),
            *(_DWORD *)(v23 + 144),
            *(_DWORD *)(v4 + 64),
            v20,
            v22);
        v13 = 7LL;
        LOBYTE(v12) = v22 == v18;
LABEL_51:
        Bulk_InsertLinkTrb(v4, a1, v13, v12);
        v12 = v62;
      }
      v24 = v23;
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
      {
        WPP_RECORDER_SF_DDDDqDD(
          *(_QWORD *)(v23 + 80),
          v23,
          v23,
          v12,
          v54,
          *(_BYTE *)(*(_QWORD *)(v4 + 48) + 135LL),
          *(_DWORD *)(v23 + 144),
          *(_DWORD *)(v4 + 64),
          v20,
          v22,
          *(_DWORD *)(a1 + 88),
          v12);
        v24 = *(_QWORD *)(v4 + 56);
        v12 = v62;
      }
      LODWORD(v13) = 5;
      if ( v15 == 5 )
      {
        v35 = v1[19];
        v36 = HIDWORD(v61) & 0xFFFF03FF | 0x400;
        HIDWORD(v61) = v36;
        if ( v35 )
        {
          v37 = v35 - 1;
          if ( !v37 )
          {
            v49 = *(_DWORD *)(a1 + 40);
            memmove(&v61, *(const void **)(a1 + 64), v49);
            v36 = HIDWORD(v61) | 0x40;
            v40 = (DWORD2(v61) ^ v49) & 0x1FFFF ^ DWORD2(v61);
            goto LABEL_31;
          }
          v38 = v37 - 1;
          if ( v38 )
          {
            if ( v38 == 1 )
            {
              v45 = v64;
              if ( v64 )
              {
                v48 = v59;
                v47 = v63;
              }
              else
              {
                v46 = *(_QWORD **)(a1 + 56);
                v47 = v63;
                v48 = v46[3 * v63 + 2];
                v45 = v46[3 * v63 + 3];
                v59 = v48;
              }
              *(_QWORD *)&v61 = v48;
              if ( v45 > 0x10000 )
              {
                v59 = v48 + 0x10000;
                v40 = DWORD2(v61) & 0xFFFE0000 | 0x10000;
                v15 = 5;
                v64 = v45 - 0x10000;
              }
              else
              {
                v64 = 0;
                v15 = 7;
                v40 = (v45 ^ DWORD2(v61)) & 0x1FFFF ^ DWORD2(v61);
                v63 = v47 + 1;
                if ( **(_DWORD **)(a1 + 56) != v47 + 1 )
                  v15 = 5;
              }
            }
            else
            {
              v40 = DWORD2(v61);
            }
          }
          else
          {
            if ( !v55 )
              memmove(*(void **)(*(_QWORD *)(a1 + 72) + 16LL), *(const void **)(a1 + 64), *(unsigned int *)(a1 + 40));
            v39 = DWORD2(v61) ^ *(_DWORD *)(a1 + 40);
            *(_QWORD *)&v61 = *(_QWORD *)(*(_QWORD *)(a1 + 72) + 24LL);
            v40 = v39 & 0x1FFFF ^ DWORD2(v61);
LABEL_31:
            v15 = 7;
          }
          v65 += v40 & 0x1FFFF;
          LOBYTE(v12) = v15 == 7;
          v41 = TR_CalculateTDSize(v4, v56, v65, v12);
          v27 = v36 | 0x10;
          v25 = v57;
          LODWORD(v13) = 5;
          v26 = (v40 ^ (v41 << 17)) & 0x3E0000 ^ v40;
          v12 = v62 - 1;
          goto LABEL_33;
        }
        v40 = DWORD2(v61) & 0xFFFE0000;
        goto LABEL_31;
      }
      v25 = v57;
      v26 = DWORD2(v61);
      if ( v15 == 7 )
      {
        v15 = 9;
        *(_QWORD *)&v61 = a1 ^ ((unsigned __int8)a1 ^ *(_BYTE *)(v24 + 99)) & 3;
        v27 = HIDWORD(v61) & 0xFFFF03DF | 0x1C20;
        goto LABEL_13;
      }
      *(_QWORD *)&v61 = *(_QWORD *)(v57 + 24);
      v26 = v10 & 0x1FFFF | DWORD2(v61) & 0xFFC00000;
      v27 = HIDWORD(v61) & 0xFFFF03EF | 0x410;
      v12 = (unsigned int)(v12 - 1);
      v10 = 0;
      v15 = 7;
LABEL_33:
      v62 = v12;
LABEL_13:
      HIDWORD(v61) = v27;
      v28 = *(_DWORD *)(a1 + 88) + 1;
      *(_DWORD *)(a1 + 88) = v28;
      if ( v15 == 7 )
      {
        if ( v10 && v25 )
        {
          v15 = 8;
          v26 ^= (v26 ^ ((v26 & 0xFFFE0000) + 0x20000)) & 0x3E0000;
          goto LABEL_17;
        }
        v27 |= 2u;
        v12 = 1LL;
        HIDWORD(v61) = v27;
        v62 = 1;
      }
      if ( v15 == 5 && !(_DWORD)v12 )
      {
        v12 = (unsigned int)(*(_DWORD *)(a1 + 84) - v28);
        v50 = *(_DWORD *)(a1 + 80);
        if ( v50 < (unsigned int)v12 )
          v12 = v50;
        v62 = v12;
      }
LABEL_17:
      if ( v60 != (_OWORD *)v58 )
        HIDWORD(v61) = ((unsigned __int8)v27 ^ (unsigned __int8)*(_DWORD *)(v4 + 200)) & 1 ^ v27;
      DWORD2(v61) = v26 & 0x3FFFFF | (*(unsigned __int16 *)(v4 + 112) << 22);
      *v60 = v61;
      v29 = (unsigned int)++*(_DWORD *)(v4 + 192);
      if ( v15 == 9 )
        break;
      v18 = v58;
    }
    if ( (*(_QWORD *)(*(_QWORD *)(v4 + 40) + 336LL) & 0x2000000000000LL) == 0
      || *(_DWORD *)(*(_QWORD *)(v4 + 48) + 20LL) != 3
      || *(_DWORD *)(*(_QWORD *)(v4 + 56) + 120LL) != 6 )
    {
      break;
    }
    v51 = 8LL;
    do
    {
      v52 = *(_DWORD *)(v4 + 200) & 1 | 0x2000;
      v61 = 0LL;
      HIDWORD(v61) = v52;
      *(_OWORD *)(*(_QWORD *)(v4 + 184) + 16 * v29) = v61;
      v29 = (unsigned int)++*(_DWORD *)(v4 + 192);
      --v51;
    }
    while ( v51 );
    v18 = v58;
LABEL_78:
    ;
  }
  while ( v15 != 9 );
  *(_DWORD *)(a1 + 120) = *(_DWORD *)(v4 + 192);
  *(_OWORD *)(*(_QWORD *)(v4 + 184) + 16LL * *(unsigned int *)(v4 + 192)) = 0LL;
  *(_BYTE *)(v4 + 104) = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(v4 + 96));
  ++v1[30];
  v1[28] += *(_DWORD *)(a1 + 40);
  v30 = *(_BYTE *)(v4 + 104);
  ++*(_DWORD *)(v4 + 348);
  *(_DWORD *)(v4 + 324) |= 1u;
  KeReleaseSpinLock((PKSPIN_LOCK)(v4 + 96), v30);
  *(_BYTE *)(v58 + 12) ^= 1u;
  _InterlockedOr(v53, 0);
  TR_AddTRBRangeToSecureTransferRing(
    v4,
    (_QWORD *)(a1 + 24),
    *(_QWORD **)(a1 + 112),
    *(_DWORD *)(a1 + 104),
    *(_DWORD *)(a1 + 120),
    (_OWORD *)(a1 + 128));
  result = *(int **)(v4 + 56);
  v32 = *(unsigned int *)(v4 + 64);
  v33 = *((_QWORD *)result + 2);
  v34 = (unsigned int)result[36];
  if ( *(_QWORD *)(v33 + 160) )
    return UsbDevice_DirectWriteDoorbell(v33, v34, v32);
  if ( !*(_BYTE *)(v4 + 280) )
    return (int *)XilUsbDevice_SendRequestToRingDoorbell(v33 + 608, v34, v32);
  return result;
}
