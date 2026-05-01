/*
 * XREFs of sub_180029930 @ 0x180029930
 * Callers:
 *     sub_18000B2BC @ 0x18000B2BC (sub_18000B2BC.c)
 *     sub_18001D120 @ 0x18001D120 (sub_18001D120.c)
 * Callees:
 *     sub_180003268 @ 0x180003268 (sub_180003268.c)
 *     sub_180028E68 @ 0x180028E68 (sub_180028E68.c)
 *     sub_1800295F0 @ 0x1800295F0 (sub_1800295F0.c)
 *     ??4?$shared_ptr@V__ExceptionPtr@@@std@@QEAAAEAV01@AEBV01@@Z @ 0x18002CC2C (--4-$shared_ptr@V__ExceptionPtr@@@std@@QEAAAEAV01@AEBV01@@Z.c)
 */

__int64 __fastcall sub_180029930(__int64 a1, _QWORD *a2, __int64 *a3, _QWORD *a4)
{
  unsigned int v8; // ebx
  int v9; // edx
  struct _RTL_CRITICAL_SECTION *v10; // rdi
  bool v11; // bp
  int v12; // eax
  __int64 v13; // rdx
  __int128 v15[4]; // [rsp+20h] [rbp-48h] BYREF
  __int64 retaddr; // [rsp+68h] [rbp+0h]

  if ( !*a2 && !a2[1] )
  {
    v8 = -2147024809;
    v9 = 879;
LABEL_4:
    sub_180003268(retaddr, v9, (__int64)"onecoreuap\\xbox\\windows.gaming.preview\\dll\\gamelistentry.cpp", v8);
    return v8;
  }
  if ( !*a3 )
  {
    v8 = -2147467261;
    v9 = 880;
    goto LABEL_4;
  }
  if ( !*a4 )
  {
    v8 = -2147467261;
    v9 = 881;
    goto LABEL_4;
  }
  v10 = (struct _RTL_CRITICAL_SECTION *)(a1 + 144);
  EnterCriticalSection((LPCRITICAL_SECTION)(a1 + 144));
  if ( !*(_QWORD *)(a1 + 264) )
    std::shared_ptr<__ExceptionPtr>::operator=(a1 + 264, a4);
  v11 = *(_QWORD *)(a1 + 256) && *(_QWORD *)(a1 + 264);
  v15[0] = *(_OWORD *)a2;
  v12 = sub_180028E68(a1 - 24, v15, a3, (__int64)a4);
  v8 = v12;
  if ( v12 >= 0 )
  {
    LOBYTE(v13) = v11;
    sub_1800295F0((_QWORD *)(a1 - 24), v13);
    v8 = 0;
  }
  else
  {
    sub_180003268(retaddr, 898, (__int64)"onecoreuap\\xbox\\windows.gaming.preview\\dll\\gamelistentry.cpp", v12);
  }
  if ( v10 )
    LeaveCriticalSection(v10);
  return v8;
}
