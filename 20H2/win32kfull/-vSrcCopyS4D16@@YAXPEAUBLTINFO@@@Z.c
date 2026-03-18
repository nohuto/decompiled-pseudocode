/*
 * XREFs of ?vSrcCopyS4D16@@YAXPEAUBLTINFO@@@Z @ 0x1C02CA100
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall vSrcCopyS4D16(struct BLTINFO *a1)
{
  unsigned int v1; // edi
  int v2; // r14d
  int v3; // r11d
  _WORD *v4; // r9
  unsigned __int8 *v5; // rdx
  __int64 v6; // r15
  int v7; // r8d
  _WORD *v8; // rsi
  char v9; // bl
  unsigned __int8 *v10; // r10
  unsigned __int64 v11; // rax

  LOBYTE(v1) = 0;
  v2 = *((_DWORD *)a1 + 8);
  v3 = *((_DWORD *)a1 + 13);
  v4 = (_WORD *)(*((_QWORD *)a1 + 2) + 2 * *((_DWORD *)a1 + 14));
  v5 = (unsigned __int8 *)(*((_QWORD *)a1 + 1) + ((__int64)*((int *)a1 + 12) >> 1));
  v6 = *(_QWORD *)(*(_QWORD *)a1 + 16LL);
  while ( 1 )
  {
    v7 = *((_DWORD *)a1 + 12);
    v8 = v4;
    if ( (v7 & 1) != 0 )
      LOBYTE(v1) = *v5;
    if ( v7 != v3 )
    {
      v9 = v1;
      v10 = v5 + 1;
      if ( (*((_DWORD *)a1 + 12) & 1) == 0 )
        v10 = v5;
      do
      {
        if ( (v7 & 1) != 0 )
        {
          v11 = v9 & 0xF;
        }
        else
        {
          v1 = *v10++;
          v9 = v1;
          v11 = (unsigned __int64)v1 >> 4;
        }
        ++v7;
        *v8++ = *(_WORD *)(v6 + 4 * v11);
        v3 = *((_DWORD *)a1 + 13);
      }
      while ( v7 != v3 );
    }
    if ( !--v2 )
      break;
    v5 += *((int *)a1 + 10);
    v4 = (_WORD *)((char *)v4 + *((int *)a1 + 11));
  }
}
