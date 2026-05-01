/*
 * XREFs of sub_180085F94 @ 0x180085F94
 * Callers:
 *     sub_180033028 @ 0x180033028 (sub_180033028.c)
 * Callees:
 *     sub_180085BA4 @ 0x180085BA4 (sub_180085BA4.c)
 *     sub_1800860FC @ 0x1800860FC (sub_1800860FC.c)
 *     sub_180086354 @ 0x180086354 (sub_180086354.c)
 *     sub_1800863E0 @ 0x1800863E0 (sub_1800863E0.c)
 */

__int64 __fastcall sub_180085F94(DWORD a1, _QWORD *a2)
{
  unsigned int v3; // ebx
  __int64 v4; // r8
  unsigned int v5; // esi
  unsigned __int64 i; // rdx
  unsigned int v7; // eax
  unsigned __int64 v8; // rdi
  __int64 v9; // rax
  unsigned __int64 v10; // r15
  __int64 v11; // rcx
  unsigned __int64 v13; // [rsp+20h] [rbp-39h]
  _OWORD v14[2]; // [rsp+28h] [rbp-31h] BYREF
  LPVOID lpAddress[2]; // [rsp+48h] [rbp-11h]
  unsigned __int64 v16; // [rsp+58h] [rbp-1h] BYREF
  int v17; // [rsp+64h] [rbp+Bh]
  __int64 v18; // [rsp+68h] [rbp+Fh]
  __int64 v19; // [rsp+70h] [rbp+17h]
  __int64 v20; // [rsp+D8h] [rbp+7Fh] BYREF

  v20 = 0LL;
  memset(v14, 0, sizeof(v14));
  *(_OWORD *)lpAddress = 0LL;
  v3 = sub_1800860FC(a1);
  if ( v3 )
    goto LABEL_20;
  v3 = sub_1800863E0(v14, 0LL, v4, &v20);
  if ( v3 )
    goto LABEL_20;
  v5 = (unsigned int)lpAddress[1];
  for ( i = 0LL; ; i = v9 + v8 )
  {
    v7 = sub_180085BA4(0LL, i, v13, &v16);
    v3 = v7;
    if ( v7 )
      break;
    if ( v17 == 0x20000 && v19 )
    {
      v8 = v16;
      v9 = v18;
      v10 = v16 + v18;
      if ( v16 >= v16 + v18 )
        continue;
      do
      {
        v11 = v5++;
        LODWORD(lpAddress[1]) = v5;
        *((_QWORD *)lpAddress[0] + 2 * v11) = v8;
        if ( v5 == 4096 )
        {
          v3 = sub_180086354(v14);
          if ( v3 )
            goto LABEL_20;
          v5 = (unsigned int)lpAddress[1];
        }
        v8 += 4096LL;
      }
      while ( v8 < v10 );
    }
    v9 = v18;
    v8 = v16;
  }
  if ( v7 == 259 )
  {
    if ( !v5 || (v3 = sub_180086354(v14)) == 0 )
      v3 = 0;
    if ( !v3 )
      *a2 = v20;
  }
LABEL_20:
  if ( lpAddress[0] )
    VirtualFree(lpAddress[0], 0LL, 0x8000u);
  return v3;
}
