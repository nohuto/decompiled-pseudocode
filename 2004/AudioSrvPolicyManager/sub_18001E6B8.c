/*
 * XREFs of sub_18001E6B8 @ 0x18001E6B8
 * Callers:
 *     sub_1800112C0 @ 0x1800112C0 (sub_1800112C0.c)
 *     sub_1800115F4 @ 0x1800115F4 (sub_1800115F4.c)
 *     sub_18001E7B8 @ 0x18001E7B8 (sub_18001E7B8.c)
 *     sub_18001F090 @ 0x18001F090 (sub_18001F090.c)
 *     sub_18001FA04 @ 0x18001FA04 (sub_18001FA04.c)
 *     sub_1800205B0 @ 0x1800205B0 (sub_1800205B0.c)
 *     sub_18002BB70 @ 0x18002BB70 (sub_18002BB70.c)
 *     sub_18002C920 @ 0x18002C920 (sub_18002C920.c)
 *     sub_18002CAC0 @ 0x18002CAC0 (sub_18002CAC0.c)
 * Callees:
 *     sub_180010BC0 @ 0x180010BC0 (sub_180010BC0.c)
 *     sub_180012138 @ 0x180012138 (sub_180012138.c)
 *     sub_18001EC8C @ 0x18001EC8C (sub_18001EC8C.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall sub_18001E6B8(__int64 a1, __int64 a2, unsigned int a3, int a4)
{
  int v7; // ebx
  struct _RTL_CRITICAL_SECTION *v8; // r14
  unsigned int v9; // edi
  int v10; // ebx
  int v12; // [rsp+28h] [rbp-30h]
  unsigned int v13; // [rsp+30h] [rbp-28h] BYREF
  int v14; // [rsp+34h] [rbp-24h] BYREF
  struct _RTL_CRITICAL_SECTION *v15; // [rsp+38h] [rbp-20h]
  int v16; // [rsp+60h] [rbp+8h] BYREF

  v7 = a1;
  v8 = (struct _RTL_CRITICAL_SECTION *)(a1 + 32);
  EnterCriticalSection((LPCRITICAL_SECTION)(a1 + 32));
  v15 = v8;
  sub_18001EC8C(v7, a2, (unsigned int)&v14, (unsigned int)&v13, (__int64)&v16);
  v12 = a4;
  v9 = v13;
  v10 = v14;
  sub_180010BC0(a2, v14, v13, v16, a3, v12);
  if ( !v10 && !v9 )
  {
    if ( v16 == 1 )
    {
      *(_QWORD *)(a2 + 564) = 0LL;
      *(_QWORD *)(a2 + 572) = 0LL;
      *(_QWORD *)(a2 + 580) = 0LL;
      *(_DWORD *)(a2 + 588) = 1;
      sub_180012138((_DWORD *)a2);
    }
    else if ( *(_DWORD *)(a2 + 564) != 6 )
    {
      *(_DWORD *)(a2 + 564) = 6;
      *(_QWORD *)(a2 + 568) = 1LL;
      *(_QWORD *)(a2 + 576) = 1LL;
    }
  }
  if ( v8 )
    LeaveCriticalSection(v8);
  return 0LL;
}
