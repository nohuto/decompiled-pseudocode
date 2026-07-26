/*
 * XREFs of ?ndisPcwEnumerateSingleInstance@@YAJPEAU_PCW_BUFFER@@PEAU_NDIS_MINIPORT_BLOCK@@K@Z @ 0x1C011ED30
 * Callers:
 *     ?ndisPcwEnumerateInstances@@YAJPEAU_PCW_BUFFER@@@Z @ 0x1C008F3F4 (-ndisPcwEnumerateInstances@@YAJPEAU_PCW_BUFFER@@@Z.c)
 * Callees:
 *     __security_check_cookie @ 0x1C003DA60 (__security_check_cookie.c)
 *     ?ndisPcwGetInstanceName@@YAJPEAU_NDIS_MINIPORT_BLOCK@@KPEAU_UNICODE_STRING@@@Z @ 0x1C00FEFE8 (-ndisPcwGetInstanceName@@YAJPEAU_NDIS_MINIPORT_BLOCK@@KPEAU_UNICODE_STRING@@@Z.c)
 *     ?ndisPcwGetMiniportInstanceId@@YAKPEAU_NDIS_MINIPORT_BLOCK@@K@Z @ 0x1C00FF054 (-ndisPcwGetMiniportInstanceId@@YAKPEAU_NDIS_MINIPORT_BLOCK@@K@Z.c)
 */

NTSTATUS __fastcall ndisPcwEnumerateSingleInstance(PPCW_BUFFER Buffer, struct _NDIS_MINIPORT_BLOCK *a2, int a3)
{
  ULONG MiniportInstanceId; // edi
  unsigned int v5; // r10d
  struct _NDIS_MINIPORT_BLOCK *v6; // r9
  NTSTATUS result; // eax
  UNICODE_STRING Name; // [rsp+30h] [rbp-258h] BYREF
  struct _PCW_DATA Data; // [rsp+40h] [rbp-248h] BYREF
  char v10; // [rsp+50h] [rbp-238h] BYREF

  *(_QWORD *)&Name.Length = 33685504LL;
  MiniportInstanceId = ndisPcwGetMiniportInstanceId(a2, a3);
  Data.Data = 0LL;
  Data.Size = 0;
  Name.Buffer = (wchar_t *)&v10;
  result = ndisPcwGetInstanceName(v6, (const wchar_t *)v5, &Name);
  if ( result >= 0 )
    return PcwAddInstance(Buffer, &Name, MiniportInstanceId, 1u, &Data);
  return result;
}
