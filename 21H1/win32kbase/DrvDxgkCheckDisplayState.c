/*
 * XREFs of DrvDxgkCheckDisplayState @ 0x1C0150FB4
 * Callers:
 *     xxxDisplayDiagBlackScreenDetected @ 0x1C012AD20 (xxxDisplayDiagBlackScreenDetected.c)
 * Callees:
 *     __security_check_cookie @ 0x1C00CC180 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C00D2DC0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall DrvDxgkCheckDisplayState(int a1, int a2, __int64 a3, __int64 a4, __int128 *a5, int a6)
{
  int v6; // ecx
  int v7; // ecx
  int v8; // ecx
  int v9; // eax
  _DWORD v11[2]; // [rsp+20h] [rbp-38h] BYREF
  __int64 v12; // [rsp+28h] [rbp-30h]
  __int64 v13; // [rsp+30h] [rbp-28h]
  __int128 v14; // [rsp+38h] [rbp-20h]

  v6 = a1 - 1;
  if ( !v6 )
    goto LABEL_12;
  v7 = v6 - 1;
  if ( !v7 )
  {
    v11[0] = 2;
    goto LABEL_13;
  }
  v8 = v7 - 2;
  if ( v8 )
  {
    if ( v8 == 4 )
      v11[0] = 8;
    else
      v11[0] = 0;
    goto LABEL_13;
  }
  if ( a6 == 2 )
  {
LABEL_12:
    v11[0] = 1;
    goto LABEL_13;
  }
  v9 = 4;
  if ( a6 == 3 )
    v9 = 16;
  v11[0] = v9;
LABEL_13:
  v14 = *a5;
  v11[1] = a2;
  v12 = a3;
  v13 = a4;
  return ((__int64 (__fastcall *)(_DWORD *))qword_1C0252B48)(v11);
}
