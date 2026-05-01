/*
 * XREFs of sub_18006CED4 @ 0x18006CED4
 * Callers:
 *     sub_18006CD70 @ 0x18006CD70 (sub_18006CD70.c)
 * Callees:
 *     __security_check_cookie @ 0x180044E30 (__security_check_cookie.c)
 *     memset @ 0x18004683A (memset.c)
 *     sub_18006C574 @ 0x18006C574 (sub_18006C574.c)
 */

char __fastcall sub_18006CED4(__int64 a1, __int64 a2, int a3, __int64 a4, __int64 a5, unsigned int a6)
{
  __int64 v10; // rax
  unsigned int v11; // r9d
  unsigned int v12; // r8d
  __int64 v13; // rdx
  unsigned __int64 v14; // rbx
  __int64 v15; // r10
  __int64 v16; // r11
  unsigned __int64 v17; // rcx
  _QWORD *v18; // r10
  char v19; // bl
  __int64 v20; // rdi
  unsigned __int64 v21; // rdx
  __int64 v22; // rdx
  unsigned int v23; // r9d
  __int64 v24; // r10
  int v25; // r11d
  int v26; // ecx
  __int64 v27; // rax
  _DWORD v29[4]; // [rsp+20h] [rbp-E8h] BYREF
  _QWORD v30[20]; // [rsp+30h] [rbp-D8h] BYREF

  LOBYTE(v10) = (unsigned __int8)memset(v30, 0, sizeof(v30));
  v11 = 0;
  v12 = 0;
  if ( a6 )
  {
    while ( 1 )
    {
      v13 = a5 + v12;
      if ( !*(_DWORD *)(v13 + 4) )
      {
        v14 = *(unsigned __int8 *)(v13 + 8);
        v15 = (unsigned int)(*(_DWORD *)(v13 + 8) - 256) >> 16;
        v29[0] = *(unsigned __int8 *)(v13 + 8);
        v10 = *(_QWORD *)(a1 + 8 * v15 + 248);
        if ( _bittest64(&v10, v14) )
        {
          v16 = 2LL * v11;
          v30[v15] |= 1LL << v14;
          v17 = *(_QWORD *)(a2 + 16LL * v11 + 8) & 0xFFFFFFFFFFFFFE01uLL;
          *(_DWORD *)(a2 + 8 * v16) = v15;
          *(_DWORD *)(a2 + 8 * v16 + 4) = v14;
          v10 = (*(_BYTE *)(a4 + 172) & 4) != 0 ? v17 | (2LL * *(unsigned __int8 *)(v13 + 20)) : v17;
          ++v11;
          *(_QWORD *)(a2 + 8 * v16 + 8) = v10;
          if ( v11 == a3 )
            break;
        }
      }
      v12 += *(_DWORD *)v13;
      if ( v12 >= a6 )
        goto LABEL_9;
    }
  }
  else
  {
LABEL_9:
    if ( v11 != a3 )
    {
      v18 = v30;
      v19 = (*(_DWORD *)(a4 + 172) & 2) != 0;
      v20 = a1 - (_QWORD)v30;
      do
      {
        v21 = ~*v18 & *(_QWORD *)((char *)v18 + v20 + 248);
        while ( 1 )
        {
          LOBYTE(v10) = sub_18006C574(v29, v21, v19);
          if ( !(_BYTE)v10 )
            break;
          v26 = v29[0];
          v21 = v22 & ~(1LL << SLOBYTE(v29[0]));
          v27 = 2LL * v23;
          *(_DWORD *)(a2 + 8 * v27) = v25;
          *(_DWORD *)(a2 + 8 * v27 + 4) = v26;
        }
        v18 = (_QWORD *)(v24 + 8);
      }
      while ( (unsigned int)(v25 + 1) < 0x14 );
    }
  }
  return v10;
}
