/*
 * XREFs of NtDCompositionBeginFrame @ 0x1C0067D60
 * Callers:
 *     <none>
 * Callees:
 *     ?BeginFrame@CConnection@DirectComposition@@QEAAJAEBUCOMPOSITION_FRAME_INFO@@PEA_K@Z @ 0x1C0067FA0 (-BeginFrame@CConnection@DirectComposition@@QEAAJAEBUCOMPOSITION_FRAME_INFO@@PEA_K@Z.c)
 *     ??_GCConnection@DirectComposition@@AEAAPEAXI@Z @ 0x1C0081314 (--_GCConnection@DirectComposition@@AEAAPEAXI@Z.c)
 *     __security_check_cookie @ 0x1C00CBC40 (__security_check_cookie.c)
 *     McTemplateK0pq_EtwWriteTransfer @ 0x1C0128C00 (McTemplateK0pq_EtwWriteTransfer.c)
 *     ?RemoveCompositionFrame@CConnection@DirectComposition@@QEAAJ_K@Z @ 0x1C01CC328 (-RemoveCompositionFrame@CConnection@DirectComposition@@QEAAJ_K@Z.c)
 */

__int64 __fastcall NtDCompositionBeginFrame(__int64 a1, __int128 *a2, unsigned __int64 *a3)
{
  DirectComposition::CConnection *v5; // rdi
  unsigned int v6; // edx
  __int64 v7; // rcx
  __int64 v8; // rsi
  __int64 CurrentProcessWin32Process; // rax
  __int64 v10; // rcx
  __int64 v11; // r8
  struct _ERESOURCE *v12; // rbx
  volatile signed __int32 *v13; // rax
  int v14; // ebx
  int v16; // [rsp+30h] [rbp-A8h]
  unsigned __int64 v17; // [rsp+38h] [rbp-A0h] BYREF
  DirectComposition::CConnection *v18; // [rsp+40h] [rbp-98h]
  __int64 v19; // [rsp+48h] [rbp-90h]
  unsigned __int64 *v20; // [rsp+50h] [rbp-88h]
  __int128 v21; // [rsp+58h] [rbp-80h]
  __int128 v22; // [rsp+68h] [rbp-70h]
  __int128 v23; // [rsp+78h] [rbp-60h]
  __int128 v24; // [rsp+88h] [rbp-50h] BYREF
  __int128 v25; // [rsp+98h] [rbp-40h]
  __int128 v26; // [rsp+A8h] [rbp-30h]

  v19 = a1;
  v20 = a3;
  v5 = 0LL;
  v18 = 0LL;
  v24 = 0LL;
  v25 = 0LL;
  v26 = 0LL;
  v17 = 0LL;
  if ( a2 )
  {
    if ( a2 + 3 < a2 || (unsigned __int64)(a2 + 3) > MmUserProbeAddress )
      a2 = (__int128 *)MmUserProbeAddress;
    v21 = *a2;
    v22 = a2[1];
    v23 = a2[2];
    v24 = v21;
    v25 = v22;
    v26 = v23;
    v16 = 0;
  }
  else
  {
    v16 = -1073741811;
  }
  KeEnterCriticalRegion();
  if ( v16 >= 0 )
  {
    v8 = 0LL;
    CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(v7);
    if ( CurrentProcessWin32Process )
      v8 = *(_QWORD *)(CurrentProcessWin32Process + 256);
    if ( v8 )
    {
      v12 = *(struct _ERESOURCE **)(v8 + 32);
      KeEnterCriticalRegion();
      ExAcquireResourceSharedLite(v12, 1u);
      v13 = *(volatile signed __int32 **)(v8 + 24);
      if ( v13 && a1 == *(_QWORD *)(v8 + 16) )
      {
        _InterlockedIncrement(v13);
        v5 = *(DirectComposition::CConnection **)(v8 + 24);
        v18 = v5;
        v14 = 0;
      }
      else
      {
        v14 = -1073741790;
      }
      ExReleaseResourceLite(*(PERESOURCE *)(v8 + 32));
      KeLeaveCriticalRegion();
    }
    else
    {
      v14 = -1073741823;
    }
    v16 = v14;
    if ( v14 >= 0 )
    {
      if ( (Microsoft_Windows_Win32kEnableBits & 1) != 0 )
        McTemplateK0pq_EtwWriteTransfer(v10, &DCompBeginFrameEvent, v11, a1, v25);
      v16 = DirectComposition::CConnection::BeginFrame(v5, (const struct COMPOSITION_FRAME_INFO *)&v24, &v17);
    }
  }
  if ( a3 )
  {
    if ( a3 + 1 < a3 || (unsigned __int64)(a3 + 1) > MmUserProbeAddress )
      *(_BYTE *)MmUserProbeAddress = 0;
    *a3 = v17;
  }
  else
  {
    v16 = -1073741811;
  }
  if ( v16 < 0 )
  {
    v6 = v17;
    if ( v17 )
      DirectComposition::CConnection::RemoveCompositionFrame(v5, v17);
  }
  if ( v5 && _InterlockedExchangeAdd((volatile signed __int32 *)v5, 0xFFFFFFFF) == 1 )
    DirectComposition::CConnection::`scalar deleting destructor'(v18, v6);
  KeLeaveCriticalRegion();
  return (unsigned int)v16;
}
