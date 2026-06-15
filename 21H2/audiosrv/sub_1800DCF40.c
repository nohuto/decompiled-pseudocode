/*
 * XREFs of sub_1800DCF40 @ 0x1800DCF40
 * Callers:
 *     <none>
 * Callees:
 *     sub_18002EAA8 @ 0x18002EAA8 (sub_18002EAA8.c)
 *     sub_18004BD84 @ 0x18004BD84 (sub_18004BD84.c)
 *     sub_1800C2584 @ 0x1800C2584 (sub_1800C2584.c)
 *     sub_1800D2D34 @ 0x1800D2D34 (sub_1800D2D34.c)
 */

__int64 __fastcall sub_1800DCF40(__int64 a1, unsigned int a2, float a3, _DWORD *a4)
{
  struct _RTL_CRITICAL_SECTION *v8; // rbx
  __int64 v9; // rcx
  int v10; // eax
  unsigned int v11; // edi
  int v12; // r9d
  int v13; // edx
  _UNKNOWN *retaddr; // [rsp+48h] [rbp+0h]

  if ( off_18019C348 != (_UNKNOWN *)&off_18019C348
    && (*((_BYTE *)off_18019C348 + 28) & 0x40) != 0
    && *((_BYTE *)off_18019C348 + 25) >= 4u )
  {
    sub_1800C2584(*((_QWORD *)off_18019C348 + 2), 0x26u, (__int64)&unk_18015E3E8, a1, a2, a3);
  }
  if ( !sub_18002EAA8(a3) )
  {
    sub_18004BD84((int)retaddr, 2414, (int)"avcore\\audiocore\\server\\audiosrv\\dll\\vadserver.cpp", -2147024809);
    return 2147942487LL;
  }
  v8 = (struct _RTL_CRITICAL_SECTION *)(a1 + 224);
  EnterCriticalSection((LPCRITICAL_SECTION)(a1 + 224));
  v9 = *(_QWORD *)(a1 + 192);
  if ( !v9 || !*(_DWORD *)(a1 + 184) )
  {
    v11 = -2004287487;
    v13 = 2418;
    v12 = -2004287487;
    goto LABEL_15;
  }
  v10 = sub_1800D2D34(v9, a2, a3, a4);
  v11 = v10;
  if ( v10 < 0 )
  {
    v12 = v10;
    v13 = 2419;
LABEL_15:
    sub_18004BD84((int)retaddr, v13, (int)"avcore\\audiocore\\server\\audiosrv\\dll\\vadserver.cpp", v12);
    if ( v8 )
      LeaveCriticalSection(v8);
    return v11;
  }
  if ( v8 )
    LeaveCriticalSection(v8);
  return 0LL;
}
