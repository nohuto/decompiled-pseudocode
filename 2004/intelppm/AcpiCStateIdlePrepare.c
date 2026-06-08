/*
 * XREFs of AcpiCStateIdlePrepare @ 0x1C0001020
 * Callers:
 *     PepIdlePrepare @ 0x1C000F340 (PepIdlePrepare.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00044E0 (_guard_dispatch_icall_nop.c)
 */

void __fastcall AcpiCStateIdlePrepare(__int64 *a1)
{
  __int64 v1; // rdi
  unsigned int v3; // ecx
  char v4; // r9
  __int64 v5; // rcx
  __int64 v6; // rdx
  unsigned __int64 v7; // r8
  __int64 v8; // rbp
  unsigned int v9; // esi
  unsigned __int8 v10; // dl
  __int64 v11; // rcx
  int (__fastcall *v12)(__int64); // rax
  unsigned __int64 v13; // r10
  unsigned __int64 v14; // r9
  __int64 v15; // rdx
  unsigned __int64 v16; // r9
  unsigned int v17; // eax
  __int64 i; // rdx
  bool v19; // zf

  v1 = *a1;
  v3 = *((_DWORD *)a1 + 10);
  v4 = 0;
  if ( v3 != -1 )
  {
    v17 = *(_DWORD *)(v1 + 56);
    v9 = v17 - 1;
    if ( v3 < v17 )
      v9 = v3;
    LODWORD(v8) = 0;
    for ( i = 0LL; (unsigned int)i < *(unsigned __int8 *)(v1 + 20); i = (unsigned int)(i + 1) )
    {
      if ( (_DWORD)i && *(unsigned __int8 *)(i + v1 + 21) <= v9 )
        LODWORD(v8) = i;
    }
    goto LABEL_30;
  }
  if ( *((_BYTE *)a1 + 50) )
  {
    LODWORD(v8) = *(unsigned __int8 *)(v1 + 20) - 1;
    v9 = *(unsigned __int8 *)((unsigned int)v8 + v1 + 21);
LABEL_30:
    v4 = 1;
    goto LABEL_7;
  }
  v5 = *((unsigned __int8 *)a1 + 49);
  if ( !(_BYTE)v5 || (v6 = *((unsigned __int8 *)a1 + 48), !(_BYTE)v6) )
  {
    LODWORD(v8) = *(unsigned __int8 *)(v1 + 20) - 1;
    v9 = *(_DWORD *)(v1 + 56) - 1;
    goto LABEL_30;
  }
  v7 = a1[1] - *(_QWORD *)(v1 + 32);
  LODWORD(v8) = *(_DWORD *)(v1 + 16);
  if ( v7 >= *((unsigned int *)a1 + 11) )
  {
    v13 = a1[2] - *(_QWORD *)(v1 + 24);
    v14 = v7 * v6;
    v15 = (v7 * v6 * (unsigned __int128)0x47AE147AE147AE15uLL) >> 64;
    v16 = (v15 + ((v14 - v15) >> 1)) >> 6;
    if ( v13 < (unsigned int)(v7 * v5 / 0x64) && (_DWORD)v8 )
    {
      LODWORD(v8) = v8 - 1;
      v4 = 1;
    }
    else
    {
      if ( v13 >= (unsigned int)v16 && (int)v8 + 1 < (unsigned int)*(unsigned __int8 *)(v1 + 20) )
        LODWORD(v8) = v8 + 1;
      v4 = 1;
    }
  }
  v9 = *(unsigned __int8 *)((unsigned int)v8 + v1 + 21);
LABEL_7:
  *(_DWORD *)(v1 + 12) = v9;
  *(_DWORD *)(v1 + 16) = v8;
  if ( v4 )
  {
    *(_QWORD *)(v1 + 32) = a1[1];
    *(_QWORD *)(v1 + 24) = a1[2];
  }
  v10 = *((_BYTE *)a1 + 54);
  if ( v10 )
  {
    if ( (_DWORD)v8 )
    {
      do
      {
        if ( *(_BYTE *)(88LL * v9 + v1 + 146) <= v10 )
          break;
        v19 = (_DWORD)v8 == 1;
        v8 = (unsigned int)(v8 - 1);
        v9 = *(unsigned __int8 *)(v8 + v1 + 21);
      }
      while ( !v19 );
    }
    *(_DWORD *)(v1 + 12) = v9;
    *(_DWORD *)(v1 + 16) = v8;
  }
  if ( v9 )
  {
    do
    {
      v11 = 88LL * v9;
      v12 = *(int (__fastcall **)(__int64))(v11 + v1 + 80);
      if ( !v12 )
        break;
      if ( v12(v1 + v11 + 96) >= 0 )
        break;
      v8 = (unsigned int)(v8 - 1);
      *((_DWORD *)a1 + 20) |= 1 << v9;
      v9 = *(unsigned __int8 *)(v8 + v1 + 21);
    }
    while ( *(_BYTE *)(v8 + v1 + 21) );
  }
  *(_DWORD *)(v1 + 8) = v9;
  *((_DWORD *)a1 + 19) = v9;
  *((_DWORD *)a1 + 15) = 0;
  *((_DWORD *)a1 + 18) = -1;
}
