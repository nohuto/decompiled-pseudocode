/*
 * XREFs of NtDCompositionConfirmFrame @ 0x1C001CEA0
 * Callers:
 *     <none>
 * Callees:
 *     ??1CConnection@DirectComposition@@AEAA@XZ @ 0x1C001C724 (--1CConnection@DirectComposition@@AEAA@XZ.c)
 *     ?ReturnProcessedBatch@CApplicationChannel@DirectComposition@@QEAAXPEAVCBatch@2@@Z @ 0x1C001D200 (-ReturnProcessedBatch@CApplicationChannel@DirectComposition@@QEAAXPEAVCBatch@2@@Z.c)
 *     ?NotifyBatchProcessed@CApplicationChannel@DirectComposition@@QEAAXPEAVCBatch@2@@Z @ 0x1C001D370 (-NotifyBatchProcessed@CApplicationChannel@DirectComposition@@QEAAXPEAVCBatch@2@@Z.c)
 *     ?ReleaseShellResourceAccess@CConnection@DirectComposition@@QEAAXI@Z @ 0x1C001D7F0 (-ReleaseShellResourceAccess@CConnection@DirectComposition@@QEAAXI@Z.c)
 *     Win32FreePool @ 0x1C0096F60 (Win32FreePool.c)
 *     ?UnmapUserModeView@CBatchSharedMemoryPool@DirectComposition@@QEAAXXZ @ 0x1C009CB74 (-UnmapUserModeView@CBatchSharedMemoryPool@DirectComposition@@QEAAXXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C00D3820 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall NtDCompositionConfirmFrame(__int64 a1, __int64 *a2)
{
  DirectComposition::CConnection *v3; // rdi
  int v4; // ebx
  __int64 v5; // rsi
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // r8
  __int64 v9; // r9
  __int64 CurrentProcessWin32Process; // rax
  struct _ERESOURCE *v11; // rbx
  volatile signed __int32 *v12; // rax
  __int64 v13; // rdx
  int v14; // eax
  __int64 v15; // rcx
  PERESOURCE *v16; // r14
  struct _ERESOURCE *v17; // rbx
  __int64 *v18; // rbx
  struct _ERESOURCE *v19; // rbx
  unsigned __int64 v20; // rbx
  unsigned __int64 v21; // rcx
  unsigned __int64 v22; // rdx
  _QWORD *v23; // rax
  __int64 v24; // rcx
  _QWORD *i; // rbx
  __int64 v26; // rdx
  __int64 *v28; // rsi
  unsigned int v29; // edx
  __int64 v30; // rcx
  int v31; // [rsp+20h] [rbp-38h]
  __int64 v32; // [rsp+28h] [rbp-30h]
  DirectComposition::CConnection *v33; // [rsp+70h] [rbp+18h]
  __int64 v34; // [rsp+78h] [rbp+20h] BYREF

  v3 = 0LL;
  v33 = 0LL;
  if ( a2 )
  {
    if ( a2 + 1 < a2 || (unsigned __int64)(a2 + 1) > MmUserProbeAddress )
      a2 = (__int64 *)MmUserProbeAddress;
    v32 = *a2;
    if ( *a2 )
      v4 = 0;
    else
      v4 = -1073741811;
    if ( v4 >= 0 )
    {
      KeEnterCriticalRegion();
      v5 = 0LL;
      CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(v7, v6, v8, v9);
      if ( CurrentProcessWin32Process )
        v5 = *(_QWORD *)(CurrentProcessWin32Process + 256);
      if ( v5 )
      {
        v11 = *(struct _ERESOURCE **)(v5 + 32);
        KeEnterCriticalRegion();
        ExAcquireResourceSharedLite(v11, 1u);
        v12 = *(volatile signed __int32 **)(v5 + 24);
        if ( v12 && a1 == *(_QWORD *)(v5 + 16) )
        {
          _InterlockedIncrement(v12);
          v3 = *(DirectComposition::CConnection **)(v5 + 24);
          v33 = v3;
          v4 = 0;
        }
        else
        {
          v4 = -1073741790;
        }
        ExReleaseResourceLite(*(PERESOURCE *)(v5 + 32));
        KeLeaveCriticalRegion();
      }
      else
      {
        v4 = -1073741823;
      }
      if ( v4 >= 0 )
      {
        v13 = 0LL;
        v34 = 0LL;
        v14 = -1073741275;
        v15 = *((_QWORD *)v3 + 23);
        if ( v15 )
        {
          v14 = (*(__int64 (__fastcall **)(__int64, __int64, __int64 *))(*(_QWORD *)v15 + 32LL))(v15, v32, &v34);
          v13 = v34;
        }
        v31 = v14;
        if ( v14 >= 0 )
        {
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v13 + 16LL))(v13);
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v34 + 8LL))(v34);
          v16 = (PERESOURCE *)((char *)v3 + 8);
          v17 = (struct _ERESOURCE *)*((_QWORD *)v3 + 1);
          KeEnterCriticalRegion();
          ExAcquireResourceSharedLite(v17, 1u);
          v18 = (__int64 *)*((_QWORD *)v3 + 15);
          *((_QWORD *)v3 + 15) = 0LL;
          *((_QWORD *)v3 + 16) = 0LL;
          if ( v18 )
          {
            do
            {
              v28 = (__int64 *)*v18;
              *((_BYTE *)v18 + 32) &= ~2u;
              v29 = *((_DWORD *)v18 + 28);
              if ( v29 )
              {
                DirectComposition::CConnection::ReleaseShellResourceAccess(
                  *(DirectComposition::CConnection **)(v18[1] + 40),
                  v29);
                *((_DWORD *)v18 + 28) = 0;
              }
              if ( (v18[4] & 4) == 0 )
                DirectComposition::CApplicationChannel::NotifyBatchProcessed(
                  (DirectComposition::CApplicationChannel *)v18[1],
                  (struct DirectComposition::CBatch *)v18);
              DirectComposition::CApplicationChannel::ReturnProcessedBatch(
                (DirectComposition::CApplicationChannel *)v18[1],
                (struct DirectComposition::CBatch *)v18);
              v18 = v28;
            }
            while ( v28 );
          }
          v19 = (struct _ERESOURCE *)*((_QWORD *)v3 + 9);
          KeEnterCriticalRegion();
          ExAcquireResourceExclusiveLite(v19, 1u);
          v20 = 0LL;
          while ( 1 )
          {
            v21 = *((_QWORD *)v3 + 5);
            v22 = v20;
            if ( v20 < v21 )
            {
              v23 = (_QWORD *)(*((_QWORD *)v3 + 2) + v20 * *((_QWORD *)v3 + 6));
              do
              {
                if ( *v23 )
                  break;
                ++v22;
                v23 = (_QWORD *)((char *)v23 + *((_QWORD *)v3 + 6));
              }
              while ( v22 < v21 );
            }
            if ( v22 >= v21 )
              break;
            _mm_lfence();
            v20 = v22 + 1;
            v24 = *(_QWORD *)(v22 * *((_QWORD *)v3 + 6) + *((_QWORD *)v3 + 2));
            if ( !v24 )
              break;
            (*(void (__fastcall **)(__int64))(*(_QWORD *)v24 + 16LL))(v24);
          }
          ExReleaseResourceLite(*((PERESOURCE *)v3 + 9));
          KeLeaveCriticalRegion();
          v3 = v33;
          for ( i = (_QWORD *)*((_QWORD *)v33 + 24); i != (_QWORD *)((char *)v33 + 192); i = (_QWORD *)*i )
          {
            v26 = i[6];
            if ( v26 )
            {
              v30 = *(_QWORD *)(i[2] + 16LL);
              if ( v30 )
                MmUnmapViewOfSection(v30, v26);
              i[6] = 0LL;
            }
            i[4] = 0LL;
            i[5] = 0LL;
          }
          ExReleaseResourceLite(*v16);
          KeLeaveCriticalRegion();
        }
        if ( _InterlockedExchangeAdd((volatile signed __int32 *)v3, 0xFFFFFFFF) == 1 )
        {
          DirectComposition::CConnection::~CConnection(v33);
          Win32FreePool(v33);
        }
        v4 = v31;
      }
      KeLeaveCriticalRegion();
    }
  }
  else
  {
    return (unsigned int)-1073741811;
  }
  return (unsigned int)v4;
}
