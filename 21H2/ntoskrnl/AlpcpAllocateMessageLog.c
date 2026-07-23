/*
 * XREFs of AlpcpAllocateMessageLog @ 0x1408C2A0C
 * Callers:
 *     AlpcpEnterAllocationEventMessageLog @ 0x1408C2C00 (AlpcpEnterAllocationEventMessageLog.c)
 * Callees:
 *     <none>
 */

__int64 AlpcpAllocateMessageLog()
{
  __int64 result; // rax
  __int64 v1; // rcx
  __int64 v2; // rcx
  __int64 v3; // r8
  _QWORD *v4; // rdx
  _QWORD **v5; // rdx
  _QWORD *v6; // rcx
  _QWORD *v7; // r8
  _QWORD *v8; // r8

  result = AlpcpFreeMessageLogListHead;
  if ( (__int64 *)AlpcpFreeMessageLogListHead != &AlpcpFreeMessageLogListHead )
  {
    v1 = *(_QWORD *)AlpcpFreeMessageLogListHead;
    if ( *(__int64 **)(AlpcpFreeMessageLogListHead + 8) == &AlpcpFreeMessageLogListHead
      && *(_QWORD *)(v1 + 8) == AlpcpFreeMessageLogListHead )
    {
      AlpcpFreeMessageLogListHead = *(_QWORD *)AlpcpFreeMessageLogListHead;
      *(_QWORD *)(v1 + 8) = &AlpcpFreeMessageLogListHead;
      return result;
    }
LABEL_16:
    __fastfail(3u);
  }
  result = AlpcpMessageLogListHead;
  if ( (__int64 *)AlpcpMessageLogListHead == &AlpcpMessageLogListHead )
    return 0LL;
  v2 = *(_QWORD *)AlpcpMessageLogListHead;
  if ( *(__int64 **)(AlpcpMessageLogListHead + 8) != &AlpcpMessageLogListHead )
    goto LABEL_16;
  if ( *(_QWORD *)(v2 + 8) != AlpcpMessageLogListHead )
    goto LABEL_16;
  AlpcpMessageLogListHead = *(_QWORD *)AlpcpMessageLogListHead;
  *(_QWORD *)(v2 + 8) = &AlpcpMessageLogListHead;
  *(_DWORD *)(result + 44) = 0;
  v3 = *(_QWORD *)(result + 16);
  if ( *(_QWORD *)(v3 + 8) != result + 16 )
    goto LABEL_16;
  v4 = *(_QWORD **)(result + 24);
  if ( *v4 != result + 16 )
    goto LABEL_16;
  *v4 = v3;
  *(_QWORD *)(v3 + 8) = v4;
  v5 = (_QWORD **)(result + 48);
  while ( 1 )
  {
    v6 = *v5;
    if ( *v5 == v5 )
      return result;
    if ( (_QWORD **)v6[1] != v5 )
      goto LABEL_16;
    v7 = (_QWORD *)*v6;
    if ( *(_QWORD **)(*v6 + 8LL) != v6 )
      goto LABEL_16;
    *v5 = v7;
    v7[1] = v5;
    v8 = (_QWORD *)qword_140C2AA08;
    if ( *(__int64 **)qword_140C2AA08 != &AlpcpFreeMessageSnapshotListHead )
      goto LABEL_16;
    *v6 = &AlpcpFreeMessageSnapshotListHead;
    v6[1] = v8;
    *v8 = v6;
    qword_140C2AA08 = (__int64)v6;
  }
}
