/*
 * XREFs of EtwpSetProviderTraitsKm @ 0x14076A1F8
 * Callers:
 *     EtwSetInformation @ 0x14076A1A0 (EtwSetInformation.c)
 * Callees:
 *     EtwEventEnabled @ 0x14026B690 (EtwEventEnabled.c)
 *     memmove @ 0x140408CC0 (memmove.c)
 *     EtwpSetProviderTraitsCommon @ 0x1405F38C0 (EtwpSetProviderTraitsCommon.c)
 *     EtwpEventWriteRegistrationStatus @ 0x140935238 (EtwpEventWriteRegistrationStatus.c)
 *     ExAllocatePoolWithTag @ 0x1409B1030 (ExAllocatePoolWithTag.c)
 */

__int64 __fastcall EtwpSetProviderTraitsKm(__int64 a1, void *Src, unsigned __int16 a3)
{
  unsigned int v5; // esi
  _RTL_BALANCED_NODE *PoolWithTag; // rax
  _RTL_BALANCED_NODE *Node; // rbx
  unsigned int v8; // ebx
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // r8
  int v13; // [rsp+60h] [rbp+8h] BYREF

  v13 = 0;
  v5 = a3;
  if ( (*(_BYTE *)(a1 + 98) & 8) != 0 )
  {
    v8 = -1073741811;
  }
  else if ( *(_QWORD *)(a1 + 104) )
  {
    v8 = -1073741823;
  }
  else
  {
    PoolWithTag = (_RTL_BALANCED_NODE *)ExAllocatePoolWithTag(NonPagedPoolNx, (unsigned int)a3 + 28, 0x54777445u);
    Node = PoolWithTag;
    if ( PoolWithTag )
    {
      memmove((char *)&PoolWithTag[1].Left + 4, Src, v5);
      v8 = EtwpSetProviderTraitsCommon(
             0,
             0,
             (__int64)&v13,
             a1,
             Node,
             v5,
             &EtwpProviderTraitsKmMutex,
             &EtwpProviderTraitsKmTree);
      if ( !v8 )
        return v8;
    }
    else
    {
      v8 = -1073741670;
    }
  }
  if ( EtwEventEnabled(EtwpEventTracingProvRegHandle, &ETW_EVENT_SET_TRAITS_FAILED) )
    EtwpEventWriteRegistrationStatus(v11, v10, v12, a1, v8);
  return v8;
}
