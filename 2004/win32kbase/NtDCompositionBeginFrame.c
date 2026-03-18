/*
 * XREFs of NtDCompositionBeginFrame @ 0x1C00A8F70
 * Callers:
 *     <none>
 * Callees:
 *     ??_GCConnection@DirectComposition@@AEAAPEAXI@Z @ 0x1C001C6FC (--_GCConnection@DirectComposition@@AEAAPEAXI@Z.c)
 *     ?BeginFrame@CConnection@DirectComposition@@QEAAJAEBUCOMPOSITION_FRAME_INFO@@PEA_K@Z @ 0x1C00A91B0 (-BeginFrame@CConnection@DirectComposition@@QEAAJAEBUCOMPOSITION_FRAME_INFO@@PEA_K@Z.c)
 *     __security_check_cookie @ 0x1C00CCA30 (__security_check_cookie.c)
 *     McTemplateK0pq_EtwWriteTransfer @ 0x1C012AF50 (McTemplateK0pq_EtwWriteTransfer.c)
 *     ?RemoveCompositionFrame@CConnection@DirectComposition@@QEAAJ_K@Z @ 0x1C01CE6A8 (-RemoveCompositionFrame@CConnection@DirectComposition@@QEAAJ_K@Z.c)
 */

__int64 __fastcall NtDCompositionBeginFrame(__int64 a1, __int128 *a2, unsigned __int64 *a3)
{
  DirectComposition::CConnection *v5; // rdi
  __int64 v6; // rcx
  __int64 v7; // rsi
  __int64 CurrentProcessWin32Process; // rax
  __int64 v9; // rcx
  __int64 v10; // r8
  struct _ERESOURCE *v11; // rbx
  volatile signed __int32 *v12; // rax
  int v13; // ebx
  int v15; // [rsp+30h] [rbp-A8h]
  unsigned __int64 v16; // [rsp+38h] [rbp-A0h] BYREF
  DirectComposition::CConnection *v17; // [rsp+40h] [rbp-98h]
  __int64 v18; // [rsp+48h] [rbp-90h]
  unsigned __int64 *v19; // [rsp+50h] [rbp-88h]
  __int128 v20; // [rsp+58h] [rbp-80h]
  __int128 v21; // [rsp+68h] [rbp-70h]
  __int128 v22; // [rsp+78h] [rbp-60h]
  __int128 v23; // [rsp+88h] [rbp-50h] BYREF
  __int128 v24; // [rsp+98h] [rbp-40h]
  __int128 v25; // [rsp+A8h] [rbp-30h]

  v18 = a1;
  v19 = a3;
  v5 = 0LL;
  v17 = 0LL;
  v23 = 0LL;
  v24 = 0LL;
  v25 = 0LL;
  v16 = 0LL;
  if ( a2 )
  {
    if ( a2 + 3 < a2 || (unsigned __int64)(a2 + 3) > MmUserProbeAddress )
      a2 = (__int128 *)MmUserProbeAddress;
    v20 = *a2;
    v21 = a2[1];
    v22 = a2[2];
    v23 = v20;
    v24 = v21;
    v25 = v22;
    v15 = 0;
  }
  else
  {
    v15 = -1073741811;
  }
  KeEnterCriticalRegion();
  if ( v15 >= 0 )
  {
    v7 = 0LL;
    CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(v6);
    if ( CurrentProcessWin32Process )
      v7 = *(_QWORD *)(CurrentProcessWin32Process + 256);
    if ( v7 )
    {
      v11 = *(struct _ERESOURCE **)(v7 + 32);
      KeEnterCriticalRegion();
      ExAcquireResourceSharedLite(v11, 1u);
      v12 = *(volatile signed __int32 **)(v7 + 24);
      if ( v12 && a1 == *(_QWORD *)(v7 + 16) )
      {
        _InterlockedIncrement(v12);
        v5 = *(DirectComposition::CConnection **)(v7 + 24);
        v17 = v5;
        v13 = 0;
      }
      else
      {
        v13 = -1073741790;
      }
      ExReleaseResourceLite(*(PERESOURCE *)(v7 + 32));
      KeLeaveCriticalRegion();
    }
    else
    {
      v13 = -1073741823;
    }
    v15 = v13;
    if ( v13 >= 0 )
    {
      if ( (Microsoft_Windows_Win32kEnableBits & 1) != 0 )
        McTemplateK0pq_EtwWriteTransfer(v9, &DCompBeginFrameEvent, v10, a1, v24);
      v15 = DirectComposition::CConnection::BeginFrame(v5, (const struct COMPOSITION_FRAME_INFO *)&v23, &v16);
    }
  }
  if ( a3 )
  {
    if ( a3 + 1 < a3 || (unsigned __int64)(a3 + 1) > MmUserProbeAddress )
      *(_BYTE *)MmUserProbeAddress = 0;
    *a3 = v16;
  }
  else
  {
    v15 = -1073741811;
  }
  if ( v15 < 0 && v16 )
    DirectComposition::CConnection::RemoveCompositionFrame(v5, v16);
  if ( v5 && _InterlockedExchangeAdd((volatile signed __int32 *)v5, 0xFFFFFFFF) == 1 )
    DirectComposition::CConnection::`scalar deleting destructor'(v17);
  KeLeaveCriticalRegion();
  return (unsigned int)v15;
}
