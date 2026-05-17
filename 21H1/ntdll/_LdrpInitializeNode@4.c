/*
 * XREFs of _LdrpInitializeNode@4 @ 0x4B2D16BE
 * Callers:
 *     _LdrpLoadShimEngine@4 @ 0x4B2A6525 (_LdrpLoadShimEngine@4.c)
 *     _LdrpInitializeGraphRecurse@12 @ 0x4B2D1904 (_LdrpInitializeGraphRecurse@12.c)
 * Callees:
 *     @RtlDeactivateActivationContextUnsafeFast@4 @ 0x4B2CC6C0 (@RtlDeactivateActivationContextUnsafeFast@4.c)
 *     @RtlActivateActivationContextUnsafeFast@8 @ 0x4B2CDC10 (@RtlActivateActivationContextUnsafeFast@8.c)
 *     _LdrpCallInitRoutine@16 @ 0x4B2CDCA1 (_LdrpCallInitRoutine@16.c)
 *     _LdrpLogDllState@12 @ 0x4B2CDF06 (_LdrpLogDllState@12.c)
 *     _LdrpCallTlsInitializers@8 @ 0x4B2CF073 (_LdrpCallTlsInitializers@8.c)
 *     _LdrpInitializeNode@4 @ 0x4B2D16BE (_LdrpInitializeNode@4.c)
 *     _NtSetInformationVirtualMemory@24 @ 0x4B2F4360 (_NtSetInformationVirtualMemory@24.c)
 *     __SEH_prolog4 @ 0x4B307AC4 (__SEH_prolog4.c)
 *     _LdrpLogDbgPrint @ 0x4B32E582 (_LdrpLogDbgPrint.c)
 *     _LdrpCalloutExceptionFilter@4 @ 0x4B334818 (_LdrpCalloutExceptionFilter@4.c)
 */

int __thiscall LdrpInitializeNode(_DWORD *this)
{
  _DWORD *v1; // eax
  _DWORD *v2; // edx
  int **v3; // ecx
  int v4; // edi
  int *v5; // esi
  int v6; // ecx
  _DWORD *i; // edi
  int v8; // esi
  int v9; // ecx
  int v10; // eax
  char v11; // cl
  int v13[9]; // [esp+10h] [ebp-70h] BYREF
  _DWORD v14[2]; // [esp+34h] [ebp-4Ch] BYREF
  _DWORD *v15; // [esp+3Ch] [ebp-44h]
  _DWORD *v16; // [esp+40h] [ebp-40h]
  int v17; // [esp+44h] [ebp-3Ch]
  int v18; // [esp+4Ch] [ebp-34h]
  int v19; // [esp+50h] [ebp-30h]
  _DWORD *v20; // [esp+54h] [ebp-2Ch]
  _DWORD *v21; // [esp+58h] [ebp-28h]
  int v22; // [esp+5Ch] [ebp-24h] BYREF
  int v23; // [esp+60h] [ebp-20h]
  char v24; // [esp+64h] [ebp-1Ch]
  char v25; // [esp+65h] [ebp-1Bh]
  char v26; // [esp+66h] [ebp-1Ah]
  char v27; // [esp+67h] [ebp-19h]
  CPPEH_RECORD ms_exc; // [esp+68h] [ebp-18h]

  v1 = this;
  v16 = this;
  v15 = this;
  this[8] = 8;
  v2 = (_DWORD *)this[1];
  v3 = (int **)dword_4B3A5DA0;
  v4 = LdrpImageEntry;
  while ( v2 != v1 )
  {
    if ( v2 - 21 != (_DWORD *)v4 )
    {
      v5 = v2 - 17;
      if ( *v3 != &dword_4B3A5D9C )
        __fastfail(3u);
      *v5 = (int)&dword_4B3A5D9C;
      *(v2 - 16) = v3;
      *v3 = v5;
      v3 = (int **)(v2 - 17);
      dword_4B3A5DA0 = (int)v3;
    }
    v2 = (_DWORD *)v2[1];
  }
  v6 = 0;
  v23 = 0;
  v19 = 0;
  for ( i = (_DWORD *)v1[1]; ; i = (_DWORD *)i[1] )
  {
    v21 = i;
    if ( i == v1 )
      break;
    v8 = (int)(i - 21);
    v20 = i - 21;
    if ( i - 21 != (_DWORD *)LdrpImageEntry )
    {
      v22 = 1;
      v14[0] = *(_DWORD *)(v8 + 24);
      v14[1] = 4096;
      NtSetInformationVirtualMemory(-1, 4, 1, v14, &v22, 4);
      v17 = LdrpCurrentDllInitializer[0];
      LdrpCurrentDllInitializer[0] = (int)(i - 21);
      v9 = *(_DWORD *)(v8 + 28);
      v22 = v9;
      if ( (ShowSnaps & 5) != 0 )
        LdrpLogDbgPrint(
          "minkernel\\ntdll\\ldrsnap.c",
          976,
          "LdrpInitializeNode",
          2,
          "Calling init routine %p for DLL \"%wZ\"\n",
          v9,
          v8 + 36);
      v27 = 1;
      v25 = 1;
      v24 = 0;
      v26 = 0;
      ms_exc.registration.TryLevel = 0;
      v13[0] = 36;
      v13[1] = 1;
      memset(&v13[2], 0, 0x1Cu);
      RtlActivateActivationContextUnsafeFast(v13, *(_DWORD *)(v8 + 72));
      ms_exc.registration.TryLevel = 1;
      if ( *(_WORD *)(v8 + 58) )
        LdrpCallTlsInitializers(1, v8);
      if ( v22 )
      {
        v10 = 0;
        v18 = 0;
        if ( (*(_BYTE *)(v8 + 52) & 0x20) != 0 )
        {
          v10 = LdrpProcessInitContextRecord;
          v18 = LdrpProcessInitContextRecord;
        }
        v27 = LdrpCallInitRoutine(v22, *(_DWORD *)(v8 + 24), 1, v10);
        v25 = v27;
      }
      ms_exc.registration.TryLevel = 0;
      i = v21;
      RtlDeactivateActivationContextUnsafeFast(v13);
      ms_exc.registration.TryLevel = -2;
      v11 = ShowSnaps;
      LdrpCurrentDllInitializer[0] = v17;
      if ( !v26 )
        *(_DWORD *)(v8 + 52) |= 0x80000u;
      if ( !v27 )
      {
        if ( (v11 & 3) != 0 )
        {
          LdrpLogDbgPrint(
            "minkernel\\ntdll\\ldrsnap.c",
            1028,
            "LdrpInitializeNode",
            0,
            "Init routine %p for DLL \"%wZ\" failed during DLL_PROCESS_ATTACH\n",
            v22,
            v8 + 36);
          v11 = ShowSnaps;
        }
        if ( (v11 & 0x10) != 0 )
          __debugbreak();
        v6 = -1073741502;
        v23 = -1073741502;
        *(_DWORD *)(v8 + 52) |= 0x100000u;
        break;
      }
      LdrpLogDllState(*(_DWORD *)(v8 + 24), v8 + 36, 5294);
      v1 = v16;
      v6 = v23;
    }
  }
  v15[8] = v6 != 0 ? -4 : 9;
  return v23;
}
