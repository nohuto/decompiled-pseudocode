/*
 * XREFs of PortPassThroughExBuildSrbEx @ 0x1C007C0E4
 * Callers:
 *     PortPassThroughExSendAsync @ 0x1C007C3CC (PortPassThroughExSendAsync.c)
 * Callees:
 *     memmove @ 0x1C001B200 (memmove.c)
 *     memset @ 0x1C001B4C0 (memset.c)
 */

_DWORD *__fastcall PortPassThroughExBuildSrbEx(PIRP Irp, __int64 a2, __int64 a3, __int64 a4)
{
  PVOID v4; // rbp
  int v7; // eax
  int v8; // r12d
  unsigned int v9; // esi
  unsigned int v10; // esi
  unsigned int v11; // r15d
  unsigned int v12; // r14d
  _DWORD *PoolWithTag; // rax
  _DWORD *v14; // rbx
  PVOID v15; // rax
  char v16; // al
  int v17; // eax
  char v18; // dl
  int v19; // ecx
  __int64 v20; // rax
  unsigned int v21; // r8d
  char *v22; // rcx
  void *v23; // rcx
  int v24; // eax
  char *v25; // rcx

  v4 = 0LL;
  if ( *(_BYTE *)(a2 + 18) == 3 && *(_DWORD *)(a2 + 32) && *(_DWORD *)(a2 + 36) )
  {
    v7 = 176;
    v8 = 136;
  }
  else
  {
    v7 = 144;
    v8 = 128;
  }
  v9 = *(_DWORD *)(a2 + 8);
  if ( v9 > 0x10 )
  {
    if ( v9 > 0x20 )
      v10 = ((v9 + 38) & 0xFFFFFFF8) + 8;
    else
      v10 = 56;
  }
  else
  {
    v10 = 40;
  }
  v11 = v7 + v10;
  v12 = v7 + v10;
  PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, v7 + v10, 0x69506C50u);
  v14 = PoolWithTag;
  if ( PoolWithTag )
  {
    memset(PoolWithTag, 0, v12);
    if ( *(_BYTE *)(a2 + 17) )
    {
      v15 = ExAllocatePoolWithTag(NonPagedPoolNxCacheAligned, *(unsigned __int8 *)(a2 + 17), 0x69506C50u);
      v4 = v15;
      if ( !v15 )
      {
        ExFreePoolWithTag(v14, 0x69506C50u);
        return 0LL;
      }
      memset(v15, 0, *(unsigned __int8 *)(a2 + 17));
    }
    v14[5] = 0;
    v14[4] = v11;
    v14[3] = 1;
    *v14 = 2621448;
    v14[2] = 1397899864;
    v16 = *(_BYTE *)(a2 + 18);
    if ( v16 )
    {
      if ( v16 == 1 )
      {
        v14[6] = 64;
      }
      else if ( v16 == 3 )
      {
        v14[6] = 192;
      }
    }
    else
    {
      v14[6] = 128;
    }
    v17 = v14[6];
    if ( !v4 )
      v17 |= 0x20u;
    v14[6] = v17 | 0x100;
    *((_WORD *)v14 + 18) = IoGetIoPriorityHint(Irp);
    v14[10] = *(_DWORD *)(a2 + 20);
    v14[13] = v8;
    v14[14] = (v8 != 128) + 1;
    v18 = *(_BYTE *)(a2 + 18);
    if ( v18 == 1 )
      v19 = *(_DWORD *)(a2 + 36);
    else
      v19 = *(_DWORD *)(a2 + 32);
    v20 = a4;
    if ( v18 != 1 )
      v20 = a3;
    v14[15] = v19;
    *((_QWORD *)v14 + 8) = v20;
    *((_QWORD *)v14 + 10) = Irp;
    v14[30] = v8 + 16;
    if ( v14[14] == 2 )
      v14[31] = v10 + v8 + 16;
    *(_OWORD *)((char *)v14 + (unsigned int)v14[13]) = *(_OWORD *)((char *)&Irp->AssociatedIrp.MasterIrp->Type
                                                                 + *(unsigned int *)(a2 + 24));
    v21 = *(_DWORD *)(a2 + 8);
    v22 = (char *)v14 + (unsigned int)v14[30];
    if ( v21 > 0x10 )
    {
      if ( v21 > 0x20 )
      {
        *(_DWORD *)v22 = 66;
        v24 = *(_DWORD *)(a2 + 8) + 24;
        v22[8] = 0;
        *((_DWORD *)v22 + 1) = v24;
        v22[9] = *(_BYTE *)(a2 + 17);
        *((_DWORD *)v22 + 3) = *(_DWORD *)(a2 + 8);
        *((_QWORD *)v22 + 3) = v4;
        v23 = v22 + 32;
LABEL_37:
        memmove(v23, (const void *)(a2 + 56), *(unsigned int *)(a2 + 8));
        if ( v14[14] == 2 )
        {
          v25 = (char *)v14 + (unsigned int)v14[31];
          *(_DWORD *)v25 = 1;
          *((_DWORD *)v25 + 1) = 16;
          *((_DWORD *)v25 + 2) = *(_DWORD *)(a2 + 36);
          *((_QWORD *)v25 + 2) = a4;
        }
        return v14;
      }
      *(_DWORD *)v22 = 65;
      *((_DWORD *)v22 + 1) = 48;
    }
    else
    {
      *(_DWORD *)v22 = 64;
      *((_DWORD *)v22 + 1) = 32;
    }
    v22[8] = 0;
    v22[9] = *(_BYTE *)(a2 + 17);
    v22[10] = *(_BYTE *)(a2 + 8);
    *((_QWORD *)v22 + 2) = v4;
    v23 = v22 + 24;
    goto LABEL_37;
  }
  return v14;
}
