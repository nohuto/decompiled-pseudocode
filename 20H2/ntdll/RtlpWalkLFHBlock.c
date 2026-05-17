/*
 * XREFs of RtlpWalkLFHBlock @ 0x18010C008
 * Callers:
 *     RtlpWalkHeap @ 0x1800F509C (RtlpWalkHeap.c)
 * Callees:
 *     RtlpGetFirstBlockAddress @ 0x18010BA78 (RtlpGetFirstBlockAddress.c)
 *     RtlpGetReservedBlockSize @ 0x18010BB40 (RtlpGetReservedBlockSize.c)
 *     RtlpIsLFHZoneAllocation @ 0x18010BC50 (RtlpIsLFHZoneAllocation.c)
 */

char __fastcall RtlpWalkLFHBlock(__int64 a1, __int64 a2, unsigned __int64 a3, unsigned __int64 a4)
{
  __int64 v4; // rsi
  unsigned __int64 v7; // r14
  unsigned __int64 v8; // rdi
  __int64 v9; // rax
  unsigned __int64 v10; // rcx
  __int64 v11; // r15
  __int64 ReservedBlockSize; // r13
  __int64 v13; // r14
  __int64 v14; // rcx
  unsigned __int16 v15; // ax
  unsigned __int64 v16; // r10
  unsigned __int64 v17; // r8
  char result; // al
  char v19; // al
  __int64 v20; // r14
  char v21; // cl
  unsigned __int64 v22; // rcx
  __int64 v23; // rax
  unsigned __int16 v24; // ax
  int v25; // eax
  bool v26; // zf
  char v27; // cl
  unsigned __int64 v28; // rcx
  unsigned __int16 v29; // ax
  int v30; // eax
  __int64 v31; // rax
  __int64 v32; // rcx
  int v33; // eax
  unsigned __int16 v34; // ax
  unsigned __int64 *v35; // rax
  __int64 v36; // r15
  char v37; // al
  __int64 v38; // rax
  unsigned __int64 v39; // rax
  __int64 v40; // rdx
  unsigned __int64 FirstBlockAddress; // rdx
  __int64 v42; // r11
  __int64 v43; // rax
  __int64 v44; // rax
  unsigned __int64 v45; // rax
  __int64 v46; // rcx
  unsigned __int64 v47; // rcx
  __int64 v48; // rax
  unsigned __int16 v49; // ax
  int v50; // eax
  __int64 v51; // rcx
  unsigned __int64 v52; // rcx
  unsigned __int16 v53; // ax
  int v54; // eax
  __int64 v55; // rax
  __int64 v56; // rax
  unsigned __int8 v57; // r8
  char v58; // dl
  __int64 v59; // rcx
  int v60; // eax
  unsigned __int16 v61; // ax
  int v62; // [rsp+28h] [rbp-20h]
  int v63; // [rsp+28h] [rbp-20h]
  int v64; // [rsp+28h] [rbp-20h]
  int v65; // [rsp+28h] [rbp-20h]
  int v66; // [rsp+28h] [rbp-20h]
  int v67; // [rsp+28h] [rbp-20h]

  v4 = 0LL;
  if ( *(_BYTE *)(a1 + 418) == 2 )
    v7 = *(_QWORD *)(a1 + 408);
  else
    v7 = 0LL;
  if ( !v7 )
    return 0;
  v8 = *(_QWORD *)a2;
  if ( *(_WORD *)(a2 + 18) )
  {
    v8 -= 16LL;
    _m_prefetchw((const void *)v8);
    if ( *(_BYTE *)(v8 + 15) != 5 )
      goto LABEL_10;
    v9 = 16LL * *(unsigned __int8 *)(v8 + 14);
  }
  else
  {
    v9 = *(unsigned __int8 *)(a2 + 16);
  }
  v8 -= v9;
LABEL_10:
  if ( *(char *)(v8 + 15) < 0 )
  {
    if ( (unsigned __int16)RtlpLFHKey ^ (unsigned __int16)(a1 ^ *(_WORD *)(v8 + 8) ^ (v8 >> 4)) )
      return 0;
    v10 = (unsigned __int64)((unsigned int)RtlpLFHKey ^ (unsigned int)a1 ^ *(_DWORD *)(v8 + 8) ^ (unsigned int)(v8 >> 4)) >> 12;
    v11 = *(_QWORD *)(v8 - v10);
    if ( !v11 )
      return 0;
    ReservedBlockSize = (unsigned __int16)RtlpGetReservedBlockSize(*(_QWORD *)(v8 - v10));
    v13 = 16 * ReservedBlockSize;
    RtlpGetFirstBlockAddress(v14, *(_QWORD *)(v11 + 8));
    v15 = RtlpGetReservedBlockSize(v11);
    if ( (v17 >> 4) / v15 >= *(unsigned __int16 *)(v11 + 40) )
    {
      *(_QWORD *)a2 = *(_QWORD *)(v11 + 8);
      *(_WORD *)(a2 + 18) = 8193;
      return 0;
    }
    v19 = *(_BYTE *)(v16 + 15);
    if ( (v19 & 0x3F) == 0 )
    {
      *(_WORD *)(a2 + 18) = 0;
      *(_QWORD *)a2 = v16 + 16;
      *(_BYTE *)(a2 + 16) = 16;
      *(_QWORD *)(a2 + 36) = 16LL;
      v31 = 16LL * *(unsigned __int16 *)(v11 + 36) - 16;
LABEL_59:
      *(_QWORD *)(a2 + 8) = v31;
      result = 1;
      *(_BYTE *)(a2 + 17) = *(_BYTE *)(v16 + 14);
      *(_WORD *)(a2 + 18) |= 0x8000u;
      return result;
    }
    if ( (v19 & 0x40) != 0 )
    {
      v20 = v19 & 0x3F;
    }
    else
    {
      if ( v19 != 4 )
      {
LABEL_22:
        *(_WORD *)(a2 + 18) = 1;
        *(_QWORD *)a2 = v13 + v8 + 16;
        v21 = *(_BYTE *)(v16 + 15);
        if ( v21 == 5 )
        {
          v22 = *(unsigned __int16 *)(v16 + 12) ^ (unsigned __int64)*(unsigned __int16 *)(a1 + 140);
        }
        else if ( (v21 & 0x40) != 0 )
        {
          v22 = *(unsigned __int16 *)(v16 + 16LL * (v21 & 0x3F) + 12);
        }
        else if ( (v21 & 0x3F) == 0x3F )
        {
          if ( v21 >= 0 )
          {
            if ( *(_DWORD *)(a1 + 124) )
            {
              v25 = *(_DWORD *)(v16 + 8);
              LOWORD(v62) = v25;
              if ( (v25 & *(_DWORD *)(a1 + 124)) != 0 )
                v62 = *(_DWORD *)(a1 + 136) ^ v25;
              v24 = v62;
            }
            else
            {
              v24 = *(_WORD *)(v16 + 8);
            }
          }
          else
          {
            if ( (unsigned __int16)RtlpLFHKey ^ (unsigned __int16)(*(_WORD *)(v16 + 8) ^ a1 ^ (v16 >> 4)) )
              v23 = 0LL;
            else
              v23 = *(_QWORD *)(v16
                              - ((unsigned __int64)((unsigned int)RtlpLFHKey ^ *(_DWORD *)(v16 + 8) ^ (unsigned int)a1 ^ (unsigned int)(v16 >> 4)) >> 12));
            v24 = *(_WORD *)(v23 + 36);
          }
          v22 = *(_QWORD *)(v16 + 16LL * v24);
        }
        else
        {
          v22 = v21 & 0x3F;
        }
        v26 = (*(_BYTE *)(a2 + 18) & 2) == 0;
        *(_BYTE *)(a2 + 16) = v22;
        if ( v26 )
          *(_QWORD *)(a2 + 36) = v22;
        v27 = *(_BYTE *)(v16 + 15);
        if ( v27 == 5 )
        {
          v28 = *(unsigned __int16 *)(v16 + 12) ^ (unsigned __int64)*(unsigned __int16 *)(a1 + 140);
        }
        else if ( (v27 & 0x40) != 0 )
        {
          v28 = *(unsigned __int16 *)(v16 + 16LL * (v27 & 0x3F) + 12);
        }
        else if ( (v27 & 0x3F) == 0x3F )
        {
          if ( v27 >= 0 )
          {
            if ( *(_DWORD *)(a1 + 124) )
            {
              v30 = *(_DWORD *)(v16 + 8);
              LOWORD(v63) = v30;
              if ( (v30 & *(_DWORD *)(a1 + 124)) != 0 )
                v63 = *(_DWORD *)(a1 + 136) ^ v30;
              v29 = v63;
            }
            else
            {
              v29 = *(_WORD *)(v16 + 8);
            }
          }
          else
          {
            if ( !((unsigned __int16)RtlpLFHKey ^ (unsigned __int16)(*(_WORD *)(v16 + 8) ^ a1 ^ (v16 >> 4))) )
              v4 = *(_QWORD *)(v16
                             - ((unsigned __int64)((unsigned int)RtlpLFHKey ^ *(_DWORD *)(v16 + 8) ^ (unsigned int)a1 ^ (unsigned int)(v16 >> 4)) >> 12));
            v29 = *(_WORD *)(v4 + 36);
          }
          v28 = *(_QWORD *)(v16 + 16LL * v29);
        }
        else
        {
          v28 = v27 & 0x3F;
        }
        v31 = 16LL * *(unsigned __int16 *)(v11 + 36) - v28;
        goto LABEL_59;
      }
      v20 = *(unsigned __int8 *)(v16 + 14);
    }
    v13 = 16 * (ReservedBlockSize + v20);
    goto LABEL_22;
  }
  v32 = *(_QWORD *)(v7 + 24);
  if ( ((*(_BYTE *)(v8 + 10) ^ (unsigned __int8)(*(_BYTE *)(v32 + 138) & (*(_DWORD *)(v32 + 124) >> 20))) & 1) == 0 )
    goto LABEL_122;
  if ( *(_DWORD *)(v32 + 124) )
  {
    v33 = *(_DWORD *)(v8 + 8);
    LOWORD(v64) = v33;
    if ( (v33 & *(_DWORD *)(v32 + 124)) != 0 )
      v64 = *(_DWORD *)(v32 + 136) ^ v33;
    v34 = v64;
  }
  else
  {
    v34 = *(_WORD *)(v8 + 8);
  }
  if ( v34 <= 4u )
    goto LABEL_122;
  v35 = *(unsigned __int64 **)a2;
  if ( *(_DWORD *)(*(_QWORD *)a2 + 20LL) != -253701952 )
    goto LABEL_122;
  v36 = *v35;
  if ( !RtlpIsLFHZoneAllocation(v7, *v35, a3, a4) )
    goto LABEL_122;
  v37 = *(_BYTE *)(v8 + 15);
  if ( (v37 & 0x40) != 0 )
  {
    v38 = v37 & 0x3F;
LABEL_71:
    v39 = v8 + 16 * v38;
    goto LABEL_75;
  }
  if ( v37 == 4 )
  {
    v38 = *(unsigned __int8 *)(v8 + 14);
    goto LABEL_71;
  }
  v39 = v8;
LABEL_75:
  v40 = *(_QWORD *)(v36 + 8);
  if ( v40 != v39 + 16 )
  {
LABEL_122:
    if ( !RtlpIsLFHZoneAllocation(v7, v8, a3, a4) && v7 != *(_QWORD *)a2 )
    {
      v56 = *(_QWORD *)(v7 + 24);
      v57 = *(_BYTE *)(v8 + 10);
      v58 = *(_BYTE *)(v56 + 138);
      if ( ((v57 ^ (unsigned __int8)(v58 & (*(_DWORD *)(v56 + 124) >> 20))) & 1) == 0
        || ((v57 ^ (unsigned __int8)(v58 & (*(_DWORD *)(v56 + 124) >> 17))) & 8) == 0 )
      {
        return 0;
      }
    }
    *(_BYTE *)(a2 + 16) = 16;
    *(_WORD *)(a2 + 18) = 8193;
    *(_QWORD *)(a2 + 36) = 16LL;
    v59 = *(_QWORD *)(v7 + 24);
    if ( *(_DWORD *)(v59 + 124) )
    {
      v60 = *(_DWORD *)(v8 + 8);
      LOWORD(v67) = v60;
      if ( (v60 & *(_DWORD *)(v59 + 124)) != 0 )
        v67 = *(_DWORD *)(v59 + 136) ^ v60;
      v61 = v67;
    }
    else
    {
      v61 = *(_WORD *)(v8 + 8);
    }
    *(_QWORD *)(a2 + 8) = 16LL * v61 - 16;
    *(_BYTE *)(a2 + 17) = *(_BYTE *)(v8 + 14);
    return 1;
  }
  FirstBlockAddress = RtlpGetFirstBlockAddress(v36, v40);
  v43 = *(unsigned __int8 *)(FirstBlockAddress + 15);
  if ( (v43 & 0x40) != 0 )
  {
    v44 = v42 & v43;
  }
  else
  {
    if ( (_BYTE)v43 != 4 )
    {
      v45 = FirstBlockAddress;
      goto LABEL_82;
    }
    v44 = *(unsigned __int8 *)(FirstBlockAddress + 14);
  }
  v45 = FirstBlockAddress + 16 * v44;
LABEL_82:
  *(_QWORD *)a2 = v45 + 16;
  if ( ((unsigned __int8)v42 & *(_BYTE *)(FirstBlockAddress + 15)) != 0 )
  {
    *(_WORD *)(a2 + 18) = 1;
    v46 = *(unsigned __int8 *)(FirstBlockAddress + 15);
    if ( (_BYTE)v46 == 5 )
    {
      v47 = *(unsigned __int16 *)(FirstBlockAddress + 12) ^ (unsigned __int64)*(unsigned __int16 *)(a1 + 140);
    }
    else if ( (v46 & 0x40) != 0 )
    {
      v47 = *(unsigned __int16 *)(FirstBlockAddress + 16 * (v42 & v46) + 12);
    }
    else if ( ((unsigned __int8)v42 & (unsigned __int8)v46) == (_BYTE)v42 )
    {
      if ( (v46 & 0x80u) == 0LL )
      {
        if ( *(_DWORD *)(a1 + 124) )
        {
          v50 = *(_DWORD *)(FirstBlockAddress + 8);
          LOWORD(v65) = v50;
          if ( (v50 & *(_DWORD *)(a1 + 124)) != 0 )
            v65 = *(_DWORD *)(a1 + 136) ^ v50;
          v49 = v65;
        }
        else
        {
          v49 = *(_WORD *)(FirstBlockAddress + 8);
        }
      }
      else
      {
        if ( (unsigned __int16)RtlpLFHKey ^ (unsigned __int16)(*(_WORD *)(FirstBlockAddress + 8) ^ a1 ^ (FirstBlockAddress >> 4)) )
          v48 = 0LL;
        else
          v48 = *(_QWORD *)(FirstBlockAddress
                          - ((unsigned __int64)((unsigned int)RtlpLFHKey ^ *(_DWORD *)(FirstBlockAddress + 8) ^ (unsigned int)a1 ^ (unsigned int)(FirstBlockAddress >> 4)) >> 12));
        v49 = *(_WORD *)(v48 + 36);
      }
      v47 = *(_QWORD *)(FirstBlockAddress + 16LL * v49);
    }
    else
    {
      v47 = v42 & v46;
    }
    v26 = (*(_BYTE *)(a2 + 18) & 2) == 0;
    *(_BYTE *)(a2 + 16) = v47;
    if ( v26 )
      *(_QWORD *)(a2 + 36) = v47;
    v51 = *(unsigned __int8 *)(FirstBlockAddress + 15);
    if ( (_BYTE)v51 == 5 )
    {
      v52 = *(unsigned __int16 *)(FirstBlockAddress + 12) ^ (unsigned __int64)*(unsigned __int16 *)(a1 + 140);
    }
    else if ( (v51 & 0x40) != 0 )
    {
      v52 = *(unsigned __int16 *)(FirstBlockAddress + 16 * (v42 & v51) + 12);
    }
    else if ( ((unsigned __int8)v42 & (unsigned __int8)v51) == (_BYTE)v42 )
    {
      if ( (v51 & 0x80u) == 0LL )
      {
        if ( *(_DWORD *)(a1 + 124) )
        {
          v54 = *(_DWORD *)(FirstBlockAddress + 8);
          LOWORD(v66) = v54;
          if ( (v54 & *(_DWORD *)(a1 + 124)) != 0 )
            v66 = *(_DWORD *)(a1 + 136) ^ v54;
          v53 = v66;
        }
        else
        {
          v53 = *(_WORD *)(FirstBlockAddress + 8);
        }
      }
      else
      {
        if ( !((unsigned __int16)RtlpLFHKey ^ (unsigned __int16)(*(_WORD *)(FirstBlockAddress + 8) ^ a1 ^ (FirstBlockAddress >> 4))) )
          v4 = *(_QWORD *)(FirstBlockAddress
                         - ((unsigned __int64)((unsigned int)RtlpLFHKey ^ *(_DWORD *)(FirstBlockAddress + 8) ^ (unsigned int)a1 ^ (unsigned int)(FirstBlockAddress >> 4)) >> 12));
        v53 = *(_WORD *)(v4 + 36);
      }
      v52 = *(_QWORD *)(FirstBlockAddress + 16LL * v53);
    }
    else
    {
      v52 = v42 & v51;
    }
    v55 = 16LL * *(unsigned __int16 *)(v36 + 36) - v52;
  }
  else
  {
    *(_WORD *)(a2 + 18) = 0;
    *(_BYTE *)(a2 + 16) = 16;
    *(_QWORD *)(a2 + 36) = 16LL;
    v55 = 16LL * *(unsigned __int16 *)(v36 + 36) - 16;
  }
  *(_QWORD *)(a2 + 8) = v55;
  *(_BYTE *)(a2 + 17) = *(_BYTE *)(FirstBlockAddress + 14);
  *(_WORD *)(a2 + 18) |= 0x8000u;
  return 1;
}
