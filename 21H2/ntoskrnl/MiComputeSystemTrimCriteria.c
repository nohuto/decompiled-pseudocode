/*
 * XREFs of MiComputeSystemTrimCriteria @ 0x14025F3E0
 * Callers:
 *     MiProcessWorkingSets @ 0x1402AC4A0 (MiProcessWorkingSets.c)
 * Callees:
 *     MiComputeAgeDistribution @ 0x140224DFC (MiComputeAgeDistribution.c)
 *     MiGetStandbyRepurposed @ 0x14025F744 (MiGetStandbyRepurposed.c)
 *     MiGetAvailablePagesBelowPriority @ 0x14025F8BC (MiGetAvailablePagesBelowPriority.c)
 *     MiPulseLowAvailableEvent @ 0x14055C21C (MiPulseLowAvailableEvent.c)
 */

__int64 __fastcall MiComputeSystemTrimCriteria(_QWORD *a1, __int64 a2)
{
  __int64 v2; // rbx
  unsigned int v5; // ebp
  unsigned __int64 AvailablePagesBelowPriority; // r14
  __int64 v7; // rcx
  unsigned int StandbyRepurposed; // eax
  int v9; // r11d
  unsigned int v10; // ecx
  unsigned int v11; // r10d
  int v12; // edx
  unsigned int v13; // eax
  bool v14; // cf
  unsigned __int64 v15; // rcx
  unsigned __int8 v16; // r12
  unsigned int v17; // r9d
  unsigned __int64 v18; // r8
  unsigned __int64 v19; // rsi
  __int64 v20; // rdx
  int v21; // edx
  unsigned __int64 v22; // r10
  unsigned __int64 v23; // rax
  __int64 v24; // rcx
  int v25; // eax
  unsigned __int64 v26; // r10
  int v27; // r11d
  int v28; // r13d
  unsigned int v29; // ecx
  unsigned __int64 v30; // rax
  unsigned __int8 v31; // si
  unsigned __int64 v32; // rcx
  unsigned __int16 v33; // ax
  unsigned __int64 v34; // rax
  __int16 v36; // ax
  unsigned __int64 v37; // rax
  unsigned __int64 v38; // rax
  unsigned __int64 v39; // rcx
  unsigned __int64 v40; // rcx
  __int64 v41; // rcx
  unsigned __int64 v42; // rax
  unsigned __int64 v43; // rcx
  unsigned __int64 v44; // rax
  __int64 v45; // rcx
  int v46; // [rsp+60h] [rbp+8h]
  unsigned int v47; // [rsp+70h] [rbp+18h]
  unsigned __int64 v48; // [rsp+78h] [rbp+20h]

  v2 = a1[856];
  v46 = 0;
  v5 = *(_DWORD *)(v2 + 40);
  AvailablePagesBelowPriority = MiGetAvailablePagesBelowPriority(a1, 6LL);
  StandbyRepurposed = MiGetStandbyRepurposed(v7, 1LL);
  v10 = *(_DWORD *)(v2 + 44);
  v11 = StandbyRepurposed;
  v12 = *(_DWORD *)(v2 + 120);
  v13 = StandbyRepurposed - v10;
  v14 = v10 < v11;
  *(_DWORD *)(v2 + 44) = v11;
  v15 = *(_QWORD *)(v2 + 2400);
  v16 = 0;
  v17 = v14 ? v13 : 0;
  v18 = v15 - AvailablePagesBelowPriority;
  v47 = v17;
  v19 = 0LL;
  if ( AvailablePagesBelowPriority > v15 )
    v18 = AvailablePagesBelowPriority - v15;
  v20 = v12 & 7;
  *(_QWORD *)(v2 + 2200) += (v18 >> 3) - (*(_QWORD *)(v2 + 8 * v20 + 2208) >> 3);
  *(_QWORD *)(v2 + 8 * v20 + 2208) = v18;
  if ( *(_DWORD *)(v2 + 80) == 4 && *(_WORD *)(v2 + 2348) && *(_BYTE *)(v2 + 2350) && *(_BYTE *)(v2 + 2351) )
  {
    v21 = v9;
  }
  else
  {
    v21 = 1;
    v9 = AvailablePagesBelowPriority <= 0x120;
  }
  v22 = *(_QWORD *)(v2 + 2400);
  v23 = v22;
  if ( v9 == v21 )
  {
    v24 = 0LL;
  }
  else
  {
    v9 = 0;
    v24 = AvailablePagesBelowPriority - *(_QWORD *)(v2 + 2368);
    v23 = v22 >> 2;
  }
  if ( AvailablePagesBelowPriority < v23 )
  {
    v37 = v22 - v24;
  }
  else
  {
    if ( AvailablePagesBelowPriority >= 4 * v22 )
      goto LABEL_9;
    if ( v24 >= 0 )
      goto LABEL_9;
    v37 = v22 - v24;
    if ( AvailablePagesBelowPriority >= v22 - v24 )
      goto LABEL_9;
  }
  v19 = *(_QWORD *)(v2 + 2384);
  v38 = v37 - AvailablePagesBelowPriority;
  v16 = v21;
  if ( v38 <= v19 )
    v19 = v38;
LABEL_9:
  v48 = v17;
  if ( v17 >= AvailablePagesBelowPriority >> 2 )
  {
    v39 = v17 - (AvailablePagesBelowPriority >> 2);
    if ( v39 > v19 && v19 < 0x2000 && !v9 )
    {
      v19 = v17 - (AvailablePagesBelowPriority >> 2);
      v16 = 3;
      if ( v39 > 0x2000 )
        v19 = 0x2000LL;
    }
  }
  v25 = MiGetStandbyRepurposed(a1, 4LL);
  v28 = v25;
  if ( v19 )
  {
    if ( v19 < 0x1000 && !v27 )
      v19 = 4096LL;
  }
  else if ( !v27 )
  {
    v29 = v25 - *(_DWORD *)(v2 + 48);
    if ( v29 > 0x20000 )
    {
      v40 = a1[888];
      if ( v40 >= 0x100000 || v40 >= a1[866] >> 2 )
      {
        *(_DWORD *)(v2 + 48) = v25;
      }
      else
      {
        v19 = 0x8000LL;
        v16 = 2;
      }
    }
    else if ( v47 && v29 > 0x18000 && *(_QWORD *)(v2 + 2408) < 0x20000uLL )
    {
      v46 = 1;
    }
  }
  if ( AvailablePagesBelowPriority < 4 * v26 )
  {
    v41 = *(_QWORD *)(v2 + 2200);
    v42 = 4 * v41;
    if ( 4 * v41 >= v26 )
    {
      v44 = 2 * v41;
      if ( 2 * v41 <= v26 )
        goto LABEL_17;
      v43 = *(_QWORD *)(v2 + 2384);
      *(_QWORD *)(v2 + 2400) = v44;
      if ( v44 <= v43 )
        goto LABEL_17;
    }
    else
    {
      v43 = *(_QWORD *)(v2 + 2376);
      *(_QWORD *)(v2 + 2400) = v42;
      if ( v42 >= v43 )
        goto LABEL_17;
    }
    *(_QWORD *)(v2 + 2400) = v43;
    goto LABEL_17;
  }
  if ( AvailablePagesBelowPriority > 16 * v26 )
    *(_QWORD *)(v2 + 2400) = *(_QWORD *)(v2 + 2392);
LABEL_17:
  *(_QWORD *)(v2 + 2368) = AvailablePagesBelowPriority;
  if ( !v19 )
  {
    v30 = *(_QWORD *)(v2 + 2360);
    v31 = 0;
    if ( v30 )
    {
      if ( v30 > *(_QWORD *)(v2 + 2408) )
      {
        v32 = v48;
        v31 = 10;
        if ( *(_WORD *)(v2 + 2346) < 0xFAu )
          *(_WORD *)(v2 + 2346) = 250;
        goto LABEL_24;
      }
      *(_QWORD *)(v2 + 2360) = 0LL;
    }
    if ( *(_QWORD *)(v2 + 2408) >= (unsigned __int64)(4LL * *(_QWORD *)(v2 + 2384)) )
      goto LABEL_47;
    if ( !*(_WORD *)(v2 + 2346) )
      goto LABEL_21;
    v36 = MiComputeAgeDistribution((__int64)a1, 1);
    *(_WORD *)(v2 + 2346) = v36;
    if ( v36 )
      v31 = 11;
    if ( v31 )
    {
LABEL_47:
      v32 = v48;
    }
    else
    {
LABEL_21:
      v32 = v48;
      if ( v48 >= AvailablePagesBelowPriority >> 4 )
      {
        v31 = 9;
      }
      else if ( v46 == 1 )
      {
        v31 = 8;
      }
    }
LABEL_24:
    v33 = *(_WORD *)(v2 + 2348);
    if ( v33 )
    {
      if ( *(_WORD *)(v2 + 2346) < v33 )
        *(_WORD *)(v2 + 2346) = v33;
      if ( !v31 )
      {
        v31 = 12;
        *(_WORD *)(v2 + 2346) = v33;
      }
    }
    *(_BYTE *)a2 = 0;
    *(_QWORD *)(a2 + 96) = 0LL;
    *(_QWORD *)(a2 + 80) = 0LL;
    *(_QWORD *)(a2 + 72) = a1[888];
    *(_QWORD *)(a2 + 104) = 0LL;
    *(_BYTE *)(a2 + 2) = v31;
    *(_OWORD *)(a2 + 8) = 0LL;
    *(_OWORD *)(a2 + 24) = 0LL;
    *(_OWORD *)(a2 + 40) = 0LL;
    *(_OWORD *)(a2 + 56) = 0LL;
    if ( v31 )
    {
      ++*(_DWORD *)(v2 + 4LL * v31 + 2488);
      v5 |= 2u;
    }
    else if ( *(_BYTE *)(v2 + 55) == 1 )
    {
      v5 |= 0x80u;
      *(_WORD *)(v2 + 2346) = 10;
    }
    else if ( !v5 )
    {
      v5 = 64;
    }
    goto LABEL_31;
  }
  MiPulseLowAvailableEvent(a1, 1LL, 0LL);
  if ( (unsigned __int8)(v16 - 2) <= 1u )
    *(_QWORD *)(v2 + 2360) = v19;
  *(_QWORD *)(a2 + 80) = v19;
  *(_BYTE *)a2 = 0;
  *(_QWORD *)(a2 + 96) = 0LL;
  v5 |= 1u;
  v45 = a1[888];
  *(_QWORD *)(a2 + 104) = 0LL;
  *(_QWORD *)(a2 + 72) = v19 + v45;
  v32 = v48;
  *(_BYTE *)(a2 + 2) = v16;
  *(_OWORD *)(a2 + 8) = 0LL;
  *(_OWORD *)(a2 + 24) = 0LL;
  *(_OWORD *)(a2 + 40) = 0LL;
  *(_OWORD *)(a2 + 56) = 0LL;
  *(_DWORD *)(v2 + 48) = v28;
  ++*(_DWORD *)(v2 + 4LL * v16 + 2488);
LABEL_31:
  if ( AvailablePagesBelowPriority && v32 < AvailablePagesBelowPriority )
    v34 = 100 * v47 / AvailablePagesBelowPriority;
  else
    LOBYTE(v34) = 100;
  *(_BYTE *)(a2 + 3) = v34;
  if ( (v5 & 1) == 0 )
    *(_BYTE *)(a2 + 4) = 1;
  return v5;
}
