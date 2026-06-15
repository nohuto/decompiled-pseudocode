/*
 * XREFs of sub_18005AA7C @ 0x18005AA7C
 * Callers:
 *     sub_180059458 @ 0x180059458 (sub_180059458.c)
 *     sub_1801191A4 @ 0x1801191A4 (sub_1801191A4.c)
 * Callees:
 *     ?_TlgKeywordOn@__vcrt_trace_logging_provider@@YAEPEBU_TlgProvider_t@1@_K@Z @ 0x1800B704C (-_TlgKeywordOn@__vcrt_trace_logging_provider@@YAEPEBU_TlgProvider_t@1@_K@Z.c)
 *     sub_180121E18 @ 0x180121E18 (sub_180121E18.c)
 *     sub_180121F94 @ 0x180121F94 (sub_180121F94.c)
 */

void __fastcall sub_18005AA7C(__int64 a1, __int64 a2, __int128 *a3)
{
  int v3; // ebx
  int v4; // ecx
  int v5; // r8d
  int v6; // r9d
  int *v7; // r10
  __int64 v8; // r11
  int v9; // [rsp+B0h] [rbp-80h] BYREF
  int v10; // [rsp+B4h] [rbp-7Ch] BYREF
  int v11; // [rsp+B8h] [rbp-78h] BYREF
  int v12; // [rsp+BCh] [rbp-74h] BYREF
  int v13; // [rsp+C0h] [rbp-70h] BYREF
  int v14; // [rsp+C4h] [rbp-6Ch] BYREF
  int v15; // [rsp+C8h] [rbp-68h] BYREF
  int v16; // [rsp+CCh] [rbp-64h] BYREF
  int v17; // [rsp+D0h] [rbp-60h] BYREF
  int v18; // [rsp+D4h] [rbp-5Ch] BYREF
  int v19; // [rsp+D8h] [rbp-58h] BYREF
  int v20; // [rsp+DCh] [rbp-54h] BYREF
  int v21; // [rsp+E0h] [rbp-50h] BYREF
  _DWORD *v22; // [rsp+E8h] [rbp-48h] BYREF
  __int64 v23; // [rsp+F0h] [rbp-40h] BYREF
  __int128 v24; // [rsp+100h] [rbp-30h] BYREF
  __int128 v25; // [rsp+110h] [rbp-20h] BYREF
  int v26; // [rsp+130h] [rbp+0h] BYREF

  v3 = *(_DWORD *)(a1 + 60);
  if ( v3 == 4 )
  {
    v24 = *a3;
    sub_180121E18(a1, a2, &v24);
  }
  else
  {
    v25 = *a3;
    if ( (unsigned int)dword_18019C448 > 4 )
    {
      if ( __vcrt_trace_logging_provider::_TlgKeywordOn(
             (__vcrt_trace_logging_provider *)&dword_18019C448,
             (const struct _TlgProvider_t *)0x400000000008LL,
             (unsigned __int64)a3) )
      {
        v26 = v7[16];
        v22 = v7 + 11;
        v10 = v7[10];
        v11 = v7[9];
        v12 = v7[6];
        v13 = v7[7];
        v14 = v7[8];
        v15 = v7[5];
        v16 = v7[4];
        v17 = v7[3];
        v18 = v7[2];
        v19 = v7[1];
        v20 = *v7;
        *(_QWORD *)&v24 = &v25;
        v9 = v3;
        v21 = v6;
        v23 = v8;
        sub_180121F94(
          v4,
          (unsigned int)&unk_180169F86,
          v5,
          v6,
          (__int64)&v24,
          (__int64)&v23,
          (__int64)&v21,
          (__int64)&v20,
          (__int64)&v19,
          (__int64)&v18,
          (__int64)&v17,
          (__int64)&v16,
          (__int64)&v15,
          (__int64)&v14,
          (__int64)&v13,
          (__int64)&v12,
          (__int64)&v11,
          (__int64)&v10,
          (__int64)&v22,
          (__int64)&v9,
          (__int64)&v26);
      }
    }
  }
}
