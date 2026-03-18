/*
 * XREFs of AMLIFindNameSpaceObject @ 0x1C001F5E4
 * Callers:
 *     ACPIIoctlEnumChildren @ 0x1C001F2D4 (ACPIIoctlEnumChildren.c)
 * Callees:
 *     DereferenceObjectEx @ 0x1C00189F4 (DereferenceObjectEx.c)
 *     GetBaseObject @ 0x1C0019CB4 (GetBaseObject.c)
 *     FindNSObjMainNoLock @ 0x1C001F71C (FindNSObjMainNoLock.c)
 *     GetObjectPath @ 0x1C00282F8 (GetObjectPath.c)
 *     __security_check_cookie @ 0x1C002F140 (__security_check_cookie.c)
 *     memmove @ 0x1C002FDC0 (memmove.c)
 *     PrintDebugMessage @ 0x1C00682B8 (PrintDebugMessage.c)
 */

__int64 __fastcall AMLIFindNameSpaceObject(__int64 *a1, __int64 a2, unsigned int a3, _BYTE *a4)
{
  size_t v8; // rbx
  _BYTE *Pool2; // rdi
  __int64 BaseObject; // rax
  unsigned __int64 v11; // rbp
  __int64 v12; // rax
  KIRQL v13; // bl
  unsigned int NSObjMainNoLock; // esi
  __int64 ObjectPath; // rax
  unsigned int CurrentThread; // edx
  void *v18; // r8
  void *v19; // rbx
  _BYTE P[128]; // [rsp+30h] [rbp-C8h] BYREF

  v8 = -1LL;
  do
    ++v8;
  while ( a4[v8] );
  if ( v8 + 1 >= 0x80 )
  {
    Pool2 = (_BYTE *)ExAllocatePool2(64LL, v8 + 1, 1768973121LL);
    if ( !Pool2 )
      return 3221225626LL;
  }
  else
  {
    Pool2 = P;
  }
  memmove(Pool2, a4, v8);
  Pool2[v8] = 0;
  if ( (*(_BYTE *)(*a1 + 64) & 4) != 0 )
  {
    NSObjMainNoLock = -1073741738;
  }
  else
  {
    BaseObject = GetBaseObject(*a1);
    v11 = BaseObject;
    if ( (gDebugger & 8) != 0 )
    {
      ObjectPath = GetObjectPath(BaseObject);
      CurrentThread = (unsigned int)KeGetCurrentThread();
      v18 = &unk_1C006FB8B;
      v19 = (void *)ObjectPath;
      if ( ObjectPath )
        LODWORD(v18) = ObjectPath;
      PrintDebugMessage(53, CurrentThread, (_DWORD)v18, 0, 0LL);
      if ( v19 )
        ExFreePoolWithTag(v19, 0);
    }
    v12 = *(_QWORD *)(a2 + 8);
    *(_DWORD *)(a2 + 24) = 0;
    *(_QWORD *)(a2 + 16) = 0LL;
    *(_WORD *)(a2 + 2) = 2;
    *(_DWORD *)(v12 + 24) = 0;
    *(_WORD *)(*(_QWORD *)(a2 + 8) + 2LL) = 2;
    *(_QWORD *)(*(_QWORD *)(a2 + 8) + 16LL) = 0LL;
    v13 = ExAcquireSpinLockShared(&ACPINamespaceLock);
    NSObjMainNoLock = FindNSObjMainNoLock(Pool2, v11, a2, a3);
    ExReleaseSpinLockShared(&ACPINamespaceLock, v13);
    DereferenceObjectEx(v11);
  }
  if ( P != Pool2 )
    ExFreePoolWithTag(Pool2, 0);
  return NSObjMainNoLock;
}
