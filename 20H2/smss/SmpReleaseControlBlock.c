/*
 * XREFs of SmpReleaseControlBlock @ 0x140003C7C
 * Callers:
 *     SmpStartCsr @ 0x1400020F0 (SmpStartCsr.c)
 *     SmpFinalizeClientContext @ 0x140002F20 (SmpFinalizeClientContext.c)
 *     SmpHandleConnectionRequest @ 0x140003020 (SmpHandleConnectionRequest.c)
 *     SmpDestroyControlBlock @ 0x140003BE4 (SmpDestroyControlBlock.c)
 *     SmpStopCsr @ 0x1400059C0 (SmpStopCsr.c)
 * Callees:
 *     __security_check_cookie @ 0x14000E4B0 (__security_check_cookie.c)
 */

BOOLEAN __fastcall SmpReleaseControlBlock(char *BaseAddress)
{
  signed __int32 v2; // eax
  bool v3; // cc
  BOOLEAN result; // al
  void *v5; // rdi
  int v6; // eax
  __int128 v7; // xmm1
  _OWORD v8[2]; // [rsp+40h] [rbp-168h] BYREF
  __int64 v9; // [rsp+60h] [rbp-148h]
  int v10; // [rsp+68h] [rbp-140h]
  int v11; // [rsp+6Ch] [rbp-13Ch]
  int v12; // [rsp+70h] [rbp-138h]

  v2 = _InterlockedExchangeAdd((volatile signed __int32 *)BaseAddress + 1, 0xFFFFFFFF);
  v3 = v2 <= 1;
  result = v2 - 1;
  if ( v3 )
  {
    v5 = (void *)*((_QWORD *)BaseAddress + 6);
    if ( v5 )
    {
      if ( (*BaseAddress & 1) == 0 && *((_QWORD *)BaseAddress + 9) != SmpUniqueProcessId )
      {
        v6 = *((_DWORD *)BaseAddress + 2);
        v7 = *((_OWORD *)BaseAddress + 5);
        v8[0] = *((_OWORD *)BaseAddress + 4);
        v9 = *((_QWORD *)BaseAddress + 12);
        v8[1] = v7;
        v10 = 5;
        v11 = -1073741823;
        v12 = v6;
        NtAlpcSendWaitReceivePort(SmpApiConnectionPort, 0x10000LL, v8, 0LL, 0LL, 0LL, 0LL, 0LL);
      }
      RtlAcquireSRWLockExclusive(&SmpControlLock);
      RtlDeleteNoSplay((PRTL_SPLAY_LINKS)(BaseAddress + 104), &SmpControlBlockRoot);
      RtlReleaseSRWLockExclusive(&SmpControlLock);
      NtClose(v5);
    }
    NtClose(*((HANDLE *)BaseAddress + 4));
    NtClose(*((HANDLE *)BaseAddress + 5));
    NtUnmapViewOfSection((HANDLE)0xFFFFFFFFFFFFFFFFLL, *((PVOID *)BaseAddress + 2));
    NtClose(*((HANDLE *)BaseAddress + 3));
    return RtlFreeHeap(*(PVOID *)(*(_QWORD *)&KeGetPcr()->MajorVersion + 48LL), 0, BaseAddress);
  }
  return result;
}
