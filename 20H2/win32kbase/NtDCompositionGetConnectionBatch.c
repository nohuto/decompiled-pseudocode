/*
 * XREFs of NtDCompositionGetConnectionBatch @ 0x1C0083810
 * Callers:
 *     <none>
 * Callees:
 *     ??_GCConnection@DirectComposition@@AEAAPEAXI@Z @ 0x1C0081314 (--_GCConnection@DirectComposition@@AEAAPEAXI@Z.c)
 *     ?GetBatchesFromFrame@CConnection@DirectComposition@@QEAAJ_KPEAPEBUUCE_RDP_HEADER@@@Z @ 0x1C00839B8 (-GetBatchesFromFrame@CConnection@DirectComposition@@QEAAJ_KPEAPEBUUCE_RDP_HEADER@@@Z.c)
 *     ?GetBatches@CConnection@DirectComposition@@QEAAJPEAPEBUUCE_RDP_HEADER@@@Z @ 0x1C01CD994 (-GetBatches@CConnection@DirectComposition@@QEAAJPEAPEBUUCE_RDP_HEADER@@@Z.c)
 */

__int64 __fastcall NtDCompositionGetConnectionBatch(__int64 a1, unsigned __int64 *a2, struct UCE_RDP_HEADER **a3)
{
  _QWORD *v5; // rdx
  DirectComposition::CConnection *v6; // rdi
  __int64 v7; // rsi
  __int64 v8; // rcx
  __int64 CurrentProcessWin32Process; // rax
  struct _ERESOURCE *v10; // rbx
  volatile signed __int32 *v11; // rax
  int v12; // ebx
  int BatchesFromFrame; // eax
  int v15; // [rsp+20h] [rbp-38h]
  unsigned __int64 v16; // [rsp+28h] [rbp-30h]
  struct UCE_RDP_HEADER *v17; // [rsp+68h] [rbp+10h] BYREF
  struct UCE_RDP_HEADER **v18; // [rsp+70h] [rbp+18h]
  DirectComposition::CConnection *v19; // [rsp+78h] [rbp+20h]

  v18 = a3;
  v16 = 0LL;
  v17 = 0LL;
  if ( a2 && a3 )
  {
    if ( a2 + 1 < a2 || (unsigned __int64)(a2 + 1) > MmUserProbeAddress )
      a2 = (unsigned __int64 *)MmUserProbeAddress;
    v16 = *a2;
    v5 = a3;
    if ( (unsigned __int64)a3 >= MmUserProbeAddress )
      v5 = (_QWORD *)MmUserProbeAddress;
    *v5 = *v5;
    v15 = 0;
  }
  else
  {
    v15 = -1073741811;
  }
  if ( v15 >= 0 )
  {
    v6 = 0LL;
    v19 = 0LL;
    KeEnterCriticalRegion();
    v7 = 0LL;
    CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(v8);
    if ( CurrentProcessWin32Process )
      v7 = *(_QWORD *)(CurrentProcessWin32Process + 256);
    if ( v7 )
    {
      v10 = *(struct _ERESOURCE **)(v7 + 32);
      KeEnterCriticalRegion();
      ExAcquireResourceSharedLite(v10, 1u);
      v11 = *(volatile signed __int32 **)(v7 + 24);
      if ( v11 && a1 == *(_QWORD *)(v7 + 16) )
      {
        _InterlockedIncrement(v11);
        v6 = *(DirectComposition::CConnection **)(v7 + 24);
        v19 = v6;
        v12 = 0;
      }
      else
      {
        v12 = -1073741790;
      }
      ExReleaseResourceLite(*(PERESOURCE *)(v7 + 32));
      KeLeaveCriticalRegion();
    }
    else
    {
      v12 = -1073741823;
    }
    v15 = v12;
    if ( v12 >= 0 )
    {
      if ( v16 )
        BatchesFromFrame = DirectComposition::CConnection::GetBatchesFromFrame(v6, v16, &v17);
      else
        BatchesFromFrame = DirectComposition::CConnection::GetBatches(v6, &v17);
      v15 = BatchesFromFrame;
      if ( BatchesFromFrame >= 0 )
        *a3 = v17;
      if ( _InterlockedExchangeAdd((volatile signed __int32 *)v6, 0xFFFFFFFF) == 1 && v19 )
        DirectComposition::CConnection::`scalar deleting destructor'(v19);
    }
    KeLeaveCriticalRegion();
  }
  return (unsigned int)v15;
}
