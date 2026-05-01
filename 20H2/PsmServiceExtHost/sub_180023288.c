/*
 * XREFs of sub_180023288 @ 0x180023288
 * Callers:
 *     sub_180012D40 @ 0x180012D40 (sub_180012D40.c)
 *     sub_180016DD0 @ 0x180016DD0 (sub_180016DD0.c)
 *     sub_180071918 @ 0x180071918 (sub_180071918.c)
 * Callees:
 *     sub_1800062A4 @ 0x1800062A4 (sub_1800062A4.c)
 *     sub_1800468FC @ 0x1800468FC (sub_1800468FC.c)
 */

__int64 __fastcall sub_180023288(__int64 a1, char a2)
{
  DWORD v2; // esi
  _QWORD *Value; // rbx
  unsigned int v6; // ebx
  __int64 v7; // rcx
  _QWORD *v8; // rax
  char v11; // [rsp+40h] [rbp+8h] BYREF
  char v12; // [rsp+50h] [rbp+18h] BYREF

  v2 = dwTlsIndex;
  if ( dwTlsIndex != -1 )
  {
    Value = TlsGetValue(dwTlsIndex);
    if ( (*(_QWORD *)TlsGetValue(v2) & 0xFFFFFFFFFFFFFFFEuLL) != 0 )
      __int2c();
    *Value |= 2uLL;
    ++Value[2];
  }
  RtlAcquireSRWLockShared(a1);
  v6 = 0;
  if ( (*(_QWORD *)(a1 + 648) & 0x2000000000000LL) != 0 )
  {
    v7 = (*(_QWORD *)(a1 + 600) - 96LL) & -(__int64)(*(_QWORD *)(a1 + 600) != a1 + 600);
    if ( v7 )
    {
      while ( (*(_DWORD *)(v7 + 112) & 0x200) == 0 )
      {
        v7 = sub_1800062A4(v7);
        if ( !v7 )
          goto LABEL_7;
      }
    }
    else
    {
LABEL_7:
      if ( (a2 & 1) == 0 || (sub_1800468FC(a1, &v11, &v12), v11 < 0) && v12 >= 0 )
        v6 = 1;
    }
  }
  if ( dwTlsIndex != -1 )
  {
    v8 = TlsGetValue(dwTlsIndex);
    if ( (*(_BYTE *)v8 & 2) == 0 )
      __int2c();
    if ( v8[2]-- == 1LL )
      *v8 &= ~2uLL;
  }
  RtlReleaseSRWLockShared(a1);
  return v6;
}
