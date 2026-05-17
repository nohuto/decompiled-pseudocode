/*
 * XREFs of _EtwpFindGuidEntry@4 @ 0x4B2ADC68
 * Callers:
 *     _EtwpCheckForPrivatePreEnable@4 @ 0x4B2ADC20 (_EtwpCheckForPrivatePreEnable@4.c)
 *     _EtwDeliverDataBlock@4 @ 0x4B2AE4B0 (_EtwDeliverDataBlock@4.c)
 *     _EtwpUpdateEnableInfoAndCallback@8 @ 0x4B2B0D5F (_EtwpUpdateEnableInfoAndCallback@8.c)
 * Callees:
 *     _RtlAcquireSRWLockExclusive@4 @ 0x4B2C22E0 (_RtlAcquireSRWLockExclusive@4.c)
 *     _RtlReleaseSRWLockExclusive@4 @ 0x4B2C2480 (_RtlReleaseSRWLockExclusive@4.c)
 *     _EtwpGuidEntryCompare@8 @ 0x4B2F1D5B (_EtwpGuidEntryCompare@8.c)
 *     _EtwpReferenceUmGuidEntry@4 @ 0x4B2F2700 (_EtwpReferenceUmGuidEntry@4.c)
 *     _memcmp @ 0x4B2F8860 (_memcmp.c)
 */

_DWORD *__thiscall EtwpFindGuidEntry(void *this)
{
  unsigned int v1; // esi
  int v2; // ebx
  _DWORD *v3; // edi
  int v4; // eax
  unsigned int v5; // eax
  _DWORD **v7; // eax
  _DWORD *v8; // ecx
  _DWORD *i; // ecx

  RtlAcquireSRWLockExclusive(&EtwpProvLock);
  v1 = EtwpGuidEntryTable;
  if ( (dword_4B3A68A8 & 1) != 0 && EtwpGuidEntryTable )
    v1 = (unsigned int)&EtwpGuidEntryTable ^ EtwpGuidEntryTable;
  v2 = dword_4B3A68A8 & 1;
  v3 = 0;
  while ( v1 )
  {
    v4 = EtwpGuidEntryCompare(this, v1);
    if ( v4 < 0 )
      goto LABEL_10;
    if ( v4 <= 0 )
    {
      v3 = (_DWORD *)v1;
LABEL_10:
      v5 = *(_DWORD *)v1;
      goto LABEL_11;
    }
    v5 = *(_DWORD *)(v1 + 4);
LABEL_11:
    if ( v2 && v5 )
      v1 ^= v5;
    else
      v1 = v5;
  }
  if ( v3 )
  {
    while ( !(unsigned __int8)EtwpReferenceUmGuidEntry(v3) )
    {
      v7 = (_DWORD **)v3[1];
      v8 = v3;
      if ( v7 )
      {
        v3 = (_DWORD *)v3[1];
        for ( i = *v7; i; i = (_DWORD *)*i )
          v3 = i;
      }
      else
      {
        while ( 1 )
        {
          v3 = (_DWORD *)(v3[2] & 0xFFFFFFFC);
          if ( !v3 || (_DWORD *)*v3 == v8 )
            break;
          v8 = v3;
        }
      }
      if ( !v3 || memcmp(this, v3 + 3, 0x10u) )
        goto LABEL_16;
    }
  }
  else
  {
LABEL_16:
    v3 = 0;
  }
  RtlReleaseSRWLockExclusive(&EtwpProvLock);
  return v3;
}
