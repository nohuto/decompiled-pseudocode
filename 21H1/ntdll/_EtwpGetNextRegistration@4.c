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

unsigned int __thiscall EtwpGetNextRegistration(unsigned int this)
{
  char v1; // bl
  unsigned int v3; // esi
  unsigned int v4; // eax
  int i; // esi
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
    v3 = *(_DWORD *)(this + 4);
    v4 = this;
    if ( v3 )
    {
      v6 = *(_DWORD **)v3;
      if ( *(_DWORD *)v3 )
      {
        do
        {
          v3 = (unsigned int)v6;
          v6 = (_DWORD *)*v6;
        }
        while ( v6 );
      }
    }
    else
    {
      for ( i = *(_DWORD *)(this + 8); ; i = *(_DWORD *)(v3 + 8) )
      {
        v3 = i & 0xFFFFFFFC;
        if ( !v3 || *(_DWORD *)v3 == v4 )
          break;
        v4 = v3;
      }
    }
  }
  else if ( (dword_4B3A68B0 & 1) != 0 )
  {
    if ( dword_4B3A68B0 == 1 )
      v3 = 0;
    else
      v3 = dword_4B3A68B0 ^ ((unsigned int)&EtwpRegistrationTable + 1);
  }
  else
  {
    v3 = dword_4B3A68B0;
  }
  while ( v3 )
  {
    v11 = v3;
    if ( RtlTryAcquireSRWLockShared((volatile signed __int32 *)(v3 + 40)) )
    {
      v1 = 1;
      break;
    }
    v8 = *(_DWORD ***)(v3 + 4);
    v9 = v3;
    if ( v8 )
    {
      v3 = *(_DWORD *)(v3 + 4);
      for ( j = *v8; j; j = (_DWORD *)*j )
        v3 = (unsigned int)j;
    }
    else
    {
      while ( 1 )
      {
        v3 = *(_DWORD *)(v3 + 8) & 0xFFFFFFFC;
        if ( !v3 || *(_DWORD *)v3 == v9 )
          break;
        v9 = v3;
      }
    }
  }
  RtlReleaseSRWLockExclusive(&EtwpProvLock);
  if ( this )
    RtlReleaseSRWLockShared((volatile signed __int32 *)(this + 40));
  return v1 != 0 ? v11 : 0;
}
