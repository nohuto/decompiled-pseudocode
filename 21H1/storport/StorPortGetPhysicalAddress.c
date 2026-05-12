/*
 * XREFs of StorPortGetPhysicalAddress @ 0x1C0019090
 * Callers:
 *     StorPortGetPhysicalAddressVrfy @ 0x1C007E2B0 (StorPortGetPhysicalAddressVrfy.c)
 * Callees:
 *     GetSrbScsiData @ 0x1C00199C4 (GetSrbScsiData.c)
 *     RaidSrbExGetBidirectionalData @ 0x1C0041430 (RaidSrbExGetBidirectionalData.c)
 */

PHYSICAL_ADDRESS __fastcall StorPortGetPhysicalAddress(__int64 a1, __int64 a2, void *a3, unsigned int *a4)
{
  PHYSICAL_ADDRESS PhysicalAddress; // rbx
  unsigned int *v7; // r13
  unsigned int v8; // r14d
  unsigned __int64 v9; // r12
  __int64 *v10; // rax
  unsigned __int64 v11; // r11
  unsigned __int64 v12; // r15
  unsigned __int8 v13; // r10
  unsigned __int64 v14; // rdx
  unsigned int v15; // r8d
  __int64 v16; // rsi
  char v17; // al
  int v18; // r13d
  unsigned __int64 v19; // r9
  __int64 v20; // rcx
  unsigned int v21; // r8d
  int v22; // edx
  unsigned int v23; // ebp
  PHYSICAL_ADDRESS v24; // rax
  unsigned int v25; // eax
  __int64 BidirectionalData; // rax
  __int64 v28; // rax
  __int64 v29; // rcx
  unsigned int v30; // edi
  unsigned int v31; // ecx
  __int64 v32; // rdx
  unsigned int *v33; // rdx
  unsigned int v34; // ebp
  unsigned int v35; // ecx
  __int64 v36; // rax
  unsigned int *v37; // r8
  PHYSICAL_ADDRESS v38; // rax
  unsigned __int64 v39; // [rsp+30h] [rbp-58h]
  unsigned __int64 v40[10]; // [rsp+38h] [rbp-50h] BYREF
  char v41; // [rsp+90h] [rbp+8h]
  char v42; // [rsp+98h] [rbp+10h] BYREF
  unsigned int v43; // [rsp+A0h] [rbp+18h]
  unsigned int *v44; // [rsp+A8h] [rbp+20h]

  v44 = a4;
  PhysicalAddress.QuadPart = 0LL;
  v41 = 0;
  v42 = 0;
  v7 = a4;
  v39 = 0LL;
  v8 = 0;
  v40[0] = 0LL;
  v9 = 0LL;
  v10 = *(__int64 **)(a1 - 16);
  v11 = 0LL;
  v43 = 0;
  v12 = 0LL;
  v13 = 0;
  v14 = 0LL;
  v15 = 0;
  v16 = *v10;
  *a4 = 0;
  if ( a2 )
  {
    v17 = *(_BYTE *)(a2 + 2);
    if ( v17 == 40 )
    {
      v18 = *(_DWORD *)(a2 + 20);
      v8 = *(_DWORD *)(a2 + 60);
      v9 = *(_QWORD *)(a2 + 64);
      v12 = *(_QWORD *)(a2 + 104);
      if ( !v18 )
      {
        GetSrbScsiData(a2, 0, 0, 0, (__int64)v40, (__int64)&v42);
        v39 = v40[0];
        v41 = v42;
      }
      BidirectionalData = RaidSrbExGetBidirectionalData(a2);
      v14 = v39;
      v13 = v41;
      if ( BidirectionalData )
      {
        v11 = *(_QWORD *)(BidirectionalData + 16);
        v43 = *(_DWORD *)(BidirectionalData + 8);
      }
      else
      {
        v11 = 0LL;
      }
    }
    else
    {
      v8 = *(_DWORD *)(a2 + 16);
      v18 = *(unsigned __int8 *)(a2 + 2);
      v9 = *(_QWORD *)(a2 + 24);
      v12 = *(_QWORD *)(a2 + 56);
      if ( !v17 )
      {
        v13 = *(_BYTE *)(a2 + 11);
        v14 = *(_QWORD *)(a2 + 32);
        v41 = v13;
      }
    }
    v15 = v8;
    if ( v18 == 23 )
    {
      v28 = *(_BYTE *)(a2 + 2) == 40 ? *(_QWORD *)(a2 + 96) : *(_QWORD *)(a2 + 48);
      if ( *(_DWORD *)(*(_QWORD *)(v28 + 104) + 40LL) > v8 )
        v15 = *(_DWORD *)(*(_QWORD *)(v28 + 104) + 40LL);
    }
    v7 = v44;
  }
  v19 = *(_QWORD *)(v16 + 744);
  if ( v19 <= (unsigned __int64)a3 )
  {
    v29 = *(unsigned int *)(v16 + 760);
    if ( (unsigned __int64)a3 < v19 + v29 )
    {
      v30 = (_DWORD)a3 - v19;
      PhysicalAddress.QuadPart = *(_QWORD *)(v16 + 752) + v30;
      v31 = v29 - v30;
LABEL_38:
      *v7 = v31;
      return PhysicalAddress;
    }
  }
  if ( !a2 )
  {
    if ( !*(_BYTE *)(v16 + 720) || *(_DWORD *)(v16 + 740) != 3 )
    {
      PhysicalAddress = MmGetPhysicalAddress(a3);
      v31 = (*(_DWORD *)(v16 + 452) + 7) & 0xFFFFFFF8;
      goto LABEL_38;
    }
    return PhysicalAddress;
  }
  v20 = v15;
  if ( v9 <= (unsigned __int64)a3 && (unsigned __int64)a3 < v15 + v9 )
  {
    v21 = v43;
LABEL_40:
    if ( *(_BYTE *)(a2 + 2) == 40 )
      v32 = *(_QWORD *)(a2 + 96);
    else
      v32 = *(_QWORD *)(a2 + 48);
    if ( v9 > (unsigned __int64)a3 || (unsigned __int64)a3 >= v20 + v9 )
    {
      v33 = *(unsigned int **)(v32 + 152);
      v34 = (_DWORD)a3 - v11;
      v8 = v21;
    }
    else
    {
      v33 = *(unsigned int **)(v32 + 112);
      v34 = (_DWORD)a3 - v9;
    }
    if ( v33 )
    {
      v35 = *v33;
      v36 = 0LL;
      if ( *v33 )
      {
        v37 = v33 + 6;
        do
        {
          if ( v34 < *v37 )
            break;
          v34 -= *v37;
          v36 = (unsigned int)(v36 + 1);
          v37 += 6;
        }
        while ( (unsigned int)v36 < v35 );
      }
      if ( (unsigned int)v36 < v35 )
      {
        *v7 = v33[6 * v36 + 6] - v34;
        return (PHYSICAL_ADDRESS)(*(_QWORD *)&v33[6 * v36 + 4] + v34);
      }
    }
    else if ( (*(_BYTE *)(v16 + 4515) & 4) != 0 && (!*(_BYTE *)(v16 + 720) || *(_DWORD *)(v16 + 740) != 3) )
    {
      PhysicalAddress = MmGetPhysicalAddress(a3);
      *v7 = v8 - v34;
    }
    return PhysicalAddress;
  }
  if ( v11 <= (unsigned __int64)a3 )
  {
    v21 = v43;
    if ( (unsigned __int64)a3 < v11 + v43 )
      goto LABEL_40;
  }
  if ( v14 <= (unsigned __int64)a3 && (unsigned __int64)a3 < v14 + v13 )
  {
    v23 = (_DWORD)a3 - v14;
    if ( *(_BYTE *)(v16 + 720) && *(_DWORD *)(v16 + 740) == 3 )
    {
      PhysicalAddress.QuadPart = *(_QWORD *)(v12 - 1064) + v23 + 832LL;
    }
    else
    {
      v38 = MmGetPhysicalAddress(a3);
      v13 = v41;
      PhysicalAddress = v38;
    }
    v25 = v13;
    goto LABEL_20;
  }
  if ( v12 <= (unsigned __int64)a3 )
  {
    v22 = *(_DWORD *)(v16 + 452);
    if ( (unsigned __int64)a3 < v12 + ((v22 + 7) & 0xFFFFFFF8) )
    {
      v23 = (_DWORD)a3 - v12;
      if ( *(_BYTE *)(v16 + 720) && *(_DWORD *)(v16 + 740) == 3 )
      {
        PhysicalAddress.QuadPart = *(_QWORD *)(v12 - 1064) + v23 + 1088LL;
      }
      else
      {
        v24 = MmGetPhysicalAddress(a3);
        v22 = *(_DWORD *)(v16 + 452);
        PhysicalAddress = v24;
      }
      v25 = (v22 + 7) & 0xFFFFFFF8;
LABEL_20:
      *v7 = v25 - v23;
    }
  }
  return PhysicalAddress;
}
