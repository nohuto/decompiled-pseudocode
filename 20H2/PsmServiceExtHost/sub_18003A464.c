/*
 * XREFs of sub_18003A464 @ 0x18003A464
 * Callers:
 *     sub_18003A3E4 @ 0x18003A3E4 (sub_18003A3E4.c)
 * Callees:
 *     sub_18003A538 @ 0x18003A538 (sub_18003A538.c)
 *     sub_18003A5D0 @ 0x18003A5D0 (sub_18003A5D0.c)
 *     __security_check_cookie @ 0x180044E30 (__security_check_cookie.c)
 *     sub_180066C5C @ 0x180066C5C (sub_180066C5C.c)
 */

__int64 __fastcall sub_18003A464(unsigned int a1, __int64 a2, __int64 a3, unsigned int a4, _DWORD *a5)
{
  unsigned int v7; // esi
  unsigned int v8; // ebp
  __int64 v9; // rdx
  __int64 v10; // rdi
  __int64 v11; // r8
  unsigned int v12; // r9d
  __int64 v14; // rsi
  int v15; // r9d
  __int64 v16; // r10
  unsigned int v17; // r11d
  HANDLE ProcessHeap; // rax
  _BYTE v19[24]; // [rsp+30h] [rbp-168h] BYREF
  __int64 v20; // [rsp+48h] [rbp-150h]
  __int64 v21; // [rsp+50h] [rbp-148h]
  LPVOID lpMem; // [rsp+68h] [rbp-130h]
  int v23; // [rsp+80h] [rbp-118h]
  _BYTE v24[208]; // [rsp+90h] [rbp-108h] BYREF

  v7 = a3;
  v8 = 0;
  if ( !(unsigned int)sub_18003A5D0(v19, a1, a3, v24) )
  {
    v8 = sub_18003A538(v19, a2, v7, a4);
    if ( a5 )
    {
      v10 = v20;
      v11 = 1LL;
      v12 = 0;
      if ( *(_WORD *)(v20 + 4) )
      {
        v14 = v21;
        do
        {
          if ( (unsigned int)sub_180066C5C(v14 + 12LL * v12, v9, v11) )
          {
            if ( ((unsigned __int8)v11 & *(_BYTE *)(v16 + 4)) != 0 )
              goto LABEL_6;
            v9 = 0LL;
            while ( (_DWORD)v9 == v15 || *(_DWORD *)v16 != *(_DWORD *)(v14 + 12LL * (unsigned int)v9) )
            {
              v9 = (unsigned int)(v11 + v9);
              if ( (unsigned int)v9 >= v17 )
                goto LABEL_6;
            }
          }
          v12 = v11 + v15;
        }
        while ( v12 < v17 );
      }
      if ( !*(_WORD *)(v10 + 6) )
        LODWORD(v11) = 0;
LABEL_6:
      *a5 |= v11;
    }
    if ( v23 )
    {
      ProcessHeap = GetProcessHeap();
      HeapFree(ProcessHeap, 0, lpMem);
    }
  }
  return v8;
}
