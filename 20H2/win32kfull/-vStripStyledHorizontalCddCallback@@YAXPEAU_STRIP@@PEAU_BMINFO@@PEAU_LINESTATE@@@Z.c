/*
 * XREFs of ?vStripStyledHorizontalCddCallback@@YAXPEAU_STRIP@@PEAU_BMINFO@@PEAU_LINESTATE@@@Z @ 0x1C0149210
 * Callers:
 *     <none>
 * Callees:
 *     __security_check_cookie @ 0x1C015A0C0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C015F580 (_guard_dispatch_icall_nop.c)
 */

void __fastcall vStripStyledHorizontalCddCallback(struct _STRIP *a1, struct _BMINFO *a2, struct _LINESTATE *a3)
{
  char *v3; // r14
  __int64 v5; // rbp
  int v7; // r8d
  unsigned int v8; // r10d
  int v9; // esi
  int v10; // edi
  int v11; // eax
  unsigned int v12; // ecx
  unsigned int v13; // edx
  unsigned int v14; // r13d
  void (__fastcall *v15)(_QWORD, _QWORD, _QWORD); // r9
  unsigned int v16; // r15d
  int v17; // r12d
  __int64 v18; // rcx
  _DWORD *v19; // rax
  _DWORD *v20; // rax
  unsigned int v21; // [rsp+20h] [rbp-88h]
  int v22; // [rsp+24h] [rbp-84h]
  char *v23; // [rsp+28h] [rbp-80h]
  void (__fastcall *v25)(_QWORD, _QWORD, _QWORD); // [rsp+38h] [rbp-70h]
  __int64 v26; // [rsp+40h] [rbp-68h]
  char *v27; // [rsp+48h] [rbp-60h]
  _DWORD v28[4]; // [rsp+50h] [rbp-58h] BYREF

  v3 = (char *)a1 + 28;
  v5 = *((_QWORD *)a1 + 2);
  v7 = -4 * *((_DWORD *)a1 + 2);
  v23 = (char *)a1 + 28;
  v8 = *((_DWORD *)a3 + 1);
  v9 = *((_DWORD *)a3 + 20);
  v10 = *((_DWORD *)a3 + 5);
  v27 = (char *)a1 + 4 * *(int *)a1 + 28;
  v21 = v8;
  v11 = 1;
  if ( (*((_DWORD *)a1 + 1) & 8) == 0 )
    v7 = 4 * *((_DWORD *)a1 + 2);
  if ( v7 <= 0 )
    v11 = -1;
  v22 = v11;
  v12 = abs32(v7);
  v13 = ((int)v5 - *((_DWORD *)a1 + 110)) % v12;
  v14 = ((int)v5 - *((_DWORD *)a1 + 110)) / v12;
  v26 = v7;
  v15 = *(void (__fastcall **)(_QWORD, _QWORD, _QWORD))(*((_QWORD *)a1 + 54) + 8LL);
  v16 = v13 >> 2;
  v25 = v15;
  do
  {
    v17 = *(_DWORD *)v3;
    do
    {
      if ( !v9 )
      {
        v18 = *((_QWORD *)a1 + 54);
        v28[2] = v16 + 1;
        v28[0] = v16;
        v28[3] = v14 + 1;
        v28[1] = v14;
        v15(v18, v8, v28);
        v8 = v21;
        v15 = v25;
      }
      v10 -= *((_DWORD *)a3 + 2);
      ++v16;
      v5 += 4LL;
      if ( v10 <= 0 )
      {
        *((_QWORD *)a3 + 7) += 4LL;
        v19 = (_DWORD *)*((_QWORD *)a3 + 7);
        if ( (unsigned __int64)v19 > *((_QWORD *)a3 + 6) )
        {
          v19 = (_DWORD *)*((_QWORD *)a3 + 5);
          *((_QWORD *)a3 + 7) = v19;
        }
        v10 += *v19;
        v9 = v9 == 0;
      }
      --v17;
    }
    while ( v17 );
    v5 += v26;
    v14 += v22;
    v10 -= *((_DWORD *)a3 + 3);
    if ( v10 <= 0 )
    {
      v20 = (_DWORD *)(*((_QWORD *)a3 + 7) + 4LL);
      *((_QWORD *)a3 + 7) = v20;
      if ( (unsigned __int64)v20 > *((_QWORD *)a3 + 6) )
      {
        v20 = (_DWORD *)*((_QWORD *)a3 + 5);
        *((_QWORD *)a3 + 7) = v20;
      }
      v10 += *v20;
      v9 = v9 == 0;
    }
    v3 = v23 + 4;
    v23 = v3;
  }
  while ( v3 != v27 );
  *((_QWORD *)a1 + 2) = v5;
  *((_DWORD *)a3 + 20) = v9;
  *((_DWORD *)a3 + 5) = v10;
}
