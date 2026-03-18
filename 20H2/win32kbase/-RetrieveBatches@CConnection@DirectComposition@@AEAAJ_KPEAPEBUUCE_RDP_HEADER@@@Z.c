/*
 * XREFs of ?RetrieveBatches@CConnection@DirectComposition@@AEAAJ_KPEAPEBUUCE_RDP_HEADER@@@Z @ 0x1C0083AD8
 * Callers:
 *     ?GetBatchesFromFrame@CConnection@DirectComposition@@QEAAJ_KPEAPEBUUCE_RDP_HEADER@@@Z @ 0x1C00839B8 (-GetBatchesFromFrame@CConnection@DirectComposition@@QEAAJ_KPEAPEBUUCE_RDP_HEADER@@@Z.c)
 *     ?GetBatches@CConnection@DirectComposition@@QEAAJPEAPEBUUCE_RDP_HEADER@@@Z @ 0x1C01CD994 (-GetBatches@CConnection@DirectComposition@@QEAAJPEAPEBUUCE_RDP_HEADER@@@Z.c)
 * Callees:
 *     ?StaticAllocate@CBatchSharedMemoryPoolSet@DirectComposition@@QEAAJ_KPEAPEAVCBatchSharedMemoryPool@2@PEA_K@Z @ 0x1C007CD78 (-StaticAllocate@CBatchSharedMemoryPoolSet@DirectComposition@@QEAAJ_KPEAPEAVCBatchSharedMemoryPoo.c)
 *     ?GetChannelRDPHeaders@CApplicationChannel@DirectComposition@@QEAAJPEAPEAUUCE_RDP_HEADER@@0@Z @ 0x1C00837A4 (-GetChannelRDPHeaders@CApplicationChannel@DirectComposition@@QEAAJPEAPEAUUCE_RDP_HEADER@@0@Z.c)
 *     ?GetUserModeViewAtOffset@CBatchSharedMemoryPool@DirectComposition@@QEAAJ_KPEAPEAX@Z @ 0x1C0083F08 (-GetUserModeViewAtOffset@CBatchSharedMemoryPool@DirectComposition@@QEAAJ_KPEAPEAX@Z.c)
 *     EtwTraceDCompGetBatchEvent @ 0x1C0083FD0 (EtwTraceDCompGetBatchEvent.c)
 *     _guard_dispatch_icall_nop @ 0x1C00D36F0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall DirectComposition::CConnection::RetrieveBatches(
        DirectComposition::CConnection *this,
        __int64 a2,
        const struct UCE_RDP_HEADER **a3)
{
  int UserModeViewAtOffset; // esi
  struct UCE_RDP_HEADER *v4; // r15
  struct UCE_RDP_HEADER *v5; // rdi
  bool v7; // r14
  __int64 v8; // rdx
  char v10; // r15
  char v11; // r12
  DirectComposition::CBatchSharedMemoryPool *v12; // rcx
  __int64 v13; // r14
  __int64 v14; // r13
  __int64 v15; // r12
  __int64 v16; // rax
  DirectComposition::CBatchSharedMemoryPool *v17; // rcx
  unsigned __int64 v18; // rdx
  int v19; // ecx
  __int64 v20; // rdx
  __int64 v21; // r13
  __int64 v22; // rax
  __int64 v23; // r14
  struct _ERESOURCE *v24; // r15
  _QWORD *v25; // rcx
  _QWORD *v26; // rax
  int ChannelRDPHeaders; // eax
  __int64 v29; // rcx
  bool v30; // [rsp+20h] [rbp-50h]
  struct UCE_RDP_HEADER *v31; // [rsp+28h] [rbp-48h] BYREF
  struct UCE_RDP_HEADER *v32; // [rsp+30h] [rbp-40h] BYREF
  struct UCE_RDP_HEADER *v33; // [rsp+38h] [rbp-38h]
  void *v34; // [rsp+40h] [rbp-30h] BYREF
  void *v35; // [rsp+48h] [rbp-28h] BYREF
  DirectComposition::CBatchSharedMemoryPool *v36; // [rsp+50h] [rbp-20h] BYREF
  unsigned __int64 v37; // [rsp+58h] [rbp-18h] BYREF
  struct UCE_RDP_HEADER *v38; // [rsp+60h] [rbp-10h]
  char v41; // [rsp+C8h] [rbp+58h]

  UserModeViewAtOffset = 0;
  v4 = 0LL;
  v38 = 0LL;
  v5 = 0LL;
  v32 = 0LL;
  v33 = 0LL;
  v31 = 0LL;
  v7 = 0;
  if ( !a2 )
  {
    v29 = *((_QWORD *)this + 14);
    if ( v29 )
    {
      if ( (*(unsigned int (__fastcall **)(_QWORD))(**(_QWORD **)(v29 + 8) + 8LL))(*(_QWORD *)(v29 + 8)) != 3 )
        v7 = 1;
    }
  }
  v30 = v7;
  while ( 1 )
  {
    v8 = *((_QWORD *)this + 14);
    if ( !v8 || v7 )
      break;
    v10 = 0;
    v41 = 0;
    if ( *((_DWORD *)this + 37) == 1 )
    {
      v36 = 0LL;
      v37 = 0LL;
      v11 = 1;
      DirectComposition::CBatchSharedMemoryPoolSet::StaticAllocate(
        (DirectComposition::CConnection *)((char *)this + 192),
        v8,
        &v36,
        &v37);
      v5 = (struct UCE_RDP_HEADER *)(v37 + *((_QWORD *)v36 + 7));
      v31 = v5;
      UserModeViewAtOffset = DirectComposition::CBatchSharedMemoryPool::GetUserModeViewAtOffset(v36, v37, (void **)&v32);
      if ( UserModeViewAtOffset < 0 )
        return (unsigned int)UserModeViewAtOffset;
      *((_QWORD *)v5 + 1) = 0LL;
      *((_DWORD *)v5 + 1) = 40;
      *(_DWORD *)v5 = 5;
      *((_DWORD *)v5 + 4) = *(_DWORD *)(*(_QWORD *)(*((_QWORD *)this + 14) + 8LL) + 28LL);
      *((_DWORD *)v5 + 5) = *(_DWORD *)(*(_QWORD *)(*((_QWORD *)this + 14) + 8LL) + 696LL);
      *((_QWORD *)v5 + 3) = *(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 14) + 8LL) + 688LL);
      *(_BYTE *)(*((_QWORD *)this + 14) + 32LL) &= ~1u;
      *((_DWORD *)this + 37) = 2;
    }
    else if ( *((_DWORD *)this + 37) == 2 )
    {
      if ( (*(_BYTE *)(v8 + 32) & 1) != 0 )
      {
        if ( *(_DWORD *)(v8 + 20) == 6 )
        {
          v10 = 1;
        }
        else
        {
          v41 = 1;
          ChannelRDPHeaders = DirectComposition::CApplicationChannel::GetChannelRDPHeaders(
                                *(DirectComposition::CApplicationChannel **)(v8 + 8),
                                &v31,
                                &v32);
          v5 = v31;
          UserModeViewAtOffset = ChannelRDPHeaders;
          if ( ChannelRDPHeaders >= 0 )
          {
            *((_QWORD *)v31 + 1) = 0LL;
            *((_DWORD *)v5 + 1) = 40;
            *(_DWORD *)v5 = 5;
            *((_DWORD *)v5 + 4) = *(_DWORD *)(*(_QWORD *)(*((_QWORD *)this + 14) + 8LL) + 28LL);
            *((_DWORD *)v5 + 5) = *(_DWORD *)(*(_QWORD *)(*((_QWORD *)this + 14) + 8LL) + 696LL);
            *((_QWORD *)v5 + 3) = *(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 14) + 8LL) + 688LL);
          }
        }
        v11 = v41;
        *(_BYTE *)(*((_QWORD *)this + 14) + 32LL) &= ~1u;
      }
      else
      {
        v11 = 1;
        v10 = 1;
        if ( *(_DWORD *)(v8 + 20) == 6 )
        {
          UserModeViewAtOffset = DirectComposition::CApplicationChannel::GetChannelRDPHeaders(
                                   *(DirectComposition::CApplicationChannel **)(v8 + 8),
                                   &v31,
                                   &v32);
          if ( UserModeViewAtOffset < 0 )
            return (unsigned int)UserModeViewAtOffset;
          v5 = v31;
          *((_QWORD *)v31 + 1) = 0LL;
          *((_DWORD *)v5 + 1) = 40;
          *(_DWORD *)v5 = 6;
          *((_DWORD *)v5 + 4) = *(_DWORD *)(*(_QWORD *)(*((_QWORD *)this + 14) + 8LL) + 28LL);
        }
        else
        {
          v12 = *(DirectComposition::CBatchSharedMemoryPool **)(v8 + 136);
          v13 = *(_QWORD *)(v8 + 144);
          v14 = *(_QWORD *)(v8 + 152);
          v35 = 0LL;
          v15 = *((_QWORD *)v12 + 7);
          UserModeViewAtOffset = DirectComposition::CBatchSharedMemoryPool::GetUserModeViewAtOffset(v12, v13 + 40, &v35);
          if ( UserModeViewAtOffset < 0 )
            return (unsigned int)UserModeViewAtOffset;
          v16 = *((_QWORD *)this + 14);
          v34 = 0LL;
          v17 = *(DirectComposition::CBatchSharedMemoryPool **)(v16 + 136);
          v18 = *(_QWORD *)(v16 + 144);
          v31 = (struct UCE_RDP_HEADER *)(v18 + *((_QWORD *)v17 + 7));
          v5 = v31;
          DirectComposition::CBatchSharedMemoryPool::GetUserModeViewAtOffset(v17, v18, &v34);
          v32 = (struct UCE_RDP_HEADER *)v34;
          v19 = *(_DWORD *)(*((_QWORD *)this + 14) + 20LL);
          *((_QWORD *)v5 + 1) = 0LL;
          *(_DWORD *)v5 = v19;
          *((_DWORD *)v5 + 1) = 40;
          v20 = *((_QWORD *)this + 14);
          if ( *(_DWORD *)(v20 + 20) == 7 )
          {
            *(_QWORD *)(v20 + 72) = *((_QWORD *)this + 21);
            *((_DWORD *)v5 + 4) = *(_DWORD *)(*(_QWORD *)(*((_QWORD *)this + 14) + 8LL) + 28LL);
            *((_QWORD *)v5 + 3) = v35;
            *((_DWORD *)v5 + 8) = v14;
            EtwTraceDCompGetBatchEvent(*((_QWORD *)this + 14));
          }
          else if ( *(_DWORD *)(v20 + 20) == 8 )
          {
            *((_DWORD *)v5 + 4) = *(_DWORD *)(*(_QWORD *)(v20 + 8) + 28LL);
            *((_QWORD *)v5 + 3) = *(_QWORD *)(v15 + v13 + 40);
          }
          v7 = v30;
          v11 = 1;
        }
      }
    }
    else
    {
      v11 = 0;
    }
    if ( UserModeViewAtOffset < 0 )
      return (unsigned int)UserModeViewAtOffset;
    if ( v10 )
    {
      v21 = **((_QWORD **)this + 14);
      if ( !a2 && v21 )
      {
        if ( (*(unsigned int (__fastcall **)(_QWORD))(**(_QWORD **)(v21 + 8) + 8LL))(*(_QWORD *)(v21 + 8)) != 3 )
          v7 = 1;
        v30 = v7;
      }
      v22 = *((_QWORD *)this + 14);
      *(_BYTE *)(v22 + 32) |= 4u;
      v23 = *(_QWORD *)(v22 + 8);
      if ( *(_DWORD *)(v22 + 20) != 6 )
      {
        v24 = *(struct _ERESOURCE **)(v23 + 368);
        if ( v24 )
        {
          KeEnterCriticalRegion();
          ExAcquireResourceExclusiveLite(v24, 1u);
          if ( (*(_DWORD *)(v23 + 224))-- == 1 )
            KeSetEvent(*(PRKEVENT *)(*(_QWORD *)(v23 + 360) + 8LL), 1, 0);
          ExReleaseResourceLite(*(PERESOURCE *)(v23 + 368));
          KeLeaveCriticalRegion();
        }
      }
      v25 = (_QWORD *)*((_QWORD *)this + 16);
      v26 = (_QWORD *)*((_QWORD *)this + 14);
      if ( v25 )
      {
        *v25 = v26;
        v26 = (_QWORD *)*((_QWORD *)this + 14);
      }
      else
      {
        *((_QWORD *)this + 15) = v26;
      }
      *((_QWORD *)this + 16) = v26;
      *v26 = 0LL;
      *((_QWORD *)this + 14) = v21;
    }
    v7 = v30;
    v4 = v33;
    if ( v11 )
    {
      if ( v38 )
      {
        *((_QWORD *)v38 + 1) = v32;
      }
      else
      {
        v4 = v32;
        v33 = v32;
      }
      v7 = v30;
      v38 = v5;
    }
  }
  *a3 = v4;
  *((_DWORD *)this + 36) = 0;
  return (unsigned int)UserModeViewAtOffset;
}
