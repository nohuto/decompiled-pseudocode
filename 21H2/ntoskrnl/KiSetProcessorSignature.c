/*
 * XREFs of KiSetProcessorSignature @ 0x14099F964
 * Callers:
 *     KiInitializeBootStructures @ 0x14099D160 (KiInitializeBootStructures.c)
 *     KiSetFeatureBits @ 0x14099DB6C (KiSetFeatureBits.c)
 * Callees:
 *     KeGetPrcb @ 0x1402CD730 (KeGetPrcb.c)
 *     __security_check_cookie @ 0x1403D05D0 (__security_check_cookie.c)
 *     KeBugCheckEx @ 0x1403FE0D0 (KeBugCheckEx.c)
 *     KdInitSystem @ 0x1409B6160 (KdInitSystem.c)
 *     KiPublishProcessorFeatures @ 0x140A41A08 (KiPublishProcessorFeatures.c)
 */

__int64 __fastcall KiSetProcessorSignature(__int64 a1, int a2)
{
  unsigned int v8; // r10d
  ULONG_PTR v14; // r9
  ULONG_PTR v15; // r13
  ULONG_PTR v16; // r12
  int v17; // r11d
  int v18; // edx
  __int64 v19; // r14
  unsigned int v20; // r8d
  unsigned int v21; // ecx
  int v27; // r10d
  ULONG_PTR BugCheckParameter4; // rbx
  ULONG_PTR v29; // r9
  int v30; // eax
  int v31; // edx
  int v32; // ebx
  __int64 i; // r8
  unsigned int *v34; // r14
  unsigned int v35; // edx
  unsigned int v36; // ecx
  ULONG_PTR v37; // rdx
  unsigned __int64 v38; // r10
  __int64 j; // rbx
  unsigned int v40; // ecx
  unsigned int v41; // edx
  int v42; // edx
  int v43; // edx
  __int64 v44; // rdx
  __int64 v45; // rcx
  __int64 v46; // rax
  int v47; // ecx
  ULONG_PTR v48; // rsi
  __int64 result; // rax
  ULONG_PTR v50; // rbx
  __int64 Prcb; // rax
  int v52; // [rsp+30h] [rbp-88h]
  int v53; // [rsp+34h] [rbp-84h]
  unsigned int v54; // [rsp+38h] [rbp-80h]
  unsigned int v55; // [rsp+3Ch] [rbp-7Ch]
  unsigned int v56; // [rsp+40h] [rbp-78h]
  __int128 v57; // [rsp+70h] [rbp-48h]

  _RAX = 0x80000000LL;
  __asm { cpuid }
  v8 = _RAX;
  v55 = _RAX;
  _RAX = 0LL;
  __asm { cpuid }
  v14 = (unsigned int)_RAX;
  v54 = _RAX;
  *(_QWORD *)&v57 = __PAIR64__(_RBX, _RAX);
  *((_QWORD *)&v57 + 1) = __PAIR64__(_RDX, _RCX);
  v15 = 0LL;
  v16 = 0LL;
  v17 = 0;
  v52 = 0;
  v18 = 0;
  v53 = 0;
  v56 = 0;
  v19 = 0LL;
  do
  {
    v20 = KiCpuFeatureTable[v19 + 2];
    if ( (v20 & 2) == 0 )
    {
      if ( !HIBYTE(v20) || (v21 = HIBYTE(v20), _bittest((const int *)&v21, *(unsigned __int8 *)(a1 + 141))) )
      {
        _RAX = LODWORD(KiCpuFeatureTable[v19]);
        if ( (_DWORD)_RAX != v17 || HIDWORD(KiCpuFeatureTable[v19]) != v18 )
        {
          v52 = KiCpuFeatureTable[v19];
          v53 = HIDWORD(KiCpuFeatureTable[v19]);
          if ( ((unsigned int)_RAX < 0x80000000 || (unsigned int)_RAX > v8) && (unsigned int)_RAX > (unsigned int)v14 )
          {
            v57 = 0LL;
          }
          else
          {
            __asm { cpuid }
            *(_QWORD *)&v57 = __PAIR64__(_RBX, _RAX);
            *((_QWORD *)&v57 + 1) = __PAIR64__(_RDX, _RCX);
          }
        }
        v27 = 0;
        BugCheckParameter4 = SHIDWORD(KiCpuFeatureTable[v19 + 1]);
        v29 = LODWORD(KiCpuFeatureTable[v19 + 1]);
        if ( ((unsigned int)v29 & *((_DWORD *)&v57 + BugCheckParameter4)) == 0
          && ((v20 & 8) == 0 || (v15 & KiCpuFeatureTable[v19 + 3]) != KiCpuFeatureTable[v19 + 3]) )
        {
          v30 = v20 & 0x10;
          if ( (v20 & 0x10) != 0 )
          {
            if ( (v16 & KiCpuFeatureTable[v19 + 3]) == KiCpuFeatureTable[v19 + 3] )
              v27 = 1;
            v30 = v20 & 0x10;
          }
          if ( !v27 )
          {
            if ( (v20 & 1) != 0 )
            {
              if ( !*(_DWORD *)(a1 + 36) )
              {
                KdInitSystem(0LL, KeLoaderBlock_0);
                LODWORD(BugCheckParameter4) = HIDWORD(KiCpuFeatureTable[v19 + 1]);
                v29 = LODWORD(KiCpuFeatureTable[v19 + 1]);
              }
              KeBugCheckEx(0x5Du, 0xFFFFFFFFuLL, LODWORD(KiCpuFeatureTable[v19]), v29, (int)BugCheckParameter4);
            }
            if ( (v20 & 4) != 0 && *(_DWORD *)(a1 + 36) )
            {
              v31 = 0;
              if ( (v20 & 8) != 0 )
              {
                LOBYTE(v31) = (KeFeatureBits & KiCpuFeatureTable[v19 + 3]) == KiCpuFeatureTable[v19 + 3];
              }
              else if ( v30 && (KeFeatureBits2 & KiCpuFeatureTable[v19 + 3]) == KiCpuFeatureTable[v19 + 3] )
              {
LABEL_98:
                KeBugCheckEx(0x5Du, 0xFFFFFFFEuLL, LODWORD(KiCpuFeatureTable[v19]), v29, BugCheckParameter4);
              }
              if ( v31 )
                goto LABEL_98;
            }
            goto LABEL_40;
          }
        }
        if ( (v20 & 8) != 0 )
        {
          v15 |= KiCpuFeatureTable[v19 + 3];
        }
        else if ( (v20 & 0x10) != 0 )
        {
          v16 |= KiCpuFeatureTable[v19 + 3];
        }
        if ( (v20 & 4) != 0 && *(_DWORD *)(a1 + 36) )
        {
          v32 = 0;
          if ( (v20 & 8) != 0 )
          {
            LOBYTE(v32) = (KeFeatureBits & KiCpuFeatureTable[v19 + 3]) == KiCpuFeatureTable[v19 + 3];
            goto LABEL_39;
          }
          if ( (v20 & 0x10) == 0 || (KeFeatureBits2 & KiCpuFeatureTable[v19 + 3]) != KiCpuFeatureTable[v19 + 3] )
          {
LABEL_39:
            if ( !v32 )
              KeBugCheckEx(
                0x5Du,
                0xFFFFFFFDuLL,
                LODWORD(KiCpuFeatureTable[v19]),
                LODWORD(KiCpuFeatureTable[v19 + 1]),
                SHIDWORD(KiCpuFeatureTable[v19 + 1]));
          }
        }
LABEL_40:
        v17 = v52;
        v18 = v53;
        v14 = v54;
        v8 = v55;
      }
    }
    ++v56;
    v19 += 4LL;
  }
  while ( v56 < 0x2F );
  for ( i = 0LL; (unsigned int)i < 2; i = (unsigned int)(i + 1) )
  {
    v34 = (unsigned int *)(0x140000000LL + 24 * i + 24912);
    v35 = *(_DWORD *)(0x140000004LL + 24 * i + 24912);
    if ( (v35 & 2) == 0 )
    {
      if ( !HIBYTE(v35) || (v36 = HIBYTE(v35), _bittest((const int *)&v36, *(unsigned __int8 *)(a1 + 141))) )
      {
        if ( (v35 & 8) != 0 )
        {
          v37 = v15;
        }
        else
        {
          if ( (v35 & 0x10) == 0 )
            continue;
          v37 = v16;
        }
        if ( (v37 & *(_QWORD *)(0x140000010LL + 24 * i + 24912)) == *(_QWORD *)(0x140000010LL + 24 * i + 24912) )
        {
          v38 = __readmsr(*v34);
          for ( j = *(_QWORD *)(0x140000008LL + 24 * i + 24912); ; j += 24LL )
          {
            v14 = *(_QWORD *)j;
            if ( !*(_QWORD *)j )
              break;
            v40 = *(_DWORD *)(j + 8);
            if ( (v40 & 2) == 0 )
            {
              if ( !HIBYTE(v40) || (v41 = HIBYTE(v40), _bittest((const int *)&v41, *(unsigned __int8 *)(a1 + 141))) )
              {
                if ( (v14 & v38) != 0 )
                {
                  if ( (v40 & 8) != 0 )
                  {
                    v15 |= *(_QWORD *)(j + 16);
                  }
                  else if ( (v40 & 0x10) != 0 )
                  {
                    v16 |= *(_QWORD *)(j + 16);
                  }
                  if ( (v40 & 4) != 0 && *(_DWORD *)(a1 + 36) )
                  {
                    v43 = 0;
                    if ( (v40 & 8) != 0 )
                    {
                      LOBYTE(v43) = (KeFeatureBits & *(_QWORD *)(j + 16)) == *(_QWORD *)(j + 16);
                    }
                    else if ( (v40 & 0x10) != 0 && (KeFeatureBits2 & *(_QWORD *)(j + 16)) == *(_QWORD *)(j + 16) )
                    {
                      continue;
                    }
                    if ( !v43 )
                      KeBugCheckEx(0x5Du, 0xFFFFFFFAuLL, *v34, *(_QWORD *)j, HIDWORD(*(_QWORD *)j));
                  }
                }
                else
                {
                  if ( (v40 & 1) != 0 )
                  {
                    if ( !*(_DWORD *)(a1 + 36) )
                    {
                      KdInitSystem(0LL, KeLoaderBlock_0);
                      v14 = *(_QWORD *)j;
                    }
                    KeBugCheckEx(0x5Du, 0xFFFFFFFCuLL, *v34, v14, HIDWORD(v14));
                  }
                  if ( (v40 & 4) != 0 && *(_DWORD *)(a1 + 36) )
                  {
                    v42 = 0;
                    if ( (v40 & 8) != 0 )
                    {
                      LOBYTE(v42) = (KeFeatureBits & *(_QWORD *)(j + 16)) == *(_QWORD *)(j + 16);
                    }
                    else if ( (v40 & 0x10) != 0 && (KeFeatureBits2 & *(_QWORD *)(j + 16)) == *(_QWORD *)(j + 16) )
                    {
LABEL_103:
                      KeBugCheckEx(0x5Du, 0xFFFFFFFBuLL, *v34, v14, HIDWORD(v14));
                    }
                    if ( v42 )
                      goto LABEL_103;
                  }
                }
              }
            }
          }
        }
      }
    }
  }
  v44 = 0LL;
  v45 = 0LL;
  v46 = 0LL;
  while ( *(_DWORD *)((char *)KiCpuTable + v46) != *(unsigned __int8 *)(a1 + 141)
       || *(_DWORD *)((char *)KiCpuTable + v46 + 4) != a2 )
  {
    v44 = (unsigned int)(v44 + 1);
    v45 = (unsigned int)v44;
    v46 = 20 * v44;
    if ( *((_DWORD *)&KiCpuTable[1] + 5 * v44) == 19 )
      goto LABEL_86;
  }
  *(_DWORD *)(a1 + 1740) = dword_140021C70[5 * v45];
LABEL_86:
  v47 = *(_DWORD *)(a1 + 36);
  if ( v47 )
  {
    KeGetPrcb(0);
    v47 = *(_DWORD *)(a1 + 36);
  }
  v48 = 0LL;
  if ( *(_BYTE *)(a1 + 141) == 1 && ((*(_BYTE *)(a1 + 64) - 16) & 0xFD) == 0 )
    v48 = 0x800000000000LL;
  if ( v47 && (v48 & *(_QWORD *)(KeGetPrcb(0) + 34208)) != 0 )
  {
    v50 = *(unsigned int *)(a1 + 36);
    Prcb = KeGetPrcb(0);
    KeBugCheckEx(0x5Du, 0x4D535546uLL, v48, *(_QWORD *)(Prcb + 34208), v50);
  }
  *(_DWORD *)(a1 + 1736) = a2;
  *(_QWORD *)(a1 + 34208) |= ~v48 & v15;
  result = *(unsigned int *)(a1 + 36);
  if ( (_DWORD)result )
  {
    if ( v16 != KeFeatureBits2 )
      KeBugCheckEx(0x5Du, 0xFFFFFFF7uLL, v16, KeFeatureBits2, *(unsigned int *)(a1 + 36));
  }
  else
  {
    KeFeatureBits2 |= v16;
    return KiPublishProcessorFeatures(a1, v44, i, v14);
  }
  return result;
}
