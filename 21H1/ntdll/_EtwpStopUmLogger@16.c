/*
 * XREFs of _EtwpStopUmLogger@16 @ 0x4B2ED853
 * Callers:
 *     _RtlExitUserProcess@4 @ 0x4B2DD5D0 (_RtlExitUserProcess@4.c)
 *     _RtlExitUserThread@4 @ 0x4B2EB460 (_RtlExitUserThread@4.c)
 *     _EtwProcessPrivateLoggerRequest@4 @ 0x4B2EFF20 (_EtwProcessPrivateLoggerRequest@4.c)
 * Callees:
 *     _RtlNtStatusToDosError@4 @ 0x4B2DAB70 (_RtlNtStatusToDosError@4.c)
 *     @EtwpGetPrivateLoggerContext@8 @ 0x4B2EDADC (@EtwpGetPrivateLoggerContext@8.c)
 *     _EtwpSynchronizeWithLogger@8 @ 0x4B2EDB44 (_EtwpSynchronizeWithLogger@8.c)
 *     _EtwpStopLoggerInstance@4 @ 0x4B2EDB7A (_EtwpStopLoggerInstance@4.c)
 *     _EtwpFreeLoggerContext@4 @ 0x4B2EE335 (_EtwpFreeLoggerContext@4.c)
 *     _EtwpGetUmLoggerInfoFromContext@12 @ 0x4B2F03CA (_EtwpGetUmLoggerInfoFromContext@12.c)
 *     _ZwWaitForSingleObject@12 @ 0x4B2F29A0 (_ZwWaitForSingleObject@12.c)
 *     _NtClose@4 @ 0x4B2F2A50 (_NtClose@4.c)
 */

ULONG __stdcall EtwpStopUmLogger(int a1, _DWORD *a2)
{
  ULONG PrivateLoggerContext; // ebx
  _DWORD *v3; // esi
  bool v4; // zf
  NTSTATUS v5; // eax
  HANDLE v6; // edi
  char v8; // [esp+Fh] [ebp-19h]
  PVOID BaseAddress; // [esp+10h] [ebp-18h] BYREF
  int v10; // [esp+14h] [ebp-14h]
  int v11; // [esp+18h] [ebp-10h]
  int v12; // [esp+1Ch] [ebp-Ch]
  int v13; // [esp+20h] [ebp-8h]
  HANDLE Handle; // [esp+24h] [ebp-4h]

  BaseAddress = 0;
  v8 = 0;
  v10 = 0;
  v11 = 0;
  PrivateLoggerContext = EtwpGetPrivateLoggerContext(a2, &BaseAddress);
  if ( !PrivateLoggerContext )
  {
    v3 = BaseAddress;
    v12 = 1;
    v13 = *((_DWORD *)BaseAddress + 5);
    Handle = (HANDLE)*((_DWORD *)BaseAddress + 7);
    v4 = (a2[16] & 0x10000) == 0;
    BaseAddress = (PVOID)(*((_DWORD *)BaseAddress + 53) & 0x400);
    if ( !v4 )
    {
      v10 = v3[68];
      v11 = v3[69];
      v3[68] = a2[26];
      v3[69] = a2[28];
      v8 = 1;
      if ( (a2[16] & 0x1000) != 0 )
      {
        v3[66] = a2[4];
        v3[67] = a2[5];
      }
    }
    PrivateLoggerContext = EtwpStopLoggerInstance(v3);
    if ( !PrivateLoggerContext )
    {
      if ( BaseAddress || (v5 = EtwpSynchronizeWithLogger(v3, 8), v5 >= 0) )
      {
        EtwpGetUmLoggerInfoFromContext(0);
        _InterlockedDecrement((volatile signed __int32 *)(EtwpLoggerArray + 8 * v13 + 4));
        LOBYTE(v12) = 0;
        if ( BaseAddress )
          EtwpFreeLoggerContext(v3);
        v6 = Handle;
        v3 = 0;
        if ( Handle )
        {
          ZwWaitForSingleObject(Handle, 0, 0);
          NtClose(v6);
        }
      }
      else
      {
        PrivateLoggerContext = RtlNtStatusToDosError(v5);
      }
    }
    if ( v8 && v3 )
    {
      v3[68] = v10;
      v3[69] = v11;
    }
    if ( (_BYTE)v12 )
      _InterlockedDecrement((volatile signed __int32 *)(EtwpLoggerArray + 8 * v13 + 4));
  }
  return PrivateLoggerContext;
}
