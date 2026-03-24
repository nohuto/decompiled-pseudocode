/*
 * XREFs of FindDeviceFirmwareLockHandlerEntryLocked @ 0x1C0030A54
 * Callers:
 *     InsertDeviceFirmwareLockHandlerEntry @ 0x1C00309BC (InsertDeviceFirmwareLockHandlerEntry.c)
 *     FindDeviceFirmwareLockHandlerEntry @ 0x1C004FE8C (FindDeviceFirmwareLockHandlerEntry.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall FindDeviceFirmwareLockHandlerEntryLocked(int a1, __int64 a2, __int64 *a3)
{
  __int64 v3; // rax
  __int64 v4; // r9

  v3 = AcpiDeviceFirmwareLockHandlerList;
  v4 = 0LL;
  if ( a3 )
    v3 = *a3;
  while ( (__int64 *)v3 != &AcpiDeviceFirmwareLockHandlerList )
  {
    if ( *(_DWORD *)(v3 + 40) == a1 && (!a2 || *(_QWORD *)(v3 + 48) == a2) )
    {
      v4 = v3;
      _InterlockedIncrement((volatile signed __int32 *)(v3 + 64));
      return v4;
    }
    v3 = *(_QWORD *)v3;
  }
  return v4;
}
