/*
 * XREFs of _TpAllocJobNotification@20 @ 0x4B383550
 * Callers:
 *     <none>
 * Callees:
 *     _TppCleanupGroupMemberDestroy@4 @ 0x4B2B250C (_TppCleanupGroupMemberDestroy@4.c)
 *     _TpAdjustBindingCount@8 @ 0x4B2B48DF (_TpAdjustBindingCount@8.c)
 *     _TppGetCurrentThreadNumaNode@12 @ 0x4B2B49C9 (_TppGetCurrentThreadNumaNode@12.c)
 *     _TppCleanupGroupMemberInitialize@20 @ 0x4B2B4A71 (_TppCleanupGroupMemberInitialize@20.c)
 *     _RtlFreeHeap@12 @ 0x4B2C3B70 (_RtlFreeHeap@12.c)
 *     _RtlAllocateHeap@12 @ 0x4B2C5D40 (_RtlAllocateHeap@12.c)
 *     _TppCleanupGroupAddMember@4 @ 0x4B2E7383 (_TppCleanupGroupAddMember@4.c)
 *     _ZwSetInformationJobObject@16 @ 0x4B2F42F0 (_ZwSetInformationJobObject@16.c)
 *     _memset @ 0x4B2F8F30 (_memset.c)
 *     _TppRaiseInvalidParameter@0 @ 0x4B3848BD (_TppRaiseInvalidParameter@0.c)
 */

int __stdcall TpAllocJobNotification(int *a1, int a2, int a3, int a4, _DWORD *a5)
{
  int v5; // eax
  int v6; // eax
  void *Heap; // eax
  int v8; // esi
  _DWORD *v10; // ecx
  int v11; // ecx
  char v12; // dl
  int v13; // [esp+10h] [ebp-10h]
  int v14; // [esp+10h] [ebp-10h]
  int v15; // [esp+14h] [ebp-Ch]
  _DWORD v16[2]; // [esp+18h] [ebp-8h] BYREF
  _UNKNOWN *retaddr; // [esp+24h] [ebp+4h]

  v5 = 0;
  v13 = 0;
  if ( a5 )
  {
    v5 = a5[7];
    v13 = v5;
  }
  if ( !a1 || !a3 || !a2 || (v5 & 0xFFFFFFFC) != 0 || NtCurrentPeb()->Ldr->ShutdownInProgress )
    TppRaiseInvalidParameter();
  v6 = TppHeapTag;
  *a1 = 0;
  Heap = (void *)RtlAllocateHeap((int)NtCurrentPeb()->ProcessHeap, v6 + 3407872, 192);
  v8 = (int)Heap;
  if ( !Heap )
    return -1073741801;
  memset(Heap, 0, 0xC0u);
  *(_DWORD *)(v8 + 156) = retaddr;
  v14 = TppCleanupGroupMemberInitialize(v8 + 48, a4, a5, v13, (int)TppJobpCleanupGroupMemberVFuncs);
  if ( v14 < 0 )
    goto LABEL_17;
  v10 = *(_DWORD **)(v8 + 140);
  *(_DWORD *)(v8 + 96) = a3;
  *(_DWORD *)(v8 + 168) = a2;
  *(_DWORD *)(v8 + 32) = TppJobpExecuteCallback;
  if ( v10 )
  {
    TppGetCurrentThreadNumaNode(v10, (_DWORD *)(v8 + 36), (unsigned __int8 *)(v8 + 40));
    v11 = *(_DWORD *)(v8 + 36);
    v12 = *(_BYTE *)(v8 + 40);
  }
  else
  {
    *(_DWORD *)(v8 + 36) = 0;
    v11 = 0;
    *(_BYTE *)(v8 + 40) = 0;
    v12 = 0;
  }
  *(_DWORD *)(v8 + 20) = 0;
  *(_DWORD *)(v8 + 28) = v8 + 24;
  *(_DWORD *)(v8 + 24) = v8 + 24;
  *(_DWORD *)v8 = TppDirectTaskVFuncs;
  *(_DWORD *)(v8 + 4) = v11;
  *(_BYTE *)(v8 + 8) = v12;
  v15 = *(_DWORD *)(v8 + 140);
  v16[0] = v8;
  v16[1] = *(_DWORD *)(v15 + 40);
  v14 = ZwSetInformationJobObject(a2, 7, (int)v16, 8);
  if ( v14 < 0 )
  {
    TppCleanupGroupMemberDestroy((_DWORD *)(v8 + 48));
LABEL_17:
    RtlFreeHeap((int)NtCurrentPeb()->ProcessHeap, TppHeapTag + 3407872, v8);
    return v14;
  }
  TpAdjustBindingCount(v15, 1u);
  _InterlockedIncrement((volatile signed __int32 *)(v8 + 48));
  *(_DWORD *)(v8 + 184) = 0;
  if ( a5 )
    *(_DWORD *)(v8 + 64) = a5[6];
  if ( *(_DWORD *)(v8 + 56) )
    TppCleanupGroupAddMember((_DWORD *)(v8 + 48));
  *a1 = v8;
  return 0;
}
