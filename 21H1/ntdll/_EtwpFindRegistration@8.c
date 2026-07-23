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

_RTL_SRWLOCK *__fastcall EtwpFindRegistration(int a1, __int16 a2)
{
  _RTL_BALANCED_NODE *Root; // esi
  int v3; // ebx
  _RTL_SRWLOCK *v4; // edi
  int v5; // eax
  _RTL_BALANCED_NODE *v6; // eax
  _RTL_SRWLOCK **Value; // eax
  _RTL_SRWLOCK *v9; // ecx
  _RTL_SRWLOCK *i; // ecx
  int v11; // [esp+10h] [ebp-8h] BYREF
  __int16 v12; // [esp+14h] [ebp-4h]

  v11 = a1;
  v12 = a2;
  RtlAcquireSRWLockExclusive(&EtwpProvLock);
  Root = EtwpRegistrationTable.Root;
  if ( (*(_BYTE *)&EtwpRegistrationTable.0 & 1) != 0 && EtwpRegistrationTable.Root )
    Root = (_RTL_BALANCED_NODE *)((unsigned int)&EtwpRegistrationTable ^ (unsigned int)EtwpRegistrationTable.Root);
  v3 = *(_BYTE *)&EtwpRegistrationTable.0 & 1;
  v4 = 0;
  while ( Root )
  {
    v5 = EtwpRegistrationCompare(&v11, Root);
    if ( v5 < 0 )
      goto LABEL_10;
    if ( v5 <= 0 )
    {
      v4 = (_RTL_SRWLOCK *)Root;
LABEL_10:
      v6 = Root->Children[0];
      goto LABEL_11;
    }
    v6 = Root->Children[1];
LABEL_11:
    if ( v3 && v6 )
      Root = (_RTL_BALANCED_NODE *)((unsigned int)v6 ^ (unsigned int)Root);
    else
      Root = v6;
  }
  if ( v4 )
  {
    while ( !RtlTryAcquireSRWLockShared(v4 + 10) )
    {
      Value = (_RTL_SRWLOCK **)v4[1].Value;
      v9 = v4;
      if ( Value )
      {
        v4 = (_RTL_SRWLOCK *)v4[1].Value;
        for ( i = *Value; i; i = (_RTL_SRWLOCK *)i->Value )
          v4 = i;
      }
      else
      {
        while ( 1 )
        {
          v4 = (_RTL_SRWLOCK *)(v4[2].Value & 0xFFFFFFFC);
          if ( !v4 || (_RTL_SRWLOCK *)v4->Value == v9 )
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
