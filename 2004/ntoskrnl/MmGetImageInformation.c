/*
 * XREFs of MmGetImageInformation @ 0x1405C7D54
 * Callers:
 *     RtlpLookupUserFunctionTable @ 0x1402E9884 (RtlpLookupUserFunctionTable.c)
 *     RtlGetImageBaseAndLoadConfig @ 0x1403F2740 (RtlGetImageBaseAndLoadConfig.c)
 *     KiCheckUserAddressCetCompat @ 0x1405C7C00 (KiCheckUserAddressCetCompat.c)
 *     EtwpLocateDbgIdForRegEntry @ 0x1406FACAC (EtwpLocateDbgIdForRegEntry.c)
 * Callees:
 *     UNLOCK_ADDRESS_SPACE_SHARED @ 0x14020B330 (UNLOCK_ADDRESS_SPACE_SHARED.c)
 *     LOCK_ADDRESS_SPACE_SHARED @ 0x14024B530 (LOCK_ADDRESS_SPACE_SHARED.c)
 *     MiCheckForConflictingVad @ 0x14024C93C (MiCheckForConflictingVad.c)
 */

__int64 __fastcall MmGetImageInformation(unsigned __int64 a1, _QWORD *a2, _QWORD *a3, int *a4)
{
  struct _KTHREAD *CurrentThread; // rdi
  unsigned int v10; // ebx
  int v11; // r14d
  __int64 Process; // rsi
  __int64 **v13; // rax

  if ( a1 > 0x7FFFFFFEFFFFLL )
    return 3221225485LL;
  CurrentThread = KeGetCurrentThread();
  v10 = 0;
  v11 = 0;
  Process = (__int64)CurrentThread->ApcState.Process;
  if ( ((__int64)CurrentThread[1].Queue & 3) == 0 )
  {
    v11 = 1;
    LOCK_ADDRESS_SPACE_SHARED((__int64)CurrentThread, (__int64)CurrentThread->ApcState.Process);
  }
  v13 = MiCheckForConflictingVad(Process, a1, a1);
  if ( v13 )
  {
    if ( ((_DWORD)v13[6] & 0x70) == 0x20 )
    {
      *a2 = (*((unsigned int *)v13 + 6) | ((unsigned __int64)*((unsigned __int8 *)v13 + 32) << 32)) << 12;
      *a3 = ((*((unsigned int *)v13 + 7) | ((unsigned __int64)*((unsigned __int8 *)v13 + 33) << 32))
           - (*((unsigned int *)v13 + 6) | ((unsigned __int64)*((unsigned __int8 *)v13 + 32) << 32))
           + 1) << 12;
      *a4 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)*v13[9] + 56LL) + 76LL) & 1;
    }
    else
    {
      v10 = -1073741751;
    }
  }
  else
  {
    v10 = -1073741800;
  }
  if ( v11 == 1 )
    UNLOCK_ADDRESS_SPACE_SHARED((__int64)CurrentThread, Process);
  return v10;
}
