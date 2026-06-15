/*
 * XREFs of sub_180021F84 @ 0x180021F84
 * Callers:
 *     sub_180021E3C @ 0x180021E3C (sub_180021E3C.c)
 * Callees:
 *     sub_1800050FC @ 0x1800050FC (sub_1800050FC.c)
 *     sub_180005724 @ 0x180005724 (sub_180005724.c)
 *     sub_180017E30 @ 0x180017E30 (sub_180017E30.c)
 *     sub_180021D00 @ 0x180021D00 (sub_180021D00.c)
 *     sub_180039D98 @ 0x180039D98 (sub_180039D98.c)
 */

__int64 __fastcall sub_180021F84(__int64 a1, __int64 a2, __int64 a3, int a4, LPVOID **a5)
{
  int v5; // ebx
  _QWORD *v6; // r10
  LPVOID *v7; // rcx
  LPVOID *v8; // rdi
  __int64 result; // rax
  ATL::CAtlException *v10; // rbx
  LPVOID *v11; // [rsp+20h] [rbp-18h] BYREF
  ATL::CAtlException *v12; // [rsp+28h] [rbp-10h] BYREF
  int v13; // [rsp+40h] [rbp+8h]

  v5 = 0;
  v11 = 0LL;
  v6 = (_QWORD *)qword_18004FF68;
  while ( v6 )
  {
    v7 = (LPVOID *)v6[2];
    v6 = (_QWORD *)*v6;
    v11 = v7;
    if ( *((_DWORD *)v7 + 2) == a4 && v7[2] == (LPVOID)a3 )
      goto LABEL_9;
  }
  v5 = sub_180021D00(a2, a3, a4, &v11);
  if ( v5 < 0 )
    goto LABEL_10;
  try
  {
    v5 = 0;
    sub_180017E30(&qword_18004FF68, &v11);
  }
  catch ( ATL::CAtlException *v12 )
  {
    v10 = v12;
    if ( *(_DWORD *)v12 == -1073741571 )
      o__resetstkoflw();
    v13 = *(_DWORD *)v10;
    v5 = *(_DWORD *)v10;
    if ( v13 >= 0 )
      goto LABEL_8;
LABEL_10:
    v8 = v11;
LABEL_11:
    if ( v8 )
    {
      if ( *v8 )
      {
        CoTaskMemFree(*v8);
        *v8 = 0LL;
      }
      sub_180039D98(v8);
    }
    if ( v5 < 0 )
    {
      if ( off_18004F000 != (_UNKNOWN *)&off_18004F000
        && (*((_DWORD *)off_18004F000 + 7) & 0x40000000) != 0
        && *((_BYTE *)off_18004F000 + 25) >= 2u )
      {
        sub_1800050FC(*((_QWORD *)off_18004F000 + 2), 0x11u, &stru_1800447D0, v5);
      }
      sub_180005724("CHostedAppInteractivityManager::GetCumulativeHostedAppInteractivity", 464, v5);
    }
    result = (unsigned int)v5;
  }
LABEL_8:
  v7 = v11;
LABEL_9:
  *a5 = v7;
  v8 = 0LL;
  goto LABEL_11;
}
