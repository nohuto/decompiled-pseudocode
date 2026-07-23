/*
 * XREFs of _TppAllocAlpcCompletion@24 @ 0x4B2E9A8F
 * Callers:
 *     _TpAllocAlpcCompletion@20 @ 0x4B2AC130 (_TpAllocAlpcCompletion@20.c)
 *     _TpAllocAlpcCompletionEx@20 @ 0x4B2E9A70 (_TpAllocAlpcCompletionEx@20.c)
 * Callees:
 *     _TppCleanupGroupMemberDestroy@4 @ 0x4B2B250C (_TppCleanupGroupMemberDestroy@4.c)
 *     _TpAdjustBindingCount@8 @ 0x4B2B48DF (_TpAdjustBindingCount@8.c)
 *     _TppGetCurrentThreadNumaNode@12 @ 0x4B2B49C9 (_TppGetCurrentThreadNumaNode@12.c)
 *     _TppCleanupGroupMemberInitialize@20 @ 0x4B2B4A71 (_TppCleanupGroupMemberInitialize@20.c)
 *     _RtlFreeHeap@12 @ 0x4B2C3B70 (_RtlFreeHeap@12.c)
 *     _RtlAllocateHeap@12 @ 0x4B2C5D40 (_RtlAllocateHeap@12.c)
 *     _TppCleanupGroupAddMember@4 @ 0x4B2E7383 (_TppCleanupGroupAddMember@4.c)
 *     _TppAllocAlpcCompletion@24 @ 0x4B2E9A8F (_TppAllocAlpcCompletion@24.c)
 *     _NtAlpcSetInformation@16 @ 0x4B2F3250 (_NtAlpcSetInformation@16.c)
 *     __SEH_prolog4 @ 0x4B307AC4 (__SEH_prolog4.c)
 *     _TppRaiseInvalidParameter@0 @ 0x4B3848BD (_TppRaiseInvalidParameter@0.c)
 */

void __fastcall TppAllocAlpcCompletion(unsigned __int8 **a1, void *a2, int a3, int a4, _DWORD *a5, char a6)
{
  int v6; // eax
  unsigned __int8 *v7; // edi
  int v8; // esi
  HANDLE v9; // esi
  _RTL_SRWLOCK *v10; // ecx
  int v11; // ecx
  unsigned __int8 v12; // dl
  unsigned __int8 *v13; // ecx
  _RTL_SRWLOCK *v14; // ecx
  SIZE_T v15; // [esp-4h] [ebp-58h]
  _DWORD PortInformation[2]; // [esp+10h] [ebp-44h] BYREF
  unsigned __int8 **v17; // [esp+18h] [ebp-3Ch]
  int v18; // [esp+1Ch] [ebp-38h]
  int v19; // [esp+20h] [ebp-34h]
  unsigned __int8 *Heap; // [esp+24h] [ebp-30h]
  HANDLE PortHandle; // [esp+28h] [ebp-2Ch]
  _RTL_SRWLOCK *v22; // [esp+2Ch] [ebp-28h]
  int v23; // [esp+30h] [ebp-24h]
  PVOID BaseAddress; // [esp+34h] [ebp-20h]
  int v25; // [esp+38h] [ebp-1Ch]
  CPPEH_RECORD ms_exc; // [esp+3Ch] [ebp-18h]
  _UNKNOWN *retaddr; // [esp+58h] [ebp+4h]

  PortHandle = a2;
  v17 = a1;
  v25 = -1073741823;
  if ( a5 )
    v6 = a5[7];
  else
    v6 = 0;
  v23 = v6;
  if ( !a1 || !a3 || !a2 || (v6 & 0xFFFFFFFC) != 0 || NtCurrentPeb()->Ldr->ShutdownInProgress )
    TppRaiseInvalidParameter();
  *a1 = 0;
  LODWORD(v15) = 184;
  Heap = (unsigned __int8 *)RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, (TppHeapTag + 0x80000) | 8, v15);
  v7 = Heap;
  BaseAddress = Heap;
  ms_exc.registration.TryLevel = 0;
  v18 = 1;
  if ( !Heap )
  {
    v8 = -1073741801;
    v25 = -1073741801;
LABEL_22:
    ms_exc.registration.TryLevel = -2;
    v18 = 0;
    if ( v7 )
    {
      RtlFreeHeap(NtCurrentPeb()->ProcessHeap, TppHeapTag + 0x80000, v7);
      v7 = 0;
      v8 = v25;
    }
    if ( v8 >= 0 )
      *v17 = v7;
    return;
  }
  v7 = (unsigned __int8 *)BaseAddress;
  *((_DWORD *)BaseAddress + 39) = retaddr;
  v22 = (_RTL_SRWLOCK *)(v7 + 48);
  v8 = TppCleanupGroupMemberInitialize((int)(v7 + 48), a4, a5, v23, (int)TppAlpcpCleanupGroupMemberVFuncs);
  v25 = v8;
  if ( v8 < 0 )
    goto LABEL_22;
  ms_exc.registration.TryLevel = 1;
  v19 = 1;
  *((_DWORD *)v7 + 24) = a3;
  *((_DWORD *)v7 + 45) = *((_DWORD *)v7 + 45) & 0xFFFFFFFE | (a6 != 0);
  v9 = PortHandle;
  *((_DWORD *)v7 + 42) = PortHandle;
  v10 = (_RTL_SRWLOCK *)*((_DWORD *)v7 + 35);
  *((_DWORD *)v7 + 8) = TppAlpcpExecuteCallback;
  if ( v10 )
  {
    TppGetCurrentThreadNumaNode(v10, (_DWORD *)v7 + 9, v7 + 40);
    v11 = *((_DWORD *)Heap + 9);
    v12 = Heap[40];
  }
  else
  {
    *((_DWORD *)v7 + 9) = 0;
    v7[40] = 0;
    v11 = 0;
    v12 = 0;
  }
  *((_DWORD *)v7 + 5) = 0;
  *((_DWORD *)v7 + 7) = v7 + 24;
  *((_DWORD *)v7 + 6) = v7 + 24;
  *(_DWORD *)v7 = TppDirectTaskVFuncs;
  *((_DWORD *)v7 + 1) = v11;
  v7[8] = v12;
  v13 = (unsigned __int8 *)*((_DWORD *)v7 + 35);
  Heap = v13;
  if ( !v13 || NtCurrentPeb()->Ldr->ShutdownInProgress )
    TppRaiseInvalidParameter();
  PortInformation[1] = *((_DWORD *)v13 + 10);
  v7 = (unsigned __int8 *)BaseAddress;
  PortInformation[0] = BaseAddress;
  v8 = NtAlpcSetInformation(v9, AlpcAssociateCompletionPortInformation, PortInformation, 8u);
  if ( v8 >= 0 )
  {
    TpAdjustBindingCount((int)Heap, 1u);
    v8 = 0;
  }
  v25 = v8;
  if ( v8 >= 0 )
  {
    v8 = 0;
    v25 = 0;
    v14 = v22;
    if ( a5 )
      v22[4].0 = ($64EDA4DD838E80CF9A7DD220E06F3FD2)a5[6];
    if ( v14[2].Value )
      TppCleanupGroupAddMember(v14);
  }
  ms_exc.registration.TryLevel = 0;
  v19 = 0;
  if ( v8 < 0 )
  {
    TppCleanupGroupMemberDestroy((int)(v7 + 48));
    goto LABEL_22;
  }
}
