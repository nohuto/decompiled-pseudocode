/*
 * XREFs of MiAllocateVirtualMemoryPrepare @ 0x1406E9150
 * Callers:
 *     MiAllocateVirtualMemoryCommon @ 0x1405F3A38 (MiAllocateVirtualMemoryCommon.c)
 *     MmAllocateVirtualMemory @ 0x1406E8C40 (MmAllocateVirtualMemory.c)
 *     NtAllocateVirtualMemory @ 0x1406E9EA0 (NtAllocateVirtualMemory.c)
 * Callees:
 *     ObfDereferenceObjectWithTag @ 0x140355E90 (ObfDereferenceObjectWithTag.c)
 *     xHalUnmaskInterrupt @ 0x14036D940 (xHalUnmaskInterrupt.c)
 *     MiValidateAllocationType @ 0x1406E96C0 (MiValidateAllocationType.c)
 *     MiValidateZeroBits @ 0x14070257C (MiValidateZeroBits.c)
 *     MiGetUserReservationHighestAddress @ 0x14070349C (MiGetUserReservationHighestAddress.c)
 *     ObpReferenceObjectByHandleWithTag @ 0x140707FE0 (ObpReferenceObjectByHandleWithTag.c)
 */

__int64 __fastcall MiAllocateVirtualMemoryPrepare(
        ULONG_PTR a1,
        unsigned __int64 a2,
        __int64 a3,
        unsigned __int64 a4,
        unsigned int a5,
        unsigned int a6,
        __int64 a7,
        char a8,
        unsigned int a9,
        int a10,
        __int64 a11,
        __int64 a12,
        PVOID *a13)
{
  unsigned __int64 v13; // rsi
  __int64 v14; // rbx
  _QWORD *p_Lock; // rax
  unsigned int v17; // ebp
  __int64 v18; // rcx
  __int64 v19; // rdx
  unsigned int v20; // r10d
  unsigned int v21; // eax
  int v22; // r10d
  int v23; // r14d
  __int64 v24; // rdi
  __int64 v25; // rcx
  unsigned __int64 v26; // r13
  int v27; // r9d
  __int64 v28; // r8
  __int64 v29; // rdx
  _QWORD *v30; // r14
  unsigned __int64 v31; // rdx
  __int64 v32; // r8
  unsigned __int64 v33; // rdx
  __int64 v34; // rax
  unsigned __int64 v35; // r12
  unsigned __int64 v36; // rdx
  __int64 v37; // r10
  unsigned __int64 v38; // r9
  unsigned __int64 v39; // rcx
  int v40; // r11d
  unsigned int v41; // r8d
  char v42; // al
  __int64 v43; // rax
  unsigned int v44; // ecx
  PVOID *v45; // rax
  __int64 result; // rax
  __int64 v47; // rax
  bool v48; // zf
  bool v49; // zf
  __int64 v50; // rcx
  _QWORD *v51; // [rsp+40h] [rbp-58h]
  PVOID Object; // [rsp+48h] [rbp-50h] BYREF
  unsigned __int64 v53; // [rsp+50h] [rbp-48h]
  int v54; // [rsp+A8h] [rbp+10h]
  __int64 v55; // [rsp+B0h] [rbp+18h] BYREF

  v55 = a3;
  v13 = a2;
  v14 = a12;
  v53 = a2;
  Object = 0LL;
  p_Lock = &KeGetCurrentThread()->ApcState.Process->Header.Lock;
  v51 = p_Lock;
  *(_QWORD *)(a12 + 96) = p_Lock;
  if ( a1 != -1LL )
  {
    v23 = ObpReferenceObjectByHandleWithTag(a1, 0x6D566D4Du, (__int64)&Object, 0LL, 0LL);
    if ( v23 < 0 )
      goto LABEL_88;
    p_Lock = Object;
    v51 = Object;
  }
  v17 = a5;
  v18 = a5;
  v19 = a9;
  *(_QWORD *)(v14 + 88) = p_Lock;
  v20 = a6;
  v21 = a6 & 0xFFF807FF;
  *(_QWORD *)(v14 + 32) = a4;
  a6 = v21;
  v54 = v20 & 0x7F800;
  v23 = MiValidateAllocationType(v18, v19, v21);
  if ( v23 >= 0 )
  {
    if ( !v22 || (v23 = xHalUnmaskInterrupt(), v23 >= 0) )
    {
      if ( (v17 & 0x1000) != 0 && !v13 )
        v17 |= 0x2000u;
      v24 = a7;
      if ( *(_QWORD *)(a7 + 24)
        && (v17 & 0x20400000) != 0x20000000
        && ((v17 & 0x20400000) != 0x20400000 || (*(_BYTE *)(a7 + 56) & 2) == 0) )
      {
        goto LABEL_73;
      }
      v25 = *(_QWORD *)(a7 + 56);
      if ( (v25 & 0x20) != 0 )
        goto LABEL_73;
      v26 = 0x10000LL;
      v27 = v17 & 0x20400000;
      v28 = 0x200000LL;
      if ( (v17 & 0x20400000) == 0x20000000 )
        v26 = 0x200000LL;
      v29 = *(_QWORD *)(a7 + 56) & 0x1ALL;
      LODWORD(a12) = v25 & 0x1A;
      if ( (v25 & 0x1A) != 0 )
      {
        if ( (((_DWORD)v29 - 1) & (unsigned int)v29) != 0 )
          goto LABEL_73;
        if ( (v25 & 2) != 0 )
        {
          v48 = v27 == 541065216;
        }
        else
        {
          if ( (v25 & 0x10) != 0 )
          {
            v28 = 0x2000000000LL;
            if ( (KeFeatureBits & 0x2000000000LL) == 0 )
            {
              v23 = -1073741637;
              goto LABEL_88;
            }
            if ( v27 == 0x400000 )
              goto LABEL_73;
            v26 = 0x40000000LL;
          }
          else if ( (v25 & 8) != 0 )
          {
            v26 = 0x200000LL;
          }
          v48 = v27 == 0x20000000;
        }
        if ( v48 )
          goto LABEL_14;
        if ( v27 != 0x400000 )
          goto LABEL_73;
      }
      else
      {
        if ( (v25 & 4) != 0 )
          goto LABEL_73;
        if ( v27 != 0x400000 )
        {
LABEL_14:
          if ( ((v17 & 0x2000) == 0 || v13) && (*(_QWORD *)a7 || *(_QWORD *)(a7 + 8) || *(_QWORD *)(a7 + 16)) )
            goto LABEL_73;
          if ( v55 )
          {
            v23 = MiValidateZeroBits(&v55, v29, v28);
            if ( v23 < 0 )
              goto LABEL_88;
            v30 = v51;
            if ( (v17 & 0x2000) != 0 && !v13 )
              *(_QWORD *)(v24 + 8) = MiGetUserReservationHighestAddress(v51, v55);
            v27 = v17 & 0x20400000;
            LODWORD(v29) = a12;
          }
          else
          {
            v30 = v51;
          }
          if ( (v17 & 0x40000) != 0 )
          {
            *(_DWORD *)(v14 + 60) |= 0x8000000u;
          }
          else
          {
            if ( (v17 & 0x4000) == 0 )
              goto LABEL_22;
            if ( *(_QWORD *)v24 || *(_QWORD *)(v24 + 8) || *(_QWORD *)(v24 + 16) )
              goto LABEL_73;
            *(_DWORD *)(v14 + 60) |= 0x4000000u;
          }
          if ( (v17 & 0x4000) != 0 )
          {
            if ( !(_DWORD)v29 && v27 != 0x20000000 )
              goto LABEL_23;
            goto LABEL_24;
          }
LABEL_22:
          if ( (v17 & 0x2000) == 0 )
          {
LABEL_23:
            v26 = 4096LL;
            goto LABEL_24;
          }
          if ( (v17 & 0x40000000) != 0 )
          {
            if ( ((v27 - 0x20000000) & 0xFFBFFFFF) == 0 )
              goto LABEL_73;
            goto LABEL_23;
          }
LABEL_24:
          v31 = *(_QWORD *)(v24 + 16);
          if ( v31 )
          {
            if ( v31 < v26
              || ((v31 - 1) & v31) != 0
              || v31 >= 0x7FFFFFFF0000LL
              || (v17 & 0x40000000) != 0 && v31 != 4096 )
            {
              goto LABEL_73;
            }
          }
          else
          {
            *(_QWORD *)(v24 + 16) = v26;
          }
          if ( !a4 || (v17 & 0x2000) != 0 && ((v27 - 0x20000000) & 0xFFBFFFFF) == 0 && ((v26 - 1) & a4) != 0 )
            goto LABEL_73;
          v32 = 0x7FFFFFFEFFFFLL;
          if ( v13 > 0x7FFFFFFEFFFFLL || 0x7FFFFFFF0000LL - v13 < a4 )
            goto LABEL_73;
          v33 = v13 + a4;
          if ( (v17 & 0x2000) == 0 )
          {
            if ( v17 == 0x80000 || v17 == 0x1000000 )
            {
              v47 = ~(v26 - 1);
              v13 = v47 & (v26 + v13 - 1);
              v33 &= v47;
              if ( v13 >= v33 )
              {
                v23 = -1073741800;
                goto LABEL_88;
              }
            }
            else
            {
              v34 = ~(v26 - 1);
              v13 &= v34;
              v33 = v34 & (v26 + v33 - 1);
            }
LABEL_34:
            v35 = v53;
            v36 = v33 - v13;
            if ( v53 )
              *(_QWORD *)v24 = v13;
            else
              v13 = *(_QWORD *)v24;
            v37 = *(_QWORD *)(v24 + 16);
            v38 = v13;
            if ( ((v37 - 1) & v13) == 0 )
            {
              v39 = *(_QWORD *)(v24 + 8);
              if ( v39 )
              {
                if ( v39 <= 0x7FFFFFFEFFFFLL )
                {
                  v38 = v13;
                  if ( (((_WORD)v39 + 1) & 0xFFF) == 0 )
                    goto LABEL_41;
                }
              }
              else
              {
                if ( (v17 & 0x2000) != 0 && !v35 && (v17 & 0x4000) == 0 )
                {
                  if ( (unsigned __int64)(v30[187] - 1LL) < 0x7FFFFFFEFFFFLL )
                    v32 = v30[187] - 1LL;
                  v40 = a12;
                  v39 = v32;
                  *(_QWORD *)(v24 + 8) = v32;
                  if ( v40 && (v40 & 2) == 0 )
                  {
                    if ( (v40 & 8) != 0 )
                    {
                      v50 = -2097152LL;
LABEL_131:
                      v39 = (v32 & v50) - 1;
                      *(_QWORD *)(v24 + 8) = v39;
                      goto LABEL_42;
                    }
                    if ( (v40 & 0x10) != 0 )
                    {
                      v50 = -1073741824LL;
                      goto LABEL_131;
                    }
                  }
LABEL_42:
                  if ( v38 < v39 && v39 - v38 + 1 >= v36 && (v17 & 0x7F) == 0 )
                  {
                    v41 = *(_DWORD *)(v24 + 32);
                    if ( v41 <= (unsigned __int16)KeNumberNodes )
                    {
                      v42 = *(_BYTE *)(v24 + 49);
                      if ( v42 != 1 || v40 || (v17 & 0x20400000) == 0x20000000 )
                      {
                        *(_BYTE *)(v14 + 56) = v42;
                        *(_BYTE *)(v14 + 104) = a8;
                        *(_DWORD *)(v14 + 60) |= a9;
                        *(_DWORD *)(v14 + 76) = a10;
                        *(_QWORD *)(v14 + 80) = a11;
                        *(_QWORD *)(v14 + 112) = *(_QWORD *)(v24 + 40);
                        v43 = *(_QWORD *)(v24 + 56);
                        *(_QWORD *)(v14 + 8) = v39;
                        v44 = a6;
                        *(_QWORD *)(v14 + 120) = v43;
                        v45 = a13;
                        *(_DWORD *)(v14 + 44) = v44;
                        *(_DWORD *)(v14 + 48) = v54;
                        *v45 = Object;
                        result = 0LL;
                        *(_QWORD *)v14 = v38;
                        *(_QWORD *)(v14 + 16) = v37;
                        *(_QWORD *)(v14 + 24) = v36;
                        *(_DWORD *)(v14 + 40) = v17 & 0xFFFBBFFF;
                        *(_DWORD *)(v14 + 52) = v41;
                        return result;
                      }
                    }
                  }
                  goto LABEL_73;
                }
                if ( v13 + v36 >= v13 )
                {
                  v39 = v13 + v36 - 1;
                  *(_QWORD *)(v24 + 8) = v39;
                  if ( v39 <= 0x7FFFFFFEFFFFLL )
                  {
LABEL_41:
                    v40 = a12;
                    goto LABEL_42;
                  }
                }
              }
            }
LABEL_73:
            v23 = -1073741811;
            goto LABEL_88;
          }
          if ( (v17 & 0x40000000) != 0 )
          {
            v49 = (((unsigned __int16)v13 | (unsigned __int16)a4) & 0xFFF) == 0;
          }
          else
          {
            if ( (v17 & 0x4000) == 0 )
            {
              v13 &= -(__int64)v26;
              if ( ((v27 - 0x20000000) & 0xFFBFFFFF) != 0 )
                v33 = (v33 + 4095) & 0xFFFFFFFFFFFFF000uLL;
              else
                v33 = v13 + a4;
              goto LABEL_34;
            }
            v49 = ((a4 | v13) & (v26 - 1)) == 0;
          }
          if ( !v49 )
            goto LABEL_73;
          goto LABEL_34;
        }
      }
      if ( (v25 & 0xFFFFFFFFFFFFFFF0uLL) != 0 )
        goto LABEL_73;
      goto LABEL_14;
    }
  }
LABEL_88:
  if ( Object )
    ObfDereferenceObjectWithTag(Object, 0x6D566D4Du);
  return (unsigned int)v23;
}
