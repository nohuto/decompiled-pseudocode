/*
 * XREFs of ??1ResultException@wil@@UEAA@XZ @ 0x180004EF0
 * Callers:
 *     ??_GResultException@wil@@UEAAPEAXI@Z @ 0x180004EB0 (--_GResultException@wil@@UEAAPEAXI@Z.c)
 * Callees:
 *     ??1StoredFailureInfo@wil@@QEAA@XZ @ 0x180004F74 (--1StoredFailureInfo@wil@@QEAA@XZ.c)
 */

void __fastcall wil::ResultException::~ResultException(wil::ResultException *this)
{
  volatile signed __int32 *v2; // rcx
  void *v3; // rbx
  HANDLE ProcessHeap; // rax

  v2 = (volatile signed __int32 *)*((_QWORD *)this + 23);
  if ( v2 )
  {
    if ( _InterlockedExchangeAdd(v2, 0xFFFFFFFF) == 1 )
    {
      v3 = (void *)*((_QWORD *)this + 23);
      ProcessHeap = GetProcessHeap();
      HeapFree(ProcessHeap, 0, v3);
    }
    *((_QWORD *)this + 23) = 0LL;
    *((_QWORD *)this + 24) = 0LL;
  }
  wil::StoredFailureInfo::~StoredFailureInfo((wil::ResultException *)((char *)this + 24));
  exception::~exception(this);
}
