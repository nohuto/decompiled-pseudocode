/*
 * XREFs of _RtlpHpLfhOwnerCompact@12 @ 0x4B376814
 * Callers:
 *     _RtlpHpLfhContextCompact@8 @ 0x4B37653C (_RtlpHpLfhContextCompact@8.c)
 *     _RtlpHpLfhOwnerCompact@12 @ 0x4B376814 (_RtlpHpLfhOwnerCompact@12.c)
 * Callees:
 *     _RtlReleaseSRWLockShared@4 @ 0x4B2B52B0 (_RtlReleaseSRWLockShared@4.c)
 *     _RtlAcquireSRWLockShared@4 @ 0x4B2B5380 (_RtlAcquireSRWLockShared@4.c)
 *     _RtlpHpLfhOwnerCompact@12 @ 0x4B376814 (_RtlpHpLfhOwnerCompact@12.c)
 *     _RtlpHpLfhSubsegmentDecommitPages@20 @ 0x4B37719A (_RtlpHpLfhSubsegmentDecommitPages@20.c)
 */

_DWORD *__fastcall RtlpHpLfhOwnerCompact(int a1, int a2, int a3)
{
  unsigned int v4; // ebx
  unsigned int i; // edi
  _DWORD **v6; // edi
  _DWORD *result; // eax
  volatile signed __int32 *v8; // ebx
  _DWORD *v9; // esi
  volatile signed __int32 *v10; // [esp+Ch] [ebp-8h]

  if ( (*(_BYTE *)a2 & 1) != 0 )
  {
    v4 = *(unsigned __int8 *)(a2 + 2);
    for ( i = 0; i < v4; ++i )
      RtlpHpLfhOwnerCompact(a3);
  }
  v6 = (_DWORD **)(a2 + 12);
  if ( *v6 != v6 || (result = (_DWORD *)(a2 + 20), (_DWORD *)*result != result) )
  {
    v8 = (volatile signed __int32 *)(a2 + 8);
    v10 = (volatile signed __int32 *)(a2 + 8);
    RtlAcquireSRWLockShared((volatile signed __int32 *)(a2 + 8));
    v9 = *v6;
    if ( *v6 != v6 )
    {
      do
      {
        RtlpHpLfhSubsegmentDecommitPages(-1, 1, a3);
        v9 = (_DWORD *)*v9;
      }
      while ( v9 != v6 );
      v8 = v10;
    }
    return (_DWORD *)RtlReleaseSRWLockShared(v8);
  }
  return result;
}
