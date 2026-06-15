/*
 * XREFs of sub_180021BB4 @ 0x180021BB4
 * Callers:
 *     sub_180021A3C @ 0x180021A3C (sub_180021A3C.c)
 * Callees:
 *     sub_1800050FC @ 0x1800050FC (sub_1800050FC.c)
 *     sub_180005724 @ 0x180005724 (sub_180005724.c)
 *     sub_180017E30 @ 0x180017E30 (sub_180017E30.c)
 *     sub_180021D00 @ 0x180021D00 (sub_180021D00.c)
 *     sub_180039D98 @ 0x180039D98 (sub_180039D98.c)
 */

__int64 __fastcall sub_180021BB4(__int64 *a1, __int64 a2, LPVOID a3, unsigned int a4, LPVOID **a5)
{
  int v9; // ebx
  _QWORD *v10; // rsi
  LPVOID *v11; // rdi
  LPVOID *v12; // rdi
  __int64 result; // rax
  ATL::CAtlException *v14; // rbx
  LPVOID *v15; // [rsp+20h] [rbp-38h] BYREF
  ATL::CAtlException *v16; // [rsp+28h] [rbp-30h] BYREF
  int v17; // [rsp+60h] [rbp+8h]

  v9 = 0;
  v15 = 0LL;
  v10 = (_QWORD *)*a1;
  while ( v10 )
  {
    v11 = (LPVOID *)v10[2];
    v10 = (_QWORD *)*v10;
    v15 = v11;
    if ( *((_DWORD *)v11 + 2) == a4 && v11[2] == a3 && !(unsigned int)o__wcsicmp(*v11, a2) )
      goto LABEL_10;
  }
  v9 = sub_180021D00(a2, a3, a4, &v15);
  if ( v9 < 0 )
    goto LABEL_11;
  try
  {
    v9 = 0;
    sub_180017E30(a1, &v15);
  }
  catch ( ATL::CAtlException *v16 )
  {
    v14 = v16;
    if ( *(_DWORD *)v16 == -1073741571 )
      o__resetstkoflw();
    v17 = *(_DWORD *)v14;
    v9 = *(_DWORD *)v14;
    if ( v17 >= 0 )
      goto LABEL_9;
LABEL_11:
    v12 = v15;
LABEL_12:
    if ( v12 )
    {
      if ( *v12 )
      {
        CoTaskMemFree(*v12);
        *v12 = 0LL;
      }
      sub_180039D98(v12);
    }
    if ( v9 < 0 )
    {
      if ( off_18004F000 != (_UNKNOWN *)&off_18004F000
        && (*((_DWORD *)off_18004F000 + 7) & 0x40000000) != 0
        && *((_BYTE *)off_18004F000 + 25) >= 2u )
      {
        sub_1800050FC(*((_QWORD *)off_18004F000 + 2), 0xDu, &stru_1800447D0, v9);
      }
      sub_180005724("CPickerHostContext::GetHostedAppInteractivity", 261, v9);
    }
    result = (unsigned int)v9;
  }
LABEL_9:
  v11 = v15;
LABEL_10:
  *a5 = v11;
  v12 = 0LL;
  goto LABEL_12;
}
