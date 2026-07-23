/*
 * XREFs of _RtlpStackDbSegmentRemoveRef@8 @ 0x4B38AFF7
 * Callers:
 *     _RtlpStackDbEntryCleanup@8 @ 0x4B38A8FB (_RtlpStackDbEntryCleanup@8.c)
 * Callees:
 *     _RtlAcquireSRWLockExclusive@4 @ 0x4B2C22E0 (_RtlAcquireSRWLockExclusive@4.c)
 *     _RtlReleaseSRWLockExclusive@4 @ 0x4B2C2480 (_RtlReleaseSRWLockExclusive@4.c)
 *     _RtlpHpAppCompatDontChangePolicy@0 @ 0x4B2ED850 (_RtlpHpAppCompatDontChangePolicy@0.c)
 */

void __fastcall RtlpStackDbSegmentRemoveRef(int a1, int a2)
{
  volatile signed __int32 *v4; // edx
  signed __int32 v5; // esi
  signed __int32 i; // eax
  _DWORD *j; // ecx
  int v8; // [esp+Ch] [ebp-4h]

  v4 = (volatile signed __int32 *)(a2 + 8);
  v5 = *v4;
  for ( i = *v4; (i & 0xFFFFFF) != 1; v5 = i )
  {
    i = _InterlockedCompareExchange(v4, v5 ^ (v5 ^ (v5 - 1)) & 0xFFFFFF, v5);
    if ( i == v5 )
      break;
  }
  if ( (v5 & 0xFFFFFFu) <= 1 )
  {
    RtlAcquireSRWLockExclusive((PRTL_SRWLOCK)(a1 + 28));
    if ( (_InterlockedDecrement((volatile signed __int32 *)(a2 + 8)) & 0xFFFFFF) != 0 )
    {
      RtlReleaseSRWLockExclusive((PRTL_SRWLOCK)(a1 + 28));
    }
    else
    {
      v8 = *(_DWORD *)(a2 + 4) & (-1 << (*(_DWORD *)(a1 + 4) & 0x1F));
      for ( j = (_DWORD *)(*(_DWORD *)(a1 + 8)
                         + 4
                         * ((HIBYTE(v8) + 37 * (BYTE2(v8) + 37 * (BYTE1(v8) + 37 * ((unsigned __int8)v8 + 11623883)))) & ((*(_DWORD *)(a1 + 4) >> 5) - 1)));
            (*j & 1) == 0;
            j = (_DWORD *)*j )
      {
        if ( *j == a2 )
        {
          *j = *(_DWORD *)a2;
          --*(_DWORD *)a1;
          *(_DWORD *)a2 |= 0x80000002;
          break;
        }
      }
      RtlReleaseSRWLockExclusive((PRTL_SRWLOCK)(a1 + 28));
      (*(void (__thiscall **)(_DWORD, int, _DWORD))(a1 + 36))(*(_DWORD *)(a1 + 36), a2, *(_DWORD *)(a1 + 40));
    }
  }
}
