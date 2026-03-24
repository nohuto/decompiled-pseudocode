/*
 * XREFs of AMLIGetNameSpaceObjectPath @ 0x1C00117C0
 * Callers:
 *     ACPIAmliBuildObjectPathname @ 0x1C00116E4 (ACPIAmliBuildObjectPathname.c)
 *     AcpiDiagTraceDeviceReset @ 0x1C0049CE8 (AcpiDiagTraceDeviceReset.c)
 * Callees:
 *     GetObjectPathNoLock @ 0x1C00097A0 (GetObjectPathNoLock.c)
 *     memmove @ 0x1C00321C0 (memmove.c)
 */

__int64 __fastcall AMLIGetNameSpaceObjectPath(__int64 *a1, void *a2, _DWORD *a3)
{
  unsigned int v5; // esi
  __int64 v6; // rdi
  KIRQL v7; // bl
  _QWORD *ObjectPathNoLock; // rdi
  __int64 v9; // rbx
  __int64 v10; // rcx
  __int64 v11; // rdx

  v5 = -1073741823;
  if ( a1 )
  {
    v6 = *a1;
    v7 = ExAcquireSpinLockShared(&ACPINamespaceLock);
    ObjectPathNoLock = GetObjectPathNoLock(v6);
    ExReleaseSpinLockShared(&ACPINamespaceLock, v7);
    if ( ObjectPathNoLock )
    {
      v9 = -1LL;
      v10 = -1LL;
      do
        ++v10;
      while ( *((_BYTE *)ObjectPathNoLock + v10) );
      if ( a2 )
      {
        v11 = -1LL;
        do
          ++v11;
        while ( *((_BYTE *)ObjectPathNoLock + v11) );
        if ( (unsigned int)*a3 >= (unsigned __int64)(v10 + 1) )
        {
          memmove(a2, ObjectPathNoLock, v11 + 1);
          v5 = 0;
          do
            ++v9;
          while ( *((_BYTE *)ObjectPathNoLock + v9) );
          goto LABEL_11;
        }
        LODWORD(v9) = v11;
      }
      else
      {
        LODWORD(v9) = v10;
      }
      v5 = -1073741789;
LABEL_11:
      *a3 = v9 + 1;
      ExFreePoolWithTag(ObjectPathNoLock, 0);
    }
  }
  return v5;
}
