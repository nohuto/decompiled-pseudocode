/*
 * XREFs of BcpGetCharacterMaxResourceProfile @ 0x1403BCDF0
 * Callers:
 *     BcpGetMaxResourceProfile @ 0x1403BCD2C (BcpGetMaxResourceProfile.c)
 * Callees:
 *     RaspGetXExtent @ 0x1403B2274 (RaspGetXExtent.c)
 */

__int64 __fastcall BcpGetCharacterMaxResourceProfile(unsigned __int16 a1, int a2, __int128 *a3, __int64 a4)
{
  __int64 v5; // xmm1_8
  __int64 v7; // rsi
  int *v8; // rbx
  int v9; // eax
  int XExtent; // r8d
  unsigned int v11; // edx
  unsigned __int64 v12; // rax
  unsigned __int64 v13; // rcx
  bool v14; // cf
  int v16; // [rsp+20h] [rbp-48h]
  __int128 v17; // [rsp+30h] [rbp-38h] BYREF
  __int64 v18; // [rsp+40h] [rbp-28h]
  __int128 v19; // [rsp+48h] [rbp-20h] BYREF
  unsigned __int64 v20; // [rsp+58h] [rbp-10h]
  unsigned int v21; // [rsp+80h] [rbp+18h] BYREF

  v5 = *((_QWORD *)a3 + 2);
  v17 = *a3;
  v7 = 0LL;
  v18 = v5;
  v8 = (int *)((char *)&unk_140C10EF0 + 4 * a2);
  do
  {
    v9 = *v8;
    v21 = 0;
    LODWORD(v18) = v9;
    v20 = 0LL;
    v19 = 0LL;
    XExtent = RaspGetXExtent(a1, (__int64)&v17, &v21, a4, v16, (__int64 *)&v19);
    if ( XExtent < 0 )
      break;
    v11 = v21;
    v12 = v20;
    if ( *(_DWORD *)(a4 + 8) >= v21 )
      v11 = *(_DWORD *)(a4 + 8);
    v13 = *(_QWORD *)a4;
    v14 = *(_QWORD *)a4 < v20;
    *(_DWORD *)(a4 + 8) = v11;
    if ( !v14 )
      v12 = v13;
    ++v7;
    v8 += 18;
    *(_QWORD *)a4 = v12;
  }
  while ( v7 < 5 );
  return (unsigned int)XExtent;
}
