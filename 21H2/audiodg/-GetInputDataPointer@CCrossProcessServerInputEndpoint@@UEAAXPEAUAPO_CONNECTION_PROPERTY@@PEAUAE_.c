/*
 * XREFs of ?GetInputDataPointer@CCrossProcessServerInputEndpoint@@UEAAXPEAUAPO_CONNECTION_PROPERTY@@PEAUAE_CURRENT_POSITION@@@Z @ 0x1400156E0
 * Callers:
 *     <none>
 * Callees:
 *     ?CheckSampleForSilence@@YAHPEAEIII@Z @ 0x140015A74 (-CheckSampleForSilence@@YAHPEAEIII@Z.c)
 *     ?ApplyVolumeRamp@@YAXPEAVCFadeWindowLUT@@PEAEIIIIIH@Z @ 0x140015B1C (-ApplyVolumeRamp@@YAXPEAVCFadeWindowLUT@@PEAEIIIIIH@Z.c)
 *     ?FillRampBuffer@CCrossProcessServerInputEndpoint@@AEAAXXZ @ 0x140015D2C (-FillRampBuffer@CCrossProcessServerInputEndpoint@@AEAAXXZ.c)
 *     memset_0 @ 0x14001DF48 (memset_0.c)
 *     memcpy_0 @ 0x140029E1F (memcpy_0.c)
 *     _guard_dispatch_icall_nop @ 0x140029E50 (_guard_dispatch_icall_nop.c)
 *     McTemplateU0p_EventWriteTransfer @ 0x14006168C (McTemplateU0p_EventWriteTransfer.c)
 *     ?AudCPTraceLoggingErrorHelper@@YAXPEBDIJ@Z @ 0x140061F58 (-AudCPTraceLoggingErrorHelper@@YAXPEBDIJ@Z.c)
 *     ?Glitch@CCrossProcessEndpointTraceLogger@@QEAAXW4CpGlitchEvent@@PEBDI@Z @ 0x140062044 (-Glitch@CCrossProcessEndpointTraceLogger@@QEAAXW4CpGlitchEvent@@PEBDI@Z.c)
 *     McTemplateU0pqxxx_EventWriteTransfer @ 0x140062A60 (McTemplateU0pqxxx_EventWriteTransfer.c)
 *     McTemplateU0pqqqq_EventWriteTransfer @ 0x140063C44 (McTemplateU0pqqqq_EventWriteTransfer.c)
 */

void __fastcall CCrossProcessServerInputEndpoint::GetInputDataPointer(
        CCrossProcessServerInputEndpoint *this,
        struct APO_CONNECTION_PROPERTY *a2,
        struct AE_CURRENT_POSITION *a3)
{
  CCrossProcessServerInputEndpoint *v3; // r14
  struct AE_CURRENT_POSITION *v4; // r10
  unsigned int v7; // esi
  UINT32 u32ValidFrameCount; // edi
  unsigned int v9; // r13d
  __int64 v10; // rcx
  signed __int32 v11; // eax
  int v12; // r12d
  int v13; // ebp
  signed __int64 v14; // rax
  __int64 v15; // rcx
  __int64 v16; // r8
  __int64 v17; // rax
  char v18; // di
  __int64 v19; // rcx
  int v20; // r9d
  __int64 v21; // rdx
  __int64 v22; // rdx
  unsigned int v23; // r12d
  int v24; // ecx
  unsigned int v25; // edi
  unsigned int v26; // esi
  APO_BUFFER_FLAGS v27; // r11d
  signed __int32 v28; // eax
  signed __int32 v29; // ett
  unsigned __int8 *pBuffer; // r15
  unsigned int v31; // r12d
  unsigned int v32; // edx
  int v33; // r11d
  unsigned int v34; // r9d
  unsigned int v35; // ecx
  void *v36; // rcx
  const void *v37; // rdx
  unsigned int v38; // eax
  __int64 v39; // rdi
  size_t v40; // r8
  int v41; // edx
  UINT_PTR v42; // rax
  int v43; // [rsp+40h] [rbp-58h]
  __int64 v44; // [rsp+48h] [rbp-50h]
  unsigned int v45; // [rsp+A0h] [rbp+8h]
  unsigned int Size; // [rsp+A8h] [rbp+10h]
  unsigned int Sizea; // [rsp+A8h] [rbp+10h]
  int v49; // [rsp+B8h] [rbp+20h]
  unsigned int v50; // [rsp+B8h] [rbp+20h]

  v3 = (CCrossProcessServerInputEndpoint *)((char *)this - 456);
  v4 = a3;
  v7 = 0;
  if ( (byte_140090581 & 4) != 0 )
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
    if ( (byte_140090581 & 4) != 0 )
      McTemplateU0pqxxx_EventWriteTransfer(v11, (_DWORD)a2, (_DWORD)v3, 23, v11, u32ValidFrameCount, 101);
    if ( v12 != v13 && !v13 )
    {
      CCrossProcessServerInputEndpoint::FillRampBuffer(v3);
      if ( u32ValidFrameCount )
      {
        v34 = *((_DWORD *)this - 91);
        if ( v34 )
          ApplyVolumeRamp(
            (CCrossProcessServerInputEndpoint *)((char *)this + 88),
            *((unsigned __int8 **)this - 43),
            u32ValidFrameCount,
            v34,
            *((_DWORD *)this - 89),
            *((_DWORD *)this - 88),
            *((_DWORD *)this - 87),
            0);
      }
      v27 = BUFFER_VALID;
      goto LABEL_28;
    }
LABEL_27:
    v27 = BUFFER_SILENT;
LABEL_28:
    a2->u32BufferFlags = v27;
    a2->pBuffer = *((_QWORD *)this - 43);
    v28 = *(_DWORD *)(*((_QWORD *)this - 48) + 164LL);
    do
    {
      v29 = v28;
      v28 = _InterlockedCompareExchange(
              (volatile signed __int32 *)(*((_QWORD *)this - 48) + 164LL),
              v28 & 0xFFFFFFFD,
              v28);
    }
    while ( v29 != v28 );
    goto LABEL_19;
  }
  v14 = _InterlockedCompareExchange64((volatile signed __int64 *)(*((_QWORD *)this - 48) + 16LL), 0LL, 0LL);
  v15 = *((_QWORD *)this - 48);
  v16 = v14;
  v44 = v14;
  v17 = _InterlockedCompareExchange64((volatile signed __int64 *)(v15 + 24), 0LL, 0LL);
  v18 = v17;
  if ( v16 < 0 )
  {
    if ( (byte_140090581 & 4) == 0 )
      goto LABEL_44;
    goto LABEL_43;
  }
  if ( v17 < 0 )
  {
    if ( (byte_140090581 & 4) == 0 )
    {
LABEL_44:
      _InterlockedAnd((volatile signed __int32 *)(*((_QWORD *)v3 + 9) + 164LL), 0xFFFFFFFE);
      AudCPTraceLoggingErrorHelper("CCrossProcessBaseEndpoint::IsValidOffset", 0x6A6u, -2147467259);
      LOBYTE(v16) = v44;
LABEL_45:
      if ( (byte_140090581 & 4) != 0 )
        McTemplateU0pqxxx_EventWriteTransfer(v15, (_DWORD)a2, (_DWORD)v3, 23, v16, v18, 102);
      goto LABEL_27;
    }
LABEL_43:
    McTemplateU0p_EventWriteTransfer(v15, a2, v3);
    goto LABEL_44;
  }
  if ( v16 < v17 )
    goto LABEL_45;
  v19 = *((unsigned int *)this - 76);
  v20 = *(_DWORD *)(*((_QWORD *)this - 47) + 160LL);
  if ( v19 == 76800 )
    v21 = v16 % 76800;
  else
    v21 = v16 % v19;
  v49 = v21 + v20;
  if ( v19 == 76800 )
    v22 = v17 % 76800;
  else
    v22 = v17 % v19;
  v23 = v22 + v20;
  v7 = v16 - v17;
  Size = v16 - v17;
  if ( _InterlockedCompareExchange((volatile signed __int32 *)(*((_QWORD *)this - 48) + 176LL), 0, 0) )
  {
    v35 = a2->u32ValidFrameCount;
    if ( v35 >= v7 / *((_DWORD *)this - 92) )
      v35 = v7 / *((_DWORD *)this - 92);
    a2->u32ValidFrameCount = v35;
    *((_DWORD *)this + 5) = v35;
    v45 = v35;
  }
  (*(void (__fastcall **)(CCrossProcessServerInputEndpoint *, struct AE_CURRENT_POSITION *, __int64))(*(_QWORD *)v3 + 80LL))(
    v3,
    v4,
    v17);
  v25 = v45;
  v9 = v45 * *((_DWORD *)this - 92);
  *((_DWORD *)this + 20) = 0;
  if ( v9 > v7 )
  {
    Sizea = v9 - v7;
    if ( (byte_140090581 & 1) != 0 )
      McTemplateU0pqqqq_EventWriteTransfer(
        v24,
        (unsigned int)&EVT_GLITCH_CP_SERVER_INPUT_STARVATION,
        (_DWORD)v3,
        v49,
        v23,
        *((_DWORD *)this - 76),
        v9 - v7);
    else
      Sizea = v9 - v7;
    if ( v44 > 0 )
      CCrossProcessEndpointTraceLogger::Glitch((char *)this - 256, 5LL, "CpGlitchEvent::SERVER_INPUT_STARVATION");
    if ( v7 )
    {
      v36 = (void *)*((_QWORD *)this - 43);
      v37 = (const void *)(*((_QWORD *)this - 48) + v23);
      v38 = *(_DWORD *)(*((_QWORD *)this - 47) + 164LL) - v23;
      v50 = v38;
      if ( v7 <= v38 )
      {
        v40 = v7;
      }
      else
      {
        v39 = v38;
        memcpy_0(v36, v37, v38);
        v40 = v7 - v50;
        v37 = (const void *)(*((_QWORD *)this - 48) + *(unsigned int *)(*((_QWORD *)this - 47) + 160LL));
        v36 = (void *)(v39 + *((_QWORD *)this - 43));
      }
      memcpy_0(v36, v37, v40);
      v41 = 128;
      if ( *((_DWORD *)this - 88) != 8 )
        v41 = 0;
      memset_0((void *)(*((_QWORD *)this - 43) + v7), v41, Sizea);
      v42 = *((_QWORD *)this - 43);
      *((_DWORD *)this + 20) = Sizea;
      v25 = v45;
      a2->pBuffer = v42;
      *((_DWORD *)this + 4) = 1;
      goto LABEL_17;
    }
    *((_DWORD *)this + 20) = v9;
    goto LABEL_27;
  }
  v26 = *(_DWORD *)(*((_QWORD *)this - 47) + 164LL) - v23;
  if ( v9 > v26 )
  {
    memcpy_0(*((void **)this - 43), (const void *)(v23 + *((_QWORD *)this - 48)), v26);
    memcpy_0(
      (void *)(v26 + *((_QWORD *)this - 43)),
      (const void *)(*((_QWORD *)this - 48) + *(unsigned int *)(*((_QWORD *)this - 47) + 160LL)),
      v9 - v26);
    v25 = v45;
    a2->pBuffer = *((_QWORD *)this - 43);
    *((_DWORD *)this + 4) = 1;
  }
  else
  {
    a2->pBuffer = *((_QWORD *)this - 48) + v23;
    *((_DWORD *)this + 4) = 0;
  }
  v7 = Size;
LABEL_17:
  a2->u32BufferFlags = BUFFER_VALID;
  if ( (*((_BYTE *)this - 280) & 1) == 0 && v43 != v13 )
  {
    if ( v13 )
    {
      pBuffer = (unsigned __int8 *)a2->pBuffer;
      v31 = *((_DWORD *)this - 87);
      if ( !(unsigned int)CheckSampleForSilence(pBuffer, *((_DWORD *)this - 91), *((_DWORD *)this - 88), v31) )
        ApplyVolumeRamp(
          (CCrossProcessServerInputEndpoint *)((char *)this + 88),
          pBuffer,
          v25,
          v32,
          *((_DWORD *)this - 89),
          *((_DWORD *)this - 88),
          v31,
          v33);
    }
  }
LABEL_19:
  *((_DWORD *)this + 21) = v13;
  if ( (byte_140090581 & 4) != 0 )
    McTemplateU0pqxxx_EventWriteTransfer(v7, v9, (_DWORD)v3, 6, v9, v7, *((_DWORD *)this + 4));
}
