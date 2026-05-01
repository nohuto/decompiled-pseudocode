/*
 * XREFs of sub_180080BE8 @ 0x180080BE8
 * Callers:
 *     sub_1800027E8 @ 0x1800027E8 (sub_1800027E8.c)
 * Callees:
 *     sub_1800030B4 @ 0x1800030B4 (sub_1800030B4.c)
 *     sub_180006EBC @ 0x180006EBC (sub_180006EBC.c)
 *     sub_180010470 @ 0x180010470 (sub_180010470.c)
 *     sub_18001BD70 @ 0x18001BD70 (sub_18001BD70.c)
 *     sub_180029ED0 @ 0x180029ED0 (sub_180029ED0.c)
 *     sub_180063424 @ 0x180063424 (sub_180063424.c)
 *     sub_180080FF4 @ 0x180080FF4 (sub_180080FF4.c)
 */

void __fastcall sub_180080BE8(__int64 a1, unsigned int a2)
{
  unsigned int v2; // r9d
  unsigned __int64 v4; // r8
  unsigned int v5; // edi
  __int64 v6; // rcx
  unsigned int v7; // edx
  __int64 v8; // rsi
  __int64 v9; // r15
  unsigned __int64 v10; // r14
  unsigned __int64 v11; // rax
  __int64 v12; // r8
  __int64 v13; // r9
  __int64 v14; // rcx
  __int64 v15; // r8
  __int64 v16; // r9
  unsigned __int64 v17; // [rsp+30h] [rbp-20h] BYREF
  __int64 v18; // [rsp+38h] [rbp-18h] BYREF
  __int64 v19; // [rsp+40h] [rbp-10h] BYREF
  __int64 v20; // [rsp+48h] [rbp-8h] BYREF
  int v21; // [rsp+90h] [rbp+40h] BYREF
  unsigned int v22; // [rsp+A0h] [rbp+50h] BYREF
  int v23; // [rsp+A8h] [rbp+58h]

  v2 = a2;
  if ( (*(_BYTE *)(a1 + 544) & 0x20) == 0 && (unsigned __int8)(*(_BYTE *)(a1 + 548) - 2) <= 1u )
  {
    v4 = *(_QWORD *)(a1 + 32) & 0xFFFFFFFFFFFFFFFCuLL;
    v5 = -1;
    if ( a2 )
    {
      do
      {
        _BitScanForward((unsigned int *)&v6, v2);
        v7 = v5;
        v23 = v6;
        v5 = *(_DWORD *)(v4 + 4 * v6 + 432);
        if ( v7 < v5 )
          v5 = v7;
        v2 &= ~(1 << v6);
      }
      while ( v2 );
      if ( v5 != -1 )
      {
        v8 = *(_QWORD *)(a1 + 80);
        if ( !v5 )
        {
          sub_180006EBC(a1);
LABEL_10:
          sub_180080FF4(a1);
          sub_18001BD70(v8);
          sub_180029ED0(v8);
          return;
        }
        v9 = 10000LL * v5;
        RtlQueryUnbiasedInterruptTime(&v17);
        v10 = -1LL;
        v11 = *(_QWORD *)(a1 + 536);
        if ( v17 + v9 >= v17 )
          v10 = v17 + v9;
        if ( !v11 || v10 < v11 )
        {
          sub_180006EBC(a1);
          if ( (int)TpAllocTimer(a1 + 528, sub_180080E10, a1, 0LL) < 0 )
          {
            if ( (unsigned int)dword_1800B3218 > 4 )
            {
              if ( sub_180010470((__int64)&dword_1800B3218, 8LL) )
              {
                v18 = *(_QWORD *)(a1 + 40);
                v21 = v13;
                sub_180063424((__int64)&dword_1800B3218, byte_1800A1E47, v12, v13, (__int64)&v21, (__int64)&v18);
              }
            }
            *(_QWORD *)(a1 + 536) = 0LL;
            goto LABEL_10;
          }
          if ( _InterlockedIncrement64((volatile signed __int64 *)(a1 + 24)) <= 1 )
            __fastfail(0xEu);
          v14 = *(_QWORD *)(a1 + 528);
          v19 = -10000LL * v5;
          TpSetTimer(v14, &v19, 0LL, 0LL);
          *(_QWORD *)(a1 + 536) = v10;
          if ( (unsigned int)dword_1800B3218 > 4 && sub_180010470((__int64)&dword_1800B3218, 8LL) )
          {
            v20 = *(_QWORD *)(a1 + 40);
            v22 = v5;
            sub_1800030B4((int)&dword_1800B3218, (int)&unk_1800A1BF5, v15, v16, (__int64)&v20, (__int64)&v22);
          }
        }
      }
    }
  }
}
