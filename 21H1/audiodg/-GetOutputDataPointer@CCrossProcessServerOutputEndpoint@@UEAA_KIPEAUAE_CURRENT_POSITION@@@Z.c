/*
 * XREFs of ?GetOutputDataPointer@CCrossProcessServerOutputEndpoint@@UEAA_KIPEAUAE_CURRENT_POSITION@@@Z @ 0x14005B850
 * Callers:
 *     <none>
 * Callees:
 *     ?IsValidOffset@CCrossProcessBaseEndpoint@@IEAA_N_J@Z @ 0x140015F10 (-IsValidOffset@CCrossProcessBaseEndpoint@@IEAA_N_J@Z.c)
 *     _guard_dispatch_icall_nop @ 0x14001F470 (_guard_dispatch_icall_nop.c)
 *     ?Glitch@CCrossProcessEndpointTraceLogger@@QEAAXW4CpGlitchEvent@@PEBDI@Z @ 0x140059484 (-Glitch@CCrossProcessEndpointTraceLogger@@QEAAXW4CpGlitchEvent@@PEBDI@Z.c)
 *     McTemplateU0pqxxx_EventWriteTransfer @ 0x140059E60 (McTemplateU0pqxxx_EventWriteTransfer.c)
 *     McTemplateU0pqqq_EventWriteTransfer @ 0x14005BE90 (McTemplateU0pqqq_EventWriteTransfer.c)
 *     McTemplateU0pxqxq_EventWriteTransfer @ 0x14005C12C (McTemplateU0pxqxq_EventWriteTransfer.c)
 */

__int64 __fastcall CCrossProcessServerOutputEndpoint::GetOutputDataPointer(
        CCrossProcessServerOutputEndpoint *this,
        __int64 a2,
        struct AE_CURRENT_POSITION *a3)
{
  CCrossProcessBaseEndpoint *v3; // r14
  int v4; // r12d
  __int64 v7; // rax
  __int64 v8; // rcx
  __int64 v9; // rax
  __int64 v10; // r15
  __int64 v11; // rbp
  __int64 v12; // r9
  __int64 v13; // rax
  int v14; // r13d
  unsigned int v15; // r13d
  int v16; // edx
  unsigned int v17; // r8d
  int v18; // eax
  unsigned __int64 v19; // rdx
  __int64 v20; // rcx
  unsigned int v21; // esi
  __int64 v22; // r8
  __int64 v23; // r9
  int v24; // r10d
  __int64 v25; // rdi

  *((_DWORD *)this + 22) = 0;
  v3 = (CCrossProcessServerOutputEndpoint *)((char *)this - 456);
  v4 = a2;
  *((_DWORD *)this + 5) = a2;
  *((_DWORD *)this + 4) = 2;
  if ( (byte_140085401 & 4) != 0 )
    McTemplateU0pqxxx_EventWriteTransfer((__int64)this, a2, (__int64)this - 456, 9, a2, *((_DWORD *)this - 90), 0);
  v7 = *((_QWORD *)this - 48);
  v8 = *(_DWORD *)(v7 + 164) & 1;
  if ( (*(_BYTE *)(v7 + 164) & 1) == 0 )
    goto LABEL_24;
  if ( !v4 )
    goto LABEL_24;
  v9 = *((_QWORD *)this - 48);
  v10 = *(_QWORD *)(v9 + 16);
  v11 = *(_QWORD *)(v9 + 24);
  if ( !CCrossProcessBaseEndpoint::IsValidOffset(v3, v10)
    || !CCrossProcessBaseEndpoint::IsValidOffset(v3, v11)
    || v10 < v11 )
  {
    goto LABEL_24;
  }
  (*(void (__fastcall **)(CCrossProcessBaseEndpoint *, struct AE_CURRENT_POSITION *, __int64))(*(_QWORD *)v3 + 80LL))(
    v3,
    a3,
    v10);
  v13 = *((_QWORD *)this - 48);
  v14 = *((_DWORD *)this - 92);
  *((_OWORD *)this + 6) = *(_OWORD *)&a3->u64DevicePosition;
  v15 = v4 * v14;
  *((_OWORD *)this + 7) = *(_OWORD *)&a3->u64PaddingFrames;
  *((_QWORD *)this + 16) = *(_QWORD *)&a3->f32FramesPerSecond;
  v16 = *(_DWORD *)(v13 + 4) + 1;
  v17 = **((_DWORD **)this - 48);
  v18 = 0;
  if ( v16 != *(_DWORD *)(*((_QWORD *)this - 47) + 132LL) )
    v18 = v16;
  if ( v18 == v17 )
  {
    v19 = (unsigned __int64)(v17 + 1 < *(_DWORD *)(*((_QWORD *)this - 47) + 132LL) ? v17 + 1 : 0) << 6;
    _InterlockedExchange(
      *((volatile __int32 **)this - 48),
      v17 + 1 < *(_DWORD *)(*((_QWORD *)this - 47) + 132LL) ? v17 + 1 : 0);
    *(_DWORD *)(v19 + *((_QWORD *)this - 42) + 52) = 1;
    if ( (byte_140085401 & 1) != 0 )
      McTemplateU0pxqxq_EventWriteTransfer(
        v17 << 6,
        v19,
        (_DWORD)v3,
        v10,
        *(_DWORD *)(((unsigned __int64)v17 << 6) + *((_QWORD *)this - 42) + 4),
        v11,
        v15);
    CCrossProcessEndpointTraceLogger::Glitch(
      (__int64)this - 256,
      6u,
      (const unsigned __int16 *)"CpGlitchEvent::SERVER_OUTPUT_QUEUE_FULL_PACKET_DROP",
      v12);
  }
  v20 = *((unsigned int *)this - 76);
  if ( (unsigned int)v20 >= (int)v10 - (int)v11 )
    v21 = v11 + v20 - v10;
  else
    v21 = v15;
  v22 = *((_QWORD *)this - 47);
  v23 = *((unsigned int *)this - 76);
  a2 = v10 % v20;
  v24 = *(_DWORD *)(v22 + 160);
  v8 = v24 + (unsigned int)(v10 % v20);
  if ( v21 < v15 )
  {
    if ( (byte_140085401 & 1) != 0 )
      McTemplateU0pqqq_EventWriteTransfer(v8, v24 + v11 % v23, (_DWORD)v3, v8, v24 + v11 % v23, v15);
    if ( v11 > 0 )
      CCrossProcessEndpointTraceLogger::Glitch(
        (__int64)this - 256,
        7u,
        (const unsigned __int16 *)"CpGlitchEvent::SERVER_OUTPUT_READ_POINTER_OVERWRITE",
        v23);
    if ( v21 )
    {
      *((_DWORD *)this + 22) = v21;
      *((_DWORD *)this + 4) = 1;
    }
LABEL_24:
    _InterlockedExchange((volatile __int32 *)this - 74, 1);
LABEL_25:
    v25 = *((_QWORD *)this - 43);
    goto LABEL_26;
  }
  if ( (unsigned int)v8 + v15 > *(_DWORD *)(v22 + 168) )
  {
    *((_DWORD *)this + 4) = 1;
    goto LABEL_25;
  }
  *((_DWORD *)this + 4) = 0;
  v25 = *((_QWORD *)this - 48) + (unsigned int)v8;
LABEL_26:
  if ( (byte_140085401 & 4) != 0 )
    McTemplateU0pqxxx_EventWriteTransfer(v8, a2, (__int64)v3, 10, v4, 0, 0);
  return v25;
}
