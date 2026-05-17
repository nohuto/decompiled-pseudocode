/*
 * XREFs of LdrpHandleUnprotectedDelayLoad @ 0x1800879FC
 * Callers:
 *     LdrResolveDelayLoadedAPI @ 0x180010380 (LdrResolveDelayLoadedAPI.c)
 * Callees:
 *     LdrpGetDelayloadExportDll @ 0x18001664C (LdrpGetDelayloadExportDll.c)
 *     LdrpDereferenceModule @ 0x1800302E4 (LdrpDereferenceModule.c)
 *     LdrpRedirectDelayloadFailure @ 0x180080DC4 (LdrpRedirectDelayloadFailure.c)
 *     LdrpResolveDelayloadAddress @ 0x180087AEC (LdrpResolveDelayloadAddress.c)
 */

__int64 __fastcall LdrpHandleUnprotectedDelayLoad(
        __int64 a1,
        __int64 a2,
        __int64 (__fastcall *a3)(__int64, _QWORD *),
        __int64 (__fastcall *a4)(__int64, const char *),
        __int64 *a5,
        unsigned int a6)
{
  __int64 v10; // rdi
  signed int v11; // ebx
  __int64 v12; // r8
  unsigned __int64 v13; // rdx
  unsigned __int64 v14; // r8
  unsigned __int64 v15; // r9
  int DelayloadExportDll; // [rsp+40h] [rbp-28h] BYREF
  __int64 v18; // [rsp+48h] [rbp-20h] BYREF

  v10 = 0LL;
  DelayloadExportDll = LdrpGetDelayloadExportDll(a1, a2, &v18, a6, (__int64)a5);
  v11 = DelayloadExportDll;
  if ( DelayloadExportDll >= 0 )
  {
    if ( g_ShimsEnabled )
      v12 = MEMORY[0x7FFE0330] ^ __ROR8__(g_pfnSE_GetProcAddressForCaller, 64 - (MEMORY[0x7FFE0330] & 0x3Fu));
    else
      v12 = 0LL;
    v10 = LdrpResolveDelayloadAddress(a1, v18, a2, (_DWORD)a5, v12, (__int64)&DelayloadExportDll);
    LdrpDereferenceModule(v18, v13, v14, v15);
    v11 = DelayloadExportDll;
  }
  if ( v11 >= 0
    || (v10 = LdrpRedirectDelayloadFailure(a1, v18, a2, a3, a4, (__int64)a5, v11)) != 0
    && ((unsigned int)(v11 + 1073741512) <= 1 || v11 == -1073740671) )
  {
    *a5 = v10;
  }
  return v10;
}
