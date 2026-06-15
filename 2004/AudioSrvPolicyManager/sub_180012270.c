/*
 * XREFs of sub_180012270 @ 0x180012270
 * Callers:
 *     sub_18001F228 @ 0x18001F228 (sub_18001F228.c)
 * Callees:
 *     sub_18000FBC8 @ 0x18000FBC8 (sub_18000FBC8.c)
 *     sub_18001A330 @ 0x18001A330 (sub_18001A330.c)
 *     __security_check_cookie @ 0x1800396C0 (__security_check_cookie.c)
 */

void __fastcall sub_180012270(__int64 a1)
{
  _QWORD *v2; // rbx
  _DWORD *v3; // rdi
  DWORD CurrentProcessId; // eax
  __int64 v5; // rdx
  __int64 v6; // [rsp+20h] [rbp-50h]
  LPCRITICAL_SECTION lpCriticalSection; // [rsp+30h] [rbp-40h] BYREF
  char v8; // [rsp+38h] [rbp-38h]
  int v9; // [rsp+40h] [rbp-30h] BYREF
  __int128 v10; // [rsp+44h] [rbp-2Ch]
  __int64 v11; // [rsp+54h] [rbp-1Ch]
  int v12; // [rsp+5Ch] [rbp-14h]
  char v13; // [rsp+60h] [rbp-10h]

  v8 = 0;
  lpCriticalSection = (LPCRITICAL_SECTION)(a1 + 32);
  sub_18001A330(&lpCriticalSection);
  v2 = *(_QWORD **)(a1 + 72);
  while ( v2 )
  {
    v3 = (_DWORD *)v2[2];
    v2 = (_QWORD *)*v2;
    if ( v3[122] && !v3[112] )
    {
      if ( off_18004F000 != (_UNKNOWN *)&off_18004F000
        && (*((_DWORD *)off_18004F000 + 7) & 0x40000000) != 0
        && *((_BYTE *)off_18004F000 + 25) >= 4u )
      {
        LODWORD(v6) = v3[48];
        sub_18000FBC8(*((_QWORD *)off_18004F000 + 2), 0x1Eu, &stru_180043390, *(const wchar_t **)(a1 + 24), v6);
      }
      v9 = 33;
      v11 = 0LL;
      v10 = 0LL;
      LODWORD(v10) = 0x10000;
      v12 = 0;
      v13 = 0;
      CurrentProcessId = GetCurrentProcessId();
      v5 = (unsigned int)v3[48];
      *(_QWORD *)((char *)&v10 + 4) = CurrentProcessId;
      HIDWORD(v11) = 1;
      MMDevAPI_12(&v9, v5);
    }
  }
  if ( v8 )
    LeaveCriticalSection(lpCriticalSection);
}
