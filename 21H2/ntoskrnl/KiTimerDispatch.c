/*
 * XREFs of KiTimerDispatch @ 0x140A12350
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall KiTimerDispatch(__int64 a1, __int64 a2)
{
  unsigned int v2; // esi
  __int64 v3; // r10
  unsigned __int64 *v4; // rdx
  unsigned __int64 v5; // r10
  _QWORD *v6; // r9
  __int64 v7; // r8
  unsigned __int64 *v8; // rcx
  char v9; // al
  unsigned __int64 v10; // rbx
  unsigned int v11; // edi
  unsigned int i; // r11d
  char v13; // r8
  __int64 v14; // r8
  __int64 v15; // rdx
  __int64 v16; // rdx
  unsigned __int64 v18; // [rsp+20h] [rbp-28h] BYREF
  unsigned __int64 v19; // [rsp+28h] [rbp-20h]
  unsigned __int64 v20; // [rsp+58h] [rbp+10h]

  _mm_lfence();
  v2 = 16;
  v3 = a2 ^ *(_QWORD *)(a1 + 64);
  v4 = &v18;
  v18 = 0xAFA4A1AEA0ADABA8uLL;
  v5 = v3 | 0xFFFF800000000000uLL;
  v19 = 0xAAA3A7A9ACA6A2A5uLL;
  v6 = (_QWORD *)v5;
  v7 = 16LL;
  v20 = __ROR8__(v5, v5 & 0x3F);
  v8 = &v18;
  do
  {
    v9 = *(_BYTE *)v8;
    v8 = (unsigned __int64 *)((char *)v8 + 1);
    *(_BYTE *)v4 = v9 ^ 0xA8;
    v4 = (unsigned __int64 *)((char *)v4 + 1);
    --v7;
  }
  while ( v7 );
  v10 = v20;
  v11 = 25;
  for ( i = 0; i < v11; ++i )
  {
    v13 = ~(unsigned __int8)*v6 & 0x3F;
    *v6 = v5 + (v10 ^ *v6) + i;
    v10 = v5 + __ROL8__(__ROR8__(i ^ (unsigned __int64)(200 - i), v13) ^ v10, v13);
    v14 = v2;
    do
    {
      v15 = __ROL8__(*v6, 4);
      *v6 = *((unsigned __int8 *)&v18 + (v15 & 0xF)) | v15 & 0xFFFFFFFFFFFFFFF0uLL;
      --v14;
    }
    while ( v14 );
    ++v6;
    if ( i == 24 )
    {
      if ( *(_QWORD *)v5 != 0x85131481131482ELL )
      {
        *(v6 - 1) ^= 0x85131481131482ELL ^ *(_QWORD *)v5;
        v11 += *((_DWORD *)v6 - 1);
        *(v6 - 1) ^= 0x85131481131482ELL ^ *(_QWORD *)v5;
      }
      v2 = 1;
    }
  }
  v16 = *(_QWORD *)v5 ^ 0x85131481131482ELL;
  *(_DWORD *)v5 = 288442414;
  return ((__int64 (__fastcall *)(unsigned __int64, __int64, _QWORD, _QWORD, unsigned __int64, unsigned __int64))v5)(
           v5,
           v16,
           0LL,
           0LL,
           v18,
           v19);
}
