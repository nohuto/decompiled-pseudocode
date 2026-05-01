/*
 * XREFs of sub_180025CDC @ 0x180025CDC
 * Callers:
 *     sub_180025C98 @ 0x180025C98 (sub_180025C98.c)
 * Callees:
 *     sub_18001E830 @ 0x18001E830 (sub_18001E830.c)
 *     sub_180023A40 @ 0x180023A40 (sub_180023A40.c)
 */

__int64 __fastcall sub_180025CDC(__int64 a1, int a2)
{
  DWORD v2; // esi
  _QWORD *Value; // rdi
  __int64 v6; // rcx
  __int64 v7; // rdx
  int v9; // [rsp+38h] [rbp+10h] BYREF

  v2 = dwTlsIndex;
  if ( dwTlsIndex != -1 )
  {
    Value = TlsGetValue(dwTlsIndex);
    if ( (*(_QWORD *)TlsGetValue(v2) & 0xFFFFFFFFFFFFFFE0uLL) != 0 )
      __int2c();
    *Value |= 0x20uLL;
    ++Value[6];
  }
  RtlAcquireSRWLockExclusive(a1 + 576);
  *(_DWORD *)(a1 + 584) = GetCurrentThreadId();
  v7 = (*(_DWORD *)(a1 + 616) >> 5) & 7;
  if ( (_DWORD)v7 != a2 && ((_DWORD)v7 != 4 || !a2) )
  {
    if ( a2 )
    {
      v6 = (unsigned int)(a2 - 1);
      if ( a2 == 1 || (v6 = (unsigned int)(a2 - 2), a2 == 2) )
      {
        if ( (_DWORD)v7 == 3 )
          goto LABEL_9;
      }
      else if ( a2 != 3 )
      {
        goto LABEL_9;
      }
    }
    v9 = *(_DWORD *)(a1 + 616) ^ ((unsigned __int8)*(_DWORD *)(a1 + 616) ^ (unsigned __int8)(32 * a2)) & 0xE0;
    sub_180023A40(a1, (__int64)&v9);
  }
LABEL_9:
  sub_18001E830(v6, v7, 5u);
  *(_DWORD *)(a1 + 584) = 0;
  return RtlReleaseSRWLockExclusive(a1 + 576);
}
