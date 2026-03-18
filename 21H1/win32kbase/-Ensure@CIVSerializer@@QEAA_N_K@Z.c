/*
 * XREFs of ?Ensure@CIVSerializer@@QEAA_N_K@Z @ 0x1C01B7514
 * Callers:
 *     ?Serialize@CIVSerializer@@QEAAJAEAU_UNICODE_STRING@@AEBU2@_N@Z @ 0x1C01B9A10 (-Serialize@CIVSerializer@@QEAAJAEAU_UNICODE_STRING@@AEBU2@_N@Z.c)
 *     ?Serialize@CIVSerializer@@QEAAJPEAPEAU_IVMouseInputData@@PEBUContainerMouseInputData@@_K_N@Z @ 0x1C01B9AB0 (-Serialize@CIVSerializer@@QEAAJPEAPEAU_IVMouseInputData@@PEBUContainerMouseInputData@@_K_N@Z.c)
 *     ?Serialize@CIVSerializer@@QEAAJPEAPEAU_IVRIMPOINTERINFONODE@@PEAUtagRIMPOINTERINFONODE@@K_K_N@Z @ 0x1C01B9B9C (-Serialize@CIVSerializer@@QEAAJPEAPEAU_IVRIMPOINTERINFONODE@@PEAUtagRIMPOINTERINFONODE@@K_K_N@Z.c)
 *     ?Serialize@CIVSerializer@@QEAAJPEAPEAU_IVRIMPOINTERRAWDATA@@PEAUCPointerRawData@@K_N@Z @ 0x1C01B9D70 (-Serialize@CIVSerializer@@QEAAJPEAPEAU_IVRIMPOINTERRAWDATA@@PEAUCPointerRawData@@K_N@Z.c)
 *     ?Serialize@CIVSerializer@@QEAAJPEAPEAU_IV_HIDP_LINK_COLLECTION_NODE@@PEAU_HIDP_LINK_COLLECTION_NODE@@K_K_N@Z @ 0x1C01B9EAC (-Serialize@CIVSerializer@@QEAAJPEAPEAU_IV_HIDP_LINK_COLLECTION_NODE@@PEAU_HIDP_LINK_COLLECTION_N.c)
 *     ?Serialize@CIVSerializer@@QEAAJPEAPEAU_IV_HPD_CURSOR@@PEAUtagHPD_CURSOR@@K_K_N@Z @ 0x1C01B9F98 (-Serialize@CIVSerializer@@QEAAJPEAPEAU_IV_HPD_CURSOR@@PEAUtagHPD_CURSOR@@K_K_N@Z.c)
 *     ?Serialize@CIVSerializer@@QEAAJPEAPEAXPEAX_K_N@Z @ 0x1C01BA034 (-Serialize@CIVSerializer@@QEAAJPEAPEAXPEAX_K_N@Z.c)
 * Callees:
 *     <none>
 */

char __fastcall CIVSerializer::Ensure(CIVSerializer *this, __int64 a2)
{
  unsigned __int64 v2; // rax
  unsigned __int64 v3; // r8

  v2 = *((_QWORD *)this + 5);
  v3 = v2 + a2;
  if ( v2 + a2 < v2 || v3 > *((_QWORD *)this + 3) )
    return 0;
  *((_QWORD *)this + 5) = v3;
  return 1;
}
