/*
 * XREFs of KiSetProcessorSignature @ 0x140999C08
 * Callers:
 *     KiInitializeBootStructures @ 0x1409977A0 (KiInitializeBootStructures.c)
 *     KiSetFeatureBits @ 0x1409981AC (KiSetFeatureBits.c)
 * Callees:
 *     KeGetPrcb @ 0x140276C20 (KeGetPrcb.c)
 *     __security_check_cookie @ 0x1403CC020 (__security_check_cookie.c)
 *     KeBugCheckEx @ 0x1403F5E40 (KeBugCheckEx.c)
 *     KdInitSystem @ 0x1409B2160 (KdInitSystem.c)
 *     KiPublishProcessorFeatures @ 0x140A3CFA8 (KiPublishProcessorFeatures.c)
 */

__int64 __fastcall KiSetProcessorSignature(__int64 a1, unsigned int a2)
{
  unsigned int v8; // r10d
  ULONG_PTR v14; // r9
  ULONG_PTR v15; // r13
  ULONG_PTR v16; // r12
  int v17; // r11d
  __int64 i; // rax
  __int64 v19; // r15
  unsigned int v20; // r8d
  unsigned int v21; // ecx
  int v23; // ebx
  ULONG_PTR BugCheckParameter4; // r9
  ULONG_PTR v25; // r10
  int v26; // ebx
  int v27; // eax
  int v28; // edx
  __int64 j; // r8
  __int64 v34; // rdx
  __int64 v35; // r8
  unsigned int *v36; // r15
  unsigned int v37; // edx
  unsigned int v38; // ecx
  ULONG_PTR v39; // rdx
  int v40; // ecx
  ULONG_PTR v41; // r14
  __int64 result; // rax
  unsigned __int64 v43; // r11
  __int64 k; // rbx
  unsigned int v45; // ecx
  unsigned int v46; // edx
  int v47; // edx
  int v48; // edx
  ULONG_PTR v49; // rbx
  __int64 Prcb; // rax
  int v51; // [rsp+30h] [rbp-88h]
  unsigned int v52; // [rsp+34h] [rbp-84h]
  unsigned int v53; // [rsp+38h] [rbp-80h]
  int v54; // [rsp+3Ch] [rbp-7Ch]
  unsigned int BugCheckParameter2; // [rsp+48h] [rbp-70h]
  __int128 v56; // [rsp+70h] [rbp-48h]

  _RAX = 0x80000000LL;
  __asm { cpuid }
  v8 = _RAX;
  v53 = _RAX;
  _RAX = 0LL;
  __asm { cpuid }
  v14 = (unsigned int)_RAX;
  v52 = _RAX;
  *(_QWORD *)&v56 = __PAIR64__(_RBX, _RAX);
  *((_QWORD *)&v56 + 1) = __PAIR64__(_RDX, _RCX);
  v15 = 0LL;
  v16 = 0LL;
  v17 = 0;
  v51 = 0;
  for ( i = 0LL; ; i = (unsigned int)(v54 + 1) )
  {
    v54 = i;
    if ( (unsigned int)i >= 0x26 )
      break;
    v19 = 3 * i;
    v20 = dword_14001010C[6 * i];
    if ( (v20 & 2) == 0 )
    {
      if ( !HIBYTE(v20) || (v21 = HIBYTE(v20), _bittest((const int *)&v21, *(unsigned __int8 *)(a1 + 141))) )
      {
        _RAX = (unsigned int)KiCpuFeatureTable[6 * i];
        BugCheckParameter2 = _RAX;
        if ( (_DWORD)_RAX != v17 )
        {
          v51 = _RAX;
          if ( ((unsigned int)_RAX < 0x80000000 || (unsigned int)_RAX > v8) && (unsigned int)_RAX > (unsigned int)v14 )
          {
            v56 = 0LL;
          }
          else
          {
            __asm { cpuid }
            *(_QWORD *)&v56 = __PAIR64__(_RBX, _RAX);
            *((_QWORD *)&v56 + 1) = __PAIR64__(_RDX, _RCX);
          }
        }
        v23 = 0;
        BugCheckParameter4 = dword_140010108[2 * v19];
        v25 = (unsigned int)dword_140010104[2 * v19];
        if ( ((unsigned int)v25 & *((_DWORD *)&v56 + BugCheckParameter4)) == 0
          && ((v20 & 8) == 0 || (v15 & qword_140010110[v19]) != qword_140010110[v19]) )
        {
          v27 = v20 & 0x10;
          if ( (v20 & 0x10) != 0 )
          {
            if ( (v16 & qword_140010110[v19]) == qword_140010110[v19] )
              v23 = 1;
            v27 = v20 & 0x10;
          }
          if ( !v23 )
          {
            if ( (v20 & 1) != 0 )
            {
              if ( !*(_DWORD *)(a1 + 36) )
              {
                KdInitSystem(0LL, KeLoaderBlock_0);
                LODWORD(BugCheckParameter4) = dword_140010108[2 * v19];
                LODWORD(v25) = dword_140010104[2 * v19];
              }
              KeBugCheckEx(
                0x5Du,
                0xFFFFFFFFuLL,
                (unsigned int)KiCpuFeatureTable[2 * v19],
                (unsigned int)v25,
                (int)BugCheckParameter4);
            }
            if ( (v20 & 4) != 0 && *(_DWORD *)(a1 + 36) )
            {
              v28 = 0;
              if ( (v20 & 8) != 0 )
              {
                LOBYTE(v28) = (KeFeatureBits & qword_140010110[v19]) == qword_140010110[v19];
              }
              else if ( v27 && (KeFeatureBits2 & qword_140010110[v19]) == qword_140010110[v19] )
              {
LABEL_70:
                KeBugCheckEx(0x5Du, 0xFFFFFFFEuLL, BugCheckParameter2, v25, BugCheckParameter4);
              }
              if ( v28 )
                goto LABEL_70;
            }
            goto LABEL_14;
          }
        }
        if ( (v20 & 8) != 0 )
        {
          v15 |= qword_140010110[v19];
        }
        else if ( (v20 & 0x10) != 0 )
        {
          v16 |= qword_140010110[v19];
        }
        if ( (v20 & 4) != 0 && *(_DWORD *)(a1 + 36) )
        {
          v26 = 0;
          if ( (v20 & 8) != 0 )
          {
            LOBYTE(v26) = (KeFeatureBits & qword_140010110[v19]) == qword_140010110[v19];
            goto LABEL_13;
          }
          if ( (v20 & 0x10) == 0 || (KeFeatureBits2 & qword_140010110[v19]) != qword_140010110[v19] )
          {
LABEL_13:
            if ( !v26 )
              KeBugCheckEx(0x5Du, 0xFFFFFFFDuLL, (unsigned int)KiCpuFeatureTable[2 * v19], v25, BugCheckParameter4);
          }
        }
LABEL_14:
        v17 = v51;
        v14 = v52;
        v8 = v53;
        continue;
      }
    }
  }
  for ( j = 0LL; !(_DWORD)j; j = 1LL )
  {
    v36 = (unsigned int *)(0x140000000LL + 24 * j + 24992);
    v37 = *(_DWORD *)(0x140000004LL + 24 * j + 24992);
    if ( (v37 & 2) == 0 )
    {
      if ( !HIBYTE(v37) || (v38 = HIBYTE(v37), _bittest((const int *)&v38, *(unsigned __int8 *)(a1 + 141))) )
      {
        if ( (v37 & 8) != 0 )
        {
          v39 = v15;
        }
        else
        {
          if ( (v37 & 0x10) == 0 )
            continue;
          v39 = v16;
        }
        if ( (v39 & *(_QWORD *)(0x140000010LL + 24 * j + 24992)) == *(_QWORD *)(0x140000010LL + 24 * j + 24992) )
        {
          v43 = __readmsr(*v36);
          for ( k = *(_QWORD *)(0x140000008LL + 24 * j + 24992); ; k += 24LL )
          {
            v14 = *(_QWORD *)k;
            if ( !*(_QWORD *)k )
              break;
            v45 = *(_DWORD *)(k + 8);
            if ( (v45 & 2) == 0 )
            {
              if ( !HIBYTE(v45) || (v46 = HIBYTE(v45), _bittest((const int *)&v46, *(unsigned __int8 *)(a1 + 141))) )
              {
                if ( (v14 & v43) != 0 )
                {
                  if ( (v45 & 8) != 0 )
                  {
                    v15 |= *(_QWORD *)(k + 16);
                  }
                  else if ( (v45 & 0x10) != 0 )
                  {
                    v16 |= *(_QWORD *)(k + 16);
                  }
                  if ( (v45 & 4) != 0 && *(_DWORD *)(a1 + 36) )
                  {
                    v48 = 0;
                    if ( (v45 & 8) != 0 )
                    {
                      LOBYTE(v48) = (KeFeatureBits & *(_QWORD *)(k + 16)) == *(_QWORD *)(k + 16);
                    }
                    else if ( (v45 & 0x10) != 0 && (KeFeatureBits2 & *(_QWORD *)(k + 16)) == *(_QWORD *)(k + 16) )
                    {
                      continue;
                    }
                    if ( !v48 )
                      KeBugCheckEx(0x5Du, 0xFFFFFFFAuLL, *v36, v14, HIDWORD(v14));
                  }
                }
                else
                {
                  if ( (v45 & 1) != 0 )
                  {
                    if ( !*(_DWORD *)(a1 + 36) )
                    {
                      KdInitSystem(0LL, KeLoaderBlock_0);
                      v14 = *(_QWORD *)k;
                    }
                    KeBugCheckEx(0x5Du, 0xFFFFFFFCuLL, *v36, v14, HIDWORD(v14));
                  }
                  if ( (v45 & 4) != 0 && *(_DWORD *)(a1 + 36) )
                  {
                    v47 = 0;
                    if ( (v45 & 8) != 0 )
                    {
                      LOBYTE(v47) = (KeFeatureBits & *(_QWORD *)(k + 16)) == *(_QWORD *)(k + 16);
                    }
                    else if ( (v45 & 0x10) != 0 && (KeFeatureBits2 & *(_QWORD *)(k + 16)) == *(_QWORD *)(k + 16) )
                    {
LABEL_92:
                      KeBugCheckEx(0x5Du, 0xFFFFFFFBuLL, *v36, v14, HIDWORD(v14));
                    }
                    if ( v47 )
                      goto LABEL_92;
                  }
                }
              }
            }
          }
        }
      }
    }
  }
  v34 = 0LL;
  v35 = a2;
  while ( dword_14001E6B8[5 * v34] != 19 )
  {
    if ( KiCpuTable[5 * v34] == *(unsigned __int8 *)(a1 + 141) && dword_14001E6B4[5 * v34] == a2 )
    {
      *(_DWORD *)(a1 + 1740) = dword_14001E6C0[5 * v34];
      break;
    }
    v34 = (unsigned int)(v34 + 1);
  }
  v40 = *(_DWORD *)(a1 + 36);
  if ( v40 )
  {
    KeGetPrcb(0);
    v40 = *(_DWORD *)(a1 + 36);
  }
  v41 = 0LL;
  if ( *(_BYTE *)(a1 + 141) == 1 && ((*(_BYTE *)(a1 + 64) - 16) & 0xFD) == 0 )
    v41 = 0x800000000000LL;
  if ( v40 && (v41 & *(_QWORD *)(KeGetPrcb(0) + 34208)) != 0 )
  {
    v49 = *(unsigned int *)(a1 + 36);
    Prcb = KeGetPrcb(0);
    KeBugCheckEx(0x5Du, 0x4D535546uLL, v41, *(_QWORD *)(Prcb + 34208), v49);
  }
  *(_DWORD *)(a1 + 1736) = a2;
  *(_QWORD *)(a1 + 34208) |= ~v41 & v15;
  result = *(unsigned int *)(a1 + 36);
  if ( (_DWORD)result )
  {
    if ( v16 != KeFeatureBits2 )
      KeBugCheckEx(0x5Du, 0xFFFFFFF7uLL, v16, KeFeatureBits2, *(unsigned int *)(a1 + 36));
  }
  else
  {
    KeFeatureBits2 |= v16;
    return KiPublishProcessorFeatures(a1, v34, v35, v14);
  }
  return result;
}
