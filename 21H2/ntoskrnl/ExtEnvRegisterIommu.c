/*
 * XREFs of ExtEnvRegisterIommu @ 0x140A8D9F0
 * Callers:
 *     HalpIommuProcessIvhdEntry @ 0x1404E1D20 (HalpIommuProcessIvhdEntry.c)
 *     HalpIvtProcessDrhdEntry @ 0x1404E764C (HalpIvtProcessDrhdEntry.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x14026A4C0 (RtlInitUnicodeString.c)
 *     RtlCopyUnicodeString @ 0x14035E210 (RtlCopyUnicodeString.c)
 *     HalpExtBuildResourceIdString @ 0x1403ACCF8 (HalpExtBuildResourceIdString.c)
 *     HalpMmAllocateMemoryInternal @ 0x1403BB428 (HalpMmAllocateMemoryInternal.c)
 *     __security_check_cookie @ 0x1403D05D0 (__security_check_cookie.c)
 *     memmove @ 0x140414040 (memmove.c)
 *     memset @ 0x140414300 (memset.c)
 */

__int64 __fastcall ExtEnvRegisterIommu(__int64 a1, __int64 a2, _QWORD *a3)
{
  int v5; // ecx
  unsigned int v6; // ebx
  _QWORD *v7; // rdx
  _QWORD *v8; // rax
  bool v9; // bp
  unsigned int v10; // ecx
  unsigned __int16 Length; // r15
  unsigned int v12; // r14d
  void *MemoryInternal; // rax
  __int64 v14; // rsi
  unsigned __int64 v15; // rcx
  __int64 v16; // rax
  __int64 v17; // rax
  unsigned int v18; // eax
  const void *v19; // rdx
  int v20; // eax
  __int64 *v21; // rax
  size_t SizeInWords; // [rsp+38h] [rbp-110h]
  UNICODE_STRING DestinationString; // [rsp+50h] [rbp-F8h] BYREF
  WCHAR SourceString[80]; // [rsp+60h] [rbp-E8h] BYREF

  DestinationString = 0LL;
  if ( *(_DWORD *)a1 == 1
    && *(_DWORD *)(a1 + 4) == 104
    && (v5 = *(_DWORD *)(a1 + 20), (v5 & 0xFFFF8000) == 0)
    && (v6 = 0, *(_DWORD *)(a1 + 72))
    && (v7 = *(_QWORD **)(a1 + 56), v7[1])
    && ((v5 & 2) == 0 || *(_QWORD *)(*(_QWORD *)(a1 + 64) + 72LL))
    && ((v5 & 0x40) == 0 || v7[14] && v7[15] && v7[16])
    && ((v5 & 0x20) == 0
     || (v8 = *(_QWORD **)(a1 + 64), v8[1])
     && v8[2]
     && v8[3]
     && v8[4]
     && v8[5]
     && v8[7]
     && v8[8]
     && v8[10]
     && v8[11]
     && v8[12]) )
  {
    v9 = 0;
    if ( !*(_DWORD *)(a1 + 16) )
      v9 = *(_QWORD *)(a1 + 8) != 0LL;
    LODWORD(SizeInWords) = 75;
    HalpExtBuildResourceIdString(
      1413894989,
      0,
      0x4300u,
      *(_WORD *)(a1 + 72),
      1u,
      0,
      *(_DWORD *)(a1 + 100),
      SizeInWords,
      SourceString);
    RtlInitUnicodeString(&DestinationString, SourceString);
    v10 = 536;
    if ( !v9 )
      v10 = (*(_DWORD *)(a1 + 16) + 543) & 0xFFFFFFF8;
    Length = DestinationString.Length;
    v12 = (v10 + DestinationString.Length + 9) & 0xFFFFFFF8;
    MemoryInternal = (void *)HalpMmAllocateMemoryInternal(v12, 1u);
    v14 = (__int64)MemoryInternal;
    if ( MemoryInternal )
    {
      memset(MemoryInternal, 0, v12);
      v15 = (v14 + 543) & 0xFFFFFFFFFFFFFFF8uLL;
      if ( v9 )
      {
        *(_QWORD *)(v14 + 16) = *(_QWORD *)(a1 + 8);
      }
      else
      {
        *(_QWORD *)(v14 + 16) = v15;
        v15 = (*(unsigned int *)(a1 + 16) + 7LL + v15) & 0xFFFFFFFFFFFFFFF8uLL;
      }
      *(_QWORD *)(v14 + 520) = v15;
      *(_BYTE *)(v14 + 40) = 12;
      v16 = *(_QWORD *)(a1 + 56);
      *(_OWORD *)(v14 + 56) = *(_OWORD *)v16;
      *(_OWORD *)(v14 + 72) = *(_OWORD *)(v16 + 16);
      *(_OWORD *)(v14 + 88) = *(_OWORD *)(v16 + 32);
      *(_OWORD *)(v14 + 104) = *(_OWORD *)(v16 + 48);
      *(_OWORD *)(v14 + 120) = *(_OWORD *)(v16 + 64);
      *(_OWORD *)(v14 + 136) = *(_OWORD *)(v16 + 80);
      *(_OWORD *)(v14 + 152) = *(_OWORD *)(v16 + 96);
      *(_OWORD *)(v14 + 168) = *(_OWORD *)(v16 + 112);
      *(_QWORD *)(v14 + 184) = *(_QWORD *)(v16 + 128);
      v17 = *(_QWORD *)(a1 + 64);
      if ( v17 )
      {
        *(_OWORD *)(v14 + 192) = *(_OWORD *)v17;
        *(_OWORD *)(v14 + 208) = *(_OWORD *)(v17 + 16);
        *(_OWORD *)(v14 + 224) = *(_OWORD *)(v17 + 32);
        *(_OWORD *)(v14 + 240) = *(_OWORD *)(v17 + 48);
        *(_OWORD *)(v14 + 256) = *(_OWORD *)(v17 + 64);
        *(_OWORD *)(v14 + 272) = *(_OWORD *)(v17 + 80);
        *(_OWORD *)(v14 + 288) = *(_OWORD *)(v17 + 96);
        *(_OWORD *)(v14 + 304) = *(_OWORD *)(v17 + 112);
        *(_OWORD *)(v14 + 320) = *(_OWORD *)(v17 + 128);
        *(_OWORD *)(v14 + 336) = *(_OWORD *)(v17 + 144);
        *(_QWORD *)(v14 + 352) = *(_QWORD *)(v17 + 160);
      }
      *(_DWORD *)(v14 + 24) = *(_DWORD *)(a1 + 16);
      *(_DWORD *)(v14 + 456) = *(_DWORD *)(a1 + 20);
      *(_DWORD *)(v14 + 44) = *(_DWORD *)(a1 + 40);
      *(_DWORD *)(v14 + 52) = *(_DWORD *)(a1 + 48);
      *(_DWORD *)(v14 + 48) = *(_DWORD *)(a1 + 44);
      *(_DWORD *)(v14 + 460) = *(_DWORD *)(a1 + 72);
      *(_DWORD *)(v14 + 464) = *(_DWORD *)(a1 + 76);
      *(_DWORD *)(v14 + 468) = *(_DWORD *)(a1 + 80);
      *(_DWORD *)(v14 + 472) = *(_DWORD *)(a1 + 84);
      *(_DWORD *)(v14 + 496) = *(_DWORD *)(a1 + 88);
      *(_DWORD *)(v14 + 424) = *(_DWORD *)(a1 + 92);
      *(_DWORD *)(v14 + 500) = *(_DWORD *)(a1 + 96);
      *(_QWORD *)(v14 + 376) = v14 + 368;
      *(_QWORD *)(v14 + 368) = v14 + 368;
      *(_DWORD *)(v14 + 404) = *(_DWORD *)(v14 + 500);
      *(_QWORD *)(v14 + 408) = *(_QWORD *)(v14 + 256);
      *(_QWORD *)(v14 + 416) = *(_QWORD *)(v14 + 248);
      *(_QWORD *)(v14 + 392) = 0LL;
      *(_QWORD *)(v14 + 384) = 0LL;
      *(_DWORD *)(v14 + 400) = 0;
      v18 = *(_DWORD *)(a1 + 16);
      if ( v18 )
      {
        v19 = *(const void **)(a1 + 8);
        if ( v19 )
          memmove(*(void **)(v14 + 16), v19, v18);
      }
      v20 = *(_DWORD *)(a1 + 100);
      *(_WORD *)(v14 + 512) = 0;
      *(_WORD *)(v14 + 514) = Length + 2;
      *(_DWORD *)(v14 + 504) = v20;
      RtlCopyUnicodeString((PUNICODE_STRING)(v14 + 512), &DestinationString);
      v21 = (__int64 *)qword_140C49DF8;
      if ( *(__int64 **)qword_140C49DF8 != &HalpIommuList )
        __fastfail(3u);
      ++HalpIommuCount;
      *(_QWORD *)v14 = &HalpIommuList;
      *(_QWORD *)(v14 + 8) = v21;
      *v21 = v14;
      qword_140C49DF8 = v14;
      if ( a3 )
        *a3 = *(_QWORD *)(v14 + 16);
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
  return v6;
}
