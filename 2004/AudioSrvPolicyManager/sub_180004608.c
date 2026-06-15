/*
 * XREFs of sub_180004608 @ 0x180004608
 * Callers:
 *     sub_1800047D0 @ 0x1800047D0 (sub_1800047D0.c)
 * Callees:
 *     sub_180004AC4 @ 0x180004AC4 (sub_180004AC4.c)
 */

__int64 sub_180004608()
{
  __int64 v0; // rdi
  __int64 i; // rbx
  __int64 v2; // rcx
  __int64 v3; // rdi
  DWORD CurrentThreadId; // r9d
  __int64 v6; // [rsp+38h] [rbp+10h] BYREF

  v0 = qword_18004FCC8;
  i = 0LL;
  if ( qword_18004FCC8 )
  {
    if ( !*(_QWORD *)(qword_18004FCC8 + 8) )
    {
      v2 = *(_QWORD *)qword_18004FCC8;
      v6 = 0LL;
      if ( (int)sub_180004AC4(v2, &v6) >= 0 && !*(_QWORD *)(v0 + 8) )
        *(_QWORD *)(v0 + 8) = v6;
    }
    v3 = (*(_QWORD *)(v0 + 8) + 32LL) & -(__int64)(*(_QWORD *)(v0 + 8) != 0LL);
    if ( v3 )
    {
      CurrentThreadId = GetCurrentThreadId();
      for ( i = *(_QWORD *)(v3 + 8 * (CurrentThreadId % 0xAuLL) + 8); i; i = *(_QWORD *)(i + 8) )
      {
        if ( *(_DWORD *)i == CurrentThreadId )
        {
          i += 16LL;
          break;
        }
      }
      if ( i && !*(_QWORD *)(i + 8) )
        *(_QWORD *)(i + 8) = v3 + 4;
    }
  }
  return i;
}
