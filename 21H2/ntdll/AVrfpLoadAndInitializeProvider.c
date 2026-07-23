/*
 * XREFs of AVrfpLoadAndInitializeProvider @ 0x1800DAD68
 * Callers:
 *     AVrfInitializeVerifier @ 0x1800D9908 (AVrfInitializeVerifier.c)
 * Callees:
 *     LdrpInitializeDllPath @ 0x1800169B8 (LdrpInitializeDllPath.c)
 *     RtlGetNtSystemRoot @ 0x180016BB0 (RtlGetNtSystemRoot.c)
 *     RtlAppendUnicodeStringToString @ 0x180017270 (RtlAppendUnicodeStringToString.c)
 *     LdrpLoadDll @ 0x18001733C (LdrpLoadDll.c)
 *     LdrpCallInitRoutine @ 0x1800199BC (LdrpCallInitRoutine.c)
 *     RtlImageNtHeader @ 0x180035BD0 (RtlImageNtHeader.c)
 *     RtlAppendUnicodeToString @ 0x180037990 (RtlAppendUnicodeToString.c)
 *     DbgPrint @ 0x180051AC0 (DbgPrint.c)
 *     __security_check_cookie @ 0x18008C940 (__security_check_cookie.c)
 */

char __fastcall AVrfpLoadAndInitializeProvider(__int64 a1)
{
  char v2; // di
  char v3; // si
  char v4; // r14
  unsigned int v5; // edx
  unsigned int v6; // ecx
  _WORD *v7; // rax
  const WCHAR *NtSystemRoot; // rax
  wchar_t *Buffer; // rsi
  int Dll; // eax
  __int64 v11; // rcx
  PIMAGE_NT_HEADERS v12; // rax
  __int64 v13; // r8
  __int64 v14; // rdx
  __int64 (__fastcall *v15)(__int64, _QWORD, __int64); // rcx
  __int64 v16; // rsi
  _QWORD v18[2]; // [rsp+38h] [rbp-D0h] BYREF
  _UNICODE_STRING Destination; // [rsp+48h] [rbp-C0h] BYREF
  __int64 v20; // [rsp+58h] [rbp-B0h] BYREF
  const WCHAR *v21[16]; // [rsp+60h] [rbp-A8h] BYREF

  v18[1] = a1;
  v2 = 0;
  v3 = 0;
  v4 = 1;
  if ( (AVrfpDebug & 1) != 0 )
    DbgPrint("AVRF: verifier dll `%ws' \n", *(_QWORD *)(a1 + 24));
  v5 = *(unsigned __int16 *)(a1 + 16) >> 1;
  v6 = 0;
  if ( v5 )
  {
    v7 = *(_WORD **)(a1 + 24);
    while ( *v7 != 92 && *v7 != 47 )
    {
      ++v6;
      ++v7;
      if ( v6 >= v5 )
        goto LABEL_10;
    }
    v3 = 1;
  }
LABEL_10:
  if ( v3 == 1 )
  {
    DbgPrint("AVRF: Cannot load %ws from arbitrary location\n", *(_QWORD *)(a1 + 24), *(_QWORD *)(a1 + 24));
    return 0;
  }
  Destination.Buffer = (wchar_t *)&unk_18016D830;
  *(_DWORD *)&Destination.Length = 34078720;
  NtSystemRoot = RtlGetNtSystemRoot();
  RtlAppendUnicodeToString(&Destination, NtSystemRoot);
  RtlAppendUnicodeStringToString(&Destination, &SlashSystem32SlashString);
  Buffer = Destination.Buffer;
  LdrpInitializeDllPath(0LL, Destination.Buffer, v21);
  Dll = LdrpLoadDll(a1 + 16, (__int64)v21, 1, (__int64)&v20);
  if ( Dll < 0 )
  {
    DbgPrint(
      "AVRF: %ws: failed to load provider `%ws' (status %08X) from %ws\n",
      *(_QWORD *)(qword_18016C4D0 + 96),
      *(_QWORD *)(a1 + 24),
      (unsigned int)Dll,
      Buffer);
    return 0;
  }
  v11 = v20;
  *(_QWORD *)(a1 + 32) = v20;
  v12 = RtlImageNtHeader(*(PVOID *)(v11 + 48));
  if ( v12 )
  {
    if ( (v12->FileHeader.Characteristics & 0x2000) != 0 )
    {
      *(_DWORD *)(*(_QWORD *)(a1 + 32) + 104LL) |= 0x400u;
      v14 = *(_QWORD *)(a1 + 32);
      v15 = *(__int64 (__fastcall **)(__int64, _QWORD, __int64))(v14 + 56);
      if ( !v15 )
      {
        DbgPrint("AVRF: cannot find an entry point for provider %ws \n", *(_QWORD *)(a1 + 24), v13);
        return 0;
      }
      v18[0] = 0LL;
      if ( LdrpCallInitRoutine(v15, *(_QWORD *)(v14 + 48), 4u, (__int64)v18) && (v16 = v18[0]) != 0 )
      {
        if ( *(_DWORD *)v18[0] == 80 )
        {
          if ( (AVrfpDebug & 8) != 0 )
            DbgPrint("AVRF: initialized provider %ws (descriptor @ %p) \n", *(_QWORD *)(a1 + 24), v18[0]);
          *(_QWORD *)(a1 + 40) = *(_QWORD *)(v16 + 8);
          *(_QWORD *)(a1 + 48) = *(_QWORD *)(v16 + 16);
          *(_QWORD *)(a1 + 56) = *(_QWORD *)(v16 + 24);
          *(_QWORD *)(a1 + 64) = *(_QWORD *)(v16 + 72);
          *(_QWORD *)(v16 + 32) = *(_QWORD *)(qword_18016C4D0 + 96);
          *(_DWORD *)(v16 + 40) = AVrfpVerifierFlags;
          *(_DWORD *)(v16 + 44) = AVrfpDebug;
          *(_QWORD *)(v16 + 48) = RtlpGetStackTraceAddress;
          *(_QWORD *)(v16 + 56) = RtlpDebugPageHeapCreate;
          *(_QWORD *)(v16 + 64) = RtlpDebugPageHeapDestroy;
          if ( AVrfpEnabledSystemWide )
            *(_DWORD *)(v16 + 40) |= 0x20000u;
        }
        else
        {
          v2 = 1;
          DbgPrint("AVRF: provider %ws passed an invalid descriptor @ %p \n", *(_QWORD *)(a1 + 24), v18[0]);
        }
      }
      else
      {
        v2 = 1;
        DbgPrint("AVRF: provider %ws did not initialize correctly \n", *(_QWORD *)(a1 + 24));
      }
    }
    else
    {
      DbgPrint("AVRF: provider %ws is not a DLL image \n", *(_QWORD *)(a1 + 24));
      v2 = 1;
    }
  }
  else
  {
    v2 = 1;
  }
  if ( v2 )
    return 0;
  return v4;
}
