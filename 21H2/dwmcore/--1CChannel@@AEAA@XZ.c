/*
 * XREFs of ??1CChannel@@AEAA@XZ @ 0x1801A9AF0
 * Callers:
 *     ?Release@CChannel@@UEAAKXZ @ 0x18002CF20 (-Release@CChannel@@UEAAKXZ.c)
 * Callees:
 *     ??_GCCommandBatch@@QEAAPEAXI@Z @ 0x180044698 (--_GCCommandBatch@@QEAAPEAXI@Z.c)
 *     ?Free@DefaultHeap@@SAXPEAX@Z @ 0x18008FCE4 (-Free@DefaultHeap@@SAXPEAX@Z.c)
 */

void __fastcall CChannel::~CChannel(CChannel *this)
{
  void *v2; // rcx
  _QWORD **v3; // rdi
  _QWORD *v4; // rcx
  _QWORD *v5; // rax
  struct _LIST_ENTRY *v6; // rcx
  void *v7; // rcx

  *(_QWORD *)this = &CChannel::`vftable';
  v2 = (void *)*((_QWORD *)this + 10);
  if ( v2 )
    CloseHandle(v2);
  v3 = (_QWORD **)((char *)this + 64);
  while ( 1 )
  {
    v4 = *v3;
    if ( *v3 == v3 )
      break;
    if ( (_QWORD **)v4[1] != v3 || (v5 = (_QWORD *)*v4, *(_QWORD **)(*v4 + 8LL) != v4) )
      __fastfail(3u);
    *v3 = v5;
    v5[1] = v3;
    DefaultHeap::Free(v4);
  }
  v6 = (struct _LIST_ENTRY *)*((_QWORD *)this + 20);
  if ( v6 )
    CCommandBatch::`scalar deleting destructor'(v6);
  DeleteCriticalSection((LPCRITICAL_SECTION)((char *)this + 168));
  DeleteCriticalSection((LPCRITICAL_SECTION)((char *)this + 88));
  v7 = (void *)*((_QWORD *)this + 5);
  *((_QWORD *)this + 2) = &HANDLE_TABLE::`vftable';
  DefaultHeap::Free(v7);
}
