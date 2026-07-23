/*
 * XREFs of SbUpdateSwitchContextBasedOnDll @ 0x18003DE44
 * Callers:
 *     LdrpSendPostSnapNotifications @ 0x18003DC4C (LdrpSendPostSnapNotifications.c)
 *     LdrpUnloadNode @ 0x18006A4F8 (LdrpUnloadNode.c)
 * Callees:
 *     RtlReleaseSRWLockExclusive @ 0x180012C70 (RtlReleaseSRWLockExclusive.c)
 *     RtlAcquireSRWLockExclusive @ 0x1800290A0 (RtlAcquireSRWLockExclusive.c)
 *     SbpDetermineDllContext @ 0x18003DA54 (SbpDetermineDllContext.c)
 *     SbGetContextDetailsById @ 0x18003E098 (SbGetContextDetailsById.c)
 *     SbGetContextDetailsByGuid @ 0x18003E0C0 (SbGetContextDetailsByGuid.c)
 *     SbObtainTraceHandle @ 0x18007E984 (SbObtainTraceHandle.c)
 *     SbpTraceContextUpdate @ 0x180113A88 (SbpTraceContextUpdate.c)
 */

__int64 __fastcall SbUpdateSwitchContextBasedOnDll(__int64 a1, _DWORD *a2, int a3)
{
  unsigned int v4; // ebx
  char *v5; // rdi
  _DWORD *pShimData; // rcx
  _OWORD *v8; // r15
  _DWORD *v9; // rdx
  __int64 v10; // rax
  _QWORD *v11; // r14
  __int64 v12; // rax
  __int64 v14; // rcx
  _DWORD *v15; // r8
  __int64 v16; // rax
  signed __int32 v17; // edx
  __int64 v18; // rdx
  _DWORD *v19; // rax
  int v20; // r8d
  __int64 v21; // rcx
  __int128 v22; // xmm0
  signed __int32 v23; // edx
  REGHANDLE v24; // rcx
  _DWORD *v25; // [rsp+30h] [rbp-20h] BYREF
  __int64 v26; // [rsp+38h] [rbp-18h] BYREF
  __int64 v27; // [rsp+40h] [rbp-10h] BYREF
  _DWORD *v28; // [rsp+88h] [rbp+38h] BYREF
  REGHANDLE RegHandle; // [rsp+98h] [rbp+48h] BYREF

  v28 = a2;
  v4 = 0;
  v5 = 0LL;
  pShimData = NtCurrentPeb()->pShimData;
  if ( pShimData )
  {
    v5 = (char *)(pShimData + 504);
    if ( pShimData == (_DWORD *)-2016LL || !pShimData[516] )
      v5 = 0LL;
  }
  RegHandle = 0LL;
  v26 = 0LL;
  v25 = 0LL;
  v28 = 0LL;
  if ( v5 && a1 )
  {
    SbGetContextDetailsById(4LL, &v26);
    if ( !*((_DWORD *)v5 + 2) )
      return 1;
    v8 = v5 + 64;
    SbGetContextDetailsByGuid(v5 + 64, &v25);
    if ( a3 )
    {
      v4 = 1;
      if ( a3 == 1 )
      {
        v14 = *(_QWORD *)(a1 + 192);
        if ( v14 )
        {
          SbGetContextDetailsByGuid(v14, &v28);
          v15 = v28;
          v16 = 0LL;
          while ( *((_DWORD *)&SbDynamicContextDllCount + 2 * v16) != *v28 )
          {
            if ( (unsigned __int64)++v16 >= 5 )
            {
              v17 = 0;
              goto LABEL_27;
            }
          }
          v23 = _InterlockedExchangeAdd((volatile signed __int32 *)&SbDynamicContextDllCount + 2 * v16 + 1, 0xFFFFFFFF);
          v15 = v28;
          v17 = v23 - 1;
LABEL_27:
          if ( !v17 && v25 == v15 )
          {
            RtlAcquireSRWLockExclusive(&SbpContextLock);
            v18 = 0LL;
            v19 = &unk_180169744;
            v20 = 0;
            v27 = 0LL;
            v21 = 0LL;
            do
            {
              if ( *v19 )
                break;
              v21 = (unsigned int)(v21 + 1);
              v19 += 2;
            }
            while ( (unsigned int)v21 < 5 );
            if ( (unsigned int)v21 < 5 )
            {
              SbGetContextDetailsById(v21, &v27);
              v18 = v27;
              v20 = 1;
            }
            if ( v20 == 1 )
              v22 = *(_OWORD *)(v18 + 4);
            else
              v22 = *((_OWORD *)v5 + 3);
            *v8 = v22;
            ++*(_QWORD *)v5;
            if ( !(unsigned int)SbObtainTraceHandle(&RegHandle) )
              goto LABEL_20;
            v24 = RegHandle;
            if ( !RegHandle )
              goto LABEL_20;
LABEL_46:
            SbpTraceContextUpdate(v24, *(_QWORD *)(a1 + 80));
LABEL_20:
            ++*(_QWORD *)v5;
            RtlReleaseSRWLockExclusive(&SbpContextLock);
          }
        }
      }
    }
    else
    {
      v4 = SbpDetermineDllContext(*(PACTIVATION_CONTEXT *)(a1 + 48), &v28);
      if ( v4 )
      {
        v9 = v28;
        v10 = 0LL;
        v11 = v28 + 1;
        *(_QWORD *)(a1 + 192) = v28 + 1;
        v4 = 1;
        while ( *((_DWORD *)&SbDynamicContextDllCount + 2 * v10) != *v9 )
        {
          if ( (unsigned __int64)++v10 >= 5 )
            goto LABEL_12;
        }
        _InterlockedAdd((volatile signed __int32 *)&SbDynamicContextDllCount + 2 * v10 + 1, 1u);
        v9 = v28;
LABEL_12:
        v12 = *v11 - *(_QWORD *)(v26 + 4);
        if ( *v11 == *(_QWORD *)(v26 + 4) )
          v12 = v11[1] - *(_QWORD *)(v26 + 12);
        if ( v12
          && *v9 < *v25
          && (*((unsigned __int16 *)v9 + 11) | ((unsigned __int64)*((unsigned __int16 *)v9 + 10) << 16)) >= *((_QWORD *)v5 + 5) )
        {
          RtlAcquireSRWLockExclusive(&SbpContextLock);
          ++*(_QWORD *)v5;
          *v8 = *(_OWORD *)v11;
          if ( !(unsigned int)SbObtainTraceHandle(&RegHandle) )
            goto LABEL_20;
          v24 = RegHandle;
          if ( !RegHandle )
            goto LABEL_20;
          goto LABEL_46;
        }
      }
    }
  }
  return v4;
}
