/*
 * XREFs of sub_1800066B0 @ 0x1800066B0
 * Callers:
 *     sub_18000506C @ 0x18000506C (sub_18000506C.c)
 *     sub_180005750 @ 0x180005750 (sub_180005750.c)
 *     sub_180006018 @ 0x180006018 (sub_180006018.c)
 *     sub_1800062C8 @ 0x1800062C8 (sub_1800062C8.c)
 *     sub_180018AF0 @ 0x180018AF0 (sub_180018AF0.c)
 *     sub_18001BD70 @ 0x18001BD70 (sub_18001BD70.c)
 *     sub_18002785C @ 0x18002785C (sub_18002785C.c)
 *     sub_180046950 @ 0x180046950 (sub_180046950.c)
 *     sub_18007D3AC @ 0x18007D3AC (sub_18007D3AC.c)
 * Callees:
 *     sub_180005030 @ 0x180005030 (sub_180005030.c)
 *     sub_1800067F0 @ 0x1800067F0 (sub_1800067F0.c)
 *     sub_180008CE8 @ 0x180008CE8 (sub_180008CE8.c)
 *     sub_18000E1BC @ 0x18000E1BC (sub_18000E1BC.c)
 *     sub_18000E244 @ 0x18000E244 (sub_18000E244.c)
 *     sub_1800223EC @ 0x1800223EC (sub_1800223EC.c)
 *     sub_1800260A0 @ 0x1800260A0 (sub_1800260A0.c)
 *     sub_1800299B8 @ 0x1800299B8 (sub_1800299B8.c)
 *     sub_18002B21C @ 0x18002B21C (sub_18002B21C.c)
 *     sub_18002E0B4 @ 0x18002E0B4 (sub_18002E0B4.c)
 */

__int64 __fastcall sub_1800066B0(__int64 a1, int a2)
{
  __int64 result; // rax
  int v5; // ecx
  int v6; // r8d
  int v7; // r9d
  int v8; // esi
  __int64 *v9; // rbx
  int v10; // r8d
  int v11; // r9d
  int v12; // ecx
  __int64 v13; // rbx
  __int64 v14; // [rsp+40h] [rbp-10h] BYREF
  char v15; // [rsp+88h] [rbp+38h] BYREF
  __int64 v16; // [rsp+90h] [rbp+40h] BYREF
  __int64 v17; // [rsp+98h] [rbp+48h] BYREF

  result = sub_1800067F0(a1);
  v8 = result;
  if ( a2 != (_DWORD)result )
  {
    if ( !(_DWORD)result )
    {
      if ( a2 )
      {
        sub_180008CE8(
          (*(_QWORD *)(*(_QWORD *)((*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 776) + 88LL) + 32LL) & 0xFFFFFFFFFFFFFFFCuLL)
                                 + 120)
                     + 32LL) & 0xFFFFFFFFFFFFFFFCuLL)
        + 168,
          0LL);
        result = sub_1800299B8(a1);
        if ( (_DWORD)result )
        {
          result = sub_180005030(a1);
          if ( (_DWORD)result )
          {
            v13 = *(_QWORD *)(*(_QWORD *)(a1 + 776) + 88LL);
            sub_1800223EC(v13);
            sub_1800260A0(v13);
            result = RtlWakeAllConditionVariable(v13 + 320);
          }
        }
      }
    }
    v9 = *(__int64 **)(a1 + 688);
    if ( v9 )
    {
      sub_18000E1BC(*(_QWORD *)(a1 + 688));
      if ( !a2 || v8 )
        ++*((_DWORD *)v9 + 22);
      else
        --*((_DWORD *)v9 + 22);
      v12 = *((_DWORD *)v9 + 22);
      if ( (unsigned int)dword_1800B3218 > 5 )
      {
        v17 = *(_QWORD *)(a1 - 32);
        v14 = *v9;
        v15 = v8;
        LODWORD(v16) = v12;
        sub_18002B21C(
          v12,
          (unsigned int)&unk_1800A0AA2,
          v10,
          v11,
          (__int64)&v14,
          (__int64)&v16,
          (__int64)&v17,
          (__int64)&v15);
      }
      return sub_18000E244(v9);
    }
    else if ( (unsigned int)dword_1800B3218 > 5 )
    {
      v16 = *(_QWORD *)(a1 - 32);
      v15 = v8;
      return sub_18002E0B4(v5, (unsigned int)&unk_1800A1315, v6, v7, (__int64)&v16, (__int64)&v15);
    }
  }
  return result;
}
