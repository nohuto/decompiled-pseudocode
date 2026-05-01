/*
 * XREFs of sub_18007DF84 @ 0x18007DF84
 * Callers:
 *     sub_1800824A8 @ 0x1800824A8 (sub_1800824A8.c)
 * Callees:
 *     sub_1800027E8 @ 0x1800027E8 (sub_1800027E8.c)
 *     sub_18000506C @ 0x18000506C (sub_18000506C.c)
 *     sub_180006258 @ 0x180006258 (sub_180006258.c)
 *     sub_1800062A4 @ 0x1800062A4 (sub_1800062A4.c)
 *     sub_1800067F0 @ 0x1800067F0 (sub_1800067F0.c)
 *     sub_1800093A0 @ 0x1800093A0 (sub_1800093A0.c)
 *     sub_18000A110 @ 0x18000A110 (sub_18000A110.c)
 *     sub_180010470 @ 0x180010470 (sub_180010470.c)
 *     sub_180017F60 @ 0x180017F60 (sub_180017F60.c)
 *     sub_18002A350 @ 0x18002A350 (sub_18002A350.c)
 *     sub_18007CC90 @ 0x18007CC90 (sub_18007CC90.c)
 */

char __fastcall sub_18007DF84(__int64 a1, unsigned int a2, __int64 a3)
{
  char v5; // si
  unsigned __int64 v6; // r14
  int v7; // edx
  int v8; // r14d
  __int64 i; // rax
  __int64 v11; // rdi
  int v12; // eax
  __int64 v13; // r8
  __int64 v14; // r9
  __int64 v15; // rcx
  void *v16; // [rsp+50h] [rbp-20h] BYREF
  void *v17; // [rsp+58h] [rbp-18h] BYREF
  __int64 v18; // [rsp+60h] [rbp-10h] BYREF
  __int64 v19; // [rsp+B0h] [rbp+40h] BYREF
  __int64 v20; // [rsp+B8h] [rbp+48h] BYREF

  if ( (int)sub_18002A350(a1, &v19, a3) >= 0 && (_DWORD)v19 )
    return 0;
  sub_1800093A0(a1, 0);
  v6 = *(_QWORD *)(*(_QWORD *)((*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 776) + 88LL) + 32LL) & 0xFFFFFFFFFFFFFFFCuLL)
                             + 120)
                 + 32LL) & 0xFFFFFFFFFFFFFFFCuLL;
  if ( !sub_1800067F0(a1, v7) )
  {
    v5 = 0;
    for ( i = sub_180006258(a1); ; i = sub_1800062A4(v11) )
    {
      v11 = i;
      if ( !i )
        goto LABEL_6;
      if ( (*(_BYTE *)(i + 544) & 0x28) == 0 && (unsigned __int8)(*(_BYTE *)(i + 548) - 2) <= 1u )
      {
        v12 = *(_DWORD *)(i + 112);
        if ( (v12 & 0x4000) != 0 )
        {
          v5 = 2;
          if ( (*(_BYTE *)(a1 + 656) & 4) == 0 && a2 >= *(_DWORD *)(v6 + 248) )
          {
            v8 = sub_18000506C(a1, 3u, 2048, 0LL, 1, 0);
            if ( (unsigned int)dword_1800B3218 > 4 && sub_180010470((__int64)&dword_1800B3218, 0x400000000008LL) )
            {
              v15 = *(_QWORD *)(a1 - 32);
              v16 = (void *)(a1 + 24);
              v19 = 0x1000000LL;
              v17 = (void *)(v11 + 124);
              v18 = *(_QWORD *)(v11 + 40);
              v20 = v15;
              sub_18007CC90(v15, byte_1800A094A, v13, v14, (__int64)&v18, &v17, &v16, (__int64)&v20, (__int64)&v19);
            }
            goto LABEL_7;
          }
        }
        if ( (*(_BYTE *)(v11 + 120) & 4) != 0 )
        {
          v5 = 3;
LABEL_21:
          sub_1800027E8(v11, 3u, 4, 0, 6912, (v12 & 0x800) != 0 ? 8 : 4, 0LL);
          continue;
        }
        if ( (*(_BYTE *)(v11 + 120) & 8) != 0 )
        {
          v5 = 4;
          if ( a2 >= *(_DWORD *)(v6 + 244) )
            goto LABEL_21;
        }
      }
    }
  }
  v5 = 1;
LABEL_6:
  v8 = 0;
LABEL_7:
  sub_18000A110(a1);
  if ( v8 )
    sub_180017F60(*(char **)(a1 + 688));
  return v5;
}
