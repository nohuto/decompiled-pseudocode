/*
 * XREFs of ?UMPDDrvDisableSurface@@YAXPEAUDHPDEV__@@@Z @ 0x1C0151CB0
 * Callers:
 *     <none>
 * Callees:
 *     ?Thunk@UMPDOBJ@@QEAAKPEAXK0K@Z @ 0x1C00EE8FC (-Thunk@UMPDOBJ@@QEAAKPEAXK0K@Z.c)
 *     ??1XUMPDOBJ@@QEAA@XZ @ 0x1C00EEB38 (--1XUMPDOBJ@@QEAA@XZ.c)
 *     ??0XUMPDOBJ@@QEAA@XZ @ 0x1C00EF148 (--0XUMPDOBJ@@QEAA@XZ.c)
 *     __security_check_cookie @ 0x1C0157760 (__security_check_cookie.c)
 */

void __fastcall UMPDDrvDisableSurface(struct DHPDEV__ *a1)
{
  size_t v2; // [rsp+20h] [rbp-48h]
  UMPDOBJ *v3; // [rsp+30h] [rbp-38h] BYREF
  __int128 v4; // [rsp+38h] [rbp-30h] BYREF
  __int128 v5; // [rsp+48h] [rbp-20h]

  XUMPDOBJ::XUMPDOBJ((XUMPDOBJ *)&v3);
  v4 = 0LL;
  v5 = 0LL;
  if ( v3 )
  {
    LODWORD(v2) = 0;
    *(_QWORD *)&v4 = 0x400000020LL;
    *(_QWORD *)&v5 = *(_QWORD *)v3;
    *((_QWORD *)&v5 + 1) = a1;
    UMPDOBJ::Thunk(v3, &v4, 0x20u, 0LL, v2);
  }
  XUMPDOBJ::~XUMPDOBJ(&v3);
}
