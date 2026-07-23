/*
 * XREFs of ObpCreateSymbolicLinkName @ 0x140618538
 * Callers:
 *     ObpCreateHandle @ 0x14070D930 (ObpCreateHandle.c)
 * Callees:
 *     HalPutDmaAdapter @ 0x14023FBE0 (HalPutDmaAdapter.c)
 *     PsGetCurrentSilo @ 0x14026A8D0 (PsGetCurrentSilo.c)
 *     ObpReleaseLookupContext @ 0x14026CA70 (ObpReleaseLookupContext.c)
 *     OBP_GET_SILO_ROOT_DIRECTORY_FROM_SILO @ 0x1402A53F8 (OBP_GET_SILO_ROOT_DIRECTORY_FROM_SILO.c)
 *     NLS_UPCASE @ 0x1402AB420 (NLS_UPCASE.c)
 *     PsGetCurrentServerSiloGlobals @ 0x1402F6FB0 (PsGetCurrentServerSiloGlobals.c)
 *     ExAcquirePushLockExclusiveEx @ 0x1403556E0 (ExAcquirePushLockExclusiveEx.c)
 *     KiLeaveGuardedRegionUnsafe @ 0x140355AE0 (KiLeaveGuardedRegionUnsafe.c)
 *     ExReleasePushLockEx @ 0x140355BE0 (ExReleasePushLockEx.c)
 *     ObfReferenceObject @ 0x140355F80 (ObfReferenceObject.c)
 *     ObpLookupDirectoryEntryEx @ 0x1406F1554 (ObpLookupDirectoryEntryEx.c)
 */

void __fastcall ObpCreateSymbolicLinkName(__int64 a1)
{
  __int64 v1; // r15
  char v2; // al
  __int64 v4; // r9
  unsigned __int16 *v5; // rax
  unsigned __int16 v6; // ax
  struct _DMA_ADAPTER **v7; // r9
  __int16 v8; // r10
  char v9; // r12
  char v10; // r13
  struct _LIST_ENTRY *CurrentSilo; // rax
  struct _DMA_ADAPTER *v12; // rbx
  __m128i v13; // xmm6
  __int64 v14; // rdx
  __int64 v15; // rcx
  struct _DMA_ADAPTER ***CurrentServerSiloGlobals; // rsi
  struct _DMA_ADAPTER *v17; // r14
  __int16 v18; // di
  _QWORD *v19; // xmm0_8
  _WORD *v20; // rbx
  __int64 v21; // rax
  __int64 v22; // r8
  struct _OBJECT_TYPE *v23; // rax
  char v24; // bl
  __int64 v25; // rdi
  unsigned int v26; // eax
  struct _KTHREAD *CurrentThread; // rax
  __int64 v28; // rcx
  int v29; // eax
  bool v30; // zf
  __m128i v31; // [rsp+38h] [rbp-49h]
  __int16 v32; // [rsp+48h] [rbp-39h]
  __int64 v33[2]; // [rsp+58h] [rbp-29h] BYREF
  __int64 v34; // [rsp+68h] [rbp-19h]
  int v35; // [rsp+70h] [rbp-11h]
  __int16 v36; // [rsp+74h] [rbp-Dh]
  __int16 v37; // [rsp+76h] [rbp-Bh]
  int v38; // [rsp+78h] [rbp-9h]
  int v39; // [rsp+7Ch] [rbp-5h]
  int v41; // [rsp+F0h] [rbp+6Fh]
  struct _DMA_ADAPTER *v42; // [rsp+F8h] [rbp+77h]
  PADAPTER_OBJECT DmaAdapter; // [rsp+100h] [rbp+7Fh]

  v1 = a1 - 48;
  v34 = 0LL;
  v2 = *(_BYTE *)(a1 - 48 + 26);
  v35 = 0;
  v36 = 0;
  v41 = 64;
  v39 = 0;
  if ( (v2 & 2) != 0 )
    v4 = v1 - ObpInfoMaskToOffset[v2 & 3];
  else
    v4 = 0LL;
  if ( !v4 )
    return;
  if ( !*(_QWORD *)(*(_QWORD *)v4 + 304LL) )
    return;
  if ( *(_WORD *)(v4 + 8) != 4 )
    return;
  v5 = *(unsigned __int16 **)(v4 + 16);
  if ( v5[1] != 58 )
    return;
  v6 = NLS_UPCASE(*v5);
  if ( (unsigned __int16)(v6 - 65) > 0x19u )
    return;
  v37 = v8;
  *(_DWORD *)(a1 + 24) = v6 - 64;
  v9 = v8;
  v10 = v8;
  v42 = *v7;
  *(_OWORD *)v33 = 0LL;
  v38 = -60876;
  CurrentSilo = PsGetCurrentSilo();
  DmaAdapter = (PADAPTER_OBJECT)OBP_GET_SILO_ROOT_DIRECTORY_FROM_SILO((__int64)CurrentSilo);
  v12 = DmaAdapter;
  ObfReferenceObject(DmaAdapter);
  v13 = *(__m128i *)(a1 + 8);
  v31 = v13;
  CurrentServerSiloGlobals = (struct _DMA_ADAPTER ***)PsGetCurrentServerSiloGlobals(v15, v14);
  while ( 1 )
  {
    v17 = v12;
    if ( (_mm_cvtsi128_si32(_mm_srli_si128(v13, 8)) & 7) != 0 || !**CurrentServerSiloGlobals )
    {
      v18 = v31.m128i_i16[0];
LABEL_48:
      v20 = (_WORD *)v31.m128i_i64[1];
      goto LABEL_15;
    }
    v18 = _mm_cvtsi128_si32(v13);
    v31.m128i_i16[0] = v18;
    if ( (unsigned __int16)v18 < 8u )
      goto LABEL_48;
    v19 = (_QWORD *)_mm_srli_si128(v13, 8).m128i_u64[0];
    v20 = v19;
    if ( *v19 == ObpDosDevicesShortNamePrefix )
    {
      v20 = v19 + 1;
      v18 -= 8;
      v31.m128i_i16[0] = v18;
      v17 = **CurrentServerSiloGlobals;
      v13.m128i_i16[0] = v18;
    }
    while ( 1 )
    {
LABEL_15:
      if ( *v20 == 92 )
      {
        ++v20;
        v18 -= 2;
        v31.m128i_i16[0] = v18;
        v13.m128i_i16[0] = v18;
      }
      v32 = v13.m128i_i16[0];
      if ( v18 )
      {
        do
        {
          if ( *v20 == 92 )
            break;
          ++v20;
          v30 = v18 == 2;
          v18 -= 2;
          v31.m128i_i16[0] = v18;
        }
        while ( !v30 );
        v13.m128i_i16[0] = v31.m128i_i16[0];
      }
      if ( v32 == v18 )
        goto LABEL_42;
      if ( v17 == v42 )
      {
        v37 = 257;
      }
      else
      {
        v9 = 0;
        v10 = 0;
      }
      v21 = ObpLookupDirectoryEntryEx(v17, 0, (__int64)v33);
      v22 = v21;
      if ( v17 == v42 )
      {
        LOBYTE(v37) = v9;
        HIBYTE(v37) = v10;
      }
      else
      {
        v10 = HIBYTE(v37);
        v9 = v37;
      }
      if ( !v21 )
        goto LABEL_30;
      v23 = (struct _OBJECT_TYPE *)ObTypeIndexTable[(unsigned __int8)ObHeaderCookie ^ *(unsigned __int8 *)(v21 - 24) ^ (unsigned __int64)(unsigned __int8)((unsigned __int16)(v21 - 48) >> 8)];
      if ( v23 != ObpDirectoryObjectType )
        break;
      v17 = (struct _DMA_ADAPTER *)v22;
    }
    if ( v23 != ObpSymbolicLinkObjectType || *(_DWORD *)(v22 + 24) )
      break;
    if ( !v41 )
    {
      v22 = 0LL;
      break;
    }
    v13 = *(__m128i *)(v22 + 8);
    v12 = DmaAdapter;
    --v41;
    v31 = v13;
  }
LABEL_30:
  v24 = 1;
  v25 = *(_QWORD *)(*(_QWORD *)(v1 - ObpInfoMaskToOffset[*(_BYTE *)(v1 + 26) & 3]) + 304LL);
  if ( v22
    && ObTypeIndexTable[(unsigned __int8)ObHeaderCookie ^ *(unsigned __int8 *)(v22 - 24) ^ (unsigned __int64)(unsigned __int8)((unsigned __int16)(v22 - 48) >> 8)] == IoDeviceObjectType )
  {
    v26 = *(_DWORD *)(v22 + 72);
    if ( v26 <= 0x13 )
    {
      if ( v26 < 0x12 )
      {
        if ( v26 < 2 )
          goto LABEL_44;
        if ( v26 <= 3 )
        {
          v24 = 5;
          goto LABEL_39;
        }
        if ( v26 <= 6 )
          goto LABEL_44;
        if ( v26 <= 9 )
        {
          v24 = ((*(_DWORD *)(v22 + 52) & 1) == 0) + 2;
          goto LABEL_39;
        }
        v30 = v26 == 16;
LABEL_59:
        if ( v30 )
          goto LABEL_60;
LABEL_44:
        v24 = 0;
        goto LABEL_39;
      }
LABEL_60:
      v24 = 4;
      goto LABEL_39;
    }
    if ( v26 == 20 )
      goto LABEL_60;
    if ( v26 != 36 )
    {
      v30 = v26 == 40;
      goto LABEL_59;
    }
    v24 = 6;
  }
LABEL_39:
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->SpecialApcDisable;
  ExAcquirePushLockExclusiveEx((ULONG_PTR)(CurrentServerSiloGlobals + 15), 0LL);
  v28 = (unsigned int)(*(_DWORD *)(a1 + 24) - 1);
  v29 = 1 << (*(_BYTE *)(a1 + 24) - 1);
  *(_BYTE *)(v28 + v25 + 32) = v24;
  *(_DWORD *)(v25 + 28) |= v29;
  if ( (struct _DMA_ADAPTER **)v25 == *CurrentServerSiloGlobals )
    *((_DWORD *)CurrentServerSiloGlobals + 2) |= v29;
  else
    ++*((_DWORD *)CurrentServerSiloGlobals + v28 + 3);
  ExReleasePushLockEx((ULONG_PTR)(CurrentServerSiloGlobals + 15), 0LL);
  KiLeaveGuardedRegionUnsafe((__int64)KeGetCurrentThread());
LABEL_42:
  ObpReleaseLookupContext((__int64)v33);
  HalPutDmaAdapter(DmaAdapter);
}
