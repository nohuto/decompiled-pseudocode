/*
 * XREFs of Control_Transfer_MapIntoRing @ 0x1C00065C0
 * Callers:
 *     Control_Transfer_Map @ 0x1C0006150 (Control_Transfer_Map.c)
 *     Control_EvtDmaCallback @ 0x1C0040710 (Control_EvtDmaCallback.c)
 * Callees:
 *     TR_InitializeLinkTrb @ 0x1C0001630 (TR_InitializeLinkTrb.c)
 *     ESM_AddEvent @ 0x1C0005174 (ESM_AddEvent.c)
 *     WPP_RECORDER_SF_DDqq @ 0x1C00084E0 (WPP_RECORDER_SF_DDqq.c)
 *     UsbDevice_DirectWriteDoorbell @ 0x1C000900C (UsbDevice_DirectWriteDoorbell.c)
 *     TR_AddTRBRangeToSecureTransferRing @ 0x1C0009BB0 (TR_AddTRBRangeToSecureTransferRing.c)
 *     TR_GetPacketCount @ 0x1C0009BEC (TR_GetPacketCount.c)
 *     TR_CalculateTDSize @ 0x1C0009D7C (TR_CalculateTDSize.c)
 *     memmove @ 0x1C0019A00 (memmove.c)
 *     WPP_RECORDER_SF_DDDqD @ 0x1C00416F0 (WPP_RECORDER_SF_DDDqD.c)
 *     XilUsbDevice_SendRequestToRingDoorbell @ 0x1C0045CAC (XilUsbDevice_SendRequestToRingDoorbell.c)
 */

void __fastcall Control_Transfer_MapIntoRing(__int64 a1)
{
  __int64 v1; // r14
  __int64 v3; // rdx
  unsigned int PacketCount; // eax
  int v5; // r11d
  __int64 v6; // r15
  unsigned int v7; // esi
  __int64 v8; // rax
  __int64 v9; // r9
  __int64 v10; // r13
  unsigned int v11; // r10d
  int v12; // edi
  __int64 v13; // rax
  unsigned int v14; // r8d
  unsigned int v15; // edx
  _OWORD *v16; // r12
  int v17; // r15d
  int v18; // r8d
  int v19; // esi
  int v20; // edx
  int v21; // r15d
  int v22; // ecx
  int v23; // eax
  __int64 v24; // rcx
  BOOL v25; // eax
  char v26; // si
  int v27; // r15d
  KIRQL v28; // dl
  int v29; // r8d
  __int64 v30; // rax
  __int64 v31; // rcx
  int v32; // edx
  __int64 v33; // rcx
  __int64 v34; // r9
  __int64 v35; // rax
  __int64 v36; // r8
  __int64 v37; // rcx
  __int64 v38; // rdx
  int v39; // r15d
  int v40; // ecx
  int v41; // eax
  unsigned int v42; // esi
  unsigned int v43; // r10d
  int v44; // eax
  int v45; // ecx
  unsigned int v46; // edi
  bool v47; // zf
  __int64 v48; // rdx
  __int64 v49; // rcx
  int v50; // edx
  int v51; // edx
  __int64 v52; // rax
  __int64 v53; // r8
  unsigned int v54; // ecx
  _DWORD *v55; // rax
  __int64 v56; // rcx
  __int64 v57; // rax
  signed __int32 v58[8]; // [rsp+0h] [rbp-79h] BYREF
  __int64 v59; // [rsp+20h] [rbp-59h]
  __int64 v60; // [rsp+28h] [rbp-51h]
  __int64 v61; // [rsp+38h] [rbp-41h]
  __int64 v62; // [rsp+40h] [rbp-39h]
  int v63; // [rsp+50h] [rbp-29h]
  unsigned int v64; // [rsp+54h] [rbp-25h]
  int v65; // [rsp+58h] [rbp-21h]
  unsigned int v66; // [rsp+5Ch] [rbp-1Dh]
  __int64 v67; // [rsp+60h] [rbp-19h]
  __int64 v68; // [rsp+68h] [rbp-11h]
  __int64 v69; // [rsp+70h] [rbp-9h]
  _OWORD v70[5]; // [rsp+78h] [rbp-1h] BYREF
  char v71; // [rsp+E0h] [rbp+67h]
  unsigned int v72; // [rsp+E8h] [rbp+6Fh]
  unsigned int v73; // [rsp+F0h] [rbp+77h]
  unsigned int v74; // [rsp+F8h] [rbp+7Fh]

  v1 = *(_QWORD *)(a1 + 344);
  v70[0] = 0LL;
  v65 = 0;
  v3 = *(unsigned int *)(v1 + 104);
  v68 = *(_QWORD *)(v1 + 48);
  v63 = *(_DWORD *)(v68 + 32) & 1;
  PacketCount = TR_GetPacketCount(a1, v3);
  v6 = *(unsigned int *)(a1 + 192);
  v7 = 0;
  v66 = PacketCount;
  v8 = *(_QWORD *)(a1 + 40);
  v9 = 0LL;
  v10 = *(_QWORD *)(a1 + 184) + 16LL * (unsigned int)v6;
  v11 = 0;
  v64 = 0;
  v12 = 1;
  v13 = *(_QWORD *)(v8 + 336);
  v14 = v6;
  v67 = 0LL;
  v73 = 0;
  v72 = 0;
  v69 = v6;
  v71 = 0;
  if ( (v13 & 8) != 0 && (unsigned int)(v6 + 21) > *(_DWORD *)(a1 + 196) )
  {
    TR_InitializeLinkTrb(a1, 1, (__int64)v70, 1);
    v14 = 0;
    v48 = *(_QWORD *)(a1 + 176);
    v49 = 2LL * *(unsigned int *)(a1 + 192);
    HIDWORD(v70[0]) |= 2u;
    v11 = 0;
    v9 = 0LL;
    *(_QWORD *)&v70[0] = *(_QWORD *)(v48 + 24);
    *(_OWORD *)(*(_QWORD *)(a1 + 184) + 8 * v49) = v70[0];
    *(_DWORD *)(a1 + 192) = 0;
    *(_DWORD *)(a1 + 200) = *(_DWORD *)(a1 + 200) == 0;
  }
  do
  {
    v15 = v11;
    v16 = (_OWORD *)(*(_QWORD *)(a1 + 184) + 16LL * v14);
    v74 = v11;
    if ( v14 + 1 > *(_DWORD *)(a1 + 196) )
    {
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
      {
        v50 = *(unsigned __int8 *)(*(_QWORD *)(a1 + 48) + 135LL);
        WPP_RECORDER_SF_DDDqD(
          *(_QWORD *)(*(_QWORD *)(a1 + 56) + 80LL),
          v50,
          v14,
          33,
          v59,
          v50,
          *(_DWORD *)(*(_QWORD *)(a1 + 56) + 144LL),
          v14,
          (char)v16,
          *(_DWORD *)(a1 + 200));
      }
      TR_InitializeLinkTrb(a1, v12, (__int64)v70, v16 == (_OWORD *)v10);
      HIDWORD(v70[0]) |= 2u;
      *(_QWORD *)&v70[0] = *(_QWORD *)(*(_QWORD *)(a1 + 176) + 24LL);
      *v16 = v70[0];
      v47 = *(_DWORD *)(a1 + 200) == 0;
      *(_DWORD *)(a1 + 192) = 0;
      v14 = 0;
      *(_DWORD *)(a1 + 200) = v47;
    }
    else
    {
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
      {
        v51 = *(unsigned __int8 *)(*(_QWORD *)(a1 + 48) + 135LL);
        WPP_RECORDER_SF_DDDqD(
          *(_QWORD *)(*(_QWORD *)(a1 + 56) + 80LL),
          v51,
          v14,
          34,
          v59,
          v51,
          *(_DWORD *)(*(_QWORD *)(a1 + 56) + 144LL),
          v14,
          (char)v16,
          *(_DWORD *)(a1 + 200));
        v15 = v74;
        v11 = v72;
        v9 = v73;
        v5 = v63;
      }
      v17 = 0;
      v18 = 0;
      v70[0] = 0LL;
      switch ( v12 )
      {
        case 1:
          v19 = 8;
          *(_QWORD *)&v70[0] = *(_QWORD *)(v68 + 128);
          if ( !*(_DWORD *)(v1 + 104) )
          {
            v20 = 2112;
            goto LABEL_30;
          }
          v12 = 2;
          v20 = 133184;
          if ( v5 )
            v20 = 198720;
          goto LABEL_13;
        case 2:
        case 5:
          if ( v12 == 2 )
            v39 = (v5 << 16) | 0xC00;
          else
            v39 = 1024;
          v40 = *(_DWORD *)(v1 + 64);
          HIDWORD(v70[0]) = v39;
          if ( v40 == 2 )
          {
            if ( !v5 )
            {
              memmove(*(void **)(*(_QWORD *)(v1 + 88) + 16LL), *(const void **)(v1 + 80), *(unsigned int *)(v1 + 104));
              v15 = v74;
            }
            v12 = 6;
            v41 = DWORD2(v70[0]) ^ *(_DWORD *)(v1 + 104);
            *(_QWORD *)&v70[0] = *(_QWORD *)(*(_QWORD *)(v1 + 88) + 24LL);
            v42 = v41 & 0x1FFFF ^ DWORD2(v70[0]);
            v43 = v15 + (v42 & 0x1FFFF);
            v72 = v43;
            goto LABEL_39;
          }
          if ( !v40 )
            return;
          v45 = v40 - 1;
          if ( !v45 )
          {
            v46 = *(_DWORD *)(v1 + 104);
            memmove(v70, *(const void **)(v1 + 80), v46);
            v42 = (DWORD2(v70[0]) ^ v46) & 0x1FFFF ^ DWORD2(v70[0]);
            v39 = HIDWORD(v70[0]) | 0x40;
            v12 = 6;
            v43 = v74 + (v42 & 0x1FFFF);
            v72 = v43;
LABEL_39:
            LOBYTE(v9) = 1;
            goto LABEL_40;
          }
          if ( v45 == 2 )
          {
            if ( (_DWORD)v9 )
            {
              v53 = v67;
            }
            else
            {
              v52 = *(_QWORD *)(v1 + 96);
              v53 = *(_QWORD *)(v52 + 24LL * v7 + 16);
              v9 = *(unsigned int *)(v52 + 24LL * v7 + 24);
              v67 = v53;
            }
            if ( v12 == 2 )
            {
              if ( (unsigned int)v9 > 0x200 && (*(_QWORD *)(*(_QWORD *)(a1 + 40) + 336LL) & 0x40) != 0 )
              {
                v54 = 512;
                if ( v5 )
                  v71 = 1;
LABEL_62:
                v9 = (unsigned int)v9 - v54;
                v42 = v54 | DWORD2(v70[0]) & 0xFFFE0000;
                *(_QWORD *)&v70[0] = v53;
                v73 = v9;
                v67 = v54 + v53;
                v12 = 5;
                v43 = v15 + (v54 & 0x1FFFF);
                v72 = v43;
                goto LABEL_63;
              }
            }
            else if ( v12 == 5 && v71 )
            {
              v39 |= 0x10000u;
            }
            v54 = 0x10000;
            if ( (unsigned int)v9 > 0x10000 )
              goto LABEL_62;
            *(_QWORD *)&v70[0] = v53;
            v73 = 0;
            v42 = (v9 ^ DWORD2(v70[0])) & 0x1FFFF ^ DWORD2(v70[0]);
            v55 = *(_DWORD **)(v1 + 96);
            v12 = (++v64 == *v55) + 5;
          }
          else
          {
            v42 = DWORD2(v70[0]);
          }
          v43 = (v42 & 0x1FFFF) + v11;
          v72 = v43;
          if ( v12 == 6 )
            goto LABEL_39;
LABEL_63:
          LOBYTE(v9) = 0;
LABEL_40:
          v44 = TR_CalculateTDSize(a1, v66, v43, v9);
          v5 = v63;
          v19 = (v42 ^ (v44 << 17)) & 0x3E0000 ^ v42;
          v17 = v39 | 0x10;
          v20 = v17;
          v18 = v17;
LABEL_41:
          if ( v12 == 6 || (v17 = v18, v12 == 7) )
LABEL_12:
            v20 = v17 | 2;
LABEL_13:
          v22 = *(_DWORD *)(a1 + 200);
          if ( v16 == (_OWORD *)v10 )
            HIDWORD(v70[0]) = v20 & 0xFFFFFFFE | (v22 == 0);
          else
            HIDWORD(v70[0]) = ((unsigned __int8)v20 ^ (unsigned __int8)v22) & 1 ^ v20;
          v23 = v19 & 0x3FFFFF | (*(unsigned __int16 *)(a1 + 112) << 22);
          v7 = v64;
          DWORD2(v70[0]) = v23;
          *v16 = v70[0];
          v14 = ++*(_DWORD *)(a1 + 192);
          break;
        case 3:
          v19 = DWORD2(v70[0]);
          v21 = 69632;
          if ( v5 )
            v21 = 4096;
          v12 = 7;
          v17 = v21 | 0x10;
          goto LABEL_12;
        case 6:
        case 7:
          ++v65;
          v19 = DWORD2(v70[0]);
          *(_QWORD *)&v70[0] = v1 & 0xFFFFFFFFFFFFFFFCuLL;
          v20 = 7200;
          if ( v12 == 7 )
          {
            v12 = 9;
            *(_QWORD *)&v70[0] = v1 & 0xFFFFFFFFFFFFFFF8uLL | 4;
          }
          else
          {
LABEL_30:
            v12 = 3;
          }
          goto LABEL_13;
        default:
          v20 = HIDWORD(v70[0]);
          v19 = DWORD2(v70[0]);
          goto LABEL_41;
      }
    }
    v11 = v72;
    v9 = v73;
  }
  while ( v12 != 9 );
  *(_DWORD *)(v1 + 160) = v14;
  v24 = *(unsigned int *)(a1 + 192);
  v25 = *(_DWORD *)(a1 + 200) == 0;
  v70[0] = 0LL;
  HIDWORD(v70[0]) = v25;
  *(_OWORD *)(*(_QWORD *)(a1 + 184) + 16 * v24) = v70[0];
  *(_BYTE *)(a1 + 104) = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(a1 + 96));
  *(_DWORD *)(v1 + 128) = v65;
  *(_DWORD *)(a1 + 352) |= 1u;
  if ( *(_DWORD *)(a1 + 108) == 3 )
  {
    v26 = 0;
    v27 = 2;
  }
  else
  {
    v26 = 1;
    v27 = 0;
  }
  v28 = *(_BYTE *)(a1 + 104);
  *(_DWORD *)(a1 + 108) = v27;
  KeReleaseSpinLock((PKSPIN_LOCK)(a1 + 96), v28);
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    v30 = *(_QWORD *)(a1 + 48);
    v31 = *(_QWORD *)(a1 + 56);
    v62 = v1;
    v32 = *(unsigned __int8 *)(v30 + 135);
    v61 = *(_QWORD *)(v1 + 24);
    LODWORD(v30) = *(_DWORD *)(v31 + 144);
    v33 = *(_QWORD *)(v31 + 80);
    LOBYTE(v60) = v32;
    LOBYTE(v32) = 4;
    WPP_RECORDER_SF_DDqq(
      v33,
      v32,
      v29,
      35,
      (__int64)&WPP_d233b597c96c378d294c2d5b80e0f0a8_Traceguids,
      v60,
      v30,
      v61,
      v1);
  }
  *(_BYTE *)(v10 + 12) ^= 1u;
  _InterlockedOr(v58, 0);
  TR_AddTRBRangeToSecureTransferRing(a1, 0, *(_QWORD *)(v1 + 152), v69, *(_DWORD *)(a1 + 192), v1 + 168);
  v35 = *(_QWORD *)(a1 + 56);
  v36 = *(unsigned int *)(a1 + 64);
  v37 = *(_QWORD *)(v35 + 16);
  v38 = *(unsigned int *)(v35 + 144);
  if ( *(_QWORD *)(v37 + 160) )
  {
    LOBYTE(v34) = *(_BYTE *)(a1 + 280) == 0;
    UsbDevice_DirectWriteDoorbell(v37, v38, v36, v34);
  }
  else if ( !*(_BYTE *)(a1 + 280) )
  {
    XilUsbDevice_SendRequestToRingDoorbell(v37 + 608, v38, v36);
  }
  if ( v26 )
  {
    v56 = *(_QWORD *)(a1 + 56);
    if ( !*(_BYTE *)(v56 + 37)
      || (v57 = *(_QWORD *)(v56 + 136),
          _InterlockedIncrement((volatile signed __int32 *)(v57 + 20)) == *(_DWORD *)(v57 + 8)) )
    {
      ESM_AddEvent((KSPIN_LOCK *)(v56 + 288), 20);
    }
  }
}
