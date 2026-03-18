/*
 * XREFs of Bulk_Stage_MapIntoRing @ 0x1C000F180
 * Callers:
 *     Bulk_MapStage @ 0x1C000F118 (Bulk_MapStage.c)
 *     Bulk_EvtDmaCallback @ 0x1C001A6F0 (Bulk_EvtDmaCallback.c)
 * Callees:
 *     UsbDevice_DirectWriteDoorbell @ 0x1C000900C (UsbDevice_DirectWriteDoorbell.c)
 *     TR_AddTRBRangeToSecureTransferRing @ 0x1C0009BB0 (TR_AddTRBRangeToSecureTransferRing.c)
 *     TR_GetPacketCount @ 0x1C0009BEC (TR_GetPacketCount.c)
 *     TR_CalculateTDSize @ 0x1C0009D7C (TR_CalculateTDSize.c)
 *     memmove @ 0x1C0019A00 (memmove.c)
 *     Bulk_InsertLinkTrb @ 0x1C001A73E (Bulk_InsertLinkTrb.c)
 *     WPP_RECORDER_SF_DDDDq @ 0x1C0045124 (WPP_RECORDER_SF_DDDDq.c)
 *     WPP_RECORDER_SF_DDDDqDD @ 0x1C0045260 (WPP_RECORDER_SF_DDDDqDD.c)
 *     XilUsbDevice_SendRequestToRingDoorbell @ 0x1C0045CAC (XilUsbDevice_SendRequestToRingDoorbell.c)
 */

int *__fastcall Bulk_Stage_MapIntoRing(__int64 a1)
{
  __int64 v1; // rsi
  __int64 v3; // rdi
  __int64 v4; // r9
  unsigned int v5; // r8d
  __int64 v6; // rax
  __int64 v7; // rcx
  __int64 v8; // rax
  unsigned int v9; // r12d
  int PacketCount; // eax
  __int64 v11; // r9
  unsigned int v12; // r13d
  unsigned int v13; // ebx
  __int64 v14; // r10
  __int64 v15; // rax
  __int64 v16; // r15
  _UNKNOWN **v17; // r9
  unsigned int v18; // r10d
  unsigned int v19; // edx
  __int64 v20; // r11
  __int64 v21; // r8
  __int64 v22; // rdx
  unsigned int v23; // esi
  unsigned __int8 v24; // al
  __int64 v25; // rdx
  unsigned int v26; // r15d
  int v27; // eax
  __int64 v28; // r8
  int v29; // eax
  __int64 v30; // rcx
  KIRQL v31; // dl
  int *result; // rax
  __int64 v33; // r8
  __int64 v34; // rcx
  __int64 v35; // rdx
  int v36; // ecx
  unsigned int v37; // r15d
  int v38; // ecx
  int v39; // ecx
  int v40; // eax
  unsigned int v41; // esi
  int v42; // eax
  __int64 v43; // rcx
  __int64 v44; // rdx
  unsigned int v45; // r12d
  __int64 v46; // rcx
  unsigned int v47; // ecx
  __int64 v48; // rax
  unsigned int v49; // r8d
  __int64 v50; // rdx
  unsigned int v51; // ebx
  int v52; // eax
  signed __int32 v53[8]; // [rsp+0h] [rbp-89h] BYREF
  int v54; // [rsp+20h] [rbp-69h]
  int v55; // [rsp+60h] [rbp-29h]
  __int64 v56; // [rsp+68h] [rbp-21h]
  __int64 v57; // [rsp+70h] [rbp-19h]
  __int64 v58; // [rsp+78h] [rbp-11h]
  __int64 v59; // [rsp+80h] [rbp-9h]
  _OWORD *v60; // [rsp+88h] [rbp-1h]
  __int128 v61; // [rsp+90h] [rbp+7h] BYREF
  unsigned int v62; // [rsp+F0h] [rbp+67h]
  unsigned int v63; // [rsp+F8h] [rbp+6Fh]
  unsigned int v64; // [rsp+100h] [rbp+77h]
  int v65; // [rsp+108h] [rbp+7Fh]

  v1 = *(_QWORD *)a1;
  v57 = v1;
  v62 = 0;
  v3 = *(_QWORD *)(v1 + 56);
  v4 = *(_QWORD *)(v1 + 48);
  v5 = *(_DWORD *)(a1 + 40);
  v6 = *(_QWORD *)(v3 + 40);
  v7 = *(_QWORD *)(v6 + 456);
  v8 = *(_QWORD *)(v6 + 336);
  v58 = v7;
  if ( (v8 & 0x400000000LL) != 0
    && (v43 = *(_QWORD *)(v3 + 48), *(_DWORD *)(v43 + 40))
    && (v44 = *(_QWORD *)(v3 + 56), *(char *)(v44 + 98) < 0)
    && *(_DWORD *)(v43 + 20) <= 1u
    && (v45 = *(_WORD *)(v44 + 100) & 0x7FF, v5 % v45) )
  {
    v9 = v45 - v5 % v45;
  }
  else
  {
    v9 = 0;
  }
  v65 = *(_DWORD *)(v4 + 32) & 1;
  PacketCount = TR_GetPacketCount(v3, v5);
  v12 = *(_DWORD *)(a1 + 80);
  v55 = PacketCount;
  v13 = 5;
  *(_DWORD *)(a1 + 88) = v14;
  v59 = *(_QWORD *)(v3 + 184) + 16LL * *(unsigned int *)(v3 + 192);
  v15 = *(_QWORD *)(v3 + 40);
  v56 = v14;
  v63 = v14;
  v64 = v14;
  if ( (*(_QWORD *)(v15 + 336) & 8) != 0 )
  {
    LOBYTE(v11) = 1;
    Bulk_InsertLinkTrb(v3, a1, 5LL, v11);
  }
  v16 = v59;
LABEL_6:
  v17 = &WPP_RECORDER_INITIALIZED;
  do
  {
    v18 = *(_DWORD *)(v3 + 192);
    v19 = *(_DWORD *)(v3 + 196);
    v20 = *(_QWORD *)(v3 + 184) + 16LL * v18;
    v60 = (_OWORD *)v20;
    v61 = 0LL;
    if ( v18 + v12 > v19 )
    {
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
      {
        WPP_RECORDER_SF_DDDDq(
          *(_QWORD *)(*(_QWORD *)(v3 + 56) + 80LL),
          *(unsigned __int8 *)(*(_QWORD *)(v3 + 48) + 135LL),
          0,
          17,
          v54,
          *(_BYTE *)(*(_QWORD *)(v3 + 48) + 135LL),
          *(_DWORD *)(*(_QWORD *)(v3 + 56) + 144LL),
          *(_DWORD *)(v3 + 64),
          v18,
          v20);
        v20 = (__int64)v60;
      }
      LOBYTE(v17) = v20 == v16;
      Bulk_InsertLinkTrb(v3, a1, v13, v17);
      goto LABEL_6;
    }
    if ( (*(_QWORD *)(*(_QWORD *)(v3 + 40) + 336LL) & 0x2000000000000LL) != 0
      && (v46 = *(_QWORD *)(v3 + 48), *(_DWORD *)(v46 + 20) == 3)
      && (v21 = *(_QWORD *)(v3 + 56), *(_DWORD *)(v21 + 120) == 6) )
    {
      if ( v13 == 7 && v18 + 9 > v19 )
      {
        if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
        {
          WPP_RECORDER_SF_DDDDq(
            *(_QWORD *)(v21 + 80),
            *(unsigned __int8 *)(v46 + 135),
            v21,
            18,
            v54,
            *(_BYTE *)(v46 + 135),
            *(_DWORD *)(v21 + 144),
            *(_DWORD *)(v3 + 64),
            v18,
            v20);
          v20 = (__int64)v60;
        }
        LOBYTE(v17) = v20 == v16;
        Bulk_InsertLinkTrb(v3, a1, 7LL, v17);
        goto LABEL_6;
      }
    }
    else
    {
      v21 = *(_QWORD *)(v3 + 56);
    }
    v22 = v21;
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
    {
      WPP_RECORDER_SF_DDDDqDD(
        *(_QWORD *)(v21 + 80),
        v21,
        v21,
        0,
        v54,
        *(_BYTE *)(*(_QWORD *)(v3 + 48) + 135LL),
        *(_DWORD *)(v21 + 144),
        *(_DWORD *)(v3 + 64),
        v18,
        v20,
        *(_DWORD *)(a1 + 88),
        v12);
      v22 = *(_QWORD *)(v3 + 56);
    }
    if ( v13 == 5 )
    {
      v36 = *(_DWORD *)(v1 + 76);
      v37 = HIDWORD(v61) & 0xFFFF03FF | 0x400;
      HIDWORD(v61) = v37;
      if ( v36 )
      {
        v38 = v36 - 1;
        if ( v38 )
        {
          v39 = v38 - 1;
          if ( v39 )
          {
            if ( v39 == 1 )
            {
              v47 = v63;
              if ( v63 )
              {
                v50 = v56;
                v49 = v62;
              }
              else
              {
                v48 = *(_QWORD *)(a1 + 56);
                v49 = v62;
                v50 = *(_QWORD *)(v48 + 24LL * v62 + 16);
                v47 = *(_DWORD *)(v48 + 24LL * v62 + 24);
                v56 = v50;
              }
              *(_QWORD *)&v61 = v50;
              if ( v47 > 0x10000 )
              {
                v56 = v50 + 0x10000;
                v41 = DWORD2(v61) & 0xFFFE0000 | 0x10000;
                v13 = 5;
                v63 = v47 - 0x10000;
              }
              else
              {
                v63 = 0;
                v62 = v49 + 1;
                v41 = (v47 ^ DWORD2(v61)) & 0x1FFFF ^ DWORD2(v61);
                v13 = 7;
                if ( **(_DWORD **)(a1 + 56) != v49 + 1 )
                  v13 = 5;
              }
            }
            else
            {
              v41 = DWORD2(v61);
            }
            goto LABEL_32;
          }
          if ( !v65 )
            memmove(*(void **)(*(_QWORD *)(a1 + 72) + 16LL), *(const void **)(a1 + 64), *(unsigned int *)(a1 + 40));
          v40 = DWORD2(v61) ^ *(_DWORD *)(a1 + 40);
          *(_QWORD *)&v61 = *(_QWORD *)(*(_QWORD *)(a1 + 72) + 24LL);
          v41 = v40 & 0x1FFFF ^ DWORD2(v61);
        }
        else
        {
          v51 = *(_DWORD *)(a1 + 40);
          memmove(&v61, *(const void **)(a1 + 64), v51);
          v37 = HIDWORD(v61) | 0x40;
          v41 = (DWORD2(v61) ^ v51) & 0x1FFFF ^ DWORD2(v61);
        }
      }
      else
      {
        v41 = DWORD2(v61) & 0xFFFE0000;
      }
      v13 = 7;
LABEL_32:
      v64 += v41 & 0x1FFFF;
      v42 = TR_CalculateTDSize(v3, v55, v64, v13 == 7);
      v25 = v58;
      v23 = (v41 ^ (v42 << 17)) & 0x3E0000 ^ v41;
      v26 = v37 | 0x10;
      goto LABEL_33;
    }
    v23 = DWORD2(v61);
    if ( v13 == 7 )
    {
      v24 = *(_BYTE *)(v22 + 99);
      v13 = 9;
      v25 = v58;
      *(_QWORD *)&v61 = a1 ^ ((unsigned __int8)a1 ^ v24) & 3;
      v26 = HIDWORD(v61) & 0xFFFF03DF | 0x1C20;
      goto LABEL_15;
    }
    v25 = v58;
    v13 = 7;
    *(_QWORD *)&v61 = *(_QWORD *)(v58 + 24);
    v23 = v9 & 0x1FFFF | DWORD2(v61) & 0xFFC00000;
    v9 = 0;
    v26 = HIDWORD(v61) & 0xFFFF03EF | 0x410;
LABEL_33:
    --v12;
LABEL_15:
    HIDWORD(v61) = v26;
    v27 = *(_DWORD *)(a1 + 88) + 1;
    *(_DWORD *)(a1 + 88) = v27;
    if ( v13 != 7 )
    {
      if ( v13 == 5 && !v12 )
      {
        v12 = *(_DWORD *)(a1 + 84) - v27;
        if ( *(_DWORD *)(a1 + 80) < v12 )
          v12 = *(_DWORD *)(a1 + 80);
      }
      goto LABEL_17;
    }
    if ( !v9 || !v25 )
    {
      v26 |= 2u;
      v12 = 1;
      HIDWORD(v61) = v26;
LABEL_17:
      v28 = 8LL;
      goto LABEL_18;
    }
    v28 = 8LL;
    v13 = 8;
    v23 ^= (v23 ^ ((v23 & 0xFFFE0000) + 0x20000)) & 0x3E0000;
LABEL_18:
    if ( v60 != (_OWORD *)v59 )
      HIDWORD(v61) = ((unsigned __int8)v26 ^ (unsigned __int8)*(_DWORD *)(v3 + 200)) & 1 ^ v26;
    v17 = &WPP_RECORDER_INITIALIZED;
    v16 = v59;
    v29 = v23 & 0x3FFFFF | (*(unsigned __int16 *)(v3 + 112) << 22);
    v1 = v57;
    DWORD2(v61) = v29;
    *v60 = v61;
    v30 = (unsigned int)++*(_DWORD *)(v3 + 192);
  }
  while ( v13 != 9 );
  if ( (*(_QWORD *)(*(_QWORD *)(v3 + 40) + 336LL) & 0x2000000000000LL) != 0
    && *(_DWORD *)(*(_QWORD *)(v3 + 48) + 20LL) == 3
    && *(_DWORD *)(*(_QWORD *)(v3 + 56) + 120LL) == 6 )
  {
    do
    {
      v52 = *(_DWORD *)(v3 + 200) & 1 | 0x2000;
      v61 = 0LL;
      HIDWORD(v61) = v52;
      *(_OWORD *)(*(_QWORD *)(v3 + 184) + 16 * v30) = v61;
      v30 = (unsigned int)++*(_DWORD *)(v3 + 192);
      --v28;
    }
    while ( v28 );
  }
  *(_DWORD *)(a1 + 120) = *(_DWORD *)(v3 + 192);
  *(_OWORD *)(*(_QWORD *)(v3 + 184) + 16LL * *(unsigned int *)(v3 + 192)) = 0LL;
  *(_BYTE *)(v3 + 104) = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(v3 + 96));
  ++*(_DWORD *)(v1 + 120);
  *(_DWORD *)(v1 + 112) += *(_DWORD *)(a1 + 40);
  v31 = *(_BYTE *)(v3 + 104);
  ++*(_DWORD *)(v3 + 348);
  *(_DWORD *)(v3 + 324) |= 1u;
  KeReleaseSpinLock((PKSPIN_LOCK)(v3 + 96), v31);
  *(_BYTE *)(v59 + 12) ^= 1u;
  _InterlockedOr(v53, 0);
  TR_AddTRBRangeToSecureTransferRing(
    v3,
    (_QWORD *)(a1 + 24),
    *(_QWORD **)(a1 + 112),
    *(_DWORD *)(a1 + 104),
    *(_DWORD *)(a1 + 120),
    (_OWORD *)(a1 + 128));
  result = *(int **)(v3 + 56);
  v33 = *(unsigned int *)(v3 + 64);
  v34 = *((_QWORD *)result + 2);
  v35 = (unsigned int)result[36];
  if ( *(_QWORD *)(v34 + 160) )
    return UsbDevice_DirectWriteDoorbell(v34, v35, v33);
  if ( !*(_BYTE *)(v3 + 280) )
    return (int *)XilUsbDevice_SendRequestToRingDoorbell(v34 + 608, v35, v33);
  return result;
}
