/*
 * XREFs of sub_1800392B0 @ 0x1800392B0
 * Callers:
 *     sub_180038680 @ 0x180038680 (sub_180038680.c)
 *     sub_18003A930 @ 0x18003A930 (sub_18003A930.c)
 *     sub_18003AAF0 @ 0x18003AAF0 (sub_18003AAF0.c)
 *     sub_18003B180 @ 0x18003B180 (sub_18003B180.c)
 *     sub_18003B3C0 @ 0x18003B3C0 (sub_18003B3C0.c)
 *     sub_18003C8E0 @ 0x18003C8E0 (sub_18003C8E0.c)
 *     sub_1800A0674 @ 0x1800A0674 (sub_1800A0674.c)
 *     sub_1800A1304 @ 0x1800A1304 (sub_1800A1304.c)
 *     sub_1800AF948 @ 0x1800AF948 (sub_1800AF948.c)
 *     sub_1800CEBF8 @ 0x1800CEBF8 (sub_1800CEBF8.c)
 *     sub_1800D2594 @ 0x1800D2594 (sub_1800D2594.c)
 *     sub_1800D2E9C @ 0x1800D2E9C (sub_1800D2E9C.c)
 * Callees:
 *     <none>
 */

_QWORD *__fastcall sub_1800392B0(__int64 *a1, _QWORD *a2, unsigned int a3)
{
  __int64 *v3; // r9
  __int64 *v4; // rax
  __int64 *v5; // rcx
  __int64 v6; // rcx

  v3 = (__int64 *)*a1;
  v4 = (__int64 *)*a1;
  v5 = *(__int64 **)(*a1 + 8);
  if ( *((_BYTE *)v5 + 25) )
    goto LABEL_8;
  do
  {
    if ( *((_DWORD *)v5 + 8) >= a3 )
    {
      v4 = v5;
      v5 = (__int64 *)*v5;
    }
    else
    {
      v5 = (__int64 *)v5[2];
    }
  }
  while ( !*((_BYTE *)v5 + 25) );
  if ( v4 == v3 || a3 < *((_DWORD *)v4 + 8) )
LABEL_8:
    v4 = v3;
  *a2 = 0LL;
  a2[1] = 0LL;
  if ( v4 != v3 )
  {
    v6 = v4[6];
    if ( v6 )
      _InterlockedIncrement((volatile signed __int32 *)(v6 + 8));
    *a2 = v4[5];
    a2[1] = v4[6];
  }
  return a2;
}
