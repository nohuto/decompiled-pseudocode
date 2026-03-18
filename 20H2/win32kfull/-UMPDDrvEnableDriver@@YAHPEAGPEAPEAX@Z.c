/*
 * XREFs of ?UMPDDrvEnableDriver@@YAHPEAGPEAPEAX@Z @ 0x1C010BC94
 * Callers:
 *     ?UMPD_ldevLoadDriver@@YAPEAU_LDEV@@PEAGW4_LDEVTYPE@@@Z @ 0x1C010BA48 (-UMPD_ldevLoadDriver@@YAPEAU_LDEV@@PEAGW4_LDEVTYPE@@@Z.c)
 * Callees:
 *     ?Thunk@UMPDOBJ@@QEAAKPEAXK0K@Z @ 0x1C0071C3C (-Thunk@UMPDOBJ@@QEAAKPEAXK0K@Z.c)
 *     ??1XUMPDOBJ@@QEAA@XZ @ 0x1C0071E78 (--1XUMPDOBJ@@QEAA@XZ.c)
 *     ??0XUMPDOBJ@@QEAA@XZ @ 0x1C007249C (--0XUMPDOBJ@@QEAA@XZ.c)
 *     ?ThunkStringW@UMPDOBJ@@QEAAHPEAPEAG@Z @ 0x1C010C450 (-ThunkStringW@UMPDOBJ@@QEAAHPEAPEAG@Z.c)
 *     __security_check_cookie @ 0x1C015A0C0 (__security_check_cookie.c)
 */

_BOOL8 __fastcall UMPDDrvEnableDriver(unsigned __int16 *a1, void **a2)
{
  UMPDOBJ *v4; // rbx
  BOOL v5; // edi
  size_t Size; // [rsp+20h] [rbp-58h]
  UMPDOBJ *v8; // [rsp+30h] [rbp-48h] BYREF
  __int128 v9; // [rsp+38h] [rbp-40h] BYREF
  unsigned __int16 *v10[2]; // [rsp+48h] [rbp-30h] BYREF

  XUMPDOBJ::XUMPDOBJ((XUMPDOBJ *)&v8);
  v4 = v8;
  v5 = 0;
  v9 = 0LL;
  *(_OWORD *)v10 = 0LL;
  if ( v8 )
  {
    if ( a1 )
    {
      *(_QWORD *)&v9 = 0x6900000020LL;
      v10[0] = *(unsigned __int16 **)v8;
      v10[1] = a1;
      if ( (unsigned int)UMPDOBJ::ThunkStringW(v8, &v10[1]) )
      {
        LODWORD(Size) = 8;
        v5 = UMPDOBJ::Thunk(v4, &v9, 0x20u, a2, Size) != -1;
      }
    }
  }
  XUMPDOBJ::~XUMPDOBJ(&v8);
  return v5;
}
