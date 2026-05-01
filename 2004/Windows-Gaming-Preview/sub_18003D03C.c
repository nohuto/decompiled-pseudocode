/*
 * XREFs of sub_18003D03C @ 0x18003D03C
 * Callers:
 *     sub_18003CDF8 @ 0x18003CDF8 (sub_18003CDF8.c)
 * Callees:
 *     sub_180003268 @ 0x180003268 (sub_180003268.c)
 *     sub_1800177BC @ 0x1800177BC (sub_1800177BC.c)
 *     sub_180042DE0 @ 0x180042DE0 (sub_180042DE0.c)
 *     _guard_dispatch_icall_nop @ 0x180045CB0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall sub_18003D03C(__int64 a1, _QWORD *a2, __int64 a3)
{
  unsigned __int16 v4; // si
  unsigned int v5; // r13d
  int v6; // r14d
  char v7; // r15
  char v8; // r12
  int v9; // ebx
  int v10; // edx
  __int64 v11; // rcx
  void (*v12)(void); // rax
  int v14; // eax
  DWORD ActiveProcessorCount; // r9d
  int v16; // eax
  _QWORD *v17; // rbx
  int v18; // edx
  __int64 v19; // rdx
  __int64 v20; // rcx
  bool v21; // [rsp+58h] [rbp-29h]
  unsigned __int16 v22; // [rsp+5Ch] [rbp-25h] BYREF
  int v23; // [rsp+60h] [rbp-21h] BYREF
  int v24; // [rsp+64h] [rbp-1Dh] BYREF
  int v25[2]; // [rsp+68h] [rbp-19h] BYREF
  __int16 v26; // [rsp+70h] [rbp-11h] BYREF
  PCNZWCH sourceString; // [rsp+78h] [rbp-9h]
  _BYTE v28[8]; // [rsp+80h] [rbp-1h] BYREF
  const WCHAR *v29; // [rsp+88h] [rbp+7h]
  unsigned int v30; // [rsp+90h] [rbp+Fh]
  __int64 retaddr; // [rsp+E0h] [rbp+5Fh]
  __int64 v32; // [rsp+E8h] [rbp+67h] BYREF
  _QWORD *v33; // [rsp+F0h] [rbp+6Fh]
  __int64 v34; // [rsp+F8h] [rbp+77h]
  char v35; // [rsp+100h] [rbp+7Fh] BYREF

  v34 = a3;
  v33 = a2;
  v32 = a1;
  v4 = 0;
  sourceString = 0LL;
  v5 = 0;
  v23 = 0;
  *(_QWORD *)v25 = 0LL;
  v6 = 0;
  v24 = 0;
  v7 = 0;
  LOBYTE(v32) = 0;
  v8 = 0;
  v35 = 0;
  v21 = 0;
  v9 = (*(__int64 (__fastcall **)(_QWORD, unsigned __int16 *))(*(_QWORD *)*a2 + 48LL))(*a2, &v22);
  if ( v9 < 0 )
  {
    v10 = 260;
LABEL_3:
    sub_180003268(retaddr, v10, (__int64)"onecoreuap\\xbox\\windows.gaming.preview\\dll\\kgldefaults.cpp", v9);
    v11 = *a2;
    if ( !*a2 )
      return (unsigned int)v9;
    *a2 = 0LL;
LABEL_5:
    v12 = *(void (**)(void))(*(_QWORD *)v11 + 16LL);
LABEL_6:
    v12();
    return (unsigned int)v9;
  }
  if ( v22 )
  {
    while ( 1 )
    {
      v14 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, __int16 *, _BYTE *))(*(_QWORD *)*a2 + 64LL))(*a2, v4, &v26, v28);
      v9 = v14;
      if ( v14 < 0 )
        break;
      switch ( v26 )
      {
        case 320:
          v21 = (_DWORD)v29 != 0;
          break;
        case 321:
          ActiveProcessorCount = GetActiveProcessorCount(0xFFFFu);
          if ( !ActiveProcessorCount )
          {
            v18 = 58;
            goto LABEL_31;
          }
          v23 = -1;
          *(_QWORD *)v25 = -1LL;
          if ( (v30 & 3) != 0 )
          {
            v18 = 66;
            goto LABEL_31;
          }
          if ( (unsigned __int16)(*v29 - 1) > 1u )
          {
            v18 = 74;
            goto LABEL_31;
          }
          if ( 4LL * v29[1] != v30 - 4LL )
          {
            v18 = 76;
LABEL_31:
            v9 = -2147024809;
            sub_180003268(
              retaddr,
              v18,
              (__int64)"onecoreuap\\shell\\twinui\\broadcastdvrcomponent\\kgl\\lib\\autogameprofile.cpp",
              -2147024809);
LABEL_32:
            sub_180003268(retaddr, 279, (__int64)"onecoreuap\\xbox\\windows.gaming.preview\\dll\\kgldefaults.cpp", v9);
            v19 = *a2;
            if ( !*a2 )
              return (unsigned int)v9;
            *a2 = 0LL;
            v12 = *(void (**)(void))(*(_QWORD *)v19 + 16LL);
            goto LABEL_6;
          }
          v16 = sub_180042DE0(
                  *v29,
                  v30 - 4,
                  (int)v29 + 4,
                  ActiveProcessorCount,
                  (__int64)&v23,
                  (__int64)v25,
                  (__int64)&v24,
                  (__int64)&v32,
                  (__int64)&v35);
          v9 = v16;
          if ( v16 < 0 )
            sub_180003268(
              retaddr,
              78,
              (__int64)"onecoreuap\\shell\\twinui\\broadcastdvrcomponent\\kgl\\lib\\autogameprofile.cpp",
              v16);
          if ( v9 < 0 )
            goto LABEL_32;
          break;
        case 322:
          sourceString = v29;
          v5 = v30;
          break;
      }
      if ( ++v4 >= v22 )
      {
        v6 = v24;
        v7 = v32;
        v8 = v35;
        goto LABEL_25;
      }
    }
    sub_180003268(retaddr, 267, (__int64)"onecoreuap\\xbox\\windows.gaming.preview\\dll\\kgldefaults.cpp", v14);
    v11 = *a2;
    if ( !*a2 )
      return (unsigned int)v9;
    *a2 = 0LL;
    goto LABEL_5;
  }
LABEL_25:
  v17 = (_QWORD *)v34;
  WindowsDeleteString(*(HSTRING *)v34);
  *v17 = 0LL;
  v9 = sub_1800177BC(v23, *(HSTRING *)v25, v6, v8, v7, v21, v5 >> 1, sourceString, (__int64)v17);
  if ( v9 < 0 )
  {
    v10 = 302;
    goto LABEL_3;
  }
  v20 = *a2;
  if ( *a2 )
  {
    *a2 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v20 + 16LL))(v20);
  }
  return 0LL;
}
