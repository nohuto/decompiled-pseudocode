/*
 * XREFs of _EtwpGetNextRegistration@4 @ 0x4B2EF857
 * Callers:
 *     _EtwDeliverDataBlock@4 @ 0x4B2AE4B0 (_EtwDeliverDataBlock@4.c)
 *     _EtwpDisableTraceProviders@4 @ 0x4B2EDBE4 (_EtwpDisableTraceProviders@4.c)
 *     _EtwEnumerateProcessRegGuids@12 @ 0x4B3802E0 (_EtwEnumerateProcessRegGuids@12.c)
 * Callees:
 *     _RtlReleaseSRWLockShared@4 @ 0x4B2B52B0 (_RtlReleaseSRWLockShared@4.c)
 *     _RtlAcquireSRWLockExclusive@4 @ 0x4B2C22E0 (_RtlAcquireSRWLockExclusive@4.c)
 *     _RtlReleaseSRWLockExclusive@4 @ 0x4B2C2480 (_RtlReleaseSRWLockExclusive@4.c)
 *     _RtlTryAcquireSRWLockShared@4 @ 0x4B2EA860 (_RtlTryAcquireSRWLockShared@4.c)
 */

unsigned int __thiscall EtwpGetNextRegistration(_RTL_SRWLOCK *this)
{
  char v1; // bl
  unsigned int Value; // esi
  _RTL_SRWLOCK *v4; // eax
  unsigned int i; // esi
  _DWORD *v6; // ecx
  _DWORD **v8; // eax
  unsigned int v9; // ecx
  _DWORD *j; // ecx
  unsigned int v11; // [esp+Ch] [ebp-4h]

  v1 = 0;
  v11 = 0;
  RtlAcquireSRWLockExclusive(&EtwpProvLock);
  if ( this )
  {
    Value = this[1].Value;
    v4 = this;
    if ( Value )
    {
      v6 = *(_DWORD **)Value;
      if ( *(_DWORD *)Value )
      {
        do
        {
          Value = (unsigned int)v6;
          v6 = (_DWORD *)*v6;
        }
        while ( v6 );
      }
    }
    else
    {
      for ( i = this[2].Value; ; i = *(_DWORD *)(Value + 8) )
      {
        Value = i & 0xFFFFFFFC;
        if ( !Value || *(_RTL_SRWLOCK **)Value == v4 )
          break;
        v4 = (_RTL_SRWLOCK *)Value;
      }
    }
  }
  else if ( (*(_BYTE *)&EtwpRegistrationTable.0 & 1) != 0 )
  {
    if ( EtwpRegistrationTable.Min == (_RTL_BALANCED_NODE *)1 )
      Value = 0;
    else
      Value = (int)EtwpRegistrationTable.Min ^ ((unsigned int)&EtwpRegistrationTable.Root + 1);
  }
  else
  {
    Value = (unsigned int)EtwpRegistrationTable.Min;
  }
  while ( Value )
  {
    v11 = Value;
    if ( RtlTryAcquireSRWLockShared((PRTL_SRWLOCK)(Value + 40)) )
    {
      v1 = 1;
      break;
    }
    v8 = *(_DWORD ***)(Value + 4);
    v9 = Value;
    if ( v8 )
    {
      Value = *(_DWORD *)(Value + 4);
      for ( j = *v8; j; j = (_DWORD *)*j )
        Value = (unsigned int)j;
    }
    else
    {
      while ( 1 )
      {
        Value = *(_DWORD *)(Value + 8) & 0xFFFFFFFC;
        if ( !Value || *(_DWORD *)Value == v9 )
          break;
        v9 = Value;
      }
    }
  }
  RtlReleaseSRWLockExclusive(&EtwpProvLock);
  if ( this )
    RtlReleaseSRWLockShared(this + 10);
  return v1 != 0 ? v11 : 0;
}
