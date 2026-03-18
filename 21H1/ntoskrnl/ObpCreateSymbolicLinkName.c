/*
 * XREFs of ObpCreateSymbolicLinkName @ 0x1406E3D08
 * Callers:
 *     ObInsertObjectEx @ 0x140602150 (ObInsertObjectEx.c)
 * Callees:
 *     OBP_GET_SILO_ROOT_DIRECTORY_FROM_SILO @ 0x140203428 (OBP_GET_SILO_ROOT_DIRECTORY_FROM_SILO.c)
 *     PsGetCurrentSilo @ 0x140206860 (PsGetCurrentSilo.c)
 *     ObpReleaseLookupContext @ 0x14025B298 (ObpReleaseLookupContext.c)
 *     NLS_UPCASE @ 0x14025C2B0 (NLS_UPCASE.c)
 *     ExAcquirePushLockExclusiveEx @ 0x1402609E0 (ExAcquirePushLockExclusiveEx.c)
 *     KiLeaveGuardedRegionUnsafe @ 0x140260DE0 (KiLeaveGuardedRegionUnsafe.c)
 *     ExReleasePushLockEx @ 0x140260EE0 (ExReleasePushLockEx.c)
 *     HalPutDmaAdapter @ 0x140261190 (HalPutDmaAdapter.c)
 *     ObfReferenceObject @ 0x1402612A0 (ObfReferenceObject.c)
 *     PsGetCurrentServerSiloGlobals @ 0x1402D9560 (PsGetCurrentServerSiloGlobals.c)
 *     ObpLookupDirectoryEntryEx @ 0x1406BC4C8 (ObpLookupDirectoryEntryEx.c)
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
  struct _DMA_ADAPTER ***CurrentServerSiloGlobals; // rsi
  struct _DMA_ADAPTER *v15; // r14
  __int16 v16; // di
  _QWORD *v17; // xmm0_8
  _WORD *v18; // rbx
  __int64 v19; // rax
  __int64 v20; // r8
  struct _OBJECT_TYPE *v21; // rax
  char v22; // bl
  __int64 v23; // rdi
  unsigned int v24; // eax
  struct _KTHREAD *CurrentThread; // rax
  __int64 v26; // rcx
  int v27; // eax
  __int64 v28; // rdx
  __int64 v29; // r8
  __int64 v30; // r9
  bool v31; // zf
  __m128i v32; // [rsp+38h] [rbp-49h]
  __m128i v33; // [rsp+48h] [rbp-39h] BYREF
  __int64 v34[2]; // [rsp+58h] [rbp-29h] BYREF
  __int64 v35; // [rsp+68h] [rbp-19h]
  int v36; // [rsp+70h] [rbp-11h]
  __int16 v37; // [rsp+74h] [rbp-Dh]
  __int16 v38; // [rsp+76h] [rbp-Bh]
  int v39; // [rsp+78h] [rbp-9h]
  int v40; // [rsp+7Ch] [rbp-5h]
  int v42; // [rsp+F0h] [rbp+6Fh]
  struct _DMA_ADAPTER *v43; // [rsp+F8h] [rbp+77h]
  PADAPTER_OBJECT DmaAdapter; // [rsp+100h] [rbp+7Fh]

  v1 = a1 - 48;
  v35 = 0LL;
  v2 = *(_BYTE *)(a1 - 48 + 26);
  v36 = 0;
  v37 = 0;
  v42 = 64;
  v40 = 0;
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
  v38 = v8;
  *(_DWORD *)(a1 + 24) = v6 - 64;
  v9 = v8;
  v10 = v8;
  v43 = *v7;
  *(_OWORD *)v34 = 0LL;
  v39 = -60876;
  CurrentSilo = PsGetCurrentSilo();
  DmaAdapter = (PADAPTER_OBJECT)OBP_GET_SILO_ROOT_DIRECTORY_FROM_SILO((__int64)CurrentSilo);
  v12 = DmaAdapter;
  ObfReferenceObject(DmaAdapter);
  v13 = *(__m128i *)(a1 + 8);
  v32 = v13;
  CurrentServerSiloGlobals = (struct _DMA_ADAPTER ***)PsGetCurrentServerSiloGlobals();
  while ( 1 )
  {
    v15 = v12;
    if ( (_mm_cvtsi128_si32(_mm_srli_si128(v13, 8)) & 7) != 0 || !**CurrentServerSiloGlobals )
    {
      v16 = v32.m128i_i16[0];
LABEL_48:
      v18 = (_WORD *)v32.m128i_i64[1];
      goto LABEL_15;
    }
    v16 = _mm_cvtsi128_si32(v13);
    v32.m128i_i16[0] = v16;
    if ( (unsigned __int16)v16 < 8u )
      goto LABEL_48;
    v17 = (_QWORD *)_mm_srli_si128(v13, 8).m128i_u64[0];
    v18 = v17;
    if ( *v17 == ObpDosDevicesShortNamePrefix )
    {
      v18 = v17 + 1;
      v16 -= 8;
      v32.m128i_i64[1] = (__int64)(v17 + 1);
      v32.m128i_i16[0] = v16;
      v15 = **CurrentServerSiloGlobals;
      v13 = v32;
    }
    while ( 1 )
    {
LABEL_15:
      if ( *v18 == 92 )
      {
        ++v18;
        v16 -= 2;
        v32.m128i_i64[1] = (__int64)v18;
        v32.m128i_i16[0] = v16;
        v13 = v32;
      }
      v33 = v13;
      if ( v16 )
      {
        do
        {
          if ( *v18 == 92 )
            break;
          ++v18;
          v31 = v16 == 2;
          v16 -= 2;
          v32.m128i_i16[0] = v16;
        }
        while ( !v31 );
        v32.m128i_i64[1] = (__int64)v18;
        v13 = v32;
      }
      v33.m128i_i16[0] -= v16;
      if ( !v33.m128i_i16[0] )
        goto LABEL_42;
      if ( v15 == v43 )
      {
        v38 = 257;
      }
      else
      {
        v9 = 0;
        v10 = 0;
      }
      v19 = ObpLookupDirectoryEntryEx(v15, (unsigned __int16 *)&v33, 0, 0LL, 0, (__int64)v34);
      v20 = v19;
      if ( v15 == v43 )
      {
        LOBYTE(v38) = v9;
        HIBYTE(v38) = v10;
      }
      else
      {
        v10 = HIBYTE(v38);
        v9 = v38;
      }
      if ( !v19 )
        goto LABEL_30;
      v21 = (struct _OBJECT_TYPE *)ObTypeIndexTable[(unsigned __int8)ObHeaderCookie ^ *(unsigned __int8 *)(v19 - 24) ^ (unsigned __int64)(unsigned __int8)((unsigned __int16)(v19 - 48) >> 8)];
      if ( v21 != ObpDirectoryObjectType )
        break;
      v15 = (struct _DMA_ADAPTER *)v20;
    }
    if ( v21 != ObpSymbolicLinkObjectType || *(_DWORD *)(v20 + 24) )
      break;
    if ( !v42 )
    {
      v20 = 0LL;
      break;
    }
    v13 = *(__m128i *)(v20 + 8);
    v12 = DmaAdapter;
    --v42;
    v32 = v13;
  }
LABEL_30:
  v22 = 1;
  v23 = *(_QWORD *)(*(_QWORD *)(v1 - ObpInfoMaskToOffset[*(_BYTE *)(v1 + 26) & 3]) + 304LL);
  if ( v20
    && ObTypeIndexTable[(unsigned __int8)ObHeaderCookie ^ *(unsigned __int8 *)(v20 - 24) ^ (unsigned __int64)(unsigned __int8)((unsigned __int16)(v20 - 48) >> 8)] == IoDeviceObjectType )
  {
    v24 = *(_DWORD *)(v20 + 72);
    if ( v24 <= 0x13 )
    {
      if ( v24 < 0x12 )
      {
        if ( v24 < 2 )
          goto LABEL_44;
        if ( v24 <= 3 )
        {
          v22 = 5;
          goto LABEL_39;
        }
        if ( v24 <= 6 )
          goto LABEL_44;
        if ( v24 <= 9 )
        {
          v22 = ((*(_DWORD *)(v20 + 52) & 1) == 0) + 2;
          goto LABEL_39;
        }
        v31 = v24 == 16;
LABEL_59:
        if ( v31 )
          goto LABEL_60;
LABEL_44:
        v22 = 0;
        goto LABEL_39;
      }
LABEL_60:
      v22 = 4;
      goto LABEL_39;
    }
    if ( v24 == 20 )
      goto LABEL_60;
    if ( v24 != 36 )
    {
      v31 = v24 == 40;
      goto LABEL_59;
    }
    v22 = 6;
  }
LABEL_39:
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->SpecialApcDisable;
  ExAcquirePushLockExclusiveEx((ULONG_PTR)(CurrentServerSiloGlobals + 15), 0LL);
  v26 = (unsigned int)(*(_DWORD *)(a1 + 24) - 1);
  v27 = 1 << (*(_BYTE *)(a1 + 24) - 1);
  *(_BYTE *)(v26 + v23 + 32) = v22;
  *(_DWORD *)(v23 + 28) |= v27;
  if ( (struct _DMA_ADAPTER **)v23 == *CurrentServerSiloGlobals )
    *((_DWORD *)CurrentServerSiloGlobals + 2) |= v27;
  else
    ++*((_DWORD *)CurrentServerSiloGlobals + v26 + 3);
  ExReleasePushLockEx((ULONG_PTR)(CurrentServerSiloGlobals + 15), 0LL);
  KiLeaveGuardedRegionUnsafe((__int64)KeGetCurrentThread(), v28, v29, v30);
LABEL_42:
  ObpReleaseLookupContext((__int64)v34);
  HalPutDmaAdapter(DmaAdapter);
}
