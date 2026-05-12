/*
 * XREFs of PortPassThroughExBuildSrbEx @ 0x1C007C004
 * Callers:
 *     PortPassThroughExSendAsync @ 0x1C007C3C0 (PortPassThroughExSendAsync.c)
 * Callees:
 *     memmove @ 0x1C001D740 (memmove.c)
 *     memset @ 0x1C001DA00 (memset.c)
 *     RtlULongAdd @ 0x1C0044D7C (RtlULongAdd.c)
 */

_DWORD *__fastcall PortPassThroughExBuildSrbEx(IRP *a1, __int64 a2, __int64 a3, __int64 a4, ULONG ulAugend, __int64 a6)
{
  bool v7; // zf
  PVOID v8; // r12
  int v9; // r13d
  ULONG v10; // r9d
  unsigned int v11; // edx
  ULONG v12; // esi
  int v13; // r11d
  NTSTATUS v14; // ebp
  __int64 v15; // r10
  ULONG v16; // r15d
  _DWORD *PoolWithTag; // rax
  _DWORD *v18; // rbx
  PVOID v19; // rax
  char v20; // al
  int v21; // eax
  __int16 IoPriorityHint; // ax
  __int64 v23; // rbp
  int v24; // ecx
  __int64 v25; // r15
  __int64 v26; // rax
  unsigned int v27; // eax
  unsigned int v28; // r8d
  char *v29; // rcx
  void *v30; // rcx
  int v31; // eax
  unsigned int v32; // eax
  char *v33; // rcx
  __int64 v34; // rax
  ULONG pulResult; // [rsp+78h] [rbp+10h] BYREF
  __int64 v38; // [rsp+80h] [rbp+18h]
  __int64 v39; // [rsp+88h] [rbp+20h]

  v39 = a4;
  v38 = a3;
  v7 = *(_BYTE *)(a2 + 18) == 3;
  v8 = 0LL;
  pulResult = 0;
  if ( v7 && *(_DWORD *)(a2 + 32) && *(_DWORD *)(a2 + 36) )
  {
    v9 = 136;
    v10 = 176;
  }
  else
  {
    v9 = 128;
    v10 = 144;
  }
  v11 = *(_DWORD *)(a2 + 8);
  ulAugend = v10;
  if ( v11 > 0x10 )
  {
    if ( v11 > 0x20 )
    {
      if ( RtlULongAdd(0x28u, v11 - 1, &pulResult) < 0 )
        return 0LL;
      v12 = v13 + ((pulResult - 1) & 0xFFFFFFF8);
    }
    else
    {
      v12 = 56;
    }
  }
  else
  {
    v12 = 40;
  }
  v14 = RtlULongAdd(v10, v12, &ulAugend);
  if ( v14 >= 0 )
  {
    if ( a6 == v15 || (v14 = RtlULongAdd(ulAugend, 0x20u, &ulAugend), v14 >= 0) )
    {
      v16 = ulAugend;
      PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, ulAugend, 0x69506C50u);
      v18 = PoolWithTag;
      if ( PoolWithTag )
      {
        memset(PoolWithTag, 0, v16);
        if ( *(_BYTE *)(a2 + 17) )
        {
          v19 = ExAllocatePoolWithTag(NonPagedPoolNxCacheAligned, *(unsigned __int8 *)(a2 + 17), 0x69506C50u);
          v8 = v19;
          if ( !v19 )
          {
            ExFreePoolWithTag(v18, 0x69506C50u);
            return 0LL;
          }
          memset(v19, 0, *(unsigned __int8 *)(a2 + 17));
        }
      }
      else
      {
        v14 = -1073741670;
      }
      if ( v14 < 0 )
        return v18;
      v18[5] = 0;
      *v18 = 2621448;
      v18[2] = 1397899864;
      v18[3] = 1;
      v18[4] = v16;
      v20 = *(_BYTE *)(a2 + 18);
      if ( v20 )
      {
        if ( v20 == 1 )
        {
          v18[6] = 64;
        }
        else if ( v20 == 3 )
        {
          v18[6] = 192;
        }
      }
      else
      {
        v18[6] = 128;
      }
      v21 = v18[6];
      if ( !v8 )
        v21 |= 0x20u;
      v18[6] = v21 | 0x100;
      IoPriorityHint = IoGetIoPriorityHint(a1);
      v23 = a6;
      *((_WORD *)v18 + 18) = IoPriorityHint;
      v18[10] = *(_DWORD *)(a2 + 20);
      v18[13] = v9;
      v18[14] = (v9 != 128) + 1;
      if ( v23 )
        v18[14] = (v9 != 128) + 2;
      if ( *(_BYTE *)(a2 + 18) == 1 )
        v24 = *(_DWORD *)(a2 + 36);
      else
        v24 = *(_DWORD *)(a2 + 32);
      v25 = v39;
      v26 = v39;
      if ( *(_BYTE *)(a2 + 18) != 1 )
        v26 = v38;
      v18[15] = v24;
      *((_QWORD *)v18 + 8) = v26;
      *((_QWORD *)v18 + 10) = a1;
      v18[30] = v9 + 16;
      v27 = v18[14];
      if ( v27 >= 2 )
      {
        v18[31] = v9 + 16 + v12;
        v27 = v18[14];
      }
      if ( v27 == 3 )
        v18[32] = v18[31] + 24;
      *(_OWORD *)((char *)v18 + (unsigned int)v18[13]) = *(_OWORD *)((char *)&a1->AssociatedIrp.MasterIrp->Type
                                                                   + *(unsigned int *)(a2 + 24));
      v28 = *(_DWORD *)(a2 + 8);
      v29 = (char *)v18 + (unsigned int)v18[30];
      if ( v28 > 0x10 )
      {
        if ( v28 > 0x20 )
        {
          *(_DWORD *)v29 = 66;
          v31 = *(_DWORD *)(a2 + 8) + 24;
          v29[8] = 0;
          *((_DWORD *)v29 + 1) = v31;
          v29[9] = *(_BYTE *)(a2 + 17);
          *((_DWORD *)v29 + 3) = *(_DWORD *)(a2 + 8);
          *((_QWORD *)v29 + 3) = v8;
          v30 = v29 + 32;
          goto LABEL_47;
        }
        *(_DWORD *)v29 = 65;
        *((_DWORD *)v29 + 1) = 48;
      }
      else
      {
        *(_DWORD *)v29 = 64;
        *((_DWORD *)v29 + 1) = 32;
      }
      v29[8] = 0;
      v29[9] = *(_BYTE *)(a2 + 17);
      v29[10] = *(_BYTE *)(a2 + 8);
      *((_QWORD *)v29 + 2) = v8;
      v30 = v29 + 24;
LABEL_47:
      memmove(v30, (const void *)(a2 + 56), *(unsigned int *)(a2 + 8));
      v32 = v18[14];
      if ( v32 >= 2 )
      {
        v33 = (char *)v18 + (unsigned int)v18[31];
        *(_DWORD *)v33 = 1;
        *((_DWORD *)v33 + 1) = 16;
        *((_DWORD *)v33 + 2) = *(_DWORD *)(a2 + 36);
        *((_QWORD *)v33 + 2) = v25;
        v32 = v18[14];
      }
      if ( v32 == 3 )
      {
        v34 = (unsigned int)v18[32];
        *(_DWORD *)((char *)v18 + v34) = 160;
        *(_DWORD *)((char *)v18 + v34 + 4) = 24;
        *(_QWORD *)((char *)v18 + v34 + 8) = v23;
      }
      return v18;
    }
  }
  return 0LL;
}
