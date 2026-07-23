/*
 * XREFs of RtlpWalkLFHBlock @ 0x18010C008
 * Callers:
 *     RtlpWalkHeap @ 0x1800F509C (RtlpWalkHeap.c)
 * Callees:
 *     RtlpGetFirstBlockAddress @ 0x18010BA78 (RtlpGetFirstBlockAddress.c)
 *     RtlpGetReservedBlockSize @ 0x18010BB40 (RtlpGetReservedBlockSize.c)
 *     RtlpIsLFHZoneAllocation @ 0x18010BC50 (RtlpIsLFHZoneAllocation.c)
 */

char __fastcall RtlpWalkLFHBlock(__int64 a1, __int64 a2)
{
  __int64 v2; // rsi
  _RTL_SRWLOCK *v5; // r14
  unsigned __int64 v6; // rdi
  __int64 v7; // rax
  unsigned __int64 v8; // rcx
  __int64 v9; // r15
  __int64 ReservedBlockSize; // r13
  __int64 v11; // r14
  __int64 v12; // rcx
  unsigned __int16 v13; // ax
  unsigned __int64 v14; // r10
  unsigned __int64 v15; // r8
  char result; // al
  char v17; // al
  __int64 v18; // r14
  char v19; // cl
  unsigned __int64 v20; // rcx
  __int64 v21; // rax
  unsigned __int16 v22; // ax
  int v23; // eax
  bool v24; // zf
  char v25; // cl
  unsigned __int64 v26; // rcx
  unsigned __int16 v27; // ax
  int v28; // eax
  __int64 v29; // rax
  unsigned __int64 Value; // rcx
  int v31; // eax
  unsigned __int16 v32; // ax
  unsigned __int64 *v33; // rax
  __int64 v34; // r15
  char v35; // al
  __int64 v36; // rax
  unsigned __int64 v37; // rax
  __int64 v38; // rdx
  unsigned __int64 FirstBlockAddress; // rdx
  __int64 v40; // r11
  __int64 v41; // rax
  __int64 v42; // rax
  unsigned __int64 v43; // rax
  __int64 v44; // rcx
  unsigned __int64 v45; // rcx
  __int64 v46; // rax
  unsigned __int16 v47; // ax
  int v48; // eax
  __int64 v49; // rcx
  unsigned __int64 v50; // rcx
  unsigned __int16 v51; // ax
  int v52; // eax
  __int64 v53; // rax
  unsigned __int64 v54; // rax
  unsigned __int8 v55; // r8
  char v56; // dl
  unsigned __int64 v57; // rcx
  int v58; // eax
  unsigned __int16 v59; // ax
  int v60; // [rsp+28h] [rbp-20h]
  int v61; // [rsp+28h] [rbp-20h]
  int v62; // [rsp+28h] [rbp-20h]
  int v63; // [rsp+28h] [rbp-20h]
  int v64; // [rsp+28h] [rbp-20h]
  int v65; // [rsp+28h] [rbp-20h]

  v2 = 0LL;
  if ( *(_BYTE *)(a1 + 418) == 2 )
    v5 = *(_RTL_SRWLOCK **)(a1 + 408);
  else
    v5 = 0LL;
  if ( !v5 )
    return 0;
  v6 = *(_QWORD *)a2;
  if ( *(_WORD *)(a2 + 18) )
  {
    v6 -= 16LL;
    _m_prefetchw((const void *)v6);
    if ( *(_BYTE *)(v6 + 15) != 5 )
      goto LABEL_10;
    v7 = 16LL * *(unsigned __int8 *)(v6 + 14);
  }
  else
  {
    v7 = *(unsigned __int8 *)(a2 + 16);
  }
  v6 -= v7;
LABEL_10:
  if ( *(char *)(v6 + 15) < 0 )
  {
    if ( (unsigned __int16)RtlpLFHKey ^ (unsigned __int16)(a1 ^ *(_WORD *)(v6 + 8) ^ (v6 >> 4)) )
      return 0;
    v8 = (unsigned __int64)((unsigned int)RtlpLFHKey ^ (unsigned int)a1 ^ *(_DWORD *)(v6 + 8) ^ (unsigned int)(v6 >> 4)) >> 12;
    v9 = *(_QWORD *)(v6 - v8);
    if ( !v9 )
      return 0;
    ReservedBlockSize = (unsigned __int16)RtlpGetReservedBlockSize(*(_QWORD *)(v6 - v8));
    v11 = 16 * ReservedBlockSize;
    RtlpGetFirstBlockAddress(v12, *(_QWORD *)(v9 + 8));
    v13 = RtlpGetReservedBlockSize(v9);
    if ( (v15 >> 4) / v13 >= *(unsigned __int16 *)(v9 + 40) )
    {
      *(_QWORD *)a2 = *(_QWORD *)(v9 + 8);
      *(_WORD *)(a2 + 18) = 8193;
      return 0;
    }
    v17 = *(_BYTE *)(v14 + 15);
    if ( (v17 & 0x3F) == 0 )
    {
      *(_WORD *)(a2 + 18) = 0;
      *(_QWORD *)a2 = v14 + 16;
      *(_BYTE *)(a2 + 16) = 16;
      *(_QWORD *)(a2 + 36) = 16LL;
      v29 = 16LL * *(unsigned __int16 *)(v9 + 36) - 16;
LABEL_59:
      *(_QWORD *)(a2 + 8) = v29;
      result = 1;
      *(_BYTE *)(a2 + 17) = *(_BYTE *)(v14 + 14);
      *(_WORD *)(a2 + 18) |= 0x8000u;
      return result;
    }
    if ( (v17 & 0x40) != 0 )
    {
      v18 = v17 & 0x3F;
    }
    else
    {
      if ( v17 != 4 )
      {
LABEL_22:
        *(_WORD *)(a2 + 18) = 1;
        *(_QWORD *)a2 = v11 + v6 + 16;
        v19 = *(_BYTE *)(v14 + 15);
        if ( v19 == 5 )
        {
          v20 = *(unsigned __int16 *)(v14 + 12) ^ (unsigned __int64)*(unsigned __int16 *)(a1 + 140);
        }
        else if ( (v19 & 0x40) != 0 )
        {
          v20 = *(unsigned __int16 *)(v14 + 16LL * (v19 & 0x3F) + 12);
        }
        else if ( (v19 & 0x3F) == 0x3F )
        {
          if ( v19 >= 0 )
          {
            if ( *(_DWORD *)(a1 + 124) )
            {
              v23 = *(_DWORD *)(v14 + 8);
              LOWORD(v60) = v23;
              if ( (v23 & *(_DWORD *)(a1 + 124)) != 0 )
                v60 = *(_DWORD *)(a1 + 136) ^ v23;
              v22 = v60;
            }
            else
            {
              v22 = *(_WORD *)(v14 + 8);
            }
          }
          else
          {
            if ( (unsigned __int16)RtlpLFHKey ^ (unsigned __int16)(*(_WORD *)(v14 + 8) ^ a1 ^ (v14 >> 4)) )
              v21 = 0LL;
            else
              v21 = *(_QWORD *)(v14
                              - ((unsigned __int64)((unsigned int)RtlpLFHKey ^ *(_DWORD *)(v14 + 8) ^ (unsigned int)a1 ^ (unsigned int)(v14 >> 4)) >> 12));
            v22 = *(_WORD *)(v21 + 36);
          }
          v20 = *(_QWORD *)(v14 + 16LL * v22);
        }
        else
        {
          v20 = v19 & 0x3F;
        }
        v24 = (*(_BYTE *)(a2 + 18) & 2) == 0;
        *(_BYTE *)(a2 + 16) = v20;
        if ( v24 )
          *(_QWORD *)(a2 + 36) = v20;
        v25 = *(_BYTE *)(v14 + 15);
        if ( v25 == 5 )
        {
          v26 = *(unsigned __int16 *)(v14 + 12) ^ (unsigned __int64)*(unsigned __int16 *)(a1 + 140);
        }
        else if ( (v25 & 0x40) != 0 )
        {
          v26 = *(unsigned __int16 *)(v14 + 16LL * (v25 & 0x3F) + 12);
        }
        else if ( (v25 & 0x3F) == 0x3F )
        {
          if ( v25 >= 0 )
          {
            if ( *(_DWORD *)(a1 + 124) )
            {
              v28 = *(_DWORD *)(v14 + 8);
              LOWORD(v61) = v28;
              if ( (v28 & *(_DWORD *)(a1 + 124)) != 0 )
                v61 = *(_DWORD *)(a1 + 136) ^ v28;
              v27 = v61;
            }
            else
            {
              v27 = *(_WORD *)(v14 + 8);
            }
          }
          else
          {
            if ( !((unsigned __int16)RtlpLFHKey ^ (unsigned __int16)(*(_WORD *)(v14 + 8) ^ a1 ^ (v14 >> 4))) )
              v2 = *(_QWORD *)(v14
                             - ((unsigned __int64)((unsigned int)RtlpLFHKey ^ *(_DWORD *)(v14 + 8) ^ (unsigned int)a1 ^ (unsigned int)(v14 >> 4)) >> 12));
            v27 = *(_WORD *)(v2 + 36);
          }
          v26 = *(_QWORD *)(v14 + 16LL * v27);
        }
        else
        {
          v26 = v25 & 0x3F;
        }
        v29 = 16LL * *(unsigned __int16 *)(v9 + 36) - v26;
        goto LABEL_59;
      }
      v18 = *(unsigned __int8 *)(v14 + 14);
    }
    v11 = 16 * (ReservedBlockSize + v18);
    goto LABEL_22;
  }
  Value = v5[3].Value;
  if ( ((*(_BYTE *)(v6 + 10) ^ (unsigned __int8)(*(_BYTE *)(Value + 138) & (*(_DWORD *)(Value + 124) >> 20))) & 1) == 0 )
    goto LABEL_122;
  if ( *(_DWORD *)(Value + 124) )
  {
    v31 = *(_DWORD *)(v6 + 8);
    LOWORD(v62) = v31;
    if ( (v31 & *(_DWORD *)(Value + 124)) != 0 )
      v62 = *(_DWORD *)(Value + 136) ^ v31;
    v32 = v62;
  }
  else
  {
    v32 = *(_WORD *)(v6 + 8);
  }
  if ( v32 <= 4u )
    goto LABEL_122;
  v33 = *(unsigned __int64 **)a2;
  if ( *(_DWORD *)(*(_QWORD *)a2 + 20LL) != -253701952 )
    goto LABEL_122;
  v34 = *v33;
  if ( !RtlpIsLFHZoneAllocation(v5, *v33) )
    goto LABEL_122;
  v35 = *(_BYTE *)(v6 + 15);
  if ( (v35 & 0x40) != 0 )
  {
    v36 = v35 & 0x3F;
LABEL_71:
    v37 = v6 + 16 * v36;
    goto LABEL_75;
  }
  if ( v35 == 4 )
  {
    v36 = *(unsigned __int8 *)(v6 + 14);
    goto LABEL_71;
  }
  v37 = v6;
LABEL_75:
  v38 = *(_QWORD *)(v34 + 8);
  if ( v38 != v37 + 16 )
  {
LABEL_122:
    if ( !RtlpIsLFHZoneAllocation(v5, v6) && v5 != *(_RTL_SRWLOCK **)a2 )
    {
      v54 = v5[3].Value;
      v55 = *(_BYTE *)(v6 + 10);
      v56 = *(_BYTE *)(v54 + 138);
      if ( ((v55 ^ (unsigned __int8)(v56 & (*(_DWORD *)(v54 + 124) >> 20))) & 1) == 0
        || ((v55 ^ (unsigned __int8)(v56 & (*(_DWORD *)(v54 + 124) >> 17))) & 8) == 0 )
      {
        return 0;
      }
    }
    *(_BYTE *)(a2 + 16) = 16;
    *(_WORD *)(a2 + 18) = 8193;
    *(_QWORD *)(a2 + 36) = 16LL;
    v57 = v5[3].Value;
    if ( *(_DWORD *)(v57 + 124) )
    {
      v58 = *(_DWORD *)(v6 + 8);
      LOWORD(v65) = v58;
      if ( (v58 & *(_DWORD *)(v57 + 124)) != 0 )
        v65 = *(_DWORD *)(v57 + 136) ^ v58;
      v59 = v65;
    }
    else
    {
      v59 = *(_WORD *)(v6 + 8);
    }
    *(_QWORD *)(a2 + 8) = 16LL * v59 - 16;
    *(_BYTE *)(a2 + 17) = *(_BYTE *)(v6 + 14);
    return 1;
  }
  FirstBlockAddress = RtlpGetFirstBlockAddress(v34, v38);
  v41 = *(unsigned __int8 *)(FirstBlockAddress + 15);
  if ( (v41 & 0x40) != 0 )
  {
    v42 = v40 & v41;
  }
  else
  {
    if ( (_BYTE)v41 != 4 )
    {
      v43 = FirstBlockAddress;
      goto LABEL_82;
    }
    v42 = *(unsigned __int8 *)(FirstBlockAddress + 14);
  }
  v43 = FirstBlockAddress + 16 * v42;
LABEL_82:
  *(_QWORD *)a2 = v43 + 16;
  if ( ((unsigned __int8)v40 & *(_BYTE *)(FirstBlockAddress + 15)) != 0 )
  {
    *(_WORD *)(a2 + 18) = 1;
    v44 = *(unsigned __int8 *)(FirstBlockAddress + 15);
    if ( (_BYTE)v44 == 5 )
    {
      v45 = *(unsigned __int16 *)(FirstBlockAddress + 12) ^ (unsigned __int64)*(unsigned __int16 *)(a1 + 140);
    }
    else if ( (v44 & 0x40) != 0 )
    {
      v45 = *(unsigned __int16 *)(FirstBlockAddress + 16 * (v40 & v44) + 12);
    }
    else if ( ((unsigned __int8)v40 & (unsigned __int8)v44) == (_BYTE)v40 )
    {
      if ( (v44 & 0x80u) == 0LL )
      {
        if ( *(_DWORD *)(a1 + 124) )
        {
          v48 = *(_DWORD *)(FirstBlockAddress + 8);
          LOWORD(v63) = v48;
          if ( (v48 & *(_DWORD *)(a1 + 124)) != 0 )
            v63 = *(_DWORD *)(a1 + 136) ^ v48;
          v47 = v63;
        }
        else
        {
          v47 = *(_WORD *)(FirstBlockAddress + 8);
        }
      }
      else
      {
        if ( (unsigned __int16)RtlpLFHKey ^ (unsigned __int16)(*(_WORD *)(FirstBlockAddress + 8) ^ a1 ^ (FirstBlockAddress >> 4)) )
          v46 = 0LL;
        else
          v46 = *(_QWORD *)(FirstBlockAddress
                          - ((unsigned __int64)((unsigned int)RtlpLFHKey ^ *(_DWORD *)(FirstBlockAddress + 8) ^ (unsigned int)a1 ^ (unsigned int)(FirstBlockAddress >> 4)) >> 12));
        v47 = *(_WORD *)(v46 + 36);
      }
      v45 = *(_QWORD *)(FirstBlockAddress + 16LL * v47);
    }
    else
    {
      v45 = v40 & v44;
    }
    v24 = (*(_BYTE *)(a2 + 18) & 2) == 0;
    *(_BYTE *)(a2 + 16) = v45;
    if ( v24 )
      *(_QWORD *)(a2 + 36) = v45;
    v49 = *(unsigned __int8 *)(FirstBlockAddress + 15);
    if ( (_BYTE)v49 == 5 )
    {
      v50 = *(unsigned __int16 *)(FirstBlockAddress + 12) ^ (unsigned __int64)*(unsigned __int16 *)(a1 + 140);
    }
    else if ( (v49 & 0x40) != 0 )
    {
      v50 = *(unsigned __int16 *)(FirstBlockAddress + 16 * (v40 & v49) + 12);
    }
    else if ( ((unsigned __int8)v40 & (unsigned __int8)v49) == (_BYTE)v40 )
    {
      if ( (v49 & 0x80u) == 0LL )
      {
        if ( *(_DWORD *)(a1 + 124) )
        {
          v52 = *(_DWORD *)(FirstBlockAddress + 8);
          LOWORD(v64) = v52;
          if ( (v52 & *(_DWORD *)(a1 + 124)) != 0 )
            v64 = *(_DWORD *)(a1 + 136) ^ v52;
          v51 = v64;
        }
        else
        {
          v51 = *(_WORD *)(FirstBlockAddress + 8);
        }
      }
      else
      {
        if ( !((unsigned __int16)RtlpLFHKey ^ (unsigned __int16)(*(_WORD *)(FirstBlockAddress + 8) ^ a1 ^ (FirstBlockAddress >> 4))) )
          v2 = *(_QWORD *)(FirstBlockAddress
                         - ((unsigned __int64)((unsigned int)RtlpLFHKey ^ *(_DWORD *)(FirstBlockAddress + 8) ^ (unsigned int)a1 ^ (unsigned int)(FirstBlockAddress >> 4)) >> 12));
        v51 = *(_WORD *)(v2 + 36);
      }
      v50 = *(_QWORD *)(FirstBlockAddress + 16LL * v51);
    }
    else
    {
      v50 = v40 & v49;
    }
    v53 = 16LL * *(unsigned __int16 *)(v34 + 36) - v50;
  }
  else
  {
    *(_WORD *)(a2 + 18) = 0;
    *(_BYTE *)(a2 + 16) = 16;
    *(_QWORD *)(a2 + 36) = 16LL;
    v53 = 16LL * *(unsigned __int16 *)(v34 + 36) - 16;
  }
  *(_QWORD *)(a2 + 8) = v53;
  *(_BYTE *)(a2 + 17) = *(_BYTE *)(FirstBlockAddress + 14);
  *(_WORD *)(a2 + 18) |= 0x8000u;
  return 1;
}
