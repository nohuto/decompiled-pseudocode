/*
 * XREFs of _RtlpTpIoDllLoaded@4 @ 0x4B385807
 * Callers:
 *     _RtlpTpIoDllNotification@12 @ 0x4B385910 (_RtlpTpIoDllNotification@12.c)
 * Callees:
 *     _RtlDelete@4 @ 0x4B2A7FC0 (_RtlDelete@4.c)
 *     _TppPoolpDereferenceGlobalPool@8 @ 0x4B2B26D2 (_TppPoolpDereferenceGlobalPool@8.c)
 *     _RtlAcquireSRWLockExclusive@4 @ 0x4B2C22E0 (_RtlAcquireSRWLockExclusive@4.c)
 *     _RtlReleaseSRWLockExclusive@4 @ 0x4B2C2480 (_RtlReleaseSRWLockExclusive@4.c)
 *     _RtlFreeAnsiString@4 @ 0x4B2C3B40 (_RtlFreeAnsiString@4.c)
 *     _RtlFreeHeap@12 @ 0x4B2C3B70 (_RtlFreeHeap@12.c)
 *     __SEH_prolog4 @ 0x4B307AC4 (__SEH_prolog4.c)
 *     _TppRaiseInvalidParameter@0 @ 0x4B3848BD (_TppRaiseInvalidParameter@0.c)
 *     _RtlpTpIoDllLoaded@4 @ 0x4B385807 (_RtlpTpIoDllLoaded@4.c)
 */

signed __int32 __thiscall RtlpTpIoDllLoaded(_DWORD *this, int a2)
{
  int v3; // esi
  int *v4; // ecx
  int *v5; // edi
  unsigned int v6; // edx
  signed __int32 result; // eax
  int *v8; // [esp+10h] [ebp-20h]
  int v9; // [esp+14h] [ebp-1Ch]

  v3 = 0;
  RtlAcquireSRWLockExclusive(&RtlpTpIoTreeLock);
  v4 = (int *)RtlpTpIoTree;
  while ( 1 )
  {
    v8 = v4;
    if ( !v4 )
      break;
    v5 = v4 - 14;
    v6 = *(v4 - 14);
    if ( v6 < this[3] )
      goto LABEL_7;
    if ( v6 >= this[3] + this[4] )
    {
      if ( v6 >= this[3] )
        v4 = (int *)v4[1];
      else
LABEL_7:
        v4 = (int *)v4[2];
    }
    else
    {
      v4 = RtlDelete(v4);
      RtlpTpIoTree = (int)v4;
      *v8 = v3;
      v3 = (int)v5;
    }
  }
  result = RtlReleaseSRWLockExclusive(&RtlpTpIoTreeLock);
  while ( v3 )
  {
    v9 = *(_DWORD *)(v3 + 56);
    if ( *(_DWORD *)(v3 + 48) != TppPoolpGlobalPool || NtCurrentPeb()->Ldr->ShutdownInProgress )
    {
      if ( !NtCurrentPeb()->Ldr->ShutdownInProgress )
        TppRaiseInvalidParameter();
    }
    else
    {
      TppPoolpDereferenceGlobalPool((signed __int32 **)&TppPoolpGlobalPool, (int)&TppPoolpGlobalPoolLock);
    }
    RtlFreeAnsiString((PUNICODE_STRING)(v3 + 72));
    result = RtlFreeHeap((int)NtCurrentPeb()->ProcessHeap, 0, v3);
    v3 = v9;
  }
  return result;
}
