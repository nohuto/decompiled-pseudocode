/*
 * XREFs of MiProtectSystemImage @ 0x140783ACC
 * Callers:
 *     MiDriverLoadSucceeded @ 0x140745004 (MiDriverLoadSucceeded.c)
 *     MiWriteProtectSystemImages @ 0x140783A44 (MiWriteProtectSystemImages.c)
 * Callees:
 *     MiGetSystemRegionType @ 0x1402609A0 (MiGetSystemRegionType.c)
 *     MiGetPteAddress @ 0x14027AF40 (MiGetPteAddress.c)
 *     RtlImageNtHeader @ 0x14027DAE0 (RtlImageNtHeader.c)
 *     MI_IS_PHYSICAL_ADDRESS @ 0x14027DD60 (MI_IS_PHYSICAL_ADDRESS.c)
 *     MiSetSystemCodeProtection @ 0x1402BB7F8 (MiSetSystemCodeProtection.c)
 *     __security_check_cookie @ 0x1403CC020 (__security_check_cookie.c)
 *     MiComputeDriverProtection @ 0x140783DD0 (MiComputeDriverProtection.c)
 *     MiActOnLargeKernelHalPages @ 0x140783E2C (MiActOnLargeKernelHalPages.c)
 */

unsigned __int64 __fastcall MiProtectSystemImage(__int64 a1)
{
  char *v1; // rbx
  unsigned __int64 result; // rax
  PIMAGE_NT_HEADERS v4; // r13
  BOOL v5; // r15d
  __int64 NumberOfSections; // r14
  int v7; // r10d
  _OWORD *v8; // rsi
  __int64 v9; // rdi
  int *v10; // r8
  char *v11; // r9
  int v12; // ecx
  unsigned __int64 v13; // r9
  __int64 v14; // rax
  unsigned __int64 v15; // rdi
  int v16; // r14d
  unsigned __int64 v17; // r12
  unsigned int v18; // edx
  unsigned __int64 v19; // rbp
  unsigned int v20; // r8d
  unsigned __int64 v21; // r9
  __int64 v22; // rdx
  unsigned int v23; // edi
  int v24; // edx
  unsigned int v25; // r8d
  unsigned __int64 v26; // r11
  unsigned __int64 v27; // r10
  unsigned int v28; // r9d
  unsigned __int64 v29; // r10
  unsigned __int64 v30; // r11
  unsigned __int64 v31; // r8
  __int64 SectionAlignment; // rcx
  unsigned __int64 v33; // rdx
  unsigned int v34; // eax
  __int64 v35; // rax
  unsigned int v36; // [rsp+20h] [rbp-98h]
  unsigned int v37; // [rsp+24h] [rbp-94h]
  unsigned int v38; // [rsp+28h] [rbp-90h]
  int v39; // [rsp+2Ch] [rbp-8Ch]
  __int64 PteAddress; // [rsp+30h] [rbp-88h]
  unsigned __int64 v41; // [rsp+38h] [rbp-80h]
  unsigned __int64 v42; // [rsp+40h] [rbp-78h]
  char *v44; // [rsp+50h] [rbp-68h]
  _OWORD v45[2]; // [rsp+58h] [rbp-60h] BYREF
  __int64 v46; // [rsp+78h] [rbp-40h]

  v1 = *(char **)(a1 + 48);
  memset(v45, 0, sizeof(v45));
  v46 = 0LL;
  result = MI_IS_PHYSICAL_ADDRESS((unsigned __int64)v1);
  if ( (_DWORD)result )
  {
    if ( v1 == PsNtosImageBase || v1 == PsHalImageBase )
      return MiActOnLargeKernelHalPages(v1, MiProtectLargeKernelHalRange);
  }
  else
  {
    v37 = 0;
    v4 = RtlImageNtHeader(v1);
    v5 = 0;
    if ( (unsigned int)MiGetSystemRegionType((unsigned __int64)v1) == 1 )
      v37 = 1;
    else
      v5 = (*(_DWORD *)(a1 + 104) & 0x8000000) == 0;
    NumberOfSections = v4->FileHeader.NumberOfSections;
    v7 = v4->FileHeader.NumberOfSections;
    v8 = (_OWORD *)((char *)&v4->OptionalHeader.Magic + v4->FileHeader.SizeOfOptionalHeader);
    v9 = (v4->OptionalHeader.SizeOfImage >> 12) + ((v4->OptionalHeader.SizeOfImage & 0xFFF) != 0);
    result = (unsigned __int64)v1;
    if ( v4->FileHeader.NumberOfSections )
    {
      v10 = (int *)(v8 + 1);
      while ( 1 )
      {
        v11 = &v1[*(v10 - 1)];
        if ( (unsigned __int64)v11 < result )
          break;
        v12 = *v10;
        if ( *v10 < (unsigned int)*(v10 - 2) )
          v12 = *(v10 - 2);
        v10 += 10;
        result = -(__int64)v4->OptionalHeader.SectionAlignment & (unsigned __int64)&v11[v4->OptionalHeader.SectionAlignment
                                                                                      - 1
                                                                                      + v12];
        if ( !--v7 )
          goto LABEL_10;
      }
    }
    else
    {
LABEL_10:
      v39 = -1073741824;
      v44 = (char *)v8 + 40 * NumberOfSections - 1;
      PteAddress = MiGetPteAddress((unsigned __int64)v1);
      v36 = 0;
      v14 = PteAddress + 8 * v9;
      v15 = 0LL;
      v41 = 0LL;
      v16 = NumberOfSections + 1;
      v42 = v14;
      do
      {
        if ( v16 == 1 )
        {
          HIDWORD(v46) = 0;
          v8 = v45;
          v17 = 0LL;
          v38 = 0;
          v19 = MiGetPteAddress(v13) + 8;
        }
        else
        {
          v17 = (unsigned __int64)&v1[*((unsigned int *)v8 + 3)];
          v19 = MiGetPteAddress(v17);
          if ( v20 < v18 )
            v20 = v18;
          v22 = v36;
          v38 = v20;
        }
        if ( v15 && v19 > v15 )
        {
          v34 = MiComputeDriverProtection(v37, v22);
          MiSetSystemCodeProtection(a1, v15, v15, v34);
          v21 = (unsigned __int64)v44;
          v35 = PteAddress + 8;
          if ( v15 != PteAddress )
            v35 = PteAddress;
          PteAddress = v35;
          v41 = 0LL;
          v36 = 0;
        }
        if ( v19 >= v42 )
        {
          result = (unsigned __int64)v45;
          if ( v8 != v45 )
            break;
        }
        v23 = *((_DWORD *)v8 + 9) & 0xE0000000;
        if ( v5 && ((MiFlags & 0x10000) == 0 || (*((_DWORD *)v8 + 9) & 0x20000000) == 0) )
          v23 = *((_DWORD *)v8 + 9) & 0x60000000 | 0x80000000;
        if ( v23 == v39 && (result = v4->OptionalHeader.SectionAlignment, (unsigned int)result <= 0x1000) )
        {
          SectionAlignment = (unsigned int)result;
          v33 = result + v38 - 1LL;
        }
        else
        {
          result = MiGetPteAddress(v21);
          v27 = result;
          if ( result == v19 )
          {
            v41 = v19;
            v27 = result - 8;
            v36 = v25 | v23 | v24;
          }
          if ( v27 >= v26 )
          {
            v28 = MiComputeDriverProtection(v37, v25);
            v31 = v42 - 8;
            if ( v29 < v42 )
              v31 = v29;
            result = MiSetSystemCodeProtection(a1, v30, v31, v28);
          }
          SectionAlignment = v4->OptionalHeader.SectionAlignment;
          v33 = SectionAlignment + v38 - 1LL;
          PteAddress = v19;
          v39 = v23;
        }
        v15 = v41;
        v8 = (_OWORD *)((char *)v8 + 40);
        v13 = (-SectionAlignment & (v17 + v33)) - 1;
        v44 = (char *)v13;
        --v16;
      }
      while ( v16 );
    }
  }
  return result;
}
