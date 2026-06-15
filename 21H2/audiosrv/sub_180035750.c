/*
 * XREFs of sub_180035750 @ 0x180035750
 * Callers:
 *     <none>
 * Callees:
 *     sub_180008448 @ 0x180008448 (sub_180008448.c)
 *     sub_18000F708 @ 0x18000F708 (sub_18000F708.c)
 *     _guard_dispatch_icall_nop @ 0x180074470 (_guard_dispatch_icall_nop.c)
 *     sub_1800B8610 @ 0x1800B8610 (sub_1800B8610.c)
 *     sub_1800C5FFC @ 0x1800C5FFC (sub_1800C5FFC.c)
 *     sub_1800CB144 @ 0x1800CB144 (sub_1800CB144.c)
 */

__int64 __fastcall sub_180035750(__int64 a1, __int64 a2, char a3)
{
  struct _RTL_CRITICAL_SECTION *v3; // rsi
  unsigned __int64 v7; // r8
  unsigned int v8; // ebp
  unsigned int v9; // edx
  __int64 v10; // rcx
  __int64 v11; // r14
  __int64 v13; // r14
  __int64 v14; // rcx
  _DWORD *v15; // rbp
  int v16; // eax
  __int64 v17; // rcx
  int v18; // edi
  __int64 v19; // rax
  __int64 v20; // rdx
  int v21; // r8d
  int v22; // r9d
  _DWORD *v23; // r12
  int v24; // ebx
  __int64 v25; // rax
  __int64 v26; // rcx
  __int64 v27; // rdi
  __int64 v28; // rax
  int v29; // r8d
  int v30; // r9d
  int v31; // [rsp+40h] [rbp-58h] BYREF
  int v32; // [rsp+44h] [rbp-54h] BYREF
  __int64 v33; // [rsp+48h] [rbp-50h] BYREF
  __int64 v34; // [rsp+50h] [rbp-48h] BYREF
  __int64 v35; // [rsp+58h] [rbp-40h] BYREF
  __int64 v36; // [rsp+60h] [rbp-38h] BYREF
  __int64 v37[6]; // [rsp+68h] [rbp-30h] BYREF
  char v38; // [rsp+A0h] [rbp+8h] BYREF
  char v39; // [rsp+B8h] [rbp+20h] BYREF

  v3 = (struct _RTL_CRITICAL_SECTION *)(a1 + 48);
  EnterCriticalSection((LPCRITICAL_SECTION)(a1 + 48));
  v7 = *(_QWORD *)(a1 + 104);
  v8 = 0;
  v9 = 0;
  if ( v7 )
  {
    v10 = 0LL;
    while ( *(_QWORD *)(*(_QWORD *)(a1 + 96) + 8 * v10) != a2 )
    {
      v10 = ++v9;
      if ( v9 >= v7 )
        goto LABEL_9;
    }
    _mm_lfence();
    v11 = *(_QWORD *)(*(_QWORD *)(a1 + 96) + 8 * v10);
    if ( *(_BYTE *)(v11 + 128) != a3 )
    {
      v23 = (_DWORD *)sub_180008448(v10, sub_1800B6240)[1];
      if ( *v23 > 4u )
      {
        v24 = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(v11 + 80) + 40LL))(*(_QWORD *)(v11 + 80));
        v25 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)(v11 + 8) + 80LL))(v11 + 8);
        v26 = *(_QWORD *)(v11 + 72);
        v27 = v25;
        v38 = a3;
        v31 = v24;
        v28 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v26 + 64LL))(v26);
        v35 = v27;
        v34 = v28;
        sub_1800C5FFC(
          (_DWORD)v23,
          (unsigned int)&unk_180166E42,
          v29,
          v30,
          (__int64)&v35,
          (__int64)&v34,
          (__int64)&v31,
          (__int64)&v38);
      }
      *(_BYTE *)(v11 + 128) = a3;
    }
  }
  else
  {
LABEL_9:
    v33 = 0LL;
    sub_1800CB144(&v33);
    v13 = a2 + 8;
    if ( (*(int (__fastcall **)(__int64, __int64 *))(*(_QWORD *)(a2 + 8) + 24LL))(a2 + 8, &v33) >= 0 )
    {
      v15 = (_DWORD *)sub_180008448(v14, sub_1800B6240)[1];
      if ( *v15 > 4u )
      {
        v16 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v33 + 40LL))(v33);
        v17 = a2 + 8;
        v18 = v16;
        v19 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v13 + 80LL))(v17);
        v20 = *(_QWORD *)(a1 + 728);
        v37[0] = v19;
        v36 = v20;
        v39 = a3;
        v32 = v18;
        sub_1800C5FFC(
          (_DWORD)v15,
          (unsigned int)&unk_180166A80,
          v21,
          v22,
          (__int64)v37,
          (__int64)&v36,
          (__int64)&v32,
          (__int64)&v39);
      }
    }
    v8 = -2004287484;
    sub_18000F708(&v33);
  }
  if ( v3 )
    LeaveCriticalSection(v3);
  return v8;
}
