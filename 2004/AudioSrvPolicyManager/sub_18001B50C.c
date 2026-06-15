/*
 * XREFs of sub_18001B50C @ 0x18001B50C
 * Callers:
 *     sub_1800094B0 @ 0x1800094B0 (sub_1800094B0.c)
 *     sub_180009670 @ 0x180009670 (sub_180009670.c)
 *     sub_18001B18C @ 0x18001B18C (sub_18001B18C.c)
 *     sub_18001B274 @ 0x18001B274 (sub_18001B274.c)
 *     sub_18001B358 @ 0x18001B358 (sub_18001B358.c)
 *     sub_18001B43C @ 0x18001B43C (sub_18001B43C.c)
 *     sub_18001B7E4 @ 0x18001B7E4 (sub_18001B7E4.c)
 *     sub_18001F6D0 @ 0x18001F6D0 (sub_18001F6D0.c)
 *     sub_180024850 @ 0x180024850 (sub_180024850.c)
 * Callees:
 *     sub_1800050FC @ 0x1800050FC (sub_1800050FC.c)
 *     sub_180005724 @ 0x180005724 (sub_180005724.c)
 *     sub_180010370 @ 0x180010370 (sub_180010370.c)
 *     sub_18001DBC4 @ 0x18001DBC4 (sub_18001DBC4.c)
 *     sub_18001E024 @ 0x18001E024 (sub_18001E024.c)
 *     sub_18001F090 @ 0x18001F090 (sub_18001F090.c)
 *     sub_180028AD8 @ 0x180028AD8 (sub_180028AD8.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall sub_18001B50C(__int64 a1, __int64 a2)
{
  int v4; // ebx
  struct _RTL_CRITICAL_SECTION *v5; // rsi
  __int64 v6; // r14
  int v8; // [rsp+70h] [rbp+8h] BYREF
  __int64 v9; // [rsp+78h] [rbp+10h] BYREF
  struct _RTL_CRITICAL_SECTION *v10; // [rsp+80h] [rbp+18h]

  v4 = 0;
  v9 = 0LL;
  v8 = 0;
  v5 = (struct _RTL_CRITICAL_SECTION *)(a1 + 32);
  EnterCriticalSection((LPCRITICAL_SECTION)(a1 + 32));
  v10 = v5;
  if ( !*(_QWORD *)(a2 + 256) )
  {
    v4 = sub_18001DBC4(a1, *(_QWORD *)(a2 + 208), *(_QWORD *)(a2 + 240), *(unsigned int *)(a2 + 196), &v9, 1, &v8);
    if ( v4 < 0 || (v6 = v9, v4 = sub_180010370(v9, a2), v4 < 0) )
    {
      if ( v8 )
        sub_18001E024(a1, &v9);
    }
    else if ( (unsigned int)sub_180028AD8(*(_DWORD *)(a2 + 196)) && !*(_DWORD *)(v6 + 600) )
    {
      sub_18001F090(a1, v6);
    }
    if ( v4 < 0 )
    {
      if ( off_18004F000 != (_UNKNOWN *)&off_18004F000
        && (*((_DWORD *)off_18004F000 + 7) & 0x40000000) != 0
        && *((_BYTE *)off_18004F000 + 25) >= 2u )
      {
        sub_1800050FC(*((_QWORD *)off_18004F000 + 2), 0x16u, &stru_1800445C8, v4);
      }
      sub_180005724("CApplicationManager::Register", 851, v4);
    }
  }
  if ( v5 )
    LeaveCriticalSection(v5);
  return (unsigned int)v4;
}
