/*
 * XREFs of HalpQueryProfileSourceList @ 0x1404BF250
 * Callers:
 *     EmonQueryInformation @ 0x140376740 (EmonQueryInformation.c)
 *     Amd64QueryInformation @ 0x1404DDFE0 (Amd64QueryInformation.c)
 *     DefaultQueryInformation @ 0x140864950 (DefaultQueryInformation.c)
 * Callees:
 *     KeIsEmptyAffinityEx @ 0x1402CCE60 (KeIsEmptyAffinityEx.c)
 *     wcscpy_s @ 0x1403D83E0 (wcscpy_s.c)
 */

__int64 __fastcall HalpQueryProfileSourceList(
        _QWORD *a1,
        __int64 a2,
        int a3,
        unsigned int a4,
        __int64 a5,
        unsigned int *a6)
{
  unsigned int v6; // r13d
  _DWORD *v10; // r14
  _QWORD *v11; // rbx
  __int64 v12; // rdx
  rsize_t v13; // rdx
  unsigned int v14; // edi
  __int64 v15; // rcx

  v6 = a4;
  v10 = 0LL;
  *a6 = 0;
  v11 = (_QWORD *)*a1;
  if ( (_QWORD *)*a1 != a1 )
  {
    do
    {
      if ( !a3 )
        break;
      if ( !(unsigned int)KeIsEmptyAffinityEx((_WORD *)v11 + 12) )
      {
        v12 = -1LL;
        do
          ++v12;
        while ( *(_WORD *)(v11[24] + 2 * v12) );
        v13 = (unsigned int)(v12 + 1);
        v14 = (2 * v13 + 31) & 0xFFFFFFF8;
        if ( v14 <= v6 )
        {
          *(_DWORD *)a5 = v14;
          *(_DWORD *)(a5 + 4) = *((_DWORD *)v11 - 2);
          v15 = *((unsigned __int8 *)v11 + 20);
          *(_DWORD *)(a5 + 8) = *(_DWORD *)(a2 + 8 * v15 + 4);
          *(_DWORD *)(a5 + 12) = *(_DWORD *)(a2 + 8 * v15);
          *(_QWORD *)(a5 + 16) = 0LL;
          wcscpy_s((wchar_t *)(a5 + 24), v13, (const wchar_t *)v11[24]);
          v10 = (_DWORD *)a5;
          a5 += v14;
          v6 -= v14;
        }
        *a6 += v14;
        --a3;
      }
      v11 = (_QWORD *)*v11;
    }
    while ( v11 != a1 );
    v6 = a4;
    if ( v10 )
      *v10 = 0;
  }
  return v6 < *a6 ? 0xC0000004 : 0;
}
