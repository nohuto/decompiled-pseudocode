/*
 * XREFs of _LdrLockLoaderLock@12 @ 0x4B2E85B0
 * Callers:
 *     _TppWorkCallbackPrologRelease@12 @ 0x4B2B7032 (_TppWorkCallbackPrologRelease@12.c)
 *     _TppIopExecuteCallback@16 @ 0x4B2EB530 (_TppIopExecuteCallback@16.c)
 * Callees:
 *     _LdrpAcquireLoaderLock@0 @ 0x4B2D2725 (_LdrpAcquireLoaderLock@0.c)
 *     __SEH_prolog4 @ 0x4B307AC4 (__SEH_prolog4.c)
 *     _RtlRaiseStatus@4 @ 0x4B308980 (_RtlRaiseStatus@4.c)
 *     _LdrpTryAcquireLoaderLock@0 @ 0x4B32E68D (_LdrpTryAcquireLoaderLock@0.c)
 *     _LdrpGenericExceptionFilter@8 @ 0x4B334947 (_LdrpGenericExceptionFilter@8.c)
 */

NTSTATUS __cdecl LdrLockLoaderLock(ULONG Flags, ULONG *Disposition, PVOID *Cookie)
{
  NTSTATUS v3; // edi
  ULONG v4; // esi
  struct _TEB *v6; // eax
  struct _TEB *v7; // eax

  v3 = 0;
  if ( Disposition )
    *Disposition = 0;
  if ( Cookie )
    *Cookie = 0;
  if ( (Flags & 0xFFFFFFFC) != 0 )
  {
    if ( (Flags & 1) != 0 )
      RtlRaiseStatus(-1073741585);
    return -1073741585;
  }
  if ( !Cookie )
  {
    if ( (Flags & 1) != 0 )
      RtlRaiseStatus(-1073741583);
    return -1073741583;
  }
  v4 = 2;
  if ( (Flags & 2) != 0 && !Disposition )
  {
    if ( (Flags & 1) != 0 )
      RtlRaiseStatus(-1073741584);
    return -1073741584;
  }
  if ( LdrInitState != 3 )
    return v3;
  if ( (Flags & 1) == 0 )
  {
    if ( (Flags & 2) != 0 )
    {
      if ( !(unsigned __int8)LdrpTryAcquireLoaderLock() )
      {
        *Disposition = 2;
        return v3;
      }
    }
    else
    {
      LdrpAcquireLoaderLock();
      if ( !Disposition )
      {
LABEL_14:
        v6 = NtCurrentTeb();
        *Cookie = (PVOID)(((unsigned __int16)_InterlockedExchangeAdd(&LdrpLoaderLockAcquisitionCount, 1u) + 1) & 0xFFFE | (((int)v6->ClientId.UniqueThread & 0xFFF) << 16) | 1);
        return v3;
      }
    }
    *Disposition = 1;
    goto LABEL_14;
  }
  if ( (Flags & 2) == 0 )
  {
    LdrpAcquireLoaderLock();
    if ( Disposition )
      *Disposition = 1;
    goto LABEL_14;
  }
  if ( (unsigned __int8)LdrpTryAcquireLoaderLock() )
  {
    v7 = NtCurrentTeb();
    v4 = 1;
    *Cookie = (PVOID)(((unsigned __int16)_InterlockedExchangeAdd(&LdrpLoaderLockAcquisitionCount, 1u) + 1) & 0xFFFE | (((int)v7->ClientId.UniqueThread & 0xFFF) << 16) | 1);
  }
  *Disposition = v4;
  return v3;
}
