/*
 * XREFs of ?BeginTrack@CReferenceCountedType@CReferenceTracker@NSInstrumentation@@QEAAPEAXPEAX@Z @ 0x1C0151000
 * Callers:
 *     ?AcquireReferenceCountedObjectHandle@@YA_NW4ReferenceTrackerCountedType@@PEAXPEAPEAX@Z @ 0x1C0014A0C (-AcquireReferenceCountedObjectHandle@@YA_NW4ReferenceTrackerCountedType@@PEAXPEAPEAX@Z.c)
 *     ?bCreateDIB@SURFMEM@@QEAAHPEAU_DEVBITMAPINFO@@PEAX1K1_KHHHH@Z @ 0x1C00822A0 (-bCreateDIB@SURFMEM@@QEAAHPEAU_DEVBITMAPINFO@@PEAX1K1_KHHHH@Z.c)
 * Callees:
 *     ?Create@CPlatformSignal@NSInstrumentation@@SAPEAV12@XZ @ 0x1C0150DA0 (-Create@CPlatformSignal@NSInstrumentation@@SAPEAV12@XZ.c)
 *     ?Insert@CPointerHashTable@NSInstrumentation@@QEAA_NPEBX0@Z @ 0x1C0151C84 (-Insert@CPointerHashTable@NSInstrumentation@@QEAA_NPEBX0@Z.c)
 */

_QWORD *__fastcall NSInstrumentation::CReferenceTracker::CReferenceCountedType::BeginTrack(
        NSInstrumentation::CPointerHashTable **this,
        void *a2)
{
  _QWORD *PoolWithTag; // rax
  _QWORD *v5; // rbx
  struct _KEVENT *v6; // rax
  void *v7; // rcx
  void *v9; // rcx

  PoolWithTag = ExAllocatePoolWithTag(PagedPoolSession, 0x1000uLL, 0x62497355u);
  v5 = PoolWithTag;
  if ( PoolWithTag )
  {
    PoolWithTag[5] = -1LL;
    PoolWithTag[4] = 0LL;
    *((_DWORD *)PoolWithTag + 12) = 0;
    PoolWithTag[1] = PoolWithTag;
    *PoolWithTag = PoolWithTag;
    PoolWithTag[2] = NSInstrumentation::CPlatformSignal::Create();
    v6 = NSInstrumentation::CPlatformSignal::Create();
    v7 = (void *)v5[2];
    v5[3] = v6;
    if ( v7 )
    {
      if ( v6 )
      {
        NSInstrumentation::CPointerHashTable::Insert(this[3], v5, a2);
        return v5;
      }
      ExFreePoolWithTag(v7, 0);
    }
    v9 = (void *)v5[3];
    if ( v9 )
      ExFreePoolWithTag(v9, 0);
    ExFreePoolWithTag(v5, 0);
  }
  return 0LL;
}
