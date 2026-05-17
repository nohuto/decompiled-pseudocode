/*
 * XREFs of _SbUpdateSwitchContextBasedOnDll@12 @ 0x4B2B989E
 * Callers:
 *     _LdrpSendPostSnapNotifications@4 @ 0x4B2D0ABB (_LdrpSendPostSnapNotifications@4.c)
 *     _LdrpUnloadNode@4 @ 0x4B2D96F3 (_LdrpUnloadNode@4.c)
 * Callees:
 *     _SbObtainTraceHandle@4 @ 0x4B2B8430 (_SbObtainTraceHandle@4.c)
 *     _SbGetContextDetailsByGuid@8 @ 0x4B2B9A35 (_SbGetContextDetailsByGuid@8.c)
 *     _SbpDetermineDllContext@8 @ 0x4B2B9AA4 (_SbpDetermineDllContext@8.c)
 *     _RtlAcquireSRWLockExclusive@4 @ 0x4B2C22E0 (_RtlAcquireSRWLockExclusive@4.c)
 *     _RtlReleaseSRWLockExclusive@4 @ 0x4B2C2480 (_RtlReleaseSRWLockExclusive@4.c)
 *     _memcmp @ 0x4B2F8860 (_memcmp.c)
 *     _SbpTraceContextUpdate@24 @ 0x4B385D98 (_SbpTraceContextUpdate@24.c)
 *     _SbpRecalculateDynamicContext@4 @ 0x4B385E62 (_SbpRecalculateDynamicContext@4.c)
 */

int __thiscall SbUpdateSwitchContextBasedOnDll(_DWORD *this, int a2)
{
  _DWORD *pShimData; // eax
  int v4; // edx
  char *v5; // ebx
  int *v6; // edi
  int v7; // eax
  char *v8; // ecx
  int v9; // edx
  bool v11; // cf
  void *v12; // ecx
  int v13; // eax
  signed __int32 v14; // ecx
  _DWORD *v15; // esi
  _DWORD *v16; // esi
  __int64 v17; // [esp+Ch] [ebp-18h] BYREF
  _DWORD *v18; // [esp+14h] [ebp-10h]
  char *v19; // [esp+18h] [ebp-Ch] BYREF
  int *v20; // [esp+1Ch] [ebp-8h]
  _DWORD *v21; // [esp+20h] [ebp-4h] BYREF

  pShimData = NtCurrentPeb()->pShimData;
  v4 = 0;
  v18 = this;
  v5 = 0;
  if ( pShimData )
  {
    v5 = (char *)(pShimData + 504);
    if ( pShimData == (_DWORD *)-2016 || !pShimData[516] )
      v5 = 0;
  }
  v17 = 0LL;
  v20 = 0;
  v19 = 0;
  v21 = 0;
  if ( v5 && this )
  {
    if ( !*((_DWORD *)v5 + 2) )
      return 1;
    SbGetContextDetailsByGuid(v5 + 64);
    if ( a2 )
    {
      if ( a2 != 1 )
        return 1;
      v12 = (void *)this[25];
      if ( !v12 )
        return 1;
      SbGetContextDetailsByGuid(v12);
      v13 = 0;
      while ( SbDynamicContextDllCount[2 * v13] != *v21 )
      {
        if ( (unsigned int)++v13 >= 5 )
        {
          v14 = 0;
          goto LABEL_26;
        }
      }
      v14 = _InterlockedDecrement(&dword_4B3A38D4[2 * v13]);
LABEL_26:
      if ( v14 )
        return 1;
      RtlAcquireSRWLockExclusive(&SbpContextLock);
      if ( SbpRecalculateDynamicContext(&v19) == 1 )
        v15 = v19 + 4;
      else
        v15 = v5 + 48;
      *((_DWORD *)v5 + 16) = *v15;
      v16 = v15 + 1;
      *((_DWORD *)v5 + 17) = *v16++;
      *((_DWORD *)v5 + 18) = *v16;
      *((_DWORD *)v5 + 19) = v16[1];
      ++*(_QWORD *)v5;
      if ( !SbObtainTraceHandle((unsigned int *)&v17) || !v17 )
        goto LABEL_19;
      goto LABEL_37;
    }
    v4 = SbpDetermineDllContext(this[6], &v21);
    if ( v4 )
    {
      v6 = v21;
      v7 = 0;
      v8 = (char *)(v21 + 1);
      this[25] = v21 + 1;
      v9 = *v6;
      v19 = v8;
      while ( SbDynamicContextDllCount[2 * v7] != v9 )
      {
        if ( (unsigned int)++v7 >= 5 )
          goto LABEL_12;
      }
      _InterlockedIncrement(&dword_4B3A38D4[2 * v7]);
LABEL_12:
      if ( !memcmp(v8, dword_4B281134, 0x10u)
        || *v6 >= *v20
        || (((unsigned __int64)*((unsigned __int16 *)v6 + 10) << 16) | *((unsigned __int16 *)v6 + 11)) < *((_QWORD *)v5 + 5) )
      {
        return 1;
      }
      RtlAcquireSRWLockExclusive(&SbpContextLock);
      v11 = __CFADD__((*(_DWORD *)v5)++, 1);
      *((_DWORD *)v5 + 1) += v11;
      *((_DWORD *)v5 + 16) = v6[1];
      *((_DWORD *)v5 + 17) = v6[2];
      *((_DWORD *)v5 + 18) = v6[3];
      *((_DWORD *)v5 + 19) = v6[4];
      if ( !SbObtainTraceHandle((unsigned int *)&v17) || !v17 )
        goto LABEL_19;
LABEL_37:
      SbpTraceContextUpdate(v17, HIDWORD(v17), *((_WORD *)v18 + 18), v18[10]);
LABEL_19:
      v11 = __CFADD__((*(_DWORD *)v5)++, 1);
      *((_DWORD *)v5 + 1) += v11;
      RtlReleaseSRWLockExclusive(&SbpContextLock);
      return 1;
    }
  }
  return v4;
}
