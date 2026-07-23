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

_RTL_BALANCED_NODE *__thiscall EtwpFindGuidEntry(void *this)
{
  int Root; // esi
  int v2; // ebx
  _RTL_BALANCED_NODE *v3; // edi
  int v4; // eax
  int v5; // eax
  _RTL_BALANCED_NODE *v7; // eax
  _RTL_BALANCED_NODE *v8; // ecx
  _RTL_BALANCED_NODE *i; // ecx
  size_t v10; // [esp-4h] [ebp-14h]

  RtlAcquireSRWLockExclusive(&EtwpProvLock);
  Root = (int)EtwpGuidEntryTable.Root;
  if ( (*(_BYTE *)&EtwpGuidEntryTable.0 & 1) != 0 && EtwpGuidEntryTable.Root )
    Root = (unsigned int)&EtwpGuidEntryTable ^ (unsigned int)EtwpGuidEntryTable.Root;
  v2 = *(_BYTE *)&EtwpGuidEntryTable.0 & 1;
  v3 = 0;
  while ( Root )
  {
    v4 = EtwpGuidEntryCompare(this, Root);
    if ( v4 < 0 )
      goto LABEL_10;
    if ( v4 <= 0 )
    {
      v3 = (_RTL_BALANCED_NODE *)Root;
LABEL_10:
      v5 = *(_DWORD *)Root;
      goto LABEL_11;
    }
    v5 = *(_DWORD *)(Root + 4);
LABEL_11:
    if ( v2 && v5 )
      Root ^= v5;
    else
      Root = v5;
  }
  if ( v3 )
  {
    while ( !(unsigned __int8)EtwpReferenceUmGuidEntry(v3) )
    {
      v7 = v3->Children[1];
      v8 = v3;
      if ( v7 )
      {
        v3 = v3->Children[1];
        for ( i = v7->Children[0]; i; i = i->Children[0] )
          v3 = i;
      }
      else
      {
        while ( 1 )
        {
          v3 = (_RTL_BALANCED_NODE *)(v3->ParentValue & 0xFFFFFFFC);
          if ( !v3 || v3->Children[0] == v8 )
            break;
          v8 = v3;
        }
      }
      if ( v3 )
      {
        LODWORD(v10) = 16;
        if ( !memcmp(this, &v3[1], v10) )
          continue;
      }
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
