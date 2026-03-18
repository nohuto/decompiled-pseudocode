/*
 * XREFs of DpiGetMonitorColorimetryOverride @ 0x1C0169F78
 * Callers:
 *     ?_RetrieveHDRParamDriverOverrides@DXGMONITOR@@AEAAJXZ @ 0x1C0169EF8 (-_RetrieveHDRParamDriverOverrides@DXGMONITOR@@AEAAJXZ.c)
 * Callees:
 *     DpiFdoGetChildDescriptor @ 0x1C00196A0 (DpiFdoGetChildDescriptor.c)
 *     ?DdiQueryAdapterInfo@DXGADAPTER@@QEAAJPEAU_DXGKARG_QUERYADAPTERINFO@@@Z @ 0x1C00F05E8 (-DdiQueryAdapterInfo@DXGADAPTER@@QEAAJPEAU_DXGKARG_QUERYADAPTERINFO@@@Z.c)
 *     DpiFdoValidateDxgkColorimetry @ 0x1C02C7EA4 (DpiFdoValidateDxgkColorimetry.c)
 */

__int64 __fastcall DpiGetMonitorColorimetryOverride(__int64 a1, unsigned int a2, __int64 a3)
{
  unsigned int v5; // edi
  _QWORD *ChildDescriptor; // rax
  __int64 v7; // r8
  __int64 v8; // r9
  __int64 v9; // rcx
  __int64 v11; // rsi
  int v12; // eax
  DXGADAPTER *v13; // rcx
  int v14; // eax
  struct _DXGKARG_QUERYADAPTERINFO v15; // [rsp+20h] [rbp-30h] BYREF
  unsigned int v16; // [rsp+60h] [rbp+10h] BYREF

  v5 = -1071841279;
  ChildDescriptor = DpiFdoGetChildDescriptor(*(_QWORD *)(a1 + 64), a2);
  if ( ChildDescriptor )
  {
    *(_OWORD *)a3 = 0LL;
    *(_OWORD *)(a3 + 16) = 0LL;
    *(_OWORD *)(a3 + 32) = 0LL;
    *(_DWORD *)(a3 + 48) = 0;
    v9 = ChildDescriptor[13];
    if ( v9 )
    {
      v11 = v9 + 68;
      if ( RtlCompareMemory((const void *)a3, (const void *)(v9 + 68), 0x34uLL) == 52 )
        return v5;
      v5 = 0;
      *(_OWORD *)a3 = *(_OWORD *)v11;
      *(_OWORD *)(a3 + 16) = *(_OWORD *)(v11 + 16);
      *(_OWORD *)(a3 + 32) = *(_OWORD *)(v11 + 32);
      v12 = *(_DWORD *)(v11 + 48);
    }
    else
    {
      if ( !*((_BYTE *)ChildDescriptor + 65) )
        return v5;
      if ( *(int *)(v8 + 3912) < 8704 )
        return v5;
      v13 = *(DXGADAPTER **)(v8 + 3896);
      *((_DWORD *)&v15.Type + 1) = 0;
      *(&v15.InputDataSize + 1) = 0;
      *(_QWORD *)&v15.Flags.0 = 0LL;
      HIDWORD(v15.hKmdProcessHandle) = 0;
      v15.pInputData = &v16;
      v16 = a2;
      v15.Type = DXGKQAITYPE_QUERYCOLORIMETRYOVERRIDES;
      v15.InputDataSize = 4;
      v15.OutputDataSize = 52;
      v15.pOutputData = (void *)a3;
      if ( (int)DXGADAPTER::DdiQueryAdapterInfo(v13, &v15, v7) >= 0 )
      {
        v14 = DpiFdoValidateDxgkColorimetry(a3, a2);
        v5 = v14;
        if ( v14 >= 0 && v14 != 279 )
          return v5;
      }
      v12 = 0;
      *(_OWORD *)a3 = 0LL;
      v5 = -1071841279;
      *(_OWORD *)(a3 + 16) = 0LL;
      *(_OWORD *)(a3 + 32) = 0LL;
    }
    *(_DWORD *)(a3 + 48) = v12;
    return v5;
  }
  return 3221225485LL;
}
