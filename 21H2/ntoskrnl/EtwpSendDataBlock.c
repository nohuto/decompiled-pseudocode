/*
 * XREFs of EtwpSendDataBlock @ 0x1406BB334
 * Callers:
 *     EtwpClearSessionAndUnreferenceEntry @ 0x1406B8424 (EtwpClearSessionAndUnreferenceEntry.c)
 *     EtwpNotifyGuid @ 0x1406B8AE4 (EtwpNotifyGuid.c)
 *     EtwpEnableGuid @ 0x1406B96E4 (EtwpEnableGuid.c)
 *     EtwpDisallowedGuidAddition @ 0x140933DD4 (EtwpDisallowedGuidAddition.c)
 *     EtwpDisallowedGuidRemoval @ 0x1409340BC (EtwpDisallowedGuidRemoval.c)
 *     SendCaptureStateNotificationsWorker @ 0x14093FB10 (SendCaptureStateNotificationsWorker.c)
 * Callees:
 *     MmDetachSession @ 0x140215920 (MmDetachSession.c)
 *     MmAttachSession @ 0x1402159C0 (MmAttachSession.c)
 *     HalPutDmaAdapter @ 0x14023FBE0 (HalPutDmaAdapter.c)
 *     _tlgWriteTransfer_EtwWriteTransfer @ 0x14027E1A4 (_tlgWriteTransfer_EtwWriteTransfer.c)
 *     _tlgKeywordOn @ 0x1402864F4 (_tlgKeywordOn.c)
 *     MmGetSessionById @ 0x1402AAD40 (MmGetSessionById.c)
 *     KeQueryTimeIncrement @ 0x1402F0CE0 (KeQueryTimeIncrement.c)
 *     __security_check_cookie @ 0x1403D05D0 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x140408790 (_guard_dispatch_icall.c)
 *     EtwpQueueNotification @ 0x1406BB52C (EtwpQueueNotification.c)
 */

__int64 __fastcall EtwpSendDataBlock(__int64 a1, __int64 a2)
{
  __int16 v2; // ax
  __int128 *v5; // r10
  struct _DMA_ADAPTER *v6; // rbx
  int v7; // r14d
  __int64 v9; // rdx
  __int64 v10; // rdi
  unsigned int v11; // r11d
  __int64 v12; // r8
  char v13; // r12
  __int64 v14; // r9
  unsigned int v15; // edx
  __int64 v16; // r13
  __int64 v17; // rbx
  __int64 v18; // r11
  __int64 v19; // r9
  char v20; // cl
  int v21; // r8d
  int v22; // r10d
  void (__fastcall *v23)(__int64, __int64, __int16 *, __int64); // rax
  int *v24; // rax
  ULONG_PTR SessionById; // rax
  int v26; // eax
  __int64 v27; // r9
  __int64 v28; // rax
  void (__fastcall *v29)(__int64, _QWORD, __int64, __int64, __int64, __int128 *, __int64); // [rsp+40h] [rbp-C0h]
  __int64 v30; // [rsp+48h] [rbp-B8h]
  __int64 v31; // [rsp+50h] [rbp-B0h] BYREF
  __int64 v32; // [rsp+58h] [rbp-A8h] BYREF
  __int16 v33; // [rsp+60h] [rbp-A0h] BYREF
  char v34; // [rsp+62h] [rbp-9Eh]
  char v35; // [rsp+63h] [rbp-9Dh]
  int v36; // [rsp+64h] [rbp-9Ch]
  int v37; // [rsp+68h] [rbp-98h]
  int v38; // [rsp+6Ch] [rbp-94h]
  __int128 v39; // [rsp+70h] [rbp-90h] BYREF
  _OWORD v40[3]; // [rsp+80h] [rbp-80h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v41; // [rsp+B0h] [rbp-50h] BYREF
  __int64 *v42; // [rsp+D0h] [rbp-30h]
  __int64 v43; // [rsp+D8h] [rbp-28h]
  __int64 *v44; // [rsp+E0h] [rbp-20h]
  __int64 v45; // [rsp+E8h] [rbp-18h]
  __int64 v46; // [rsp+F0h] [rbp-10h]
  __int64 v47; // [rsp+F8h] [rbp-8h]

  v2 = *(_WORD *)(a1 + 98);
  v5 = 0LL;
  v6 = 0LL;
  v7 = 0;
  memset(v40, 0, sizeof(v40));
  v39 = 0LL;
  if ( (v2 & 1) != 0 )
  {
    v9 = *(_QWORD *)(a1 + 80);
    v30 = v9;
    if ( *(_QWORD *)(a1 + 88) )
    {
      v10 = MEMORY[0xFFFFF78000000320];
      if ( (*(_BYTE *)(a1 + 98) & 0x10) != 0 )
      {
        SessionById = MmGetSessionById(*(unsigned int *)(a1 + 56), v9);
        v6 = (struct _DMA_ADAPTER *)SessionById;
        if ( !SessionById )
          return (unsigned int)-1073741275;
        v7 = MmAttachSession(SessionById);
        if ( v7 < 0 )
        {
          HalPutDmaAdapter(v6);
          return (unsigned int)v7;
        }
        v9 = v30;
        v5 = 0LL;
      }
      if ( *(_DWORD *)a2 == 3 )
      {
        if ( (*(_BYTE *)(a1 + 98) & 8) != 0 )
        {
          v18 = *(_QWORD *)(a1 + 32);
          v19 = v9;
          LOBYTE(v9) = *(_BYTE *)(a2 + 112);
          v20 = *(_BYTE *)(v18 + 90);
          v21 = *(_DWORD *)(v18 + 80);
          v22 = *(_DWORD *)(v18 + 84);
          v33 = *(_WORD *)(v18 + 88);
          v23 = *(void (__fastcall **)(__int64, __int64, __int16 *, __int64))(a1 + 88);
          v34 = v20;
          v36 = v21;
          v35 = 0;
          v37 = v22;
          v38 = 0;
          v23(v18 + 40, v9, &v33, v19);
        }
        else
        {
          v11 = *(_DWORD *)(a2 + 72);
          v12 = *(unsigned int *)(a2 + 116);
          v29 = *(void (__fastcall **)(__int64, _QWORD, __int64, __int64, __int64, __int128 *, __int64))(a1 + 88);
          v13 = v11 != 0 ? *(_BYTE *)(a2 + 76) : 0;
          v14 = *(_QWORD *)(a2 + 96) & -(__int64)(v11 != 0);
          v15 = 0;
          v16 = *(_QWORD *)(a2 + 88) & -(__int64)(v11 != 0);
          if ( (_DWORD)v12 )
          {
            v24 = (int *)(a2 + 132);
            while ( *v24 < 0 && *v24 != 0x80000000 )
            {
              ++v15;
              v24 += 4;
              if ( v15 >= (unsigned int)v12 )
                goto LABEL_10;
            }
            v26 = *(_DWORD *)(a2 + 16LL * v15 + 128);
            *(_QWORD *)&v39 = a2 + *(_QWORD *)(a2 + 16LL * v15 + 120);
            v5 = &v39;
            HIDWORD(v39) = *(_DWORD *)(a2 + 16LL * v15 + 132);
            DWORD2(v39) = v26;
          }
LABEL_10:
          LOBYTE(v12) = v13;
          v29(a2 + 56, v11, v12, v16, v14, v5, v30);
        }
      }
      else
      {
        v7 = -1073741811;
      }
      if ( v6 )
      {
        MmDetachSession((__int64)v6, (__int64)v40);
        HalPutDmaAdapter(v6);
      }
      v17 = MEMORY[0xFFFFF78000000320];
      if ( (v17 - v10) * KeQueryTimeIncrement() >= 600010000
        && (unsigned int)dword_140C02BF0 > 5
        && tlgKeywordOn((__int64)&dword_140C02BF0, 0x200000000800LL) )
      {
        v43 = 8LL;
        v31 = 2164260864LL;
        v45 = 8LL;
        v42 = &v31;
        v47 = 16LL;
        v44 = &v32;
        v28 = *(_QWORD *)(a1 + 32);
        v32 = v27 / 10000;
        v46 = v28 + 40;
        tlgWriteTransfer_EtwWriteTransfer(
          (__int64)&dword_140C02BF0,
          (unsigned __int8 *)byte_14002D991,
          0LL,
          0LL,
          5u,
          &v41);
      }
    }
  }
  else if ( (v2 & 2) != 0 )
  {
    return (unsigned int)EtwpQueueNotification(*(_QWORD *)(a1 + 80), a2, a1);
  }
  return (unsigned int)v7;
}
