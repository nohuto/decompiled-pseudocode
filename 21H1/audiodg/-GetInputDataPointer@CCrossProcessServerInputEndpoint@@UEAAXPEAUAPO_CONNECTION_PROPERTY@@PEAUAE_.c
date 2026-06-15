/*
 * XREFs of ?GetInputDataPointer@CCrossProcessServerInputEndpoint@@UEAAXPEAUAPO_CONNECTION_PROPERTY@@PEAUAE_CURRENT_POSITION@@@Z @ 0x1400157F0
 * Callers:
 *     <none>
 * Callees:
 *     ?CheckSampleForSilence@@YAHPEAEIII@Z @ 0x140015B6C (-CheckSampleForSilence@@YAHPEAEIII@Z.c)
 *     ?ApplyVolumeRamp@@YAXPEAVCFadeWindowLUT@@PEAEIIIIIH@Z @ 0x140015C14 (-ApplyVolumeRamp@@YAXPEAVCFadeWindowLUT@@PEAEIIIIIH@Z.c)
 *     ?FillRampBuffer@CCrossProcessServerInputEndpoint@@AEAAXXZ @ 0x140015E1C (-FillRampBuffer@CCrossProcessServerInputEndpoint@@AEAAXXZ.c)
 *     memset_0 @ 0x14001DBE8 (memset_0.c)
 *     memcpy_0 @ 0x14001F43F (memcpy_0.c)
 *     _guard_dispatch_icall_nop @ 0x14001F470 (_guard_dispatch_icall_nop.c)
 *     McTemplateU0p_EventWriteTransfer @ 0x140058ACC (McTemplateU0p_EventWriteTransfer.c)
 *     ?AudCPTraceLoggingErrorHelper@@YAXPEBDIJ@Z @ 0x140059398 (-AudCPTraceLoggingErrorHelper@@YAXPEBDIJ@Z.c)
 *     ?Glitch@CCrossProcessEndpointTraceLogger@@QEAAXW4CpGlitchEvent@@PEBDI@Z @ 0x140059484 (-Glitch@CCrossProcessEndpointTraceLogger@@QEAAXW4CpGlitchEvent@@PEBDI@Z.c)
 *     McTemplateU0pqxxx_EventWriteTransfer @ 0x140059E60 (McTemplateU0pqxxx_EventWriteTransfer.c)
 *     McTemplateU0pqqqq_EventWriteTransfer @ 0x14005B010 (McTemplateU0pqqqq_EventWriteTransfer.c)
 */

void __fastcall CCrossProcessServerInputEndpoint::GetInputDataPointer(
        CCrossProcessServerInputEndpoint *this,
        struct APO_CONNECTION_PROPERTY *a2,
        struct AE_CURRENT_POSITION *a3)
{
  CCrossProcessServerInputEndpoint *v3; // r14
  struct AE_CURRENT_POSITION *v4; // r10
  unsigned int v7; // edi
  UINT32 u32ValidFrameCount; // esi
  unsigned int v9; // r13d
  __int64 v10; // rcx
  signed __int32 v11; // eax
  int v12; // r12d
  int v13; // ebp
  __int64 v14; // rcx
  __int64 v15; // rsi
  __int64 v16; // rdi
  __int64 v17; // r8
  int v18; // r9d
  __int64 v19; // rdx
  __int64 v20; // rdx
  unsigned int v21; // r12d
  int v22; // ecx
  unsigned int v23; // esi
  APO_BUFFER_FLAGS v24; // r11d
  signed __int32 v25; // eax
  signed __int32 v26; // ett
  unsigned __int8 *pBuffer; // r15
  unsigned int v28; // esi
  unsigned int v29; // r12d
  unsigned int v30; // edx
  int v31; // r11d
  unsigned int v32; // r9d
  unsigned int v33; // ecx
  void *v34; // rcx
  const void *v35; // rdx
  unsigned int v36; // eax
  __int64 v37; // rdi
  unsigned int v38; // esi
  int v39; // edx
  UINT_PTR v40; // rax
  int v41; // [rsp+40h] [rbp-58h]
  unsigned int v42; // [rsp+40h] [rbp-58h]
  int v43; // [rsp+44h] [rbp-54h]
  unsigned int Size; // [rsp+A0h] [rbp+8h]
  unsigned int v45; // [rsp+A8h] [rbp+10h]
  unsigned int v47; // [rsp+B8h] [rbp+20h]

  v3 = (CCrossProcessServerInputEndpoint *)((char *)this - 456);
  v4 = a3;
  v7 = 0;
  if ( (byte_140085401 & 4) != 0 )
  {
    McTemplateU0pqxxx_EventWriteTransfer(
      a2->u32ValidFrameCount,
      (_DWORD)a2,
      (_DWORD)v3,
      5,
      a2->u32ValidFrameCount,
      a2->u32BufferFlags,
      0);
    v4 = a3;
  }
  u32ValidFrameCount = a2->u32ValidFrameCount;
  v9 = 0;
  v10 = *((_QWORD *)this - 48);
  v45 = u32ValidFrameCount;
  *((_DWORD *)this + 5) = u32ValidFrameCount;
  *((_DWORD *)this + 4) = 2;
  v11 = _InterlockedCompareExchange((volatile signed __int32 *)(v10 + 164), 0, 0);
  v12 = *((_DWORD *)this + 21);
  v43 = v12;
  v13 = v11 & 1;
  if ( (v11 & 1) == 0 && (*((_BYTE *)this - 280) & 1) == 0 || !u32ValidFrameCount )
  {
    if ( (byte_140085401 & 4) != 0 )
      McTemplateU0pqxxx_EventWriteTransfer(v11, (_DWORD)a2, (_DWORD)v3, 23, v11, u32ValidFrameCount, 101);
    if ( v12 != v13 && !v13 )
    {
      CCrossProcessServerInputEndpoint::FillRampBuffer(v3);
      if ( u32ValidFrameCount )
      {
        v32 = *((_DWORD *)this - 91);
        if ( v32 )
          ApplyVolumeRamp(
            (CCrossProcessServerInputEndpoint *)((char *)this + 88),
            *((unsigned __int8 **)this - 43),
            u32ValidFrameCount,
            v32,
            *((_DWORD *)this - 89),
            *((_DWORD *)this - 88),
            *((_DWORD *)this - 87),
            0);
      }
      v24 = BUFFER_VALID;
      goto LABEL_27;
    }
LABEL_26:
    v24 = BUFFER_SILENT;
LABEL_27:
    a2->u32BufferFlags = v24;
    a2->pBuffer = *((_QWORD *)this - 43);
    v25 = *(_DWORD *)(*((_QWORD *)this - 48) + 164LL);
    do
    {
      v26 = v25;
      v25 = _InterlockedCompareExchange(
              (volatile signed __int32 *)(*((_QWORD *)this - 48) + 164LL),
              v25 & 0xFFFFFFFD,
              v25);
    }
    while ( v26 != v25 );
    goto LABEL_18;
  }
  v14 = *((_QWORD *)this - 48);
  v15 = *(_QWORD *)(v14 + 16);
  v16 = *(_QWORD *)(v14 + 24);
  if ( v15 < 0 )
  {
    if ( (byte_140085401 & 4) == 0 )
      goto LABEL_43;
    goto LABEL_42;
  }
  if ( v16 < 0 )
  {
    if ( (byte_140085401 & 4) == 0 )
    {
LABEL_43:
      _InterlockedAnd((volatile signed __int32 *)(*((_QWORD *)v3 + 9) + 164LL), 0xFFFFFFFE);
      AudCPTraceLoggingErrorHelper("CCrossProcessBaseEndpoint::IsValidOffset", 0x6A6u, -2147467259);
      goto LABEL_44;
    }
LABEL_42:
    McTemplateU0p_EventWriteTransfer(v14, a2, v3);
    goto LABEL_43;
  }
  if ( v15 < v16 )
  {
LABEL_44:
    if ( (byte_140085401 & 4) != 0 )
      McTemplateU0pqxxx_EventWriteTransfer(v14, (_DWORD)a2, (_DWORD)v3, 23, v15, v16, 102);
    v7 = 0;
    goto LABEL_26;
  }
  v17 = *((unsigned int *)this - 76);
  v18 = *(_DWORD *)(*((_QWORD *)this - 47) + 160LL);
  if ( v17 == 76800 )
    v19 = v15 % 76800;
  else
    v19 = v15 % v17;
  v41 = v19 + v18;
  if ( v17 == 76800 )
    v20 = v16 % 76800;
  else
    v20 = v16 % v17;
  v21 = v20 + v18;
  Size = v15 - v16;
  if ( _InterlockedCompareExchange((volatile signed __int32 *)(v14 + 176), 0, 0) )
  {
    v33 = a2->u32ValidFrameCount;
    if ( v33 >= (unsigned int)(v15 - v16) / *((_DWORD *)this - 92) )
      v33 = (unsigned int)(v15 - v16) / *((_DWORD *)this - 92);
    a2->u32ValidFrameCount = v33;
    *((_DWORD *)this + 5) = v33;
    v45 = v33;
  }
  (*(void (__fastcall **)(CCrossProcessServerInputEndpoint *, struct AE_CURRENT_POSITION *, __int64))(*(_QWORD *)v3 + 80LL))(
    v3,
    v4,
    v16);
  v9 = v45 * *((_DWORD *)this - 92);
  v7 = v15 - v16;
  *((_DWORD *)this + 20) = 0;
  if ( v9 > Size )
  {
    v47 = v9 - Size;
    if ( (byte_140085401 & 1) != 0 )
      McTemplateU0pqqqq_EventWriteTransfer(
        v22,
        (unsigned int)&EVT_GLITCH_CP_SERVER_INPUT_STARVATION,
        (_DWORD)v3,
        v41,
        v21,
        *((_DWORD *)this - 76),
        v9 - Size);
    else
      v47 = v9 - v7;
    if ( v15 > 0 )
      CCrossProcessEndpointTraceLogger::Glitch((char *)this - 256, 5LL, "CpGlitchEvent::SERVER_INPUT_STARVATION");
    if ( Size )
    {
      v34 = (void *)*((_QWORD *)this - 43);
      v35 = (const void *)(*((_QWORD *)this - 48) + v21);
      v36 = *(_DWORD *)(*((_QWORD *)this - 47) + 164LL) - v21;
      v42 = v36;
      if ( Size <= v36 )
      {
        memcpy_0(v34, v35, Size);
        v38 = Size;
      }
      else
      {
        v37 = v36;
        memcpy_0(v34, v35, v36);
        v38 = Size;
        memcpy_0(
          (void *)(v37 + *((_QWORD *)this - 43)),
          (const void *)(*((_QWORD *)this - 48) + *(unsigned int *)(*((_QWORD *)this - 47) + 160LL)),
          Size - v42);
      }
      v39 = 128;
      if ( *((_DWORD *)this - 88) != 8 )
        v39 = 0;
      memset_0((void *)(*((_QWORD *)this - 43) + v38), v39, v47);
      v40 = *((_QWORD *)this - 43);
      *((_DWORD *)this + 20) = v47;
      v7 = Size;
      a2->pBuffer = v40;
      *((_DWORD *)this + 4) = 1;
      goto LABEL_16;
    }
    *((_DWORD *)this + 20) = v9;
    goto LABEL_26;
  }
  v23 = *(_DWORD *)(*((_QWORD *)this - 47) + 164LL) - v21;
  if ( v9 > v23 )
  {
    memcpy_0(*((void **)this - 43), (const void *)(v21 + *((_QWORD *)this - 48)), v23);
    memcpy_0(
      (void *)(v23 + *((_QWORD *)this - 43)),
      (const void *)(*((_QWORD *)this - 48) + *(unsigned int *)(*((_QWORD *)this - 47) + 160LL)),
      v9 - v23);
    v7 = Size;
    a2->pBuffer = *((_QWORD *)this - 43);
    *((_DWORD *)this + 4) = 1;
  }
  else
  {
    a2->pBuffer = *((_QWORD *)this - 48) + v21;
    *((_DWORD *)this + 4) = 0;
  }
LABEL_16:
  a2->u32BufferFlags = BUFFER_VALID;
  if ( (*((_BYTE *)this - 280) & 1) == 0 && v43 != v13 )
  {
    if ( v13 )
    {
      pBuffer = (unsigned __int8 *)a2->pBuffer;
      v28 = *((_DWORD *)this - 87);
      v29 = *((_DWORD *)this - 88);
      if ( !(unsigned int)CheckSampleForSilence(pBuffer, *((_DWORD *)this - 91), v29, v28) )
        ApplyVolumeRamp(
          (CCrossProcessServerInputEndpoint *)((char *)this + 88),
          pBuffer,
          v45,
          v30,
          *((_DWORD *)this - 89),
          v29,
          v28,
          v31);
    }
  }
LABEL_18:
  *((_DWORD *)this + 21) = v13;
  if ( (byte_140085401 & 4) != 0 )
    McTemplateU0pqxxx_EventWriteTransfer(v7, v9, (_DWORD)v3, 6, v9, v7, *((_DWORD *)this + 4));
}
