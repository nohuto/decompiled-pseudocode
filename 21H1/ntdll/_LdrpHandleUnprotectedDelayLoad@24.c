/*
 * XREFs of _LdrpHandleUnprotectedDelayLoad@24 @ 0x4B32F837
 * Callers:
 *     _LdrResolveDelayLoadedAPI@24 @ 0x4B2CCA20 (_LdrResolveDelayLoadedAPI@24.c)
 * Callees:
 *     _LdrpDereferenceModule@4 @ 0x4B2CD3B1 (_LdrpDereferenceModule@4.c)
 *     _LdrpGetDelayloadExportDll@20 @ 0x4B2CF859 (_LdrpGetDelayloadExportDll@20.c)
 *     _LdrpRedirectDelayloadFailure@28 @ 0x4B32F8F2 (_LdrpRedirectDelayloadFailure@28.c)
 *     _LdrpResolveDelayloadAddress@24 @ 0x4B32FA18 (_LdrpResolveDelayloadAddress@24.c)
 */

int __fastcall LdrpHandleUnprotectedDelayLoad(_DWORD *a1, int a2, int a3, int a4, int *a5, int a6)
{
  int v6; // esi
  NTSTATUS DelayloadExportDll; // edi
  int v8; // esi
  int v9; // eax
  int v12; // [esp+18h] [ebp-8h] BYREF
  PVOID BaseAddress; // [esp+1Ch] [ebp-4h] BYREF

  v6 = 0;
  DelayloadExportDll = LdrpGetDelayloadExportDll(a1, a2, (volatile signed __int32 **)&BaseAddress, a6, (int)a5);
  v12 = DelayloadExportDll;
  if ( DelayloadExportDll >= 0 )
  {
    if ( g_ShimsEnabled )
      v6 = MEMORY[0x7FFE0330] ^ __ROR4__(g_pfnSE_GetProcAddressForCaller, 32 - (MEMORY[0x7FFE0330] & 0x1F));
    v8 = LdrpResolveDelayloadAddress(a2, a5, v6, &v12);
    LdrpDereferenceModule((char *)BaseAddress);
    DelayloadExportDll = v12;
    if ( v12 >= 0 )
      goto LABEL_10;
  }
  v9 = LdrpRedirectDelayloadFailure(a2, a3, a4, (int)a5, DelayloadExportDll);
  v8 = v9;
  if ( DelayloadExportDll >= 0
    || v9
    && (DelayloadExportDll == -1073741512 || DelayloadExportDll == -1073741511 || DelayloadExportDll == -1073740671) )
  {
LABEL_10:
    *a5 = v8;
  }
  return v8;
}
