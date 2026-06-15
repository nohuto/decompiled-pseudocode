/*
 * XREFs of sub_180111AF8 @ 0x180111AF8
 * Callers:
 *     sub_180112CEC @ 0x180112CEC (sub_180112CEC.c)
 * Callees:
 *     sub_18000F708 @ 0x18000F708 (sub_18000F708.c)
 *     sub_18004BD84 @ 0x18004BD84 (sub_18004BD84.c)
 *     sub_1800CB144 @ 0x1800CB144 (sub_1800CB144.c)
 *     sub_180112774 @ 0x180112774 (sub_180112774.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall sub_180111AF8(__int64 a1, _BYTE *a2, unsigned int a3)
{
  HRESULT v5; // eax
  unsigned int v6; // ebx
  int v7; // edx
  int v8; // edi
  int v9; // esi
  _BYTE *v10; // rbp
  _UNKNOWN *retaddr; // [rsp+48h] [rbp+0h]
  LPVOID ppv; // [rsp+50h] [rbp+8h] BYREF

  ppv = 0LL;
  sub_1800CB144((__int64 *)&ppv);
  v5 = CoCreateInstance(&rclsid, 0LL, 0x17u, &stru_18015B0C0, &ppv);
  v6 = v5;
  if ( v5 >= 0 )
  {
    v8 = 0;
    while ( 2 )
    {
      v9 = 0;
      v10 = a2;
      do
      {
        if ( *v10 )
        {
          v5 = sub_180112774((unsigned int)v8, (unsigned int)v9, &unk_18015C744, a3);
          v6 = v5;
          if ( v5 < 0 )
          {
            v7 = 69;
            goto LABEL_12;
          }
        }
        ++v9;
        ++v10;
      }
      while ( v9 < 9 );
      ++v8;
      a2 += 9;
      if ( v8 < 2 )
        continue;
      break;
    }
    v6 = 0;
  }
  else
  {
    v7 = 56;
LABEL_12:
    sub_18004BD84((int)retaddr, v7, (int)"avcore\\audiocore\\server\\audiosrv\\defaultdevice\\dynamicrouting.cpp", v5);
  }
  sub_18000F708((__int64 *)&ppv);
  return v6;
}
