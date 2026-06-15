/*
 * XREFs of ?GetOutputDataPointer@CCrossProcessServerOutputEndpoint@@UEAA_KIPEAUAE_CURRENT_POSITION@@@Z @ 0x140064480
 * Callers:
 *     <none>
 * Callees:
 *     ?IsValidOffset@CCrossProcessBaseEndpoint@@IEAA_N_J@Z @ 0x140015E30 (-IsValidOffset@CCrossProcessBaseEndpoint@@IEAA_N_J@Z.c)
 *     _guard_dispatch_icall_nop @ 0x140029E50 (_guard_dispatch_icall_nop.c)
 *     ?Glitch@CCrossProcessEndpointTraceLogger@@QEAAXW4CpGlitchEvent@@PEBDI@Z @ 0x140062044 (-Glitch@CCrossProcessEndpointTraceLogger@@QEAAXW4CpGlitchEvent@@PEBDI@Z.c)
 *     McTemplateU0pqxxx_EventWriteTransfer @ 0x140062A60 (McTemplateU0pqxxx_EventWriteTransfer.c)
 *     McTemplateU0pqqq_EventWriteTransfer @ 0x140064AEC (McTemplateU0pqqq_EventWriteTransfer.c)
 *     McTemplateU0pxqxq_EventWriteTransfer @ 0x140064D88 (McTemplateU0pxqxq_EventWriteTransfer.c)
 */

__int64 __fastcall CCrossProcessServerOutputEndpoint::GetOutputDataPointer(
        CCrossProcessServerOutputEndpoint *this,
        __int64 a2,
        struct AE_CURRENT_POSITION *a3)
{
  int v3; // r12d
  CCrossProcessBaseEndpoint *v4; // r14
  __int64 v7; // rax
  __int64 v8; // rcx
  __int64 v9; // r15
  __int64 v10; // rbp
  __int64 v11; // r9
  __int64 v12; // rax
  int v13; // r13d
  unsigned int v14; // r13d
  int v15; // edx
  unsigned int v16; // r8d
  int v17; // eax
  unsigned __int64 v18; // rdx
  __int64 v19; // rcx
  unsigned int v20; // esi
  __int64 v21; // r8
  __int64 v22; // r9
  int v23; // r10d
  __int64 v24; // rdi

  v3 = a2;
  *((_DWORD *)this + 5) = a2;
  v4 = (CCrossProcessServerOutputEndpoint *)((char *)this - 456);
  *((_DWORD *)this + 22) = 0;
  *((_DWORD *)this + 4) = 2;
  if ( (byte_140090581 & 4) != 0 )
    McTemplateU0pqxxx_EventWriteTransfer((__int64)this, a2, (__int64)this - 456, 9, a2, *((_DWORD *)this - 90), 0);
  v7 = *((_QWORD *)this - 48);
  v8 = *(_DWORD *)(v7 + 164) & 1;
  if ( (*(_BYTE *)(v7 + 164) & 1) == 0 )
    goto LABEL_24;
  if ( !v3 )
    goto LABEL_24;
  v9 = _InterlockedCompareExchange64((volatile signed __int64 *)(*((_QWORD *)this - 48) + 16LL), 0LL, 0LL);
  v10 = _InterlockedCompareExchange64((volatile signed __int64 *)(*((_QWORD *)this - 48) + 24LL), 0LL, 0LL);
  if ( !CCrossProcessBaseEndpoint::IsValidOffset(v4, v9)
    || !CCrossProcessBaseEndpoint::IsValidOffset(v4, v10)
    || v9 < v10 )
  {
    goto LABEL_24;
  }
  (*(void (__fastcall **)(CCrossProcessBaseEndpoint *, struct AE_CURRENT_POSITION *, __int64))(*(_QWORD *)v4 + 80LL))(
    v4,
    a3,
    v9);
  v12 = *((_QWORD *)this - 48);
  v13 = *((_DWORD *)this - 92);
  *((_OWORD *)this + 6) = *(_OWORD *)&a3->u64DevicePosition;
  v14 = v3 * v13;
  *((_OWORD *)this + 7) = *(_OWORD *)&a3->u64PaddingFrames;
  *((_QWORD *)this + 16) = *(_QWORD *)&a3->f32FramesPerSecond;
  v15 = *(_DWORD *)(v12 + 4) + 1;
  v16 = **((_DWORD **)this - 48);
  v17 = 0;
  if ( v15 != *(_DWORD *)(*((_QWORD *)this - 47) + 132LL) )
    v17 = v15;
  if ( v17 == v16 )
  {
    v18 = (unsigned __int64)(v16 + 1 < *(_DWORD *)(*((_QWORD *)this - 47) + 132LL) ? v16 + 1 : 0) << 6;
    _InterlockedExchange(
      *((volatile __int32 **)this - 48),
      v16 + 1 < *(_DWORD *)(*((_QWORD *)this - 47) + 132LL) ? v16 + 1 : 0);
    *(_DWORD *)(v18 + *((_QWORD *)this - 42) + 52) = 1;
    if ( (byte_140090581 & 1) != 0 )
      McTemplateU0pxqxq_EventWriteTransfer(
        v16 << 6,
        v18,
        (_DWORD)v4,
        v9,
        *(_DWORD *)(((unsigned __int64)v16 << 6) + *((_QWORD *)this - 42) + 4),
        v10,
        v14);
    CCrossProcessEndpointTraceLogger::Glitch(
      (__int64)this - 256,
      6u,
      (const unsigned __int16 *)"CpGlitchEvent::SERVER_OUTPUT_QUEUE_FULL_PACKET_DROP",
      v11);
  }
  v19 = *((unsigned int *)this - 76);
  if ( (unsigned int)v19 >= (int)v9 - (int)v10 )
    v20 = v10 + v19 - v9;
  else
    v20 = v14;
  v21 = *((_QWORD *)this - 47);
  v22 = *((unsigned int *)this - 76);
  a2 = v9 % v19;
  v23 = *(_DWORD *)(v21 + 160);
  v8 = v23 + (unsigned int)(v9 % v19);
  if ( v20 < v14 )
  {
    if ( (byte_140090581 & 1) != 0 )
      McTemplateU0pqqq_EventWriteTransfer(v8, v23 + v10 % v22, (_DWORD)v4, v8, v23 + v10 % v22, v14);
    if ( v10 > 0 )
      CCrossProcessEndpointTraceLogger::Glitch(
        (__int64)this - 256,
        7u,
        (const unsigned __int16 *)"CpGlitchEvent::SERVER_OUTPUT_READ_POINTER_OVERWRITE",
        v22);
    if ( v20 )
    {
      *((_DWORD *)this + 22) = v20;
      *((_DWORD *)this + 4) = 1;
    }
LABEL_24:
    _InterlockedExchange((volatile __int32 *)this - 74, 1);
LABEL_25:
    v24 = *((_QWORD *)this - 43);
    goto LABEL_26;
  }
  if ( (unsigned int)v8 + v14 > *(_DWORD *)(v21 + 168) )
  {
    *((_DWORD *)this + 4) = 1;
    goto LABEL_25;
  }
  *((_DWORD *)this + 4) = 0;
  v24 = *((_QWORD *)this - 48) + (unsigned int)v8;
LABEL_26:
  if ( (byte_140090581 & 4) != 0 )
    McTemplateU0pqxxx_EventWriteTransfer(v8, a2, (__int64)v4, 10, v3, 0, 0);
  return v24;
}
