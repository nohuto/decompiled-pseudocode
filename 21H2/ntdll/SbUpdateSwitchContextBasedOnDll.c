/*
 * XREFs of SbUpdateSwitchContextBasedOnDll @ 0x18003DE04
 * Callers:
 *     LdrpSendPostSnapNotifications @ 0x18003DC0C (LdrpSendPostSnapNotifications.c)
 *     LdrpUnloadNode @ 0x18006B528 (LdrpUnloadNode.c)
 * Callees:
 *     RtlReleaseSRWLockExclusive @ 0x180012C70 (RtlReleaseSRWLockExclusive.c)
 *     RtlAcquireSRWLockExclusive @ 0x1800290A0 (RtlAcquireSRWLockExclusive.c)
 *     SbpDetermineDllContext @ 0x18003DA14 (SbpDetermineDllContext.c)
 *     SbGetContextDetailsById @ 0x18003E058 (SbGetContextDetailsById.c)
 *     SbGetContextDetailsByGuid @ 0x18003E080 (SbGetContextDetailsByGuid.c)
 *     SbObtainTraceHandle @ 0x18007F2A4 (SbObtainTraceHandle.c)
 *     SbpTraceContextUpdate @ 0x180113928 (SbpTraceContextUpdate.c)
 */

__int64 __fastcall SbUpdateSwitchContextBasedOnDll(__int64 a1, _DWORD *a2, int a3)
{
  unsigned int v4; // ebx
  char *v5; // rdi
  _DWORD *pShimData; // rcx
  _OWORD *v8; // r15
  unsigned __int64 v9; // r9
  signed int *v10; // rdx
  __int64 v11; // rax
  _QWORD *v12; // r14
  unsigned __int64 v13; // r8
  __int64 v14; // rax
  __int64 v16; // rcx
  unsigned __int64 v17; // r9
  unsigned __int64 v18; // r8
  __int64 v19; // rax
  unsigned __int64 v20; // rdx
  __int64 v21; // rdx
  _DWORD *v22; // rax
  int v23; // r8d
  __int64 v24; // rcx
  __int128 v25; // xmm0
  signed __int32 v26; // edx
  int v27; // ecx
  int v28; // edx
  signed int *v29; // [rsp+30h] [rbp-20h] BYREF
  __int64 v30; // [rsp+38h] [rbp-18h] BYREF
  __int64 v31; // [rsp+40h] [rbp-10h] BYREF
  _DWORD *v32; // [rsp+88h] [rbp+38h] BYREF
  __int64 v33; // [rsp+98h] [rbp+48h] BYREF

  v32 = a2;
  v4 = 0;
  v5 = 0LL;
  pShimData = NtCurrentPeb()->pShimData;
  if ( pShimData )
  {
    v5 = (char *)(pShimData + 504);
    if ( pShimData == (_DWORD *)-2016LL || !pShimData[516] )
      v5 = 0LL;
  }
  v33 = 0LL;
  v30 = 0LL;
  v29 = 0LL;
  v32 = 0LL;
  if ( v5 && a1 )
  {
    SbGetContextDetailsById(4LL, &v30);
    if ( !*((_DWORD *)v5 + 2) )
      return 1;
    v8 = v5 + 64;
    SbGetContextDetailsByGuid(v5 + 64, &v29);
    if ( a3 )
    {
      v4 = 1;
      if ( a3 == 1 )
      {
        v16 = *(_QWORD *)(a1 + 192);
        if ( v16 )
        {
          SbGetContextDetailsByGuid(v16, &v32);
          v18 = (unsigned __int64)v32;
          v19 = 0LL;
          while ( *((_DWORD *)&SbDynamicContextDllCount + 2 * v19) != *v32 )
          {
            if ( (unsigned __int64)++v19 >= 5 )
            {
              v20 = 0LL;
              goto LABEL_27;
            }
          }
          v26 = _InterlockedExchangeAdd((volatile signed __int32 *)&SbDynamicContextDllCount + 2 * v19 + 1, 0xFFFFFFFF);
          v18 = (unsigned __int64)v32;
          v20 = (unsigned int)(v26 - 1);
LABEL_27:
          if ( !(_DWORD)v20 && v29 == (signed int *)v18 )
          {
            RtlAcquireSRWLockExclusive((unsigned __int64)&SbpContextLock, v20, v18, v17);
            v21 = 0LL;
            v22 = &unk_180169744;
            v23 = 0;
            v31 = 0LL;
            v24 = 0LL;
            do
            {
              if ( *v22 )
                break;
              v24 = (unsigned int)(v24 + 1);
              v22 += 2;
            }
            while ( (unsigned int)v24 < 5 );
            if ( (unsigned int)v24 < 5 )
            {
              SbGetContextDetailsById(v24, &v31);
              v21 = v31;
              v23 = 1;
            }
            if ( v23 == 1 )
              v25 = *(_OWORD *)(v21 + 4);
            else
              v25 = *((_OWORD *)v5 + 3);
            *v8 = v25;
            ++*(_QWORD *)v5;
            if ( !(unsigned int)SbObtainTraceHandle(&v33) )
              goto LABEL_20;
            v27 = v33;
            if ( !v33 )
              goto LABEL_20;
            v28 = (_DWORD)v5 + 64;
            goto LABEL_47;
          }
        }
      }
    }
    else
    {
      v4 = SbpDetermineDllContext(*(_QWORD *)(a1 + 48), &v32);
      if ( v4 )
      {
        v10 = v32;
        v11 = 0LL;
        v12 = v32 + 1;
        *(_QWORD *)(a1 + 192) = v32 + 1;
        v4 = 1;
        v13 = (unsigned int)*v10;
        while ( *((_DWORD *)&SbDynamicContextDllCount + 2 * v11) != (_DWORD)v13 )
        {
          if ( (unsigned __int64)++v11 >= 5 )
            goto LABEL_12;
        }
        _InterlockedAdd((volatile signed __int32 *)&SbDynamicContextDllCount + 2 * v11 + 1, 1u);
        v10 = v32;
LABEL_12:
        v14 = *v12 - *(_QWORD *)(v30 + 4);
        if ( *v12 == *(_QWORD *)(v30 + 4) )
          v14 = v12[1] - *(_QWORD *)(v30 + 12);
        if ( v14
          && *v10 < *v29
          && (*((unsigned __int16 *)v10 + 11) | ((unsigned __int64)*((unsigned __int16 *)v10 + 10) << 16)) >= *((_QWORD *)v5 + 5) )
        {
          RtlAcquireSRWLockExclusive((unsigned __int64)&SbpContextLock, (unsigned __int64)v10, v13, v9);
          ++*(_QWORD *)v5;
          *v8 = *(_OWORD *)v12;
          if ( !(unsigned int)SbObtainTraceHandle(&v33) )
            goto LABEL_20;
          v27 = v33;
          if ( !v33 )
            goto LABEL_20;
          v28 = (int)v12;
LABEL_47:
          SbpTraceContextUpdate(v27, v28, 1, *(unsigned __int16 *)(a1 + 72), *(_QWORD *)(a1 + 80));
LABEL_20:
          ++*(_QWORD *)v5;
          RtlReleaseSRWLockExclusive(&SbpContextLock);
        }
      }
    }
  }
  return v4;
}
