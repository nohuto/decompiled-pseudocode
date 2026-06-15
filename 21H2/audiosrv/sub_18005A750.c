/*
 * XREFs of sub_18005A750 @ 0x18005A750
 * Callers:
 *     sub_18005A578 @ 0x18005A578 (sub_18005A578.c)
 *     sub_180119B6C @ 0x180119B6C (sub_180119B6C.c)
 *     sub_18011BFE4 @ 0x18011BFE4 (sub_18011BFE4.c)
 *     sub_18011F504 @ 0x18011F504 (sub_18011F504.c)
 * Callees:
 *     sub_18005A854 @ 0x18005A854 (sub_18005A854.c)
 *     sub_18006A18C @ 0x18006A18C (sub_18006A18C.c)
 *     memcpy @ 0x18007443F (memcpy.c)
 *     sub_180119CCC @ 0x180119CCC (sub_180119CCC.c)
 */

__int64 __fastcall sub_18005A750(__int64 a1, unsigned __int16 *a2, int a3, int a4, int a5, int a6, int a7)
{
  _QWORD *v11; // rax
  _QWORD *v12; // rbx
  __int64 v13; // rdi
  void *v14; // rax
  void *v15; // rsi
  int v16; // edi
  _QWORD *v18; // [rsp+20h] [rbp-28h] BYREF

  v11 = (_QWORD *)sub_18006A18C(32LL, &unk_18019F848);
  v12 = v11;
  if ( v11 )
  {
    v11[1] = 0LL;
    v11[2] = 0LL;
    v11[3] = 0LL;
    *v11 = 0LL;
  }
  else
  {
    v12 = 0LL;
  }
  v18 = v12;
  if ( !v12 )
    return (unsigned int)-2147024882;
  v13 = a2[8];
  v14 = CoTaskMemAlloc(v13 + 18);
  v15 = v14;
  if ( v14 )
  {
    memcpy(v14, a2, v13 + 18);
    v16 = 0;
  }
  else
  {
    v16 = -2147024882;
  }
  *v12 = v15;
  if ( v16 < 0 )
  {
LABEL_13:
    sub_180119CCC(v12);
    return (unsigned int)v16;
  }
  *((_DWORD *)v12 + 3) = a3;
  *((_DWORD *)v12 + 2) = a4;
  *((_DWORD *)v12 + 4) = a5;
  *((_DWORD *)v12 + 5) = a6;
  *((_DWORD *)v12 + 6) = a7;
  if ( !(unsigned int)sub_18005A854(a1 + 16, &v18) )
  {
    v16 = -2147024882;
    goto LABEL_13;
  }
  return (unsigned int)v16;
}
