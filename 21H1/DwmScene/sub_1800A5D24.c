/*
 * XREFs of sub_1800A5D24 @ 0x1800A5D24
 * Callers:
 *     sub_1800A6908 @ 0x1800A6908 (sub_1800A6908.c)
 *     sub_1800A6B2C @ 0x1800A6B2C (sub_1800A6B2C.c)
 *     sub_1800A6F0C @ 0x1800A6F0C (sub_1800A6F0C.c)
 * Callees:
 *     memcmp @ 0x18011E0BE (memcmp.c)
 */

char __fastcall sub_1800A5D24(_DWORD *a1, __int64 a2)
{
  char v2; // bl
  __int64 v3; // r8
  bool v4; // cf
  _DWORD *v5; // rax
  const void *v6; // rdx
  const void *v7; // rcx
  size_t v8; // rsi
  size_t v9; // rdi
  size_t v10; // r8
  int v11; // eax
  bool v12; // sf

  if ( *a1 < *(_DWORD *)a2 )
    return 1;
  v2 = 0;
  if ( *(_DWORD *)a2 < *a1 )
    return v2;
  v3 = a2 + 8;
  v4 = *(_QWORD *)(a2 + 32) < 0x10uLL;
  v5 = a1 + 2;
  v6 = (const void *)(a2 + 8);
  if ( !v4 )
    v6 = *(const void **)v3;
  v7 = a1 + 2;
  if ( *((_QWORD *)v5 + 3) >= 0x10uLL )
    v7 = *(const void **)v5;
  v8 = *(_QWORD *)(v3 + 16);
  v9 = *((_QWORD *)v5 + 2);
  v10 = v9;
  if ( v8 < v9 )
    v10 = v8;
  v11 = memcmp(v7, v6, v10);
  v12 = v11 < 0;
  if ( v11 )
    goto LABEL_13;
  if ( v9 < v8 )
    return 1;
  if ( v9 <= v8 )
  {
    v12 = 0;
LABEL_13:
    if ( v12 )
      return 1;
  }
  return v2;
}
