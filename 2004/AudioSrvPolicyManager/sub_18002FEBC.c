/*
 * XREFs of sub_18002FEBC @ 0x18002FEBC
 * Callers:
 *     sub_180016FD0 @ 0x180016FD0 (sub_180016FD0.c)
 * Callees:
 *     sub_180003AB0 @ 0x180003AB0 (sub_180003AB0.c)
 *     sub_180009F20 @ 0x180009F20 (sub_180009F20.c)
 *     sub_180018844 @ 0x180018844 (sub_180018844.c)
 *     sub_180019AE8 @ 0x180019AE8 (sub_180019AE8.c)
 *     sub_1800303E8 @ 0x1800303E8 (sub_1800303E8.c)
 *     sub_18003056C @ 0x18003056C (sub_18003056C.c)
 *     sub_180039D98 @ 0x180039D98 (sub_180039D98.c)
 *     sub_180039DDC @ 0x180039DDC (sub_180039DDC.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall sub_18002FEBC(__int64 a1, _DWORD *a2, _DWORD *a3, __int64 a4, void ***a5)
{
  __int64 v8; // rdi
  struct _RTL_CRITICAL_SECTION *v9; // r15
  void **v10; // rax
  __int64 v11; // rdx
  void *v12; // rcx
  void **v13; // rsi
  int v14; // edx
  _DWORD *v15; // rax
  void *v16; // rbp
  DWORD LastError; // ebx
  unsigned __int64 v18; // r9
  int v19; // eax
  unsigned int v20; // ebx
  int v21; // r9d
  _DWORD *v22; // rax
  void *v23; // rcx
  int v24; // ebx
  _DWORD *v25; // rax
  void *v26; // rcx
  __int64 v27; // rbp
  __int64 v28; // rbx
  _QWORD *v29; // rdi
  _QWORD *v30; // rax
  __int64 v32; // [rsp+20h] [rbp-58h]
  void *v33[2]; // [rsp+30h] [rbp-48h] BYREF
  _BYTE v34[16]; // [rsp+40h] [rbp-38h] BYREF
  __int64 retaddr; // [rsp+78h] [rbp+0h]

  v8 = a1;
  v9 = (struct _RTL_CRITICAL_SECTION *)(a1 + 16);
  EnterCriticalSection((LPCRITICAL_SECTION)(a1 + 16));
  v33[1] = v9;
  v10 = (void **)sub_180039DDC(32LL, &unk_18004FFC8);
  v13 = v10;
  if ( v10 )
  {
    *v10 = 0LL;
    v10[1] = 0LL;
    v10[2] = 0LL;
    v10[3] = 0LL;
  }
  else
  {
    v13 = 0LL;
  }
  v33[0] = v13;
  if ( !v13 )
  {
    v14 = 80;
LABEL_39:
    v20 = -2147024882;
    goto LABEL_40;
  }
  if ( a2 )
  {
    v15 = (_DWORD *)sub_180039DDC(4LL, &unk_18004FFC8);
    if ( v15 )
      *v15 = *a2;
    else
      v15 = 0LL;
    v12 = *v13;
    *v13 = v15;
    if ( v12 )
    {
      sub_180039D98(v12);
      v15 = *v13;
    }
    if ( !v15 )
    {
      v14 = 84;
      goto LABEL_39;
    }
  }
  if ( a4 )
  {
    v16 = v13[2];
    if ( v16 )
    {
      LastError = GetLastError();
      CoTaskMemFree(v16);
      SetLastError(LastError);
    }
    v13[2] = 0LL;
    v18 = -1LL;
    do
      ++v18;
    while ( *(_WORD *)(a4 + 2 * v18) );
    v19 = sub_180018844((__int64)v12, v11, a4, v18, v32, v13 + 2);
    v20 = v19;
    if ( v19 < 0 )
    {
      v21 = v19;
      v14 = 89;
LABEL_41:
      sub_180003AB0(
        retaddr,
        v14,
        (__int64)"avcore\\audiocore\\server\\audiosrv\\audiostatemonitormanager\\audiostatemonitormanager.cpp",
        v21);
      goto LABEL_45;
    }
    v8 = a1;
  }
  if ( a3 )
  {
    v22 = (_DWORD *)sub_180039DDC(4LL, &unk_18004FFC8);
    if ( v22 )
      *v22 = 0;
    else
      v22 = 0LL;
    if ( !v22 )
    {
      v14 = 96;
      goto LABEL_39;
    }
    if ( *a3 > 0xBu )
    {
      v20 = -2147024809;
      v14 = 97;
LABEL_40:
      v21 = v20;
      goto LABEL_41;
    }
    *v22 = *a3;
    v23 = v13[1];
    v13[1] = v22;
    if ( v23 )
      sub_180039D98(v23);
  }
  v24 = sub_1800303E8(v8, a2, v13[1], a4);
  v25 = (_DWORD *)sub_180039DDC(4LL, &unk_18004FFC8);
  if ( v25 )
    *v25 = v24;
  else
    v25 = 0LL;
  v26 = v13[3];
  v13[3] = v25;
  if ( v26 )
  {
    sub_180039D98(v26);
    v25 = v13[3];
  }
  if ( !v25 )
  {
    v14 = 104;
    goto LABEL_39;
  }
  v33[0] = 0LL;
  v27 = v8 + 56;
  v28 = **(_QWORD **)(v8 + 64);
  if ( *(_QWORD *)(v8 + 72) == 0x7FFFFFFFFFFFFFFLL )
    std::_Xlength_error("list<T> too long");
  v29 = *(_QWORD **)(v28 + 8);
  v30 = sub_180009F20(0x20uLL);
  v30[2] = v13;
  v30[3] = v13;
  *v30 = v28;
  v30[1] = v29;
  ++*(_QWORD *)(v27 + 16);
  *(_QWORD *)(v28 + 8) = v30;
  *v29 = v30;
  sub_18003056C(v27, v34, **(_QWORD **)(v27 + 8) + 16LL);
  *a5 = v13;
  v20 = 0;
LABEL_45:
  sub_180019AE8(v33);
  if ( v9 )
    LeaveCriticalSection(v9);
  return v20;
}
