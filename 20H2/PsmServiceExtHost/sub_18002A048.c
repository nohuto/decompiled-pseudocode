/*
 * XREFs of sub_18002A048 @ 0x18002A048
 * Callers:
 *     sub_180029FD0 @ 0x180029FD0 (sub_180029FD0.c)
 *     sub_18006B240 @ 0x18006B240 (sub_18006B240.c)
 * Callees:
 *     sub_180010470 @ 0x180010470 (sub_180010470.c)
 *     sub_18002A490 @ 0x18002A490 (sub_18002A490.c)
 *     sub_18006A690 @ 0x18006A690 (sub_18006A690.c)
 */

__int64 __fastcall sub_18002A048(__int64 a1, __int64 *a2)
{
  __int64 (__fastcall *v4)(); // r9
  int v5; // ebx
  char v7; // dl
  int v8; // ecx
  int v9; // r8d
  __int64 v10; // r9
  char v11; // al
  __int64 v12; // [rsp+40h] [rbp-10h] BYREF
  __int64 v13; // [rsp+48h] [rbp-8h] BYREF
  char v14; // [rsp+70h] [rbp+20h] BYREF
  int v15; // [rsp+80h] [rbp+30h] BYREF
  __int64 v16; // [rsp+88h] [rbp+38h] BYREF

  if ( (*(_BYTE *)(a1 + 1244) & 0x10) != 0 )
  {
    if ( (*(_BYTE *)(a1 + 1240) & 8) != 0 )
    {
      *a2 = 0LL;
      v16 = 0LL;
      goto LABEL_5;
    }
    v4 = (__int64 (__fastcall *)())&sub_18006B5D0;
  }
  else
  {
    v4 = sub_180035FD0;
  }
  v16 = 0LL;
  v5 = sub_18002A490(a1, 4096, 1, (_DWORD)v4, (__int64)&v16);
  if ( v5 < 0 )
  {
    v16 = -1LL;
    goto LABEL_6;
  }
  *a2 = v16;
LABEL_5:
  v5 = 0;
LABEL_6:
  if ( (unsigned int)dword_1800B31E0 > 5 && sub_180010470((__int64)&dword_1800B31E0, 1LL) )
  {
    v11 = v7 & (*(_DWORD *)(a1 + 1244) >> 4);
    v12 = v10;
    v14 = v11;
    v13 = *(_QWORD *)(a1 + 32);
    v15 = v5;
    sub_18006A690(v8, (unsigned int)&unk_18009BFFF, v9, v10, (__int64)&v15, (__int64)&v13, (__int64)&v12, (__int64)&v14);
  }
  return (unsigned int)v5;
}
