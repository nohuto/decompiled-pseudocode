/*
 * XREFs of ?UMPDDrvDriverFn@@YAHPEAXPEAH@Z @ 0x1C00EDB60
 * Callers:
 *     ?UMPD_ldevLoadDriver@@YAPEAU_LDEV@@PEAGW4_LDEVTYPE@@@Z @ 0x1C00ED9C8 (-UMPD_ldevLoadDriver@@YAPEAU_LDEV@@PEAGW4_LDEVTYPE@@@Z.c)
 * Callees:
 *     ?Thunk@UMPDOBJ@@QEAAKPEAXK0K@Z @ 0x1C00EE8FC (-Thunk@UMPDOBJ@@QEAAKPEAXK0K@Z.c)
 *     ??1XUMPDOBJ@@QEAA@XZ @ 0x1C00EEB38 (--1XUMPDOBJ@@QEAA@XZ.c)
 *     ??0XUMPDOBJ@@QEAA@XZ @ 0x1C00EF148 (--0XUMPDOBJ@@QEAA@XZ.c)
 *     __security_check_cookie @ 0x1C0157760 (__security_check_cookie.c)
 */

__int64 __fastcall UMPDDrvDriverFn(void *a1, int *a2)
{
  unsigned int v4; // ebx
  size_t Size; // [rsp+20h] [rbp-48h]
  UMPDOBJ *v7; // [rsp+30h] [rbp-38h] BYREF
  __int128 v8; // [rsp+38h] [rbp-30h] BYREF
  __int128 v9; // [rsp+48h] [rbp-20h]

  XUMPDOBJ::XUMPDOBJ((XUMPDOBJ *)&v7);
  v4 = 0;
  v8 = 0LL;
  v9 = 0LL;
  if ( v7 )
  {
    *(_QWORD *)&v8 = 0x6C00000020LL;
    *(_QWORD *)&v9 = *(_QWORD *)v7;
    *((_QWORD *)&v9 + 1) = a1;
    LODWORD(Size) = 416;
    LOBYTE(v4) = UMPDOBJ::Thunk(v7, &v8, 0x20u, a2, Size) != -1;
  }
  XUMPDOBJ::~XUMPDOBJ((XUMPDOBJ *)&v7);
  return v4;
}
