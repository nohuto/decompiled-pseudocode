/*
 * XREFs of sub_180010E20 @ 0x180010E20
 * Callers:
 *     sub_18001112C @ 0x18001112C (sub_18001112C.c)
 * Callees:
 *     memset @ 0x1800453CC (memset.c)
 */

char __fastcall sub_180010E20(_DWORD *a1, _DWORD *a2, int a3)
{
  char v4; // r9
  __int64 v5; // rdx
  __int64 v6; // r10
  unsigned int v7; // r11d
  __int64 v8; // rbx
  unsigned int v9; // esi
  __int64 v10; // rcx
  unsigned int v11; // eax

  v4 = 0;
  v5 = *(_QWORD *)a1;
  v6 = *(_QWORD *)(*(_QWORD *)a1 + 24LL);
  if ( v6 )
  {
    v7 = a1[2];
    v8 = v6 + 80LL * *(unsigned __int16 *)(v5 + 34);
    v9 = *(_DWORD *)(v8 + 4);
    if ( v7 < v9 )
    {
      if ( !a3 )
      {
        memset(a2, 0, 0x90uLL);
        a2[2] = v9;
LABEL_14:
        v4 = 1;
        a2[1] = *(_DWORD *)(v8 + 8);
        *((_QWORD *)a2 + 6) = *(_QWORD *)(v8 + 16);
        a2[14] = *(unsigned __int16 *)(v8 + 24);
        *a2 = *(unsigned __int8 *)(v8 + 26);
        *((_QWORD *)a2 + 15) = *(_QWORD *)(v8 + 32);
        *((_QWORD *)a2 + 16) = *(_QWORD *)(v8 + 40);
        *((_QWORD *)a2 + 17) = *(_QWORD *)(v8 + 48);
        *((_QWORD *)a2 + 2) = *(_QWORD *)(v8 + 56);
        return v4;
      }
      v8 = 0LL;
      v10 = v6 + 80LL * *(unsigned __int16 *)(v5 + 32);
      if ( v6 != v10 )
      {
        do
        {
          if ( *(_DWORD *)(v6 + 8) == a3 )
          {
            v11 = *(_DWORD *)(v6 + 4);
            if ( v11 > v7 && (!v8 || v11 < *(_DWORD *)(v8 + 4)) )
              v8 = v6;
          }
          v6 += 80LL;
        }
        while ( v6 != v10 );
        if ( v8 )
        {
          memset(a2, 0, 0x90uLL);
          a2[2] = *(_DWORD *)(v8 + 4);
          goto LABEL_14;
        }
      }
    }
  }
  return v4;
}
