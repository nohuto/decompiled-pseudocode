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

int __stdcall TpAllocJobNotification(_RTL_SRWLOCK **a1, HANDLE JobHandle, unsigned int a3, int a4, _DWORD *a5)
{
  int v5; // eax
  ULONG v6; // eax
  _RTL_SRWLOCK *Heap; // eax
  _RTL_SRWLOCK *v8; // esi
  _RTL_SRWLOCK *Value; // ecx
  unsigned int v11; // ecx
  char v12; // dl
  SIZE_T v13; // [esp-4h] [ebp-24h]
  size_t v14; // [esp-4h] [ebp-24h]
  int v15; // [esp+10h] [ebp-10h]
  int v16; // [esp+10h] [ebp-10h]
  int v17; // [esp+14h] [ebp-Ch]
  _DWORD JobObjectInformation[2]; // [esp+18h] [ebp-8h] BYREF
  unsigned int retaddr; // [esp+24h] [ebp+4h]

  v5 = 0;
  v15 = 0;
  if ( a5 )
  {
    v5 = a5[7];
    v15 = v5;
  }
  if ( !a1 || !a3 || !JobHandle || (v5 & 0xFFFFFFFC) != 0 || NtCurrentPeb()->Ldr->ShutdownInProgress )
    TppRaiseInvalidParameter();
  v6 = TppHeapTag;
  *a1 = 0;
  LODWORD(v13) = 192;
  Heap = (_RTL_SRWLOCK *)RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, v6 + 3407872, v13);
  v8 = Heap;
  if ( !Heap )
    return -1073741801;
  LODWORD(v14) = 192;
  memset(Heap, 0, v14);
  v8[39].Value = retaddr;
  v16 = TppCleanupGroupMemberInitialize((int)&v8[12], a4, a5, v15, (int)TppJobpCleanupGroupMemberVFuncs);
  if ( v16 < 0 )
    goto LABEL_17;
  Value = (_RTL_SRWLOCK *)v8[35].Value;
  v8[24].Value = a3;
  v8[42].Value = (unsigned int)JobHandle;
  v8[8].Value = (unsigned int)TppJobpExecuteCallback;
  if ( Value )
  {
    TppGetCurrentThreadNumaNode(Value, &v8[9].Value, (unsigned __int8 *)&v8[10]);
    v11 = v8[9].Value;
    v12 = (char)v8[10].0;
  }
  else
  {
    v8[9].Value = 0;
    v11 = 0;
    *(_BYTE *)&v8[10].0 = 0;
    v12 = 0;
  }
  v8[5].Value = 0;
  v8[7].Value = (unsigned int)&v8[6];
  v8[6].Value = (unsigned int)&v8[6];
  v8->Value = (unsigned int)TppDirectTaskVFuncs;
  v8[1].Value = v11;
  *(_BYTE *)&v8[2].0 = v12;
  v17 = v8[35].Value;
  JobObjectInformation[0] = v8;
  JobObjectInformation[1] = *(_DWORD *)(v17 + 40);
  v16 = ZwSetInformationJobObject(JobHandle, JobObjectAssociateCompletionPortInformation, JobObjectInformation, 8u);
  if ( v16 < 0 )
  {
    TppCleanupGroupMemberDestroy((int)&v8[12]);
LABEL_17:
    RtlFreeHeap(NtCurrentPeb()->ProcessHeap, TppHeapTag + 3407872, v8);
    return v16;
  }
  TpAdjustBindingCount(v17, 1u);
  _InterlockedIncrement((volatile signed __int32 *)&v8[12]);
  v8[46].Value = 0;
  if ( a5 )
    v8[16].0 = ($64EDA4DD838E80CF9A7DD220E06F3FD2)a5[6];
  if ( v8[14].Value )
    TppCleanupGroupAddMember(v8 + 12);
  *a1 = v8;
  return 0;
}
