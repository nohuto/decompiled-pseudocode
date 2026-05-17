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

void __fastcall TppAllocAlpcCompletion(int *a1, int a2, int a3, int a4, _DWORD *a5, char a6)
{
  int v6; // eax
  int v7; // edi
  int v8; // esi
  int v9; // esi
  _DWORD *v10; // ecx
  int v11; // ecx
  char v12; // dl
  int v13; // ecx
  _DWORD *v14; // ecx
  _DWORD v15[2]; // [esp+10h] [ebp-44h] BYREF
  int *v16; // [esp+18h] [ebp-3Ch]
  int v17; // [esp+1Ch] [ebp-38h]
  int v18; // [esp+20h] [ebp-34h]
  int Heap; // [esp+24h] [ebp-30h]
  int v20; // [esp+28h] [ebp-2Ch]
  _DWORD *v21; // [esp+2Ch] [ebp-28h]
  int v22; // [esp+30h] [ebp-24h]
  int v23; // [esp+34h] [ebp-20h]
  int v24; // [esp+38h] [ebp-1Ch]
  CPPEH_RECORD ms_exc; // [esp+3Ch] [ebp-18h]
  _UNKNOWN *retaddr; // [esp+58h] [ebp+4h]

  v20 = a2;
  v16 = a1;
  v24 = -1073741823;
  if ( a5 )
    v6 = a5[7];
  else
    v6 = 0;
  v22 = v6;
  if ( !a1 || !a3 || !a2 || (v6 & 0xFFFFFFFC) != 0 || NtCurrentPeb()->Ldr->ShutdownInProgress )
    TppRaiseInvalidParameter();
  *a1 = 0;
  Heap = RtlAllocateHeap((int)NtCurrentPeb()->ProcessHeap, (TppHeapTag + 0x80000) | 8, 184);
  v7 = Heap;
  v23 = Heap;
  ms_exc.registration.TryLevel = 0;
  v17 = 1;
  if ( !Heap )
  {
    v8 = -1073741801;
    v24 = -1073741801;
LABEL_22:
    ms_exc.registration.TryLevel = -2;
    v17 = 0;
    if ( v7 )
    {
      RtlFreeHeap((int)NtCurrentPeb()->ProcessHeap, TppHeapTag + 0x80000, v7);
      v7 = 0;
      v8 = v24;
    }
    if ( v8 >= 0 )
      *v16 = v7;
    return;
  }
  v7 = v23;
  *(_DWORD *)(v23 + 156) = retaddr;
  v21 = (_DWORD *)(v7 + 48);
  v8 = TppCleanupGroupMemberInitialize(v7 + 48, a4, a5, v22, (int)TppAlpcpCleanupGroupMemberVFuncs);
  v24 = v8;
  if ( v8 < 0 )
    goto LABEL_22;
  ms_exc.registration.TryLevel = 1;
  v18 = 1;
  *(_DWORD *)(v7 + 96) = a3;
  *(_DWORD *)(v7 + 180) = *(_DWORD *)(v7 + 180) & 0xFFFFFFFE | (a6 != 0);
  v9 = v20;
  *(_DWORD *)(v7 + 168) = v20;
  v10 = *(_DWORD **)(v7 + 140);
  *(_DWORD *)(v7 + 32) = TppAlpcpExecuteCallback;
  if ( v10 )
  {
    TppGetCurrentThreadNumaNode(v10, (_DWORD *)(v7 + 36), (unsigned __int8 *)(v7 + 40));
    v11 = *(_DWORD *)(Heap + 36);
    v12 = *(_BYTE *)(Heap + 40);
  }
  else
  {
    *(_DWORD *)(v7 + 36) = 0;
    *(_BYTE *)(v7 + 40) = 0;
    v11 = 0;
    v12 = 0;
  }
  *(_DWORD *)(v7 + 20) = 0;
  *(_DWORD *)(v7 + 28) = v7 + 24;
  *(_DWORD *)(v7 + 24) = v7 + 24;
  *(_DWORD *)v7 = TppDirectTaskVFuncs;
  *(_DWORD *)(v7 + 4) = v11;
  *(_BYTE *)(v7 + 8) = v12;
  v13 = *(_DWORD *)(v7 + 140);
  Heap = v13;
  if ( !v13 || NtCurrentPeb()->Ldr->ShutdownInProgress )
    TppRaiseInvalidParameter();
  v15[1] = *(_DWORD *)(v13 + 40);
  v7 = v23;
  v15[0] = v23;
  v8 = NtAlpcSetInformation(v9, 2, v15, 8);
  if ( v8 >= 0 )
  {
    TpAdjustBindingCount(Heap, 1u);
    v8 = 0;
  }
  v24 = v8;
  if ( v8 >= 0 )
  {
    v8 = 0;
    v24 = 0;
    v14 = v21;
    if ( a5 )
      v21[4] = a5[6];
    if ( v14[2] )
      TppCleanupGroupAddMember(v14);
  }
  ms_exc.registration.TryLevel = 0;
  v18 = 0;
  if ( v8 < 0 )
  {
    TppCleanupGroupMemberDestroy((_DWORD *)(v7 + 48));
    goto LABEL_22;
  }
}
