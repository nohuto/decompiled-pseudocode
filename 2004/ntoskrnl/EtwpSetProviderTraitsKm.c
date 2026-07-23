/*
 * XREFs of EtwpSetProviderTraitsKm @ 0x14076C938
 * Callers:
 *     EtwSetInformation @ 0x14076C8E0 (EtwSetInformation.c)
 * Callees:
 *     EtwEventEnabled @ 0x140212640 (EtwEventEnabled.c)
 *     memmove @ 0x140409FC0 (memmove.c)
 *     EtwpSetProviderTraitsCommon @ 0x14066B740 (EtwpSetProviderTraitsCommon.c)
 *     EtwpEventWriteRegistrationStatus @ 0x1409364D8 (EtwpEventWriteRegistrationStatus.c)
 *     ExAllocatePoolWithTag @ 0x1409B1160 (ExAllocatePoolWithTag.c)
 */

__int64 __fastcall EtwpSetProviderTraitsKm(__int64 a1, void *Src, unsigned __int16 a3)
{
  __int16 v4; // ax
  size_t v6; // rsi
  unsigned int v7; // ebx
  _RTL_BALANCED_NODE *PoolWithTag; // rax
  _RTL_BALANCED_NODE *Node; // rbx
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // r8
  int v14; // [rsp+60h] [rbp+8h] BYREF

  v14 = 0;
  v4 = *(_WORD *)(a1 + 98);
  v6 = a3;
  if ( (v4 & 8) != 0 || (v4 & 1) == 0 )
  {
    v7 = -1073741811;
LABEL_9:
    if ( !v7 )
      return v7;
    goto LABEL_10;
  }
  if ( *(_QWORD *)(a1 + 104) )
  {
    v7 = -1073741823;
    goto LABEL_10;
  }
  PoolWithTag = (_RTL_BALANCED_NODE *)ExAllocatePoolWithTag(NonPagedPoolNx, (unsigned int)a3 + 28, 0x54777445u);
  Node = PoolWithTag;
  if ( PoolWithTag )
  {
    memmove((char *)&PoolWithTag[1].Left + 4, Src, v6);
    v7 = EtwpSetProviderTraitsCommon(
           0,
           0,
           (__int64)&v14,
           a1,
           Node,
           v6,
           &EtwpProviderTraitsKmMutex,
           &EtwpProviderTraitsKmTree);
    goto LABEL_9;
  }
  v7 = -1073741670;
LABEL_10:
  if ( EtwEventEnabled(EtwpEventTracingProvRegHandle, &ETW_EVENT_SET_TRAITS_FAILED) )
    EtwpEventWriteRegistrationStatus(v11, v10, v12, a1, v7);
  return v7;
}
