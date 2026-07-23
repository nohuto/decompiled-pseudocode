/*
 * XREFs of HalpInterruptRegisterController @ 0x1403AC5D4
 * Callers:
 *     HalpApicRegisterIoUnit @ 0x1403ABA00 (HalpApicRegisterIoUnit.c)
 *     HalpPicDiscover @ 0x1403ABD00 (HalpPicDiscover.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x14026A4C0 (RtlInitUnicodeString.c)
 *     RtlCopyUnicodeString @ 0x14035E210 (RtlCopyUnicodeString.c)
 *     HalpInterruptLookupController @ 0x140378850 (HalpInterruptLookupController.c)
 *     HalpIsPartitionCpuManager @ 0x1403A8F7C (HalpIsPartitionCpuManager.c)
 *     HalpInterruptBuildKnownResourceIdString @ 0x1403AC93C (HalpInterruptBuildKnownResourceIdString.c)
 *     HalpMmAllocateMemoryInternal @ 0x1403BB428 (HalpMmAllocateMemoryInternal.c)
 *     __security_check_cookie @ 0x1403D05D0 (__security_check_cookie.c)
 *     memmove @ 0x140414040 (memmove.c)
 *     memset @ 0x140414300 (memset.c)
 */

__int64 __fastcall HalpInterruptRegisterController(__int64 a1)
{
  unsigned int v1; // ebx
  int v3; // eax
  int v4; // ecx
  __int64 v5; // rdx
  __int16 v6; // r9
  __int64 v7; // rcx
  unsigned __int16 Length; // bp
  unsigned int v9; // r14d
  void *MemoryInternal; // rax
  __int64 v11; // rsi
  unsigned __int64 v12; // rcx
  unsigned __int64 v13; // rcx
  unsigned int v14; // eax
  const void *v15; // rdx
  __int64 *v16; // rax
  int v18; // r11d
  UNICODE_STRING DestinationString; // [rsp+20h] [rbp-D8h] BYREF
  WCHAR SourceString[80]; // [rsp+30h] [rbp-C8h] BYREF

  v1 = 0;
  DestinationString = 0LL;
  if ( HalpInterruptRegistrationAllowed )
  {
    if ( !a1 )
      return (unsigned int)-1073741811;
    if ( *(_DWORD *)a1 != 1 )
      return (unsigned int)-1073741811;
    if ( *(_DWORD *)(a1 + 4) != 232 )
      return (unsigned int)-1073741811;
    if ( (*(_DWORD *)(a1 + 212) & 0xFFFFF800) != 0 )
      return (unsigned int)-1073741811;
    v3 = *(_DWORD *)(a1 + 204);
    if ( !v3 )
      return (unsigned int)-1073741811;
    if ( (unsigned int)(v3 - 1) > 1 )
      return (unsigned int)-1073741637;
    v4 = *(_DWORD *)(a1 + 208);
    if ( v4 == -1 )
      return (unsigned int)-1073741811;
    if ( HalpInterruptLookupController(v4) )
      return (unsigned int)-1073741635;
    if ( *(_QWORD *)(a1 + 88)
      && *(_QWORD *)(a1 + 96)
      && !*(_QWORD *)(a1 + 64)
      && ((v6 & 1) == 0 || *(_QWORD *)(a1 + 8))
      && *(_QWORD *)(a1 + 16)
      && ((v6 & 2) == 0 || *(_QWORD *)(a1 + 24) && *(_DWORD *)(a1 + 216))
      && (!*(_DWORD *)(a1 + 228) || *(_QWORD *)(a1 + 128) && *(_QWORD *)(a1 + 136))
      && ((v6 & 0x400) == 0 || *(_QWORD *)(a1 + 176)) )
    {
      HalpInterruptBuildKnownResourceIdString(a1, v5, SourceString);
      RtlInitUnicodeString(&DestinationString, SourceString);
      if ( (*(_DWORD *)(a1 + 212) & 0x100) != 0 && HalpIsPartitionCpuManager(v7) && qword_140C4A1E8 )
        *(_DWORD *)(a1 + 212) ^= v18;
      Length = DestinationString.Length;
      v9 = (((*(_DWORD *)(a1 + 200) + 359) & 0xFFFFFFF8) + DestinationString.Length + 9) & 0xFFFFFFF8;
      MemoryInternal = (void *)HalpMmAllocateMemoryInternal(v9, 1LL);
      v11 = (__int64)MemoryInternal;
      if ( MemoryInternal )
      {
        memset(MemoryInternal, 0, v9);
        v12 = (v11 + 359) & 0xFFFFFFFFFFFFFFF8uLL;
        *(_QWORD *)(v11 + 16) = v12;
        v13 = *(unsigned int *)(a1 + 200) + 7LL + v12;
        *(_QWORD *)(v11 + 248) = v11 + 240;
        *(_QWORD *)(v11 + 240) = v11 + 240;
        *(_QWORD *)(v11 + 264) = v11 + 256;
        *(_QWORD *)(v11 + 256) = v11 + 256;
        *(_QWORD *)(v11 + 336) = v13 & 0xFFFFFFFFFFFFFFF8uLL;
        *(_DWORD *)(v11 + 24) = *(_DWORD *)(a1 + 200);
        *(_OWORD *)(v11 + 32) = *(_OWORD *)(a1 + 8);
        *(_OWORD *)(v11 + 48) = *(_OWORD *)(a1 + 24);
        *(_OWORD *)(v11 + 64) = *(_OWORD *)(a1 + 40);
        *(_OWORD *)(v11 + 80) = *(_OWORD *)(a1 + 56);
        *(_OWORD *)(v11 + 96) = *(_OWORD *)(a1 + 72);
        *(_OWORD *)(v11 + 112) = *(_OWORD *)(a1 + 88);
        *(_OWORD *)(v11 + 128) = *(_OWORD *)(a1 + 104);
        *(_OWORD *)(v11 + 144) = *(_OWORD *)(a1 + 120);
        *(_OWORD *)(v11 + 160) = *(_OWORD *)(a1 + 136);
        *(_OWORD *)(v11 + 176) = *(_OWORD *)(a1 + 152);
        *(_OWORD *)(v11 + 192) = *(_OWORD *)(a1 + 168);
        *(_QWORD *)(v11 + 208) = *(_QWORD *)(a1 + 184);
        *(_DWORD *)(v11 + 220) = *(_DWORD *)(a1 + 212);
        *(_DWORD *)(v11 + 216) = *(_DWORD *)(a1 + 204);
        *(_DWORD *)(v11 + 228) = *(_DWORD *)(a1 + 216);
        *(_DWORD *)(v11 + 232) = *(_DWORD *)(a1 + 208);
        *(_DWORD *)(v11 + 280) = *(_DWORD *)(a1 + 220);
        *(_DWORD *)(v11 + 284) = *(_DWORD *)(a1 + 224);
        *(_QWORD *)(v11 + 272) = 0LL;
        *(_DWORD *)(v11 + 288) = *(_DWORD *)(a1 + 228);
        v14 = *(_DWORD *)(a1 + 200);
        if ( v14 )
        {
          v15 = *(const void **)(a1 + 192);
          if ( v15 )
            memmove(*(void **)(v11 + 16), v15, v14);
        }
        *(_WORD *)(v11 + 328) = 0;
        *(_WORD *)(v11 + 330) = Length + 2;
        RtlCopyUnicodeString((PUNICODE_STRING)(v11 + 328), &DestinationString);
        v16 = (__int64 *)qword_140C4BB38;
        if ( *(ULONG_PTR **)qword_140C4BB38 != &HalpRegisteredInterruptControllers )
          __fastfail(3u);
        ++HalpInterruptControllerCount;
        *(_QWORD *)v11 = &HalpRegisteredInterruptControllers;
        *(_QWORD *)(v11 + 8) = v16;
        *v16 = v11;
        qword_140C4BB38 = v11;
      }
      else
      {
        return (unsigned int)-1073741670;
      }
    }
    else
    {
      return (unsigned int)-1073741811;
    }
  }
  else
  {
    return (unsigned int)-1073741431;
  }
  return v1;
}
