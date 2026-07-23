/*
 * XREFs of MiCopyToCfgBitMap @ 0x140629C60
 * Callers:
 *     MiPopulateCfgBitMap @ 0x140629B48 (MiPopulateCfgBitMap.c)
 *     MiMarkSharedImageCfgBits @ 0x14062A758 (MiMarkSharedImageCfgBits.c)
 * Callees:
 *     MiAllocatePool @ 0x14022D320 (MiAllocatePool.c)
 *     RtlSetBitsEx @ 0x14022E620 (RtlSetBitsEx.c)
 *     MiCopyToUserVa @ 0x140234540 (MiCopyToUserVa.c)
 *     MiSplitPrivatePage @ 0x1402354F8 (MiSplitPrivatePage.c)
 *     RtlClearBitsEx @ 0x140250620 (RtlClearBitsEx.c)
 *     RtlClearAllBitsEx @ 0x1403200B0 (RtlClearAllBitsEx.c)
 *     __security_check_cookie @ 0x1403CFAF0 (__security_check_cookie.c)
 *     KeBugCheckEx @ 0x1403FBCA0 (KeBugCheckEx.c)
 *     memmove @ 0x140411040 (memmove.c)
 *     MiEliminateZeroPages @ 0x14062A9D0 (MiEliminateZeroPages.c)
 *     RtlEnumRvaListFirst @ 0x1406C3DD4 (RtlEnumRvaListFirst.c)
 *     ExFreePoolWithTag @ 0x1409B70B0 (ExFreePoolWithTag.c)
 */

__int64 __fastcall MiCopyToCfgBitMap(
        __int64 a1,
        unsigned __int64 a2,
        __int64 a3,
        int a4,
        unsigned __int64 Src,
        __int64 a6,
        unsigned int a7,
        unsigned int *a8,
        size_t Size)
{
  __int64 v9; // r14
  unsigned int *v10; // rsi
  ULONG_PTR v11; // r15
  unsigned int v12; // r11d
  unsigned int v13; // r13d
  int v14; // r8d
  char *Pool; // r12
  char *v16; // r9
  size_t v17; // r10
  unsigned __int64 v18; // rdi
  int v19; // ebx
  int v20; // r8d
  __int64 v21; // rcx
  unsigned int v22; // ebx
  size_t v23; // rdi
  unsigned __int64 v24; // rsi
  __int64 v26; // rdx
  unsigned __int64 v27; // r11
  unsigned __int64 v28; // rax
  __int64 v29; // rcx
  unsigned int v30; // esi
  unsigned int v31; // ebx
  unsigned int i; // eax
  __int64 v33; // r8
  unsigned __int64 v34; // rax
  unsigned __int64 v35; // rdx
  unsigned int v36; // ecx
  unsigned int v37; // eax
  __int64 v38; // rax
  int v39; // ecx
  int v40; // r11d
  unsigned int v41; // edx
  int v42; // r8d
  __int64 v43; // r9
  bool v44; // zf
  unsigned int v45; // r8d
  unsigned __int64 v46; // rdx
  unsigned __int64 v47; // rax
  unsigned int v48; // ebx
  unsigned int v49; // r10d
  __int64 v50; // rax
  unsigned __int8 *v51; // r8
  __int64 v52; // r9
  unsigned int v53; // eax
  __int64 v54; // rdx
  unsigned int v55; // r10d
  int *v56; // rax
  void *v57; // rsp
  char v58; // [rsp+0h] [rbp-100h] BYREF
  unsigned int v59; // [rsp+100h] [rbp+0h]
  int v60; // [rsp+104h] [rbp+4h]
  unsigned __int64 v61; // [rsp+108h] [rbp+8h]
  char *v62; // [rsp+110h] [rbp+10h]
  unsigned int v63; // [rsp+118h] [rbp+18h]
  unsigned __int64 v64; // [rsp+120h] [rbp+20h]
  __int64 v65; // [rsp+128h] [rbp+28h]
  __int64 v66; // [rsp+130h] [rbp+30h]
  unsigned __int64 v67; // [rsp+138h] [rbp+38h]
  int v68; // [rsp+140h] [rbp+40h]
  unsigned int v69; // [rsp+144h] [rbp+44h]
  unsigned __int64 v70; // [rsp+148h] [rbp+48h]
  _RTL_BITMAP_EX BitMapHeader; // [rsp+150h] [rbp+50h] BYREF
  __int64 v72; // [rsp+160h] [rbp+60h]
  unsigned __int64 v73; // [rsp+168h] [rbp+68h]
  unsigned __int64 v74; // [rsp+170h] [rbp+70h]

  v68 = a4;
  v64 = a2;
  v9 = a1;
  v72 = a1;
  BitMapHeader = 0LL;
  v10 = a8;
  if ( a2 > 1 && *a8 == -1 )
  {
    a2 = 1LL;
    v64 = 1LL;
  }
  v11 = a2;
  v73 = a2;
  v74 = a2;
  v70 = a2;
  v12 = 0;
  v59 = 0;
  v13 = a7;
  v65 = a7;
  v60 = 0;
  v14 = 4096;
  v61 = 4096LL;
  if ( a2 <= 1 )
  {
    Pool = (char *)qword_140C4EC08;
    if ( !a2 )
      Pool = (char *)qword_140C4EC10;
    goto LABEL_42;
  }
  Pool = (char *)MiAllocatePool(64, 0x1000uLL, 0x6554694Du);
  v66 = (__int64)Pool;
  a2 = v64;
  v12 = v59;
  if ( !Pool )
  {
    v14 = 256;
    v61 = 256LL;
    v57 = alloca(256LL);
    Pool = &v58;
LABEL_42:
    v66 = (__int64)Pool;
    goto LABEL_7;
  }
  v60 = 1;
  v14 = v61;
LABEL_7:
  v16 = (char *)Src;
  v62 = (char *)Src;
  v17 = Size;
  v18 = (Size >> 12) + (((Size & 0xFFF) + (unsigned int)(Src & 0xFFF) + 4095) >> 12);
  v67 = v18;
  v19 = 0;
  while ( 1 )
  {
    if ( !v17 )
    {
      v24 = (unsigned __int64)v62;
      goto LABEL_19;
    }
    v20 = v14 - 1;
    v21 = (unsigned int)v16 & v20;
    v22 = v61 - v21;
    if ( v61 - v21 >= v17 )
      v22 = v17;
    v69 = v22;
    v23 = v22;
    if ( a2 > 1 )
    {
      if ( v68 == 1 )
      {
        if ( v12 >= *(_DWORD *)v70 )
        {
          v27 = v61;
        }
        else
        {
          v26 = *(_QWORD *)(*(_QWORD *)(v70 + 8) + 16LL * v12) - v65;
          v27 = v61;
          v28 = (2 * ((v26 & ~(v61 - 1)) >> 4)) >> 3;
          if ( v28 >= v61 )
          {
            v65 += v26 & ~(v61 - 1);
            v16 += v28;
            v62 = v16;
            v17 -= v28;
            Size = v17;
          }
        }
        v29 = (unsigned int)v16 & v20;
        if ( v27 - v29 < v17 )
          v23 = (unsigned int)(v27 - v29);
        else
          v23 = (unsigned int)v17;
        memmove(Pool, v16, (unsigned int)v23);
        BitMapHeader.Buffer = (unsigned __int64 *)Pool;
        BitMapHeader.SizeOfBitMap = (unsigned int)(8 * v23);
        v30 = (unsigned int)v23 >> 1;
        v31 = (unsigned int)v23 >> 1 << 7;
        for ( i = v59; i < *(_DWORD *)v70; i = ++v59 )
        {
          v33 = *(_QWORD *)(v70 + 8) + 16LL * i;
          v34 = (unsigned int)(*(_DWORD *)v33 - v65);
          v31 = v30 << 7;
          if ( (unsigned int)v34 >= v30 << 7 )
            break;
          v35 = 2 * (v34 >> 4);
          if ( (*(_BYTE *)(v33 + 8) & 5) != 0 )
          {
            _bittestandreset64((signed __int64 *)Pool, v35 + 1);
            _bittestandset64((signed __int64 *)Pool, v35);
          }
          else
          {
            RtlClearBitsEx((__int64)&BitMapHeader, v35, 2uLL);
          }
        }
        v65 += v31;
        goto LABEL_34;
      }
      v23 = v22;
      if ( !v68 )
      {
        BitMapHeader.Buffer = (unsigned __int64 *)Pool;
        BitMapHeader.SizeOfBitMap = 8 * v22;
        RtlClearAllBitsEx(&BitMapHeader);
        v36 = v13 + (v22 >> 1 << 7);
        v63 = v36;
        v37 = *v10;
        if ( !*v10 )
        {
          v37 = RtlEnumRvaListFirst(v11, v10 + 2, v10 + 1);
          *v10 = v37;
          goto LABEL_58;
        }
        while ( 1 )
        {
          if ( v37 >= v13 )
          {
            if ( v37 >= v36 )
            {
              v44 = v37 == 0;
LABEL_77:
              if ( v44 )
                v37 = -1;
              v13 = v36;
              *v10 = v37;
              v23 = v69;
LABEL_34:
              v16 = v62;
              break;
            }
            v45 = v10[1];
            if ( (v45 & 1) != 0 )
            {
              v46 = 2 * ((unsigned __int64)(v37 - v13) >> 4);
              if ( (v37 & 0xF) == *(_DWORD *)(v9 + 24) )
              {
                v47 = v46 + 1;
                if ( (v45 & 4) != 0 )
                {
                  _bittestandreset64((signed __int64 *)Pool, v46);
                  _bittestandset64((signed __int64 *)Pool, v47);
                }
                else
                {
                  _bittestandset64((signed __int64 *)Pool, v46);
                  _bittestandreset64((signed __int64 *)Pool, v47);
                }
              }
              else
              {
                RtlSetBitsEx((__int64)&BitMapHeader, v46, 2uLL);
              }
            }
          }
          v48 = ++v10[3];
          v49 = v10[2];
          v50 = v10[4];
          v51 = (unsigned __int8 *)(v50 + *(_QWORD *)(v11 + 16));
          v52 = *(_QWORD *)(v11 + 24) - v50;
          if ( v52 )
          {
            while ( 1 )
            {
              v53 = *v51++;
              --v52;
              v54 = v53 >> 6;
              v49 += (v53 & 0x3F) * *((_DWORD *)RtlpRvaCompressionTableScales + v54);
              if ( (_DWORD)v54 == 3 )
                break;
              if ( !v52 )
                KeBugCheckEx(0x1Au, 0x43666720uLL, v11, (ULONG_PTR)(v10 + 2), v49);
            }
            v10[2] = v49;
            v10[4] = (_DWORD)v51 - *(_DWORD *)(v11 + 16);
            if ( v10 != (unsigned int *)-4LL )
            {
              v40 = 0;
              v55 = *(_DWORD *)(v11 + 8);
              if ( v55 <= 1 )
              {
                if ( v55 == 1 )
                {
                  v56 = *(int **)(v11 + 48);
                  if ( v56 )
                    v40 = *v56;
                  else
                    v40 = 1;
                }
              }
              else
              {
                v41 = 0;
                v42 = 1;
                v43 = 0LL;
                do
                {
                  if ( _bittest64(*(const signed __int64 **)(v74 + 40), v48 * v55 + v41) )
                  {
                    v38 = *(_QWORD *)(v11 + 48);
                    if ( v38 )
                      v39 = *(_DWORD *)(v43 + v38);
                    else
                      v39 = v42;
                    v40 |= v39;
                  }
                  ++v41;
                  v42 = __ROL4__(v42, 1);
                  v43 += 4LL;
                }
                while ( v41 < v55 );
              }
              v10[1] = v40;
            }
            v37 = v10[2];
            v10 = a8;
            v9 = v72;
          }
          else
          {
            v37 = 0;
            v10 = a8;
            v9 = v72;
          }
LABEL_58:
          v36 = v63;
          v44 = v37 == 0;
          if ( !v37 )
            goto LABEL_77;
        }
      }
    }
    v19 = MiSplitPrivatePage((unsigned __int64)v16, a6);
    if ( v19 < 0 )
      break;
    v24 = (unsigned __int64)v62;
    v19 = MiCopyToUserVa((unsigned __int64)v62, a6, Pool, v23);
    if ( v19 < 0 )
      goto LABEL_88;
    v12 = v59;
    a2 = v64;
    v10 = a8;
    if ( v59 )
    {
      **(_DWORD **)(v70 + 16) = v59;
LABEL_16:
      v14 = v61;
      goto LABEL_17;
    }
    if ( v64 <= 1 || *a8 != -1 )
      goto LABEL_16;
    if ( v60 )
    {
      ExFreePoolWithTag(Pool, 0);
      v60 = 0;
      v12 = v59;
    }
    a2 = 1LL;
    v64 = 1LL;
    v14 = 4096;
    v61 = 4096LL;
    Pool = (char *)qword_140C4EC08;
    v66 = qword_140C4EC08;
LABEL_17:
    v16 = &v62[v23];
    v62 += v23;
    v17 = Size - v23;
    Size -= v23;
    v18 = v67;
  }
  v24 = (unsigned __int64)v62;
LABEL_88:
  v18 = v67;
LABEL_19:
  if ( v60 )
    ExFreePoolWithTag(Pool, 0);
  if ( v11 )
  {
    if ( v19 >= 0 )
      goto LABEL_23;
    if ( v24 != Src && v19 != -1073741818 )
    {
      v18 = (v24 - (Src & 0xFFFFFFFFFFFFF000uLL)) >> 12;
LABEL_23:
      MiEliminateZeroPages(
        &KeGetCurrentThread()->ApcState.Process[1].ActiveProcessorsPadding[6],
        Src & 0xFFFFFFFFFFFFF000uLL,
        v18 << 12,
        v16);
    }
  }
  return (unsigned int)v19;
}
