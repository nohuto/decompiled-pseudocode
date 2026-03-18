/*
 * XREFs of IovpSessionDataDereference @ 0x140A9CF00
 * Callers:
 *     IovpLocalCompletionRoutine @ 0x140A80D10 (IovpLocalCompletionRoutine.c)
 *     IovpCallDriver2 @ 0x140A8BD60 (IovpCallDriver2.c)
 *     IovpCompleteRequest2 @ 0x140A8C1BC (IovpCompleteRequest2.c)
 * Callees:
 *     ExFreeToNPagedLookasideList @ 0x140203D88 (ExFreeToNPagedLookasideList.c)
 *     VfUtilFreePoolDispatchLevel @ 0x1405FDFF0 (VfUtilFreePoolDispatchLevel.c)
 */

void __fastcall IovpSessionDataDereference(struct _SLIST_ENTRY *Entry)
{
  bool v1; // zf
  _SLIST_ENTRY *Next; // r9
  struct _SLIST_ENTRY *v3; // rax
  _SLIST_ENTRY *v4; // rdx
  _SLIST_ENTRY **v5; // r8

  v1 = (*((_DWORD *)&Entry->Next + 2))-- == 1;
  Next = Entry->Next;
  if ( v1 )
  {
    v3 = Entry + 1;
    v4 = Entry[1].Next;
    if ( *(&v4->Next + 1) != &Entry[1] || (v5 = (_SLIST_ENTRY **)*((_QWORD *)&Entry[1].Next + 1), *v5 != v3) )
      __fastfail(3u);
    *v5 = v4;
    *((_QWORD *)&v4->Next + 1) = v5;
    *((_QWORD *)&Entry[1].Next + 1) = Entry + 1;
    v3->Next = v3;
    _InterlockedDecrement((volatile signed __int32 *)&Next[1].Next + 1);
    if ( ((__int64)Entry[2].Next & 4) != 0 )
      ExFreeToNPagedLookasideList(&ViSessionDataLookaside, Entry);
    else
      VfUtilFreePoolDispatchLevel(Entry);
  }
}
