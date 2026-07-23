/*
 * XREFs of _AVrfpLoadAndInitializeProvider@4 @ 0x4B33908C
 * Callers:
 *     _AVrfInitializeVerifier@24 @ 0x4B338523 (_AVrfInitializeVerifier@24.c)
 * Callees:
 *     _LdrpLoadDll@16 @ 0x4B2A6B05 (_LdrpLoadDll@16.c)
 *     _DbgPrint @ 0x4B2AB8D0 (_DbgPrint.c)
 *     _RtlImageNtHeader@4 @ 0x4B2BB8E0 (_RtlImageNtHeader@4.c)
 *     _RtlAppendUnicodeToString@8 @ 0x4B2BFE00 (_RtlAppendUnicodeToString@8.c)
 *     _RtlGetNtSystemRoot@0 @ 0x4B2C0180 (_RtlGetNtSystemRoot@0.c)
 *     _LdrpCallInitRoutine@16 @ 0x4B2CDCA1 (_LdrpCallInitRoutine@16.c)
 *     _LdrpInitializeDllPath@12 @ 0x4B2CE876 (_LdrpInitializeDllPath@12.c)
 *     _RtlAppendUnicodeStringToString@8 @ 0x4B2D10A0 (_RtlAppendUnicodeStringToString@8.c)
 *     __SEH_prolog4_GS @ 0x4B307B20 (__SEH_prolog4_GS.c)
 */

char __thiscall AVrfpLoadAndInitializeProvider(int this)
{
  char v2; // dl
  char v3; // bl
  int v4; // edi
  unsigned int v5; // ecx
  int v6; // eax
  const WCHAR *NtSystemRoot; // eax
  int Dll; // eax
  int v9; // eax
  PIMAGE_NT_HEADERS v10; // eax
  int v11; // edx
  int v12; // ecx
  _DWORD *v13; // edi
  char v14; // al
  _DWORD v16[2]; // [esp+10h] [ebp-88h] BYREF
  _DWORD *v17; // [esp+18h] [ebp-80h] BYREF
  _UNICODE_STRING Destination; // [esp+1Ch] [ebp-7Ch] BYREF
  char v19; // [esp+25h] [ebp-73h]
  char v20; // [esp+26h] [ebp-72h]
  char v21; // [esp+27h] [ebp-71h]
  int v22[22]; // [esp+28h] [ebp-70h] BYREF
  CPPEH_RECORD ms_exc; // [esp+80h] [ebp-18h]

  v16[1] = this;
  v20 = 0;
  v2 = 0;
  v19 = 0;
  v3 = 1;
  if ( (AVrfpDebug & 1) != 0 )
  {
    DbgPrint("AVRF: verifier dll `%ws' \n", *(_DWORD *)(this + 12));
    v2 = v19;
  }
  v4 = *(_DWORD *)(this + 12);
  v5 = *(unsigned __int16 *)(this + 8) >> 1;
  v6 = 0;
  if ( v5 )
  {
    while ( 1 )
    {
      Destination.Buffer = (wchar_t *)*(unsigned __int16 *)(v4 + 2 * v6);
      v3 = 1;
      if ( Destination.Buffer == (wchar_t *)92 || LOWORD(Destination.Buffer) == 47 )
        break;
      if ( ++v6 >= v5 )
        goto LABEL_9;
    }
    v2 = 1;
  }
LABEL_9:
  if ( v2 == 1 )
  {
    DbgPrint("AVRF: Cannot load %ws from arbitrary location\n", v4);
    return 0;
  }
  Destination.Buffer = (wchar_t *)&unk_4B3A6A18;
  *(_DWORD *)&Destination.Length = 34078720;
  NtSystemRoot = RtlGetNtSystemRoot();
  RtlAppendUnicodeToString(&Destination, NtSystemRoot);
  RtlAppendUnicodeStringToString(&Destination, &SlashSystem32SlashString);
  LdrpInitializeDllPath(0, (int)Destination.Buffer, v22);
  Dll = LdrpLoadDll((PUNICODE_STRING)(this + 8), 1, (int)v16);
  if ( Dll < 0 )
  {
    DbgPrint(
      "AVRF: %ws: failed to load provider `%ws' (status %08X) from %ws\n",
      dword_4B3A5D8C->BaseDllName.Buffer,
      *(_DWORD *)(this + 12),
      Dll,
      Destination.Buffer);
    return 0;
  }
  v9 = v16[0];
  *(_DWORD *)(this + 16) = v16[0];
  ms_exc.registration.TryLevel = 0;
  v10 = RtlImageNtHeader(*(PVOID *)(v9 + 24));
  if ( !v10 )
    goto LABEL_28;
  if ( (v10->FileHeader.Characteristics & 0x2000) == 0 )
  {
    DbgPrint("AVRF: provider %ws is not a DLL image \n", *(_DWORD *)(this + 12));
LABEL_28:
    v14 = 1;
    v21 = 1;
    ms_exc.registration.TryLevel = -2;
    goto LABEL_29;
  }
  ms_exc.registration.TryLevel = -2;
  *(_DWORD *)(*(_DWORD *)(this + 16) + 52) |= 0x400u;
  v11 = *(_DWORD *)(this + 16);
  v12 = *(_DWORD *)(v11 + 28);
  if ( !v12 )
  {
    DbgPrint("AVRF: cannot find an entry point for provider %ws \n", *(_DWORD *)(this + 12));
    return 0;
  }
  ms_exc.registration.TryLevel = 1;
  v17 = 0;
  if ( LdrpCallInitRoutine(v12, *(_DWORD *)(v11 + 24), 4, (int)&v17) && (v13 = v17) != 0 )
  {
    if ( *v17 == 44 )
    {
      if ( (AVrfpDebug & 8) != 0 )
        DbgPrint("AVRF: initialized provider %ws (descriptor @ %p) \n", *(_DWORD *)(this + 12), v17);
      *(_DWORD *)(this + 20) = v13[1];
      *(_DWORD *)(this + 24) = v13[2];
      *(_DWORD *)(this + 28) = v13[3];
      *(_DWORD *)(this + 32) = v13[10];
      v13[4] = dword_4B3A5D8C->BaseDllName.Buffer;
      v13[5] = AVrfpVerifierFlags;
      v13[6] = AVrfpDebug;
      v13[7] = RtlpGetStackTraceAddress;
      v13[8] = RtlpDebugPageHeapCreate;
      v13[9] = RtlpDebugPageHeapDestroy;
      if ( AVrfpEnabledSystemWide )
        v13[5] |= 0x20000u;
    }
    else
    {
      v20 = 1;
      v21 = 1;
      DbgPrint("AVRF: provider %ws passed an invalid descriptor @ %p \n", *(_DWORD *)(this + 12), v17);
    }
  }
  else
  {
    v20 = 1;
    v21 = 1;
    DbgPrint("AVRF: provider %ws did not initialize correctly \n", *(_DWORD *)(this + 12));
  }
  ms_exc.registration.TryLevel = -2;
  v14 = v20;
LABEL_29:
  if ( v14 )
    return 0;
  return v3;
}
