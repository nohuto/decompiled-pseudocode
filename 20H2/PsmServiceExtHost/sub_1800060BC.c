/*
 * XREFs of sub_1800060BC @ 0x1800060BC
 * Callers:
 *     sub_18001BD70 @ 0x18001BD70 (sub_18001BD70.c)
 *     sub_18002785C @ 0x18002785C (sub_18002785C.c)
 *     sub_180037E84 @ 0x180037E84 (sub_180037E84.c)
 *     sub_18007D890 @ 0x18007D890 (sub_18007D890.c)
 *     sub_18007F6D0 @ 0x18007F6D0 (sub_18007F6D0.c)
 * Callees:
 *     sub_1800027E8 @ 0x1800027E8 (sub_1800027E8.c)
 *     sub_180006258 @ 0x180006258 (sub_180006258.c)
 *     sub_180006278 @ 0x180006278 (sub_180006278.c)
 *     sub_1800062A4 @ 0x1800062A4 (sub_1800062A4.c)
 *     _guard_dispatch_icall_nop @ 0x180046860 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall sub_1800060BC(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        int a4,
        char a5,
        int a6,
        char a7,
        unsigned int (__fastcall *a8)(__int64, _QWORD),
        int a9,
        __int64 a10)
{
  int v11; // ebp
  unsigned int v12; // r12d
  int v13; // esi
  __int64 result; // rax
  __int64 v15; // rdx
  __int64 v16; // r8
  __int64 i; // rbx
  int v18; // eax

  v11 = a3;
  v12 = a2;
  if ( (_DWORD)a3 == 5 )
    v13 = *(unsigned __int16 *)(a1 + 648);
  else
    v13 = 6912;
  result = sub_180006258(a1, a2, a3);
  for ( i = result; result; i = result )
  {
    if ( (*(_BYTE *)(i + 544) & 8) == 0 )
    {
      LOBYTE(v15) = a5;
      if ( (unsigned int)sub_180006278(i, v15) )
      {
        v18 = *(_DWORD *)(i + 112);
        LOBYTE(v15) = (v18 & 0x2000) == 0;
        if ( ((unsigned __int8)v15 & ((a7 & 2) != 0)) == 0 )
        {
          LOBYTE(v15) = (v18 & 0x400) == 0;
          if ( ((unsigned __int8)v15 & ((a7 & 1) != 0)) == 0
            && ((a7 & 4) == 0 || (*(_BYTE *)(i + 116) & 0x40) != 0)
            && ((v18 & 0x800) != 0 || (a7 & 8) == 0)
            && (!a8 || a8(i, 0LL)) )
          {
            sub_1800027E8(i, v12, v11, a4, v13, a6, a10);
          }
        }
      }
    }
    result = sub_1800062A4(i, v15, v16);
  }
  return result;
}
