/*
 * XREFs of sub_18007E858 @ 0x18007E858
 * Callers:
 *     sub_18001B300 @ 0x18001B300 (sub_18001B300.c)
 * Callees:
 *     sub_180006CA4 @ 0x180006CA4 (sub_180006CA4.c)
 *     sub_1800181E0 @ 0x1800181E0 (sub_1800181E0.c)
 *     sub_18001E310 @ 0x18001E310 (sub_18001E310.c)
 *     sub_180020F50 @ 0x180020F50 (sub_180020F50.c)
 *     sub_18002E0B4 @ 0x18002E0B4 (sub_18002E0B4.c)
 *     sub_180035C5C @ 0x180035C5C (sub_180035C5C.c)
 *     sub_18007E5CC @ 0x18007E5CC (sub_18007E5CC.c)
 */

__int64 __fastcall sub_18007E858(__int64 a1, unsigned __int8 a2)
{
  int v2; // ebp
  __int64 v3; // rsi
  __int64 v4; // rbx
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // r8
  __int64 v8; // r9
  __int64 v9; // rdi
  __int64 result; // rax
  _QWORD v11[5]; // [rsp+30h] [rbp-28h] BYREF
  char v12; // [rsp+70h] [rbp+18h] BYREF
  DWORD v13; // [rsp+78h] [rbp+20h] BYREF

  v2 = a2;
  v3 = sub_18001E310(a1);
  while ( v3 )
  {
    v4 = v3;
    v3 = sub_18007E5CC(v3);
    if ( (*(_DWORD *)(v4 + 32) & 7) == v2 )
    {
      if ( *(_BYTE *)(v4 + 40) != 3 )
      {
        v9 = *(_QWORD *)v4;
        if ( (unsigned int)dword_1800B3218 > 4 && (byte_1800B3228 & 8) != 0 && (qword_1800B3230 & 8) == qword_1800B3230 )
        {
          v11[0] = *(_QWORD *)(v9 + 40);
          v12 = v2;
          sub_18002E0B4(v6, (int)&unk_1800A15B8, v7, v8, (__int64)v11, (__int64)&v12);
        }
        switch ( v2 )
        {
          case 1:
            result = sub_1800181E0(v9, 0, &v13, 0LL);
            if ( (int)result < 0 )
              return result;
            break;
          case 2:
            goto LABEL_13;
          case 3:
            sub_180020F50(v9, v5);
            break;
          case 4:
LABEL_13:
            sub_180006CA4(v9, v5);
            break;
        }
        if ( (_BYTE)v2 == 1 )
        {
          *(_DWORD *)(v4 + 32) &= 0xFFFFFFFC;
          *(_DWORD *)(v4 + 32) |= 4u;
        }
        continue;
      }
      sub_180035C5C((_BYTE *)v4);
    }
  }
  return 0LL;
}
