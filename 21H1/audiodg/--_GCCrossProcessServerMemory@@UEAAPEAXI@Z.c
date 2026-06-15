/*
 * XREFs of ??_GCCrossProcessServerMemory@@UEAAPEAXI@Z @ 0x140012FF0
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x14001C938 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 */

CCrossProcessServerMemory *__fastcall CCrossProcessServerMemory::`scalar deleting destructor'(
        CCrossProcessServerMemory *this,
        char a2)
{
  const void *v4; // rcx
  char *v5; // rcx

  *((_DWORD *)this + 11) = -1073741823;
  *(_QWORD *)this = &CCrossProcessBaseMemory::`vftable';
  v4 = (const void *)*((_QWORD *)this + 4);
  if ( v4 )
  {
    UnmapViewOfFile(v4);
    *((_QWORD *)this + 4) = 0LL;
  }
  v5 = (char *)*((_QWORD *)this + 2);
  if ( (unsigned __int64)(v5 - 1) <= 0xFFFFFFFFFFFFFFFDuLL )
    CloseHandle(v5);
  if ( (a2 & 1) != 0 )
    operator delete(this);
  return this;
}
