/*
 * XREFs of ?DxgkpStopRenderAndSessionDisplayAdapters@@YAJAEAW4_DXGK_DIAG_BDD_FALLBACK_STAGE@@@Z @ 0x1C020CE2C
 * Callers:
 *     ?DxgkpProcessBddFallbackRequest@@YAJXZ @ 0x1C020CBEC (-DxgkpProcessBddFallbackRequest@@YAJXZ.c)
 * Callees:
 *     ?ReleaseReference@DXGADAPTER@@QEAAX_K@Z @ 0x1C0003F80 (-ReleaseReference@DXGADAPTER@@QEAAX_K@Z.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C0004010 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?IterateAdaptersWithCallback@DXGGLOBAL@@QEAAJP6AJPEAVDXGADAPTER@@PEAX@Z1W4_ITERATE_ADAPTER_FLAGS@@@Z @ 0x1C01306EC (-IterateAdaptersWithCallback@DXGGLOBAL@@QEAAJP6AJPEAVDXGADAPTER@@PEAX@Z1W4_ITERATE_ADAPTER_FLAGS.c)
 *     ?ReferenceBddFallbackAdapter@DXGGLOBAL@@QEAAPEAVDXGADAPTER@@PEA_K@Z @ 0x1C026AB84 (-ReferenceBddFallbackAdapter@DXGGLOBAL@@QEAAPEAVDXGADAPTER@@PEA_K@Z.c)
 *     ?ReferenceWarpAdapter@DXGGLOBAL@@QEAAPEAVDXGADAPTER@@PEA_K@Z @ 0x1C026AC48 (-ReferenceWarpAdapter@DXGGLOBAL@@QEAAPEAVDXGADAPTER@@PEA_K@Z.c)
 */

__int64 __fastcall DxgkpStopRenderAndSessionDisplayAdapters(enum _DXGK_DIAG_BDD_FALLBACK_STAGE *a1, __int64 a2)
{
  __int64 v3; // rbx
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 v6; // rdx
  __int64 v7; // rcx
  DXGGLOBAL *v8; // rax
  __int64 v9; // rdx
  __int64 v10; // rcx
  DXGADAPTER *v11; // rsi
  struct DXGGLOBAL *v13; // rax
  DXGGLOBAL *Global; // rax
  __int64 v15; // rdx
  __int64 v16; // rcx
  DXGADAPTER *v17; // rsi
  struct DXGGLOBAL *v18; // rax
  __int16 v19; // [rsp+38h] [rbp+10h] BYREF
  unsigned __int64 v20; // [rsp+40h] [rbp+18h] BYREF

  v3 = *((_QWORD *)DXGGLOBAL::GetGlobal((__int64)a1, a2) + 105);
  if ( v3 == *((_QWORD *)DXGGLOBAL::GetGlobal(v5, v4) + 103) )
  {
    Global = DXGGLOBAL::GetGlobal(v7, v6);
    v17 = DXGGLOBAL::ReferenceBddFallbackAdapter(Global, &v20);
    if ( !v17 )
    {
      *(_DWORD *)a1 = 3;
      return 3221226021LL;
    }
    v19 = 1;
    v18 = DXGGLOBAL::GetGlobal(v16, v15);
    DXGGLOBAL::IterateAdaptersWithCallback(
      (__int64)v18,
      (__int64 (__fastcall *)(_QWORD *, __int64))DxgkpEscapeStopAdapters,
      (__int64)&v19,
      4);
    DXGADAPTER::ReleaseReference(v17);
    if ( !HIBYTE(v19) )
    {
      *(_DWORD *)a1 = 6;
      return 3221225473LL;
    }
  }
  else
  {
    v20 = 0LL;
    v8 = DXGGLOBAL::GetGlobal(v7, v6);
    v11 = DXGGLOBAL::ReferenceWarpAdapter(v8, &v20);
    if ( !v11 )
    {
      *(_DWORD *)a1 = 2;
      return 3221226021LL;
    }
    v19 = 0;
    v13 = DXGGLOBAL::GetGlobal(v10, v9);
    DXGGLOBAL::IterateAdaptersWithCallback(
      (__int64)v13,
      (__int64 (__fastcall *)(_QWORD *, __int64))DxgkpEscapeStopAdapters,
      (__int64)&v19,
      3);
    DXGADAPTER::ReleaseReference(v11);
    if ( !HIBYTE(v19) )
    {
      *(_DWORD *)a1 = 5;
      return 3221225473LL;
    }
  }
  return 0LL;
}
