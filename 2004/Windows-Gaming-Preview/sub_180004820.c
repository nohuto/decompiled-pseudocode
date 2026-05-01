/*
 * XREFs of sub_180004820 @ 0x180004820
 * Callers:
 *     sub_180004984 @ 0x180004984 (sub_180004984.c)
 * Callees:
 *     sub_1800041A8 @ 0x1800041A8 (sub_1800041A8.c)
 *     sub_1800044B8 @ 0x1800044B8 (sub_1800044B8.c)
 *     __security_check_cookie @ 0x1800440D0 (__security_check_cookie.c)
 */

__int64 __fastcall sub_180004820(int a1, __int64 a2, __int64 a3, int a4, _DWORD *a5)
{
  int v7; // esi
  unsigned int v8; // r14d
  int v9; // edx
  unsigned int v10; // r9d
  unsigned int v11; // r11d
  _BYTE *v12; // r10
  int v13; // esi
  unsigned int v14; // r8d
  HANDLE ProcessHeap; // rax
  _BYTE v17[24]; // [rsp+30h] [rbp-168h] BYREF
  __int64 v18; // [rsp+48h] [rbp-150h]
  __int64 v19; // [rsp+50h] [rbp-148h]
  LPVOID lpMem; // [rsp+68h] [rbp-130h]
  int v21; // [rsp+80h] [rbp-118h]
  _BYTE v22[208]; // [rsp+90h] [rbp-108h] BYREF

  v7 = a3;
  v8 = 0;
  if ( !(unsigned int)sub_1800041A8((__int64)v17, a1, a3, (__int64)v22) )
  {
    v8 = sub_1800044B8((__int64)v17, a2, v7, a4);
    if ( a5 )
    {
      v9 = 1;
      v10 = 0;
      v11 = *(unsigned __int16 *)(v18 + 4);
      if ( *(_WORD *)(v18 + 4) )
      {
        v12 = (_BYTE *)(v19 + 4);
        do
        {
          v13 = *((_DWORD *)v12 - 1);
          if ( v13
            && ((*(_DWORD *)v12 & 0x300) != 0
             || (*(_DWORD *)v12 & 0xC00) != 0
             || (*(_DWORD *)v12 & 0x3000) != 0
             || (*(_DWORD *)v12 & 0x3F000000) != 0
             || (*v12 & 2) != 0) )
          {
            if ( (*v12 & 1) != 0 )
              goto LABEL_20;
            v14 = 0;
            while ( v14 == v10 || v13 != *(_DWORD *)(v19 + 12LL * v14) )
            {
              if ( ++v14 >= v11 )
                goto LABEL_20;
            }
          }
          ++v10;
          v12 += 12;
        }
        while ( v10 < v11 );
      }
      if ( !*(_WORD *)(v18 + 6) )
        v9 = 0;
LABEL_20:
      *a5 |= v9;
    }
    if ( v21 )
    {
      ProcessHeap = GetProcessHeap();
      HeapFree(ProcessHeap, 0, lpMem);
    }
  }
  return v8;
}
