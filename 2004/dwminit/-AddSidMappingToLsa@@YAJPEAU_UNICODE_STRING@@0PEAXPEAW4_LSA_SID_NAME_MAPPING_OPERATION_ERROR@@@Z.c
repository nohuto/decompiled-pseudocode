/*
 * XREFs of ?AddSidMappingToLsa@@YAJPEAU_UNICODE_STRING@@0PEAXPEAW4_LSA_SID_NAME_MAPPING_OPERATION_ERROR@@@Z @ 0x180001C1C
 * Callers:
 *     ?MapDwmVirtualAccountAndAdjustPrivileges@@YAJXZ @ 0x180001CFC (-MapDwmVirtualAccountAndAdjustPrivileges@@YAJXZ.c)
 * Callees:
 *     ?LsaCollisionResult@@YA_NW4_LSA_SID_NAME_MAPPING_OPERATION_ERROR@@@Z @ 0x180001B24 (-LsaCollisionResult@@YA_NW4_LSA_SID_NAME_MAPPING_OPERATION_ERROR@@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x180003D0C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 */

__int64 __fastcall AddSidMappingToLsa(
        struct _UNICODE_STRING *a1,
        struct _UNICODE_STRING *a2,
        void *a3,
        enum _LSA_SID_NAME_MAPPING_OPERATION_ERROR *a4)
{
  int v5; // ebx
  int v6; // edi
  int v7; // eax
  unsigned int v8; // ecx
  PVOID v9; // rdx
  void *v11; // [rsp+28h] [rbp-38h]
  _BYTE v12[42]; // [rsp+30h] [rbp-30h] BYREF
  int v13; // [rsp+5Ah] [rbp-6h]
  __int16 v14; // [rsp+5Eh] [rbp-2h]
  PVOID Buffer; // [rsp+80h] [rbp+20h] BYREF

  v13 = 0;
  v14 = 0;
  v5 = 0;
  Buffer = 0LL;
  v6 = 1;
  memset(&v12[2], 0, 40);
  *(struct _UNICODE_STRING *)v12 = *a1;
  if ( a2 )
    *(struct _UNICODE_STRING *)&v12[16] = *a2;
  *(_QWORD *)&v12[32] = a3;
  v7 = LsaLookupManageSidNameMapping(0LL, v12, &Buffer);
  if ( v7 < 0 )
  {
    v5 = v7 | 0x10000000;
    MilInstrumentationCheckHR_MaybeFailFast(v8, &dword_180008080, 3u, v7 | 0x10000000, 0x1DFu, v11);
  }
  v9 = Buffer;
  if ( Buffer )
  {
    v6 = *(_DWORD *)Buffer;
    if ( v5 < 0 && LsaCollisionResult(v6) )
      v5 = 0;
    LsaLookupFreeMemory(v9);
  }
  *(_DWORD *)a4 = v6;
  return (unsigned int)v5;
}
