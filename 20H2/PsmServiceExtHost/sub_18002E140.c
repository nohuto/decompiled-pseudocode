/*
 * XREFs of sub_18002E140 @ 0x18002E140
 * Callers:
 *     sub_18000DF0C @ 0x18000DF0C (sub_18000DF0C.c)
 * Callees:
 *     sub_18002E278 @ 0x18002E278 (sub_18002E278.c)
 *     __security_check_cookie @ 0x180044E30 (__security_check_cookie.c)
 */

__int64 __fastcall sub_18002E140(
        __int64 a1,
        int a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        void **a7,
        __int64 a8,
        __int64 a9,
        __int64 *a10,
        __int64 a11,
        __int64 *a12,
        __int64 a13,
        __int64 a14)
{
  __int64 v15; // rcx
  int v16; // eax
  _WORD *v17; // rcx
  __int64 v18; // rax
  int v19; // edx
  struct _EVENT_DATA_DESCRIPTOR v21; // [rsp+30h] [rbp-C9h] BYREF
  __int64 v22; // [rsp+50h] [rbp-A9h]
  __int64 v23; // [rsp+58h] [rbp-A1h]
  __int64 v24; // [rsp+60h] [rbp-99h]
  __int64 v25; // [rsp+68h] [rbp-91h]
  _WORD *v26; // [rsp+70h] [rbp-89h]
  int v27; // [rsp+78h] [rbp-81h]
  int v28; // [rsp+7Ch] [rbp-7Dh]
  __int64 v29; // [rsp+80h] [rbp-79h]
  __int64 v30; // [rsp+88h] [rbp-71h]
  __int64 v31; // [rsp+90h] [rbp-69h]
  __int64 v32; // [rsp+98h] [rbp-61h]
  __int64 v33; // [rsp+A0h] [rbp-59h]
  int v34; // [rsp+A8h] [rbp-51h]
  int v35; // [rsp+ACh] [rbp-4Dh]
  __int64 v36; // [rsp+B0h] [rbp-49h]
  __int64 v37; // [rsp+B8h] [rbp-41h]
  __int64 v38; // [rsp+C0h] [rbp-39h]
  __int64 v39; // [rsp+C8h] [rbp-31h]
  __int64 v40; // [rsp+D0h] [rbp-29h]
  __int64 v41; // [rsp+D8h] [rbp-21h]
  __int64 v42; // [rsp+E0h] [rbp-19h]
  __int64 v43; // [rsp+E8h] [rbp-11h]

  v42 = a14;
  v40 = a13;
  v43 = 8LL;
  v41 = 8LL;
  v39 = 16LL;
  v15 = *a12;
  v36 = a11;
  v38 = v15;
  v37 = 4LL;
  v16 = *(unsigned __int8 *)(*a10 + 1);
  v33 = *a10;
  v35 = 0;
  v32 = 4LL;
  v30 = 8LL;
  v34 = 4 * v16 + 8;
  v31 = a9;
  v29 = a8;
  v17 = *a7;
  if ( *a7 )
  {
    v18 = -1LL;
    do
      ++v18;
    while ( v17[v18] );
    v19 = 2 * v18 + 2;
  }
  else
  {
    v17 = &unk_180095550;
    v19 = 2;
  }
  v24 = a6;
  v22 = a5;
  v26 = v17;
  v27 = v19;
  v28 = 0;
  v25 = 4LL;
  v23 = 4LL;
  return sub_18002E278((int)&dword_1800B3218, a2, 0, 0, 0xCu, &v21);
}
