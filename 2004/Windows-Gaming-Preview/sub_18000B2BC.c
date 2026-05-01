/*
 * XREFs of sub_18000B2BC @ 0x18000B2BC
 * Callers:
 *     sub_18000F340 @ 0x18000F340 (sub_18000F340.c)
 * Callees:
 *     sub_180003268 @ 0x180003268 (sub_180003268.c)
 *     sub_18000BC3C @ 0x18000BC3C (sub_18000BC3C.c)
 *     sub_18000CF38 @ 0x18000CF38 (sub_18000CF38.c)
 *     sub_18000CFF4 @ 0x18000CFF4 (sub_18000CFF4.c)
 *     sub_18000D0F8 @ 0x18000D0F8 (sub_18000D0F8.c)
 *     sub_1800120A0 @ 0x1800120A0 (sub_1800120A0.c)
 *     sub_180012300 @ 0x180012300 (sub_180012300.c)
 *     sub_180016730 @ 0x180016730 (sub_180016730.c)
 *     sub_180016970 @ 0x180016970 (sub_180016970.c)
 *     sub_180029930 @ 0x180029930 (sub_180029930.c)
 */

// Hidden C++ exception states: #wind=5
__int64 __fastcall sub_18000B2BC(_QWORD *a1, __int128 *a2, _QWORD *a3)
{
  __int64 v6; // rcx
  unsigned int v7; // ebx
  const WCHAR *v9; // rdx
  _QWORD *v10; // r15
  int v11; // eax
  int v12; // edx
  int v13; // eax
  int v14; // eax
  int v15; // edx
  _WORD *v16; // rax
  PCWSTR StringRawBuffer; // rax
  __int64 v18; // rdx
  __int64 v19; // rcx
  const WCHAR *v20; // rcx
  const WCHAR *v21; // r8
  HSTRING v22; // rcx
  int v23; // eax
  _QWORD *v24; // rdx
  __int64 v25; // rcx
  signed __int64 v26; // rax
  signed __int64 v27; // rtt
  HSTRING string; // [rsp+30h] [rbp-108h] BYREF
  HSTRING v29; // [rsp+38h] [rbp-100h] BYREF
  HSTRING v30; // [rsp+40h] [rbp-F8h] BYREF
  __int64 v31; // [rsp+48h] [rbp-F0h] BYREF
  HSTRING v32; // [rsp+50h] [rbp-E8h] BYREF
  __int64 v33; // [rsp+58h] [rbp-E0h] BYREF
  __int64 v34; // [rsp+60h] [rbp-D8h] BYREF
  __int64 v35; // [rsp+68h] [rbp-D0h] BYREF
  __int64 v36; // [rsp+70h] [rbp-C8h] BYREF
  __int128 v37; // [rsp+80h] [rbp-B8h] BYREF
  __int128 v38; // [rsp+90h] [rbp-A8h] BYREF
  __int128 v39; // [rsp+A0h] [rbp-98h] BYREF
  __int128 v40; // [rsp+B0h] [rbp-88h] BYREF
  __int128 v41; // [rsp+C0h] [rbp-78h] BYREF
  __int128 v42; // [rsp+D0h] [rbp-68h] BYREF
  __int128 v43; // [rsp+E0h] [rbp-58h] BYREF
  _BYTE v44[16]; // [rsp+F0h] [rbp-48h] BYREF
  _BYTE v45[56]; // [rsp+100h] [rbp-38h] BYREF
  __int64 retaddr; // [rsp+138h] [rbp+0h]
  UINT32 length; // [rsp+150h] [rbp+18h] BYREF
  __int64 v48; // [rsp+158h] [rbp+20h] BYREF

  v6 = *a3;
  if ( !*a3 )
  {
    v7 = -2147467261;
    sub_180003268(
      retaddr,
      254,
      (__int64)"onecoreuap\\xbox\\windows.gaming.preview\\dll\\findalloperation.cpp",
      -2147467261);
    return v7;
  }
  if ( *(_DWORD *)(v6 + 20) )
  {
    if ( (*(_BYTE *)(v6 + 32) & 0xC) == 0 && (*(_BYTE *)(v6 + 32) & 0x20) == 0 )
    {
      v9 = (const WCHAR *)a1[11];
      if ( !v9 || !*v9 || !StrCmpCW(*(LPCWSTR *)(v6 + 24), v9) )
      {
        v32 = 0LL;
        v37 = *a2;
        WindowsDeleteString(0LL);
        v32 = 0LL;
        v10 = a1 + 27;
        v11 = sub_180016730(a1[27], &v37, 24LL, &v32);
        v7 = v11;
        if ( v11 < 0 )
        {
          v12 = 274;
          goto LABEL_16;
        }
        if ( v32 )
        {
          sub_18000BC3C(a1 + 18, &v48, &v32);
          if ( v48 == a1[18]
            || (v38 = *a2, v11 = sub_180029930(*(_QWORD *)(v48 + 40) + 24LL, &v38, a3, a1 + 27), v7 = v11, v11 >= 0) )
          {
            v7 = 0;
            goto LABEL_75;
          }
          v12 = 286;
LABEL_16:
          sub_180003268(
            retaddr,
            v12,
            (__int64)"onecoreuap\\xbox\\windows.gaming.preview\\dll\\findalloperation.cpp",
            v11);
LABEL_75:
          WindowsDeleteString(v32);
          return v7;
        }
        string = 0LL;
        v39 = *a2;
        WindowsDeleteString(0LL);
        string = 0LL;
        if ( (int)sub_180016730(*v10, &v39, 15LL, &string) >= 0 )
        {
          if ( string )
          {
            sub_18000BC3C(a1 + 20, &v33, &string);
            if ( v33 != a1[20] )
            {
              v40 = *a2;
              v13 = sub_180029930(*(_QWORD *)(v33 + 40) + 24LL, &v40, a3, a1 + 27);
              v7 = v13;
              if ( v13 < 0 )
              {
                sub_180003268(
                  retaddr,
                  307,
                  (__int64)"onecoreuap\\xbox\\windows.gaming.preview\\dll\\findalloperation.cpp",
                  v13);
LABEL_23:
                WindowsDeleteString(string);
                goto LABEL_74;
              }
LABEL_24:
              WindowsDeleteString(string);
              v7 = 0;
              goto LABEL_74;
            }
          }
        }
        v29 = 0LL;
        WindowsDeleteString(0LL);
        v29 = 0LL;
        v14 = sub_180016970(*a3, &v29);
        v7 = v14;
        if ( v14 < 0 )
        {
          v15 = 316;
LABEL_27:
          sub_180003268(
            retaddr,
            v15,
            (__int64)"onecoreuap\\xbox\\windows.gaming.preview\\dll\\findalloperation.cpp",
            v14);
LABEL_28:
          WindowsDeleteString(v29);
          v29 = 0LL;
          goto LABEL_23;
        }
        v16 = (_WORD *)a1[8];
        if ( v16 && *v16 )
        {
          if ( *(_DWORD *)(*a3 + 20LL) != 2 )
            goto LABEL_32;
          StringRawBuffer = WindowsGetStringRawBuffer(v29, &length);
          v18 = a1[9];
          if ( v18 == -1 )
          {
            v19 = a1[8];
            if ( v19 )
            {
              do
                ++v18;
              while ( *(_WORD *)(v19 + 2 * v18) );
            }
            else
            {
              LODWORD(v18) = 0;
            }
          }
          v20 = &word_180051520;
          v21 = &word_180051520;
          if ( StringRawBuffer )
            v21 = StringRawBuffer;
          if ( a1[8] )
            v20 = (const WCHAR *)a1[8];
          if ( CompareStringOrdinal(v20, v18, v21, StringRawBuffer != 0LL ? length : 0, 1) != 2 )
          {
LABEL_32:
            WindowsDeleteString(v29);
            v29 = 0LL;
            goto LABEL_24;
          }
        }
        if ( v29 )
        {
          sub_18000BC3C(a1 + 22, &v34, &v29);
          if ( v34 != a1[22] )
          {
            v41 = *a2;
            v14 = sub_180029930(*(_QWORD *)(v34 + 40) + 24LL, &v41, a3, a1 + 27);
            v7 = v14;
            if ( v14 < 0 )
            {
              v15 = 337;
              goto LABEL_27;
            }
            goto LABEL_32;
          }
LABEL_55:
          v31 = 0LL;
          v36 = a1[26];
          if ( (int)sub_18000CFF4((unsigned int)&v31, (_DWORD)a2, (_DWORD)a3, (int)a1 + 216, (__int64)&v36) >= 0 )
          {
            v24 = (_QWORD *)a1[16];
            if ( (_QWORD *)a1[17] == v24 )
            {
              try
              {
                sub_18000D0F8(a1 + 15, v24, &v31);
              }
              catch ( ... )
              {
                LODWORD(v48) = sub_180012238(
                                 retaddr,
                                 397LL,
                                 "onecoreuap\\xbox\\windows.gaming.preview\\dll\\findalloperation.cpp");
                if ( v31 )
                {
                  v31 = 0LL;
                  sub_1800120A0();
                }
                WindowsDeleteString(v29);
                v29 = 0LL;
                WindowsDeleteString(string);
                v7 = v48;
                goto LABEL_74;
              }
            }
            else
            {
              v25 = v31;
              *v24 = v31;
              if ( v25 )
              {
                v26 = *(_QWORD *)(v25 + 136);
                while ( v26 >= 0 )
                {
                  v27 = v26;
                  v26 = _InterlockedCompareExchange64((volatile signed __int64 *)(v25 + 136), v26 + 1, v26);
                  if ( v27 == v26 )
                    goto LABEL_63;
                }
                _InterlockedIncrement((volatile signed __int32 *)(2 * v26 + 16));
              }
LABEL_63:
              a1[16] += 8LL;
            }
            if ( string )
              sub_18000CF38(a1 + 20, v44, &string, &v31);
            if ( v32 )
              sub_18000CF38(a1 + 18, v45, &v32, &v31);
          }
          else
          {
            sub_180012300(retaddr, 379LL, "onecoreuap\\xbox\\windows.gaming.preview\\dll\\findalloperation.cpp");
          }
          if ( v31 )
          {
            v31 = 0LL;
            sub_1800120A0();
          }
          WindowsDeleteString(v29);
          v29 = 0LL;
          WindowsDeleteString(string);
          v7 = 0;
LABEL_74:
          string = 0LL;
          goto LABEL_75;
        }
        v30 = 0LL;
        v42 = *a2;
        WindowsDeleteString(0LL);
        v30 = 0LL;
        if ( (int)sub_180016730(*v10, &v42, 23LL, &v30) >= 0 )
        {
          v22 = v30;
          if ( !v30 )
          {
LABEL_54:
            WindowsDeleteString(v22);
            goto LABEL_55;
          }
          sub_18000BC3C(a1 + 24, &v35, &v30);
          if ( v35 != a1[24] )
          {
            v43 = *a2;
            v23 = sub_180029930(*(_QWORD *)(v35 + 40) + 24LL, &v43, a3, a1 + 27);
            v7 = v23;
            if ( v23 < 0 )
            {
              sub_180003268(
                retaddr,
                360,
                (__int64)"onecoreuap\\xbox\\windows.gaming.preview\\dll\\findalloperation.cpp",
                v23);
              WindowsDeleteString(v30);
              v30 = 0LL;
              goto LABEL_28;
            }
            WindowsDeleteString(v30);
            v30 = 0LL;
            goto LABEL_32;
          }
        }
        v22 = v30;
        goto LABEL_54;
      }
    }
  }
  return 0LL;
}
