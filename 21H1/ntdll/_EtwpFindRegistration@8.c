/*
 * XREFs of _EtwpFindRegistration@8 @ 0x4B2AE6F5
 * Callers:
 *     _EtwDeliverDataBlock@4 @ 0x4B2AE4B0 (_EtwDeliverDataBlock@4.c)
 * Callees:
 *     _EtwpRegistrationCompare@8 @ 0x4B2C1ADC (_EtwpRegistrationCompare@8.c)
 *     _RtlAcquireSRWLockExclusive@4 @ 0x4B2C22E0 (_RtlAcquireSRWLockExclusive@4.c)
 *     _RtlReleaseSRWLockExclusive@4 @ 0x4B2C2480 (_RtlReleaseSRWLockExclusive@4.c)
 *     _RtlTryAcquireSRWLockShared@4 @ 0x4B2EA860 (_RtlTryAcquireSRWLockShared@4.c)
 */

_DWORD *__fastcall EtwpFindRegistration(int a1, __int16 a2)
{
  unsigned int v2; // esi
  int v3; // ebx
  _DWORD *v4; // edi
  int v5; // eax
  unsigned int v6; // eax
  _DWORD **v8; // eax
  _DWORD *v9; // ecx
  _DWORD *i; // ecx
  int v11; // [esp+10h] [ebp-8h] BYREF
  __int16 v12; // [esp+14h] [ebp-4h]

  v11 = a1;
  v12 = a2;
  RtlAcquireSRWLockExclusive(&EtwpProvLock);
  v2 = EtwpRegistrationTable;
  if ( (dword_4B3A68B0 & 1) != 0 && EtwpRegistrationTable )
    v2 = (unsigned int)&EtwpRegistrationTable ^ EtwpRegistrationTable;
  v3 = dword_4B3A68B0 & 1;
  v4 = 0;
  while ( v2 )
  {
    v5 = EtwpRegistrationCompare(&v11, v2);
    if ( v5 < 0 )
      goto LABEL_10;
    if ( v5 <= 0 )
    {
      v4 = (_DWORD *)v2;
LABEL_10:
      v6 = *(_DWORD *)v2;
      goto LABEL_11;
    }
    v6 = *(_DWORD *)(v2 + 4);
LABEL_11:
    if ( v3 && v6 )
      v2 ^= v6;
    else
      v2 = v6;
  }
  if ( v4 )
  {
    while ( !(unsigned __int8)RtlTryAcquireSRWLockShared(v4 + 10) )
    {
      v8 = (_DWORD **)v4[1];
      v9 = v4;
      if ( v8 )
      {
        v4 = (_DWORD *)v4[1];
        for ( i = *v8; i; i = (_DWORD *)*i )
          v4 = i;
      }
      else
      {
        while ( 1 )
        {
          v4 = (_DWORD *)(v4[2] & 0xFFFFFFFC);
          if ( !v4 || (_DWORD *)*v4 == v9 )
            break;
          v9 = v4;
        }
      }
      if ( !v4 || EtwpRegistrationCompare(&v11, v4) )
        goto LABEL_18;
    }
  }
  else
  {
LABEL_18:
    v4 = 0;
  }
  RtlReleaseSRWLockExclusive(&EtwpProvLock);
  return v4;
}
