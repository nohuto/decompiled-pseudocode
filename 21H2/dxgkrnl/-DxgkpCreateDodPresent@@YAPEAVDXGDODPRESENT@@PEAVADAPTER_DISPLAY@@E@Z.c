/*
 * XREFs of ?DxgkpCreateDodPresent@@YAPEAVDXGDODPRESENT@@PEAVADAPTER_DISPLAY@@E@Z @ 0x1C020F170
 * Callers:
 *     ?Initialize@ADAPTER_DISPLAY@@QEAAJXZ @ 0x1C020FEC0 (-Initialize@ADAPTER_DISPLAY@@QEAAJXZ.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x1C0008E10 (DxgkLogInternalTriageEvent.c)
 *     ??_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z @ 0x1C000CD40 (--_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z.c)
 *     ??_GDXGDODPRESENT@@QEAAPEAXI@Z @ 0x1C00456B8 (--_GDXGDODPRESENT@@QEAAPEAXI@Z.c)
 *     ?Startup@BLTQUEUE@@QEAAJXZ @ 0x1C0160578 (-Startup@BLTQUEUE@@QEAAJXZ.c)
 *     ??0DXGDODPRESENT@@QEAA@PEAVADAPTER_DISPLAY@@PEAEE@Z @ 0x1C020F200 (--0DXGDODPRESENT@@QEAA@PEAVADAPTER_DISPLAY@@PEAEE@Z.c)
 */

struct DXGDODPRESENT *__fastcall DxgkpCreateDodPresent(
        struct ADAPTER_DISPLAY *a1,
        unsigned __int8 a2,
        __int64 a3,
        __int64 a4)
{
  unsigned __int8 *v6; // rax
  DXGDODPRESENT *v7; // rax
  unsigned int v8; // edi
  DXGDODPRESENT *v9; // rbx

  v6 = (unsigned __int8 *)operator new[](2920LL * *((unsigned int *)a1 + 24) + 144, 0x4B677844u, 64LL, a4);
  if ( v6 )
  {
    v7 = DXGDODPRESENT::DXGDODPRESENT((DXGDODPRESENT *)v6, a1, v6 + 144, a2);
    v8 = 0;
    v9 = v7;
    if ( !*(_DWORD *)v7 )
      return v9;
    while ( (int)BLTQUEUE::Startup((char *)(*((_QWORD *)v9 + 1) + 2920LL * v8)) >= 0 )
    {
      if ( ++v8 >= *(_DWORD *)v9 )
        return v9;
    }
    DXGDODPRESENT::`scalar deleting destructor'(v9);
  }
  else
  {
    WdLogSingleEntry1(6LL, *((_QWORD *)a1 + 2));
    DxgkLogInternalTriageEvent(
      0LL,
      262145,
      -1,
      (__int64)L"Failed to allocate DXGDODPRESENT for display only adapter 0x%I64x!",
      *((_QWORD *)a1 + 2),
      0LL,
      0LL,
      0LL,
      0LL);
  }
  return 0LL;
}
