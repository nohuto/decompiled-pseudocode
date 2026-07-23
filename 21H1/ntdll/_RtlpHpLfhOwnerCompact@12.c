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

void __fastcall RtlpHpLfhOwnerCompact(int a1, int a2, int a3)
{
  unsigned int v4; // ebx
  unsigned int i; // edi
  _DWORD **v6; // edi
  _RTL_SRWLOCK *v7; // ebx
  _DWORD *v8; // esi
  _RTL_SRWLOCK *v9; // [esp+Ch] [ebp-8h]

  if ( (*(_BYTE *)a2 & 1) != 0 )
  {
    v4 = *(unsigned __int8 *)(a2 + 2);
    for ( i = 0; i < v4; ++i )
      RtlpHpLfhOwnerCompact(a3);
  }
  v6 = (_DWORD **)(a2 + 12);
  if ( *v6 != v6 || *(_DWORD *)(a2 + 20) != a2 + 20 )
  {
    v7 = (_RTL_SRWLOCK *)(a2 + 8);
    v9 = (_RTL_SRWLOCK *)(a2 + 8);
    RtlAcquireSRWLockShared((PRTL_SRWLOCK)(a2 + 8));
    v8 = *v6;
    if ( *v6 != v6 )
    {
      do
      {
        RtlpHpLfhSubsegmentDecommitPages(-1, 1, a3);
        v8 = (_DWORD *)*v8;
      }
      while ( v8 != v6 );
      v7 = v9;
    }
    RtlReleaseSRWLockShared(v7);
  }
}
