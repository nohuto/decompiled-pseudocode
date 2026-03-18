/*
 * XREFs of NtDCompositionGetConnectionBatch @ 0x1C001FB40
 * Callers:
 *     <none>
 * Callees:
 *     ??_GCConnection@DirectComposition@@AEAAPEAXI@Z @ 0x1C001C6FC (--_GCConnection@DirectComposition@@AEAAPEAXI@Z.c)
 *     ?GetBatchesFromFrame@CConnection@DirectComposition@@QEAAJ_KPEAPEBUUCE_RDP_HEADER@@@Z @ 0x1C001FCE8 (-GetBatchesFromFrame@CConnection@DirectComposition@@QEAAJ_KPEAPEBUUCE_RDP_HEADER@@@Z.c)
 *     ?GetBatches@CConnection@DirectComposition@@QEAAJPEAPEBUUCE_RDP_HEADER@@@Z @ 0x1C01CFD14 (-GetBatches@CConnection@DirectComposition@@QEAAJPEAPEBUUCE_RDP_HEADER@@@Z.c)
 */

__int64 __fastcall NtDCompositionGetConnectionBatch(__int64 a1, unsigned __int64 *a2, struct UCE_RDP_HEADER **a3)
{
  _QWORD *v5; // rdx
  DirectComposition::CConnection *v6; // rdi
  __int64 v7; // rsi
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // r8
  __int64 v11; // r9
  __int64 CurrentProcessWin32Process; // rax
  struct _ERESOURCE *v13; // rbx
  volatile signed __int32 *v14; // rax
  int v15; // ebx
  int BatchesFromFrame; // eax
  int v18; // [rsp+20h] [rbp-38h]
  unsigned __int64 v19; // [rsp+28h] [rbp-30h]
  struct UCE_RDP_HEADER *v20; // [rsp+68h] [rbp+10h] BYREF
  struct UCE_RDP_HEADER **v21; // [rsp+70h] [rbp+18h]
  DirectComposition::CConnection *v22; // [rsp+78h] [rbp+20h]

  v21 = a3;
  v19 = 0LL;
  v20 = 0LL;
  if ( a2 && a3 )
  {
    if ( a2 + 1 < a2 || (unsigned __int64)(a2 + 1) > MmUserProbeAddress )
      a2 = (unsigned __int64 *)MmUserProbeAddress;
    v19 = *a2;
    v5 = a3;
    if ( (unsigned __int64)a3 >= MmUserProbeAddress )
      v5 = (_QWORD *)MmUserProbeAddress;
    *v5 = *v5;
    v18 = 0;
  }
  else
  {
    v18 = -1073741811;
  }
  if ( v18 >= 0 )
  {
    v6 = 0LL;
    v22 = 0LL;
    KeEnterCriticalRegion();
    v7 = 0LL;
    CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(v9, v8, v10, v11);
    if ( CurrentProcessWin32Process )
      v7 = *(_QWORD *)(CurrentProcessWin32Process + 256);
    if ( v7 )
    {
      v13 = *(struct _ERESOURCE **)(v7 + 32);
      KeEnterCriticalRegion();
      ExAcquireResourceSharedLite(v13, 1u);
      v14 = *(volatile signed __int32 **)(v7 + 24);
      if ( v14 && a1 == *(_QWORD *)(v7 + 16) )
      {
        _InterlockedIncrement(v14);
        v6 = *(DirectComposition::CConnection **)(v7 + 24);
        v22 = v6;
        v15 = 0;
      }
      else
      {
        v15 = -1073741790;
      }
      ExReleaseResourceLite(*(PERESOURCE *)(v7 + 32));
      KeLeaveCriticalRegion();
    }
    else
    {
      v15 = -1073741823;
    }
    v18 = v15;
    if ( v15 >= 0 )
    {
      if ( v19 )
        BatchesFromFrame = DirectComposition::CConnection::GetBatchesFromFrame(v6, v19, &v20);
      else
        BatchesFromFrame = DirectComposition::CConnection::GetBatches(v6, &v20);
      v18 = BatchesFromFrame;
      if ( BatchesFromFrame >= 0 )
        *a3 = v20;
      if ( _InterlockedExchangeAdd((volatile signed __int32 *)v6, 0xFFFFFFFF) == 1 && v22 )
        DirectComposition::CConnection::`scalar deleting destructor'(v22);
    }
    KeLeaveCriticalRegion();
  }
  return (unsigned int)v18;
}
