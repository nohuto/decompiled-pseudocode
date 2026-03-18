/*
 * XREFs of ?DxgkpCreateDodPresent@@YAPEAVDXGDODPRESENT@@PEAVADAPTER_DISPLAY@@E@Z @ 0x1C0196358
 * Callers:
 *     ?Initialize@ADAPTER_DISPLAY@@QEAAJXZ @ 0x1C0179310 (-Initialize@ADAPTER_DISPLAY@@QEAAJXZ.c)
 * Callees:
 *     ??_U@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C0002CEC (--_U@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 *     ??_GDXGDODPRESENT@@QEAAPEAXI@Z @ 0x1C0039CA0 (--_GDXGDODPRESENT@@QEAAPEAXI@Z.c)
 *     ?Startup@BLTQUEUE@@QEAAJXZ @ 0x1C0167AA8 (-Startup@BLTQUEUE@@QEAAJXZ.c)
 *     ??0DXGDODPRESENT@@QEAA@PEAVADAPTER_DISPLAY@@PEAEE@Z @ 0x1C01963F4 (--0DXGDODPRESENT@@QEAA@PEAVADAPTER_DISPLAY@@PEAEE@Z.c)
 */

struct DXGDODPRESENT *__fastcall DxgkpCreateDodPresent(struct ADAPTER_DISPLAY *a1, unsigned __int8 a2)
{
  unsigned __int8 *v4; // rax
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // r8
  __int64 v8; // r9
  DXGDODPRESENT *v9; // rax
  __int64 v10; // rdx
  unsigned int v11; // edi
  DXGDODPRESENT *v12; // rbx
  __int64 v14; // rax

  v4 = (unsigned __int8 *)operator new[](2904LL * *((unsigned int *)a1 + 20) + 144, 0x4B677844u, (POOL_TYPE)512);
  if ( v4 )
  {
    v9 = DXGDODPRESENT::DXGDODPRESENT((DXGDODPRESENT *)v4, a1, v4 + 144, a2);
    v11 = 0;
    v12 = v9;
    if ( !*(_DWORD *)v9 )
      return v12;
    while ( (int)BLTQUEUE::Startup((BLTQUEUE *)(*((_QWORD *)v12 + 1) + 2904LL * v11), v10) >= 0 )
    {
      if ( ++v11 >= *(_DWORD *)v12 )
        return v12;
    }
    DXGDODPRESENT::`scalar deleting destructor'(v12);
  }
  else
  {
    v14 = WdLogNewEntry5_WdLowResource(v6, v5, v7, v8);
    *(_QWORD *)(v14 + 24) = *((_QWORD *)a1 + 2);
    WdLogEvent5_WdLowResource(v14);
  }
  return 0LL;
}
