/*
 * XREFs of CmpGetBootValueData @ 0x140A60FE0
 * Callers:
 *     CmpGetSystemControlValues @ 0x140A60C0C (CmpGetSystemControlValues.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x140408790 (_guard_dispatch_icall.c)
 *     memmove @ 0x140414040 (memmove.c)
 */

char __fastcall CmpGetBootValueData(__int64 a1, __int64 a2, char *a3, unsigned int a4)
{
  size_t v4; // r15
  unsigned int v6; // eax
  const void *v8; // rax
  __int64 v9; // rdx
  char v10; // bl
  __int64 v11; // rax
  __int64 v12; // r13
  __int64 v13; // rax
  unsigned int v14; // r14d
  unsigned __int16 v15; // r15
  const void *v16; // rax
  size_t v17; // r8
  _DWORD v19[2]; // [rsp+20h] [rbp-20h] BYREF
  _DWORD v20[2]; // [rsp+28h] [rbp-18h] BYREF
  __int64 v21; // [rsp+30h] [rbp-10h]
  __int64 v22; // [rsp+80h] [rbp+40h] BYREF
  int v23; // [rsp+88h] [rbp+48h] BYREF
  int v24; // [rsp+8Ch] [rbp+4Ch]

  v22 = a1;
  v4 = a4;
  v20[1] = 0;
  v6 = *(_DWORD *)(a2 + 4);
  v20[0] = -1;
  if ( v6 >= 0x80000000 )
  {
    memmove(a3, (const void *)(a2 + 8), a4);
LABEL_3:
    LOBYTE(v8) = 1;
    return (char)v8;
  }
  if ( (unsigned int)dword_140D5C834 < 4 || v6 - 16345 > 0x7FFFC026 )
  {
    v8 = (const void *)((__int64 (__fastcall *)(ULONG_PTR *, _QWORD, _DWORD *))qword_140D5C768)(
                         &CmControlHive,
                         *(unsigned int *)(a2 + 8),
                         v20);
    if ( !v8 )
      return (char)v8;
    memmove(a3, v8, v4);
    ((void (__fastcall *)(ULONG_PTR *, _DWORD *))qword_140D5C770)(&CmControlHive, v20);
    goto LABEL_3;
  }
  v9 = *(unsigned int *)(a2 + 8);
  v19[0] = -1;
  v19[1] = 0;
  v10 = 1;
  v24 = 0;
  v22 = 0xFFFFFFFFLL;
  v23 = -1;
  v11 = ((__int64 (__fastcall *)(ULONG_PTR *, __int64, _DWORD *))qword_140D5C768)(&CmControlHive, v9, v19);
  v12 = v11;
  if ( v11 )
  {
    v13 = ((__int64 (__fastcall *)(ULONG_PTR *, _QWORD, int *))qword_140D5C768)(
            &CmControlHive,
            *(unsigned int *)(v11 + 4),
            &v23);
    v21 = v13;
    if ( v13 )
    {
      v14 = *(_DWORD *)(a2 + 4);
      if ( v14 > (unsigned int)v4 )
        v14 = v4;
      v15 = 0;
      if ( *(_WORD *)(v12 + 2) )
      {
        while ( 1 )
        {
          v16 = (const void *)((__int64 (__fastcall *)(ULONG_PTR *, _QWORD, __int64 *))qword_140D5C768)(
                                &CmControlHive,
                                *(unsigned int *)(v13 + 4LL * v15),
                                &v22);
          if ( !v16 )
            break;
          v17 = v14;
          if ( v14 > 0x3FD8 )
            v17 = 16344LL;
          memmove(&a3[16344 * v15], v16, v17);
          ((void (__fastcall *)(ULONG_PTR *, __int64 *))qword_140D5C770)(&CmControlHive, &v22);
          if ( v14 > 0x3FD8 )
          {
            v13 = v21;
            v14 -= 16344;
            if ( ++v15 < *(_WORD *)(v12 + 2) )
              continue;
          }
          goto LABEL_18;
        }
        v10 = 0;
      }
LABEL_18:
      ((void (__fastcall *)(ULONG_PTR *, int *))qword_140D5C770)(&CmControlHive, &v23);
    }
    else
    {
      v10 = 0;
    }
    ((void (__fastcall *)(ULONG_PTR *, _DWORD *))qword_140D5C770)(&CmControlHive, v19);
  }
  else
  {
    v10 = 0;
  }
  LOBYTE(v8) = v10;
  return (char)v8;
}
