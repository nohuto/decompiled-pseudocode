/*
 * XREFs of ?LogFunctionalizePacket@CCD_TOPOLOGY@@QEAAJH@Z @ 0x1C01B4F70
 * Callers:
 *     ?FunctionalizeWorker@CCD_TOPOLOGY@@AEAAJI_N@Z @ 0x1C01B5124 (-FunctionalizeWorker@CCD_TOPOLOGY@@AEAAJI_N@Z.c)
 *     ?EnumerateFunctionalModesWorker@CCD_TOPOLOGY@@AEAAJIKAEAVCCD_MODE_RESULT_SET@@@Z @ 0x1C03A9374 (-EnumerateFunctionalModesWorker@CCD_TOPOLOGY@@AEAAJIKAEAVCCD_MODE_RESULT_SET@@@Z.c)
 * Callees:
 *     ??_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z @ 0x1C000CD40 (--_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z.c)
 *     ??_V@YAXPEAX@Z @ 0x1C000D990 (--_V@YAXPEAX@Z.c)
 *     ?DxgkWriteDiagEntry@@YAJPEAU_DXGK_DIAG_HEADER@@_K@Z @ 0x1C01B32DC (-DxgkWriteDiagEntry@@YAJPEAU_DXGK_DIAG_HEADER@@_K@Z.c)
 *     ?FillFunctionalizePacket@CCD_TOPOLOGY@@QEAAXPEAU_DXGK_DIAG_CCD_FUNCTIONALIZE_PACKET3@@I@Z @ 0x1C01B5014 (-FillFunctionalizePacket@CCD_TOPOLOGY@@QEAAXPEAU_DXGK_DIAG_CCD_FUNCTIONALIZE_PACKET3@@I@Z.c)
 */

__int64 __fastcall CCD_TOPOLOGY::LogFunctionalizePacket(CCD_TOPOLOGY *this, int a2, __int64 a3, __int64 a4)
{
  unsigned int v6; // esi
  struct _DXGK_DIAG_CCD_FUNCTIONALIZE_PACKET3 *v7; // rax
  unsigned int v8; // edi
  struct _DXGK_DIAG_CCD_FUNCTIONALIZE_PACKET3 *v9; // rbx
  __int64 v10; // rcx
  unsigned int CurrentProcessSessionId; // eax

  v6 = (*(unsigned __int16 *)(*((_QWORD *)this + 8) + 20LL) << 6) + 56;
  v7 = (struct _DXGK_DIAG_CCD_FUNCTIONALIZE_PACKET3 *)operator new[](v6, 0x63644356u, 256LL, a4);
  v8 = 0;
  v9 = v7;
  if ( v7 )
  {
    CCD_TOPOLOGY::FillFunctionalizePacket(this, v7, v6);
    *((_DWORD *)v9 + 13) = a2;
    CurrentProcessSessionId = PsGetCurrentProcessSessionId(v10);
    DxgkWriteDiagEntry(v9, CurrentProcessSessionId);
    operator delete[](v9);
  }
  else
  {
    WdLogSingleEntry1(6LL, *(unsigned __int16 *)(*((_QWORD *)this + 8) + 20LL));
    return (unsigned int)-1073741801;
  }
  return v8;
}
