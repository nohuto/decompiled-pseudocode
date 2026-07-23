/*
 * XREFs of HalpReportResourceUsage @ 0x140A3AD8C
 * Callers:
 *     HalReportResourceUsage @ 0x140A3DE50 (HalReportResourceUsage.c)
 * Callees:
 *     KeCopyAffinityEx @ 0x1403461A0 (KeCopyAffinityEx.c)
 *     HalTranslateBusAddress @ 0x1403A5BB0 (HalTranslateBusAddress.c)
 *     RtlCmEncodeMemIoResource @ 0x1403AD630 (RtlCmEncodeMemIoResource.c)
 *     __security_check_cookie @ 0x1403D05D0 (__security_check_cookie.c)
 *     KeBugCheckEx @ 0x1403FE0D0 (KeBugCheckEx.c)
 *     memset @ 0x140414300 (memset.c)
 *     HalpClaimDebugResource @ 0x1404BF3E8 (HalpClaimDebugResource.c)
 *     ExFreePoolWithTag @ 0x1409B5010 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x1409B5160 (ExAllocatePoolWithTag.c)
 *     HalpGetResourceSortValue @ 0x140A3B30C (HalpGetResourceSortValue.c)
 *     IoReportHalResourceUsage @ 0x140A3B810 (IoReportHalResourceUsage.c)
 */

void __fastcall HalpReportResourceUsage(__int64 a1)
{
  __int64 v1; // r11
  unsigned int v2; // r14d
  unsigned int *v3; // rsi
  _DWORD *v4; // rax
  _DWORD *v5; // r13
  _DWORD *v6; // r12
  char *v7; // r8
  _DWORD *v8; // r15
  unsigned int v9; // edx
  char *v10; // rcx
  unsigned __int8 v11; // r8
  ULONG_PTR v12; // rdi
  unsigned int v13; // edx
  char v14; // cl
  __int128 v15; // xmm0
  __int16 v16; // ax
  int v17; // r8d
  unsigned int v18; // r10d
  _DWORD *v19; // r9
  _DWORD *v20; // rax
  _DWORD *v21; // rcx
  ULONGLONG v22; // r8
  int v23; // edx
  ULONGLONG v24; // r9
  NTSTATUS v25; // eax
  unsigned int v26; // r15d
  _DWORD *v27; // r9
  unsigned int v28; // edi
  _DWORD *v29; // r10
  __int128 *v30; // r10
  unsigned int v31; // r11d
  __int128 *v32; // r14
  _DWORD *v33; // r13
  int v34; // esi
  unsigned int v35; // r15d
  unsigned int v36; // edi
  __int64 v37; // r15
  bool v38; // cc
  int v39; // ecx
  __int128 v40; // xmm1
  int v41; // ecx
  __int128 v42; // xmm1
  unsigned __int8 v43; // [rsp+38h] [rbp-D0h]
  unsigned int v44; // [rsp+3Ch] [rbp-CCh]
  unsigned int v45; // [rsp+3Ch] [rbp-CCh]
  char v46; // [rsp+40h] [rbp-C8h]
  ULONG AddressSpace; // [rsp+44h] [rbp-C4h] BYREF
  unsigned int Descriptor; // [rsp+48h] [rbp-C0h] BYREF
  struct _CM_PARTIAL_RESOURCE_DESCRIPTOR Descriptor_8; // [rsp+50h] [rbp-B8h] BYREF
  unsigned int v50; // [rsp+68h] [rbp-A0h] BYREF
  unsigned int v51; // [rsp+6Ch] [rbp-9Ch]
  __int64 v52; // [rsp+70h] [rbp-98h] BYREF
  __int64 v53; // [rsp+78h] [rbp-90h] BYREF
  unsigned __int64 v54; // [rsp+80h] [rbp-88h]
  _DWORD *v55; // [rsp+88h] [rbp-80h]
  LARGE_INTEGER TranslatedAddress; // [rsp+90h] [rbp-78h] BYREF
  _DWORD *v57; // [rsp+98h] [rbp-70h]
  _DWORD *v58; // [rsp+A0h] [rbp-68h]
  __int128 v59; // [rsp+A8h] [rbp-60h]
  unsigned int *PoolWithTag; // [rsp+C0h] [rbp-48h]
  _DWORD *v61; // [rsp+C8h] [rbp-40h]
  __int64 v62; // [rsp+D0h] [rbp-38h]
  _QWORD v63[22]; // [rsp+D8h] [rbp-30h] BYREF

  v62 = a1;
  memset(v63, 0, 0xA8uLL);
  v1 = KdComPortInUse;
  v2 = 0;
  Descriptor = 0;
  v52 = 0LL;
  v50 = 0;
  v53 = 0LL;
  TranslatedAddress.QuadPart = 0LL;
  AddressSpace = 0;
  memset(&Descriptor_8, 0, sizeof(Descriptor_8));
  if ( KdComPortInUse )
    HalpClaimDebugResource((ULONG_PTR)&HalpKdComIoSpace, KdComPortInUse);
  if ( KdHvComPortInUse && KdHvComPortInUse != v1 )
    HalpClaimDebugResource((ULONG_PTR)&HalpHvComIoSpace, KdHvComPortInUse);
  PoolWithTag = (unsigned int *)ExAllocatePoolWithTag(NonPagedPoolNx, 0x2000uLL, 0x206C6148u);
  v3 = PoolWithTag;
  v4 = ExAllocatePoolWithTag(NonPagedPoolNx, 0x2000uLL, 0x206C6148u);
  v61 = v4;
  v5 = v4;
  if ( !PoolWithTag || !v4 )
    KeBugCheckEx(0xACu, 0x4000uLL, 1uLL, (ULONG_PTR)"minkernel\\hals\\lib\\misc\\usage.c", 0x18EuLL);
  memset(PoolWithTag, 0, 0x2000uLL);
  memset(v5, 0, 0x2000uLL);
  PoolWithTag[1] = -1;
  v6 = v5 + 1;
  v57 = v3 + 1;
  v7 = byte_140D58D61;
  v8 = v3 + 1;
  v55 = v5 + 1;
  v9 = 0;
  v10 = HalpIDTUsageFlags;
  do
  {
    if ( (*v10 & 1) == 0 )
    {
      *v10 = 17;
      *(_DWORD *)v7 = v9;
    }
    ++v9;
    ++v10;
    v7 += 5;
  }
  while ( v9 < 0x30 );
  v58 = 0LL;
  v11 = 0;
  v54 = 0LL;
  v43 = 0;
  while ( 2 )
  {
    v12 = HalpAddressUsageList;
    v13 = 0;
    v14 = v11 != 0 ? 16 : 32;
    v46 = v14;
LABEL_12:
    v44 = v13;
    while ( 1 )
    {
      while ( v13 <= 0xFF )
      {
        if ( ((unsigned __int8)v14 & (unsigned __int8)HalpIDTUsageFlags[v13]) == 0 )
        {
          ++v13;
          goto LABEL_12;
        }
        KeCopyAffinityEx((__int64)v63, (unsigned __int16 *)KeActiveProcessors);
        *(_DWORD *)&Descriptor_8.Type = 66050;
        if ( (HalpIDTUsageFlags[v44] & 2) == 0 )
          Descriptor_8.Flags = 0;
        Descriptor_8.u.Generic.Start.HighPart = *(_DWORD *)&HalpIDTUsage[5 * v44 + 1];
        Descriptor_8.u.Generic.Start.LowPart = LOWORD(Descriptor_8.u.MessageInterrupt.Translated.Vector);
        Descriptor_8.u.Interrupt.Affinity = v63[1];
        v15 = *(_OWORD *)&Descriptor_8.Type;
        v16 = (unsigned __int8)HalpIDTUsage[5 * v44];
        v17 = HIDWORD(v63[1]);
        v18 = HIDWORD(v63[1]);
        v59 = *(_OWORD *)&Descriptor_8.Type;
        DWORD2(v59) = v44;
        v13 = ++v44;
        WORD2(v59) = v16;
LABEL_19:
        v19 = v55;
        if ( *v57 )
        {
          ++*v3;
          v20 = v8 + 2;
          ++*v5;
          *v8 = 0;
          *v19 = 0;
          v21 = v19 + 2;
          v57 = v8;
          v8 += 4;
          v54 = (unsigned __int64)(v19 + 2);
          v19 += 4;
          v58 = v20;
        }
        else
        {
          v20 = v58;
          v21 = (_DWORD *)v54;
        }
        ++v20[1];
        ++v21[1];
        v14 = v46;
        *(_OWORD *)v8 = v15;
        v8[4] = v17;
        v8 += 5;
        *(_OWORD *)v19 = v59;
        v19[4] = v18;
        v55 = v19 + 5;
      }
      if ( !v12 )
        break;
      if ( ((unsigned __int8)v14 & *(_BYTE *)(v12 + 12)) != 0 )
      {
        v22 = *(_QWORD *)(v12 + 16LL * v2 + 21);
        if ( v22 )
        {
          v23 = *(_DWORD *)(v12 + 8);
          if ( ((v23 - 1) & 0xFFFFFFF9) == 0 && v23 != 5 )
          {
            v24 = *(_QWORD *)(v12 + 16LL * v2 + 13);
            Descriptor_8.Flags = 0;
            v25 = RtlCmEncodeMemIoResource(&Descriptor_8, v23, v22, v24);
            if ( v25 < 0 )
              KeBugCheckEx(0x5Cu, 0x10FuLL, v25, v12, v2);
            Descriptor_8.ShareDisposition = 2;
            if ( Descriptor_8.Type == 1 )
            {
              AddressSpace = 1;
              Descriptor_8.Flags = Descriptor_8.Type - 1 + 17;
            }
            else if ( Descriptor_8.Type == 3 || Descriptor_8.Type == 7 )
            {
              AddressSpace = 0;
              if ( (*(_BYTE *)(v12 + 12) & 4) != 0 )
                Descriptor_8.Flags |= 1u;
            }
            v51 = *((_DWORD *)&Descriptor_8.u.Memory48 + 3);
            v59 = *(_OWORD *)&Descriptor_8.Type;
            HalTranslateBusAddress(Internal, 0, Descriptor_8.u.Generic.Start, &AddressSpace, &TranslatedAddress);
            *(LARGE_INTEGER *)((char *)&v59 + 4) = TranslatedAddress;
            if ( Descriptor_8.Type == 1 && !AddressSpace )
              WORD1(v59) = 0;
            v15 = *(_OWORD *)&Descriptor_8.Type;
            v13 = v44;
            ++v2;
            v17 = *((_DWORD *)&Descriptor_8.u.Memory48 + 3);
            v18 = v51;
            goto LABEL_19;
          }
          v13 = v44;
        }
        v12 = *(_QWORD *)v12;
        v2 = 0;
      }
      else
      {
        v12 = *(_QWORD *)v12;
        v2 = 0;
      }
    }
    v11 = v43 + 1;
    v43 = v11;
    if ( v11 < 2u )
    {
      v2 = 0;
      continue;
    }
    break;
  }
  v45 = 0;
  v54 = (unsigned int)((_DWORD)v8 - (_DWORD)v3);
  v26 = 0;
  if ( *v3 )
  {
    v27 = v3 + 1;
    while ( 1 )
    {
      v28 = v27[3];
      v29 = v27 + 4;
      v6 += 4;
      v51 = v28;
      if ( !v28 )
        goto LABEL_55;
      do
      {
        HalpGetResourceSortValue(v29, &Descriptor, &v52);
        v32 = v30;
        v33 = v6;
        if ( v31 >= v28 )
          goto LABEL_53;
        v34 = HIDWORD(v52);
        v35 = v28;
        v36 = Descriptor;
        v37 = v35 - v31;
        do
        {
          HalpGetResourceSortValue(v32, &v50, &v53);
          if ( v50 >= v36 )
          {
            if ( v50 != v36 )
              goto LABEL_51;
            v38 = SHIDWORD(v53) < v34;
            if ( HIDWORD(v53) != v34 )
              goto LABEL_50;
            if ( (unsigned int)v53 >= (unsigned int)v52 )
            {
              v38 = SHIDWORD(v53) < v34;
LABEL_50:
              if ( !v38 )
                goto LABEL_51;
            }
          }
          v39 = *((_DWORD *)v30 + 4);
          v40 = *v30;
          *v30 = *v32;
          *((_DWORD *)v30 + 4) = *((_DWORD *)v32 + 4);
          *v32 = v40;
          *((_DWORD *)v32 + 4) = v39;
          v41 = v6[4];
          v42 = *(_OWORD *)v6;
          *(_OWORD *)v6 = *(_OWORD *)v33;
          v6[4] = v33[4];
          *(_OWORD *)v33 = v42;
          v33[4] = v41;
          HalpGetResourceSortValue(v30, &Descriptor, &v52);
          v34 = HIDWORD(v52);
          v36 = Descriptor;
LABEL_51:
          v32 = (__int128 *)((char *)v32 + 20);
          v33 += 5;
          --v37;
        }
        while ( v37 );
        v28 = v51;
LABEL_53:
        v29 = (_DWORD *)v30 + 5;
        v6 += 5;
      }
      while ( v31 + 1 < v28 );
      v3 = PoolWithTag;
      v26 = v45;
LABEL_55:
      ++v26;
      v27 = v29;
      v45 = v26;
      if ( v26 >= *v3 )
      {
        v5 = v61;
        break;
      }
    }
  }
  IoReportHalResourceUsage(v62, v3, v5, (unsigned int)v54);
  ExFreePoolWithTag(v3, 0);
  ExFreePoolWithTag(v5, 0);
}
