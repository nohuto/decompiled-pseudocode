/*
 * XREFs of sub_1800F40E0 @ 0x1800F40E0
 * Callers:
 *     <none>
 * Callees:
 *     sub_180008448 @ 0x180008448 (sub_180008448.c)
 *     sub_18000C5F0 @ 0x18000C5F0 (sub_18000C5F0.c)
 *     sub_180033A70 @ 0x180033A70 (sub_180033A70.c)
 *     sub_180066980 @ 0x180066980 (sub_180066980.c)
 *     __security_check_cookie @ 0x180069A70 (__security_check_cookie.c)
 *     memset @ 0x18006AB8C (memset.c)
 *     sub_18006D26C @ 0x18006D26C (sub_18006D26C.c)
 *     sub_1800B779C @ 0x1800B779C (sub_1800B779C.c)
 *     sub_1800F26E0 @ 0x1800F26E0 (sub_1800F26E0.c)
 *     sub_1800F31F0 @ 0x1800F31F0 (sub_1800F31F0.c)
 *     sub_1800F357C @ 0x1800F357C (sub_1800F357C.c)
 *     sub_180139A5C @ 0x180139A5C (sub_180139A5C.c)
 */

_BOOL8 __fastcall sub_1800F40E0(__int64 a1, __int64 a2, int a3, _OWORD *a4, int a5, unsigned int a6)
{
  unsigned int v10; // r15d
  void *v11; // rsi
  __int64 v12; // rcx
  int v13; // eax
  __int64 v14; // rcx
  int v15; // r8d
  int v16; // r9d
  int v17; // ebx
  __int64 v18; // rcx
  int v19; // eax
  int v20; // eax
  __int64 v21; // rcx
  _DWORD *v22; // rcx
  __int64 v23; // r8
  __int64 v24; // r9
  unsigned __int8 *v25; // rdx
  void **v26; // rax
  __int64 v27; // rcx
  BOOL v28; // ebx
  __int64 v30; // [rsp+28h] [rbp-D8h]
  int v31; // [rsp+40h] [rbp-C0h] BYREF
  unsigned int v32; // [rsp+44h] [rbp-BCh] BYREF
  void *v33; // [rsp+48h] [rbp-B8h] BYREF
  __int64 v34; // [rsp+50h] [rbp-B0h] BYREF
  LPCRITICAL_SECTION lpCriticalSection; // [rsp+58h] [rbp-A8h] BYREF
  char v36; // [rsp+60h] [rbp-A0h]
  _OWORD v37[78]; // [rsp+70h] [rbp-90h] BYREF
  _UNKNOWN *retaddr; // [rsp+598h] [rbp+498h]

  sub_180066980((__int64)&lpCriticalSection, (struct _RTL_CRITICAL_SECTION *)(a1 + 24));
  memset(&v37[1], 0, 0x4D0uLL);
  v34 = 0LL;
  v10 = 0;
  v31 = 1;
  v11 = 0LL;
  v32 = 0;
  v33 = 0LL;
  v13 = sub_1800F31F0(v12, a2, &v31);
  v17 = v13;
  if ( v13 < 0 )
    sub_18006D26C(
      (int)retaddr,
      897,
      (int)"avcore\\audiocore\\server\\audiosrv\\dll\\constraintmodelresourcemanager.cpp",
      v13);
  if ( v17 >= 0 )
  {
    if ( v31 )
    {
      v18 = *(_QWORD *)(a1 + 16);
      v37[0] = *a4;
      v19 = sub_180139A5C(v18, a2, v15, (unsigned int)v37, a5, (__int64)&v32, (__int64)&v33);
      v17 = v19;
      if ( v19 < 0 )
        sub_18006D26C(
          (int)retaddr,
          901,
          (int)"avcore\\audiocore\\server\\audiosrv\\dll\\constraintmodelresourcemanager.cpp",
          v19);
      v10 = v32;
      v11 = v33;
    }
    if ( v17 < 0 || !v10 )
      goto LABEL_20;
    v20 = sub_18000C5F0(v14, a2, (_WORD *)&v37[19] + 4, v16, (__int64)&v37[44] + 10, v30, (_DWORD *)&v37[77] + 1);
    v17 = v20;
    if ( v20 < 0 )
      sub_18006D26C(
        (int)retaddr,
        913,
        (int)"avcore\\audiocore\\server\\audiosrv\\dll\\constraintmodelresourcemanager.cpp",
        v20);
    if ( v17 < 0 )
      goto LABEL_20;
    v17 = sub_1800F357C(a1, (__int64)&v37[19] + 8, (__int64)&v37[44] + 10, SDWORD1(v37[77]), a6, a3, 1);
    if ( v17 >= 0 )
    {
      v17 = sub_1800F26E0(a1, (int)v11, v10, a6, 1, &v34);
      if ( v17 >= 0 || (v22 = (_DWORD *)sub_180008448(v27, sub_1800B6240)[1], *v22 <= 4u) )
      {
LABEL_20:
        if ( v11 )
          sub_180033A70(v11);
        goto LABEL_22;
      }
      v34 = a2;
      v25 = (unsigned __int8 *)&unk_180168D99;
      v26 = (void **)&v34;
    }
    else
    {
      v22 = (_DWORD *)sub_180008448(v21, sub_1800B6240)[1];
      if ( *v22 <= 4u )
        goto LABEL_20;
      v33 = (void *)a2;
      v25 = (unsigned __int8 *)&unk_180168E12;
      v26 = &v33;
    }
    v32 = v17;
    v31 = a6;
    sub_1800B779C((__int64)v22, v25, v23, v24, v26, (__int64)&v31, (__int64)&v32);
    goto LABEL_20;
  }
LABEL_22:
  v28 = v17 >= 0;
  if ( v36 )
    LeaveCriticalSection(lpCriticalSection);
  return v28;
}
