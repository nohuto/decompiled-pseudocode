/*
 * XREFs of ?vStripSolidVerticalCddCallback@@YAXPEAU_STRIP@@PEAU_BMINFO@@PEAU_LINESTATE@@@Z @ 0x1C0151B20
 * Callers:
 *     <none>
 * Callees:
 *     __security_check_cookie @ 0x1C0157760 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C015BD10 (_guard_dispatch_icall_nop.c)
 */

void __fastcall vStripSolidVerticalCddCallback(struct _STRIP *a1, struct _BMINFO *a2, struct _LINESTATE *a3)
{
  char *v3; // r14
  __int64 v5; // rbp
  unsigned int v6; // r9d
  char *v7; // r13
  int v8; // r12d
  unsigned int v9; // ecx
  unsigned int v10; // esi
  unsigned int v11; // edi
  void (__fastcall *v12)(_QWORD, _QWORD, _QWORD); // r10
  int v13; // ebx
  __int64 v14; // rcx
  int v15; // ebx
  __int64 v16; // rcx
  unsigned int v17; // [rsp+20h] [rbp-68h]
  void (__fastcall *v18)(_QWORD, _QWORD, _QWORD); // [rsp+28h] [rbp-60h]
  unsigned int v19; // [rsp+30h] [rbp-58h] BYREF
  int v20; // [rsp+34h] [rbp-54h]
  unsigned int v21; // [rsp+38h] [rbp-50h]
  unsigned int v22; // [rsp+3Ch] [rbp-4Ch]

  v3 = (char *)a1 + 28;
  v5 = *((_QWORD *)a1 + 2);
  v6 = *((_DWORD *)a3 + 1);
  v17 = v6;
  v7 = (char *)a1 + 4 * *(int *)a1 + 28;
  v8 = -4 * *((_DWORD *)a1 + 2);
  if ( (*((_DWORD *)a1 + 1) & 8) == 0 )
    v8 = 4 * *((_DWORD *)a1 + 2);
  v9 = abs32(v8);
  v10 = ((int)v5 - *((_DWORD *)a1 + 110)) / v9;
  v11 = (((int)v5 - *((_DWORD *)a1 + 110)) % v9) >> 2;
  v12 = *(void (__fastcall **)(_QWORD, _QWORD, _QWORD))(*((_QWORD *)a1 + 54) + 8LL);
  v18 = v12;
  if ( v8 > 0 )
  {
    do
    {
      v15 = *(_DWORD *)v3;
      v16 = *((_QWORD *)a1 + 54);
      v19 = v11++;
      v20 = v10;
      v21 = v11;
      v22 = v15 + v10;
      v12(v16, v6, &v19);
      v6 = v17;
      v12 = v18;
      v5 += v15 * v8 + 4;
      v3 += 4;
      v10 += v15;
    }
    while ( v3 < v7 );
  }
  else
  {
    do
    {
      v13 = *(_DWORD *)v3;
      v14 = *((_QWORD *)a1 + 54);
      v19 = v11;
      v20 = v10 - v13 + 1;
      v21 = ++v11;
      v22 = v10 + 1;
      v12(v14, v6, &v19);
      v6 = v17;
      v12 = v18;
      v5 += v13 * v8 + 4;
      v3 += 4;
      v10 -= v13;
    }
    while ( v3 < v7 );
  }
  *((_QWORD *)a1 + 2) = v5;
}
