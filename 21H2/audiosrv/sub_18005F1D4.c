/*
 * XREFs of sub_18005F1D4 @ 0x18005F1D4
 * Callers:
 *     sub_180072EE8 @ 0x180072EE8 (sub_180072EE8.c)
 *     sub_180073104 @ 0x180073104 (sub_180073104.c)
 *     sub_180073300 @ 0x180073300 (sub_180073300.c)
 *     sub_180073444 @ 0x180073444 (sub_180073444.c)
 * Callees:
 *     sub_18002A504 @ 0x18002A504 (sub_18002A504.c)
 *     sub_18004BD84 @ 0x18004BD84 (sub_18004BD84.c)
 *     sub_18005F460 @ 0x18005F460 (sub_18005F460.c)
 *     sub_18005F8F8 @ 0x18005F8F8 (sub_18005F8F8.c)
 *     sub_18005FE9C @ 0x18005FE9C (sub_18005FE9C.c)
 *     sub_1800602AC @ 0x1800602AC (sub_1800602AC.c)
 *     __security_check_cookie @ 0x180069A70 (__security_check_cookie.c)
 *     ??_M@YAXPEAX_K1P6AX0@Z@Z @ 0x180069C50 (--_M@YAXPEAX_K1P6AX0@Z@Z.c)
 *     ??_L@YAXPEAX_K1P6AX0@Z2@Z @ 0x18006A1BC (--_L@YAXPEAX_K1P6AX0@Z2@Z.c)
 *     sub_180133A58 @ 0x180133A58 (sub_180133A58.c)
 *     sub_180135B9C @ 0x180135B9C (sub_180135B9C.c)
 *     sub_1801372AC @ 0x1801372AC (sub_1801372AC.c)
 *     sub_1801376CC @ 0x1801376CC (sub_1801376CC.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall sub_18005F1D4(char *pv, _BYTE *a2)
{
  struct _RTL_CRITICAL_SECTION *v3; // r12
  _BYTE *v4; // r14
  int v5; // eax
  int v6; // r9d
  unsigned int v7; // esi
  unsigned int v8; // ebx
  int v9; // eax
  unsigned int v10; // r15d
  LPCWCH *v11; // rsi
  signed __int64 v12; // rcx
  signed __int64 v13; // r13
  LPCWSTR v14; // rbx
  const WCHAR *v15; // rdx
  const WCHAR *v16; // rcx
  const WCHAR *v17; // rax
  const WCHAR *v18; // r8
  int v19; // r8d
  int v20; // r9d
  int v22; // r9d
  int v23; // edx
  void *v24; // rdx
  __int64 v25; // rbx
  void *v26; // rdx
  int v27; // eax
  int v28; // eax
  int bIgnoreCase; // [rsp+20h] [rbp-E0h]
  int v30; // [rsp+28h] [rbp-D8h]
  LPCWSTR v31; // [rsp+30h] [rbp-D0h] BYREF
  SIZE_T v32; // [rsp+38h] [rbp-C8h]
  LPCWSTR v33; // [rsp+40h] [rbp-C0h]
  LPCWCH lpString2; // [rsp+48h] [rbp-B8h]
  LPCWCH lpString1; // [rsp+50h] [rbp-B0h]
  signed __int64 v36; // [rsp+58h] [rbp-A8h]
  _BYTE *v37; // [rsp+60h] [rbp-A0h]
  struct _RTL_CRITICAL_SECTION *v38; // [rsp+68h] [rbp-98h]
  int v39; // [rsp+70h] [rbp-90h] BYREF
  char v40; // [rsp+78h] [rbp-88h] BYREF
  char v41; // [rsp+80h] [rbp-80h] BYREF
  _BYTE v42[168]; // [rsp+88h] [rbp-78h] BYREF
  _UNKNOWN *retaddr; // [rsp+178h] [rbp+78h]

  v37 = a2;
  v3 = (struct _RTL_CRITICAL_SECTION *)(pv + 56);
  EnterCriticalSection((LPCRITICAL_SECTION)(pv + 56));
  v38 = v3;
  v4 = pv + 209;
  BYTE1(v31) = pv[209];
  LOBYTE(v31) = 0;
  `eh vector constructor iterator'(&v39, 0x20uLL, 6uLL, sub_180067060, sub_180067CA0);
  v5 = sub_18005F8F8(&v39);
  v7 = v5;
  v8 = 19;
  if ( v5 != 19 )
  {
    if ( v5 < 0 )
    {
      sub_18004BD84((int)retaddr, 2344, (int)"avcore\\published\\audiocore\\lib\\atmoscheck\\atmoscheck.cpp", v5);
      v8 = v7;
    }
    else
    {
      v9 = sub_18005F460((int)&v39, 6, (int)pv + 209, v6, bIgnoreCase, v30, v31, v32, v33, (SIZE_T)lpString2);
      v8 = v9;
      if ( v9 < 0 )
      {
        v22 = v9;
        v23 = 2346;
LABEL_37:
        sub_18004BD84((int)retaddr, v23, (int)"avcore\\published\\audiocore\\lib\\atmoscheck\\atmoscheck.cpp", v22);
      }
      else
      {
        v10 = 0;
        v11 = (LPCWCH *)(pv + 288);
        v12 = &v40 - pv;
        v36 = &v40 - pv;
        v32 = (char *)&v39 - pv;
        v13 = &v41 - pv;
        v14 = (LPCWSTR)(v42 - pv);
        v33 = (LPCWSTR)(v42 - pv);
        do
        {
          if ( CompareStringOrdinal(*(LPCWCH *)((char *)v11 + v12 - 288), -1, *(v11 - 1), -1, 1) != 2 )
          {
            v8 = -2147418113;
            v22 = -2147418113;
            v23 = 2362;
            goto LABEL_37;
          }
          v15 = (const WCHAR *)&unk_18015C744;
          v16 = (const WCHAR *)&unk_18015C744;
          if ( *v11 )
            v16 = *v11;
          v17 = (const WCHAR *)&unk_18015C744;
          if ( v11[1] )
            v17 = v11[1];
          lpString1 = v17;
          v18 = (const WCHAR *)&unk_18015C744;
          if ( *(LPCWCH *)((char *)v11 + v13 - 288) )
            v18 = *(LPCWCH *)((char *)v11 + v13 - 288);
          if ( *(_QWORD *)((char *)v14 + (_QWORD)v11 - 288) )
            v15 = *(const WCHAR **)((char *)v14 + (_QWORD)v11 - 288);
          lpString2 = v15;
          if ( *((_BYTE *)v11 - 16) != *((_BYTE *)v11 + v32 - 288)
            || CompareStringOrdinal(v16, -1, v18, -1, 1) != 2
            || CompareStringOrdinal(lpString1, -1, lpString2, -1, 1) != 2 )
          {
            LOBYTE(v31) = 1;
            *((_BYTE *)v11 - 16) = *((_BYTE *)v11 + v32 - 288);
            v24 = *(void **)((char *)v11 + v13 - 288);
            *(LPCWCH *)((char *)v11 + v13 - 288) = 0LL;
            v25 = 32LL * (int)v10;
            sub_18002A504((void **)&pv[v25 + 288], v24);
            v26 = *(void **)((char *)v33 + (_QWORD)v11 - 288);
            *(_QWORD *)((char *)v33 + (_QWORD)v11 - 288) = 0LL;
            sub_18002A504((void **)&pv[v25 + 296], v26);
            v14 = v33;
          }
          ++v10;
          v11 += 4;
          v12 = v36;
        }
        while ( v10 < 6 );
        if ( BYTE1(v31) != *v4 )
        {
          if ( *v4 )
          {
            sub_1800602AC(pv + 464);
            v27 = sub_180135B9C(pv);
            v8 = v27;
            if ( v27 < 0 )
            {
              v22 = v27;
              v23 = 2412;
              goto LABEL_37;
            }
            v28 = sub_1801376CC(pv);
            v8 = v28;
            if ( v28 < 0 )
            {
              v22 = v28;
              v23 = 2413;
              goto LABEL_37;
            }
          }
          else
          {
            sub_18005FE9C(pv);
            sub_1801372AC(pv);
          }
        }
        LOBYTE(v12) = (_BYTE)v31;
        if ( v37 )
          *v37 = (_BYTE)v31;
        if ( (unsigned int)dword_18019C4F0 > 5 )
        {
          BYTE1(v31) = *v4;
          LOBYTE(v31) = v12;
          sub_180133A58(v12, (unsigned int)&unk_18016C7B8, v19, v20, (__int64)&v31, (__int64)&v31 + 1);
        }
        v8 = 0;
      }
    }
  }
  `eh vector destructor iterator'(&v39, 0x20uLL, 6uLL, sub_180067CA0);
  if ( v3 )
    LeaveCriticalSection(v3);
  return v8;
}
