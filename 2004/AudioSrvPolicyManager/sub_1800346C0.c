/*
 * XREFs of sub_1800346C0 @ 0x1800346C0
 * Callers:
 *     <none>
 * Callees:
 *     sub_18000A174 @ 0x18000A174 (sub_18000A174.c)
 *     sub_180036244 @ 0x180036244 (sub_180036244.c)
 *     memset @ 0x18003A7D8 (memset.c)
 */

char *__fastcall sub_1800346C0(__int64 a1)
{
  char *v1; // rbx
  void *v3; // r14
  __int64 v4; // rbx
  int v5; // edi
  DWORD LengthSid; // ebp
  int v7; // eax
  DWORD v8; // ebp
  char *v9; // rax
  char *v10; // rdi
  int v11; // eax
  __int128 *v12; // rax
  int v13; // ecx
  __int128 v14; // xmm0
  __int128 *v15; // rax
  __int128 v16; // xmm0
  DWORD v17; // eax

  v1 = *(char **)(a1 + 136);
  if ( !v1 )
  {
    v3 = (void *)(a1 + 16);
    v4 = *(_QWORD *)(a1 + 160);
    v5 = *(_QWORD *)(a1 + 152) != 0LL ? 44 : 28;
    LengthSid = GetLengthSid((PSID)(a1 + 16));
    v7 = v5 - 16;
    if ( v4 )
      v7 = v5;
    v8 = v7 + LengthSid;
    v9 = (char *)o_malloc(v8);
    v1 = v9;
    if ( !v9 )
      sub_18000A174(-2147024882);
    memset(v9, 0, v8);
    *((_WORD *)v1 + 1) = v8;
    v10 = v1 + 44;
    v1[1] = *(_BYTE *)(a1 + 132);
    *v1 = 6 - (*(_BYTE *)(a1 + 144) != 0);
    v11 = *(_DWORD *)(a1 + 128);
    *((_DWORD *)v1 + 2) = 0;
    *((_DWORD *)v1 + 1) = v11;
    v12 = *(__int128 **)(a1 + 152);
    if ( v12 )
    {
      v14 = *v12;
      *((_DWORD *)v1 + 2) = 1;
      v13 = 3;
      *(_OWORD *)(v1 + 12) = v14;
    }
    else
    {
      v10 = v1 + 28;
      v13 = 2;
    }
    v15 = *(__int128 **)(a1 + 160);
    if ( v15 )
    {
      v16 = *v15;
      if ( *(_QWORD *)(a1 + 152) )
        *(_OWORD *)(v1 + 28) = v16;
      else
        *(_OWORD *)(v1 + 12) = v16;
      *((_DWORD *)v1 + 2) = v13;
    }
    else
    {
      v10 -= 16;
    }
    v17 = GetLengthSid(v3);
    sub_180036244(v10, v10 - v1, v3, v17);
    *(_QWORD *)(a1 + 136) = v1;
  }
  return v1;
}
