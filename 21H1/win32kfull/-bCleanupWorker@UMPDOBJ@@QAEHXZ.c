/*
 * XREFs of ?bCleanupWorker@UMPDOBJ@@QAEHXZ @ 0x1F41F3
 * Callers:
 *     _UMPDOBJ_bCleanupWrap@4 @ 0x1F47BA (_UMPDOBJ_bCleanupWrap@4.c)
 *     ??1UMPDREF@@QAE@XZ @ 0x2161D1 (--1UMPDREF@@QAE@XZ.c)
 * Callees:
 *     ?vClient@UMPDOBJ@@QAEXPAX@Z @ 0x1F46FC (-vClient@UMPDOBJ@@QAEXPAX@Z.c)
 */

int __thiscall UMPDOBJ::bCleanupWorker(UMPDOBJ *this)
{
  UMPDOBJ *v2; // ecx
  PATHOBJ *v3; // edi

  if ( !HmgRemoveObject(*(_DWORD *)this, 0, 0, 1, 17, 0) )
    return 0;
  v3 = (PATHOBJ *)*((_DWORD *)this + 32);
  if ( v3 )
  {
    EPATHOBJ::vUnlock(*((EPATHOBJ **)this + 32));
    Win32FreePool(v3);
  }
  if ( *((_DWORD *)this + 58) )
  {
    if ( *((_DWORD *)this + 10) )
      UMPDOBJ::vClient(v2, *((void **)this + 10));
    if ( *((_DWORD *)this + 12) )
      UMPDOBJ::vClient(v2, *((void **)this + 12));
    if ( *((_DWORD *)this + 14) )
      UMPDOBJ::vClient(v2, *((void **)this + 14));
  }
  if ( *((_DWORD *)this + 46) )
    MmUnmapViewOfSection(*((_DWORD *)this + 50), *((_DWORD *)this + 46));
  if ( *((_DWORD *)this + 51) )
    Win32FreePool(*((PATHOBJ **)this + 51));
  return 1;
}
