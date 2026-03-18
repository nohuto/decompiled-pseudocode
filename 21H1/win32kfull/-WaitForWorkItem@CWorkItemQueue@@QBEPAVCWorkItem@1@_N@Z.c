/*
 * XREFs of ?WaitForWorkItem@CWorkItemQueue@@QBEPAVCWorkItem@1@_N@Z @ 0x976A2
 * Callers:
 *     ?UmfdServerSendCompleteAndWaitReceive@@YGJPAX0K0PAK0@Z @ 0x8BBEE (-UmfdServerSendCompleteAndWaitReceive@@YGJPAX0K0PAK0@Z.c)
 * Callees:
 *     <none>
 */

struct CWorkItemQueue::CWorkItem *__thiscall CWorkItemQueue::WaitForWorkItem(CWorkItemQueue *this, bool a2)
{
  union _SLIST_HEADER *v3; // edi
  struct CWorkItemQueue::CWorkItem *result; // eax
  PSLIST_ENTRY v5; // eax
  PSLIST_ENTRY v6; // [esp+Ch] [ebp-4h]

  v3 = (union _SLIST_HEADER *)((char *)this + 8);
  result = (struct CWorkItemQueue::CWorkItem *)InterlockedPopEntrySList((PSLIST_HEADER)this + 1);
  if ( !result )
  {
    if ( *(_BYTE *)this )
      return result;
    do
    {
      if ( KeWaitForSingleObject(**((PVOID **)this + 1), UserRequest, 1, 0, 0) == 192 )
        break;
      result = (struct CWorkItemQueue::CWorkItem *)InterlockedPopEntrySList(v3);
      if ( result )
        goto LABEL_5;
      if ( *(_BYTE *)this )
        goto LABEL_11;
      KeResetEvent(**((PRKEVENT **)this + 1));
      v5 = InterlockedPopEntrySList(v3);
      v6 = v5;
      if ( v5 )
      {
        v5[1].Next = (struct _SINGLE_LIST_ENTRY *)2;
        KeSetEvent(**((PRKEVENT **)this + 1), 1, 0);
        return (struct CWorkItemQueue::CWorkItem *)v6;
      }
    }
    while ( !*(_BYTE *)this );
    KeSetEvent(**((PRKEVENT **)this + 1), 1, 0);
LABEL_11:
    result = (struct CWorkItemQueue::CWorkItem *)InterlockedPopEntrySList(v3);
    if ( !result )
      return result;
  }
LABEL_5:
  *((_DWORD *)result + 1) = 2;
  return result;
}
