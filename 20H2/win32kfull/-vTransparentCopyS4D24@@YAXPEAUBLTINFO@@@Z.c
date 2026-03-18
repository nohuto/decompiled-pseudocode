/*
 * XREFs of ?vTransparentCopyS4D24@@YAXPEAUBLTINFO@@@Z @ 0x1C0292250
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall vTransparentCopyS4D24(struct BLTINFO *a1)
{
  int v2; // edi
  int v3; // r11d
  __int64 v4; // r15
  __int64 v5; // r9
  __int64 v6; // r10
  int v7; // r14d
  _BYTE *v8; // rbp
  int v9; // esi
  _BYTE *v10; // rdx
  __int64 v11; // rbx
  _BYTE *v12; // rax
  int v13; // ecx

  v2 = *((_DWORD *)a1 + 7);
  v3 = *((_DWORD *)a1 + 8);
  v4 = *(_QWORD *)(*(_QWORD *)a1 + 16LL);
  v5 = *((_QWORD *)a1 + 1) + ((__int64)*((int *)a1 + 12) >> 1);
  v6 = *((_QWORD *)a1 + 2) + 3 * *((_DWORD *)a1 + 14);
  while ( v3 )
  {
    v7 = *((_DWORD *)a1 + 12);
    --v3;
    v8 = (_BYTE *)v5;
    v9 = v2;
    if ( v2 )
    {
      v10 = (_BYTE *)(v6 + 2);
      do
      {
        --v9;
        v11 = *v8 & 0xF;
        if ( (v7 & 1) == 0 )
          v11 = (unsigned __int8)*v8 >> 4;
        v12 = v8 + 1;
        if ( (v7 & 1) == 0 )
          v12 = v8;
        LOBYTE(v7) = v7 + 1;
        v8 = v12;
        if ( (_DWORD)v11 != *((_DWORD *)a1 + 37) )
        {
          v13 = *(_DWORD *)(v4 + 4 * v11);
          *(v10 - 2) = v13;
          *v10 = BYTE2(v13);
          *(v10 - 1) = BYTE1(v13);
        }
        v10 += 3;
      }
      while ( v9 );
    }
    v5 += *((int *)a1 + 10);
    v6 += *((int *)a1 + 11);
  }
}
