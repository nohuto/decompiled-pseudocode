/*
 * XREFs of MiDoGangAssignment @ 0x1405603B0
 * Callers:
 *     MiDpcGangTarget @ 0x140560560 (MiDpcGangTarget.c)
 *     MiStartDpcGang @ 0x1405608EC (MiStartDpcGang.c)
 * Callees:
 *     KeShouldYieldProcessor @ 0x140211F40 (KeShouldYieldProcessor.c)
 *     MiInitializeUnusablePfns @ 0x1403B1150 (MiInitializeUnusablePfns.c)
 *     KeBugCheckEx @ 0x1403FE0D0 (KeBugCheckEx.c)
 *     KeZeroPages @ 0x140402F90 (KeZeroPages.c)
 *     RtlCompareMemoryUlong @ 0x140408410 (RtlCompareMemoryUlong.c)
 *     memset @ 0x140414300 (memset.c)
 *     MiInitializeLargeMdlLeafPfns @ 0x140534228 (MiInitializeLargeMdlLeafPfns.c)
 */

void __fastcall MiDoGangAssignment(__int64 a1, ULONG_PTR **a2)
{
  int v3; // ecx
  unsigned __int64 *v4; // rbx
  __int16 v5; // r13
  ULONG_PTR *v6; // r15
  __m128i *v7; // rbx
  unsigned __int64 v8; // r12
  unsigned __int64 v9; // rdi
  int v10; // eax
  SIZE_T v11; // rax
  bool v12; // zf

  v3 = *(_DWORD *)(a1 + 184);
  if ( (v3 & 1) != 0 )
  {
    if ( (v3 & 4) != 0 )
      v5 = **(_WORD **)(a1 + 168);
    else
      v5 = 0;
    v6 = *a2;
    if ( (v3 & 0x38) != 0 )
    {
      v8 = 512LL;
      v7 = (__m128i *)(*(_QWORD *)(a1 + 160) + ((*v6 - *(_QWORD *)a1) << 12));
    }
    else
    {
      v7 = 0LL;
      v8 = 0x4000LL;
    }
    while ( 1 )
    {
      v9 = v6[1];
      if ( !v9 )
        break;
      if ( v8 <= v9 )
        v9 = v8;
      if ( v7 )
      {
        v10 = *(_DWORD *)(a1 + 184);
        if ( (v10 & 8) != 0 )
        {
          KeZeroPages(v7, v9 << 12);
        }
        else if ( (v10 & 0x10) != 0 )
        {
          memset(v7, -1, v9 << 12);
        }
        else if ( (v10 & 0x20) != 0 )
        {
          v11 = RtlCompareMemoryUlong(v7, v9 << 12, 0);
          if ( v11 != v9 << 12 )
            KeBugCheckEx(0x127u, (ULONG_PTR)v7, *v6, v11, v9 << 12);
        }
      }
      if ( (*(_DWORD *)(a1 + 184) & 4) != 0 )
        MiInitializeUnusablePfns((__m128i *)(48 * *v6 - 0x58000000000LL), v9, v5, *(_DWORD *)(a1 + 180), 0LL, 0LL, 0);
      v12 = v6[1] == v9;
      v6[1] -= v9;
      if ( v12 )
        break;
      *v6 += v9;
      if ( KeShouldYieldProcessor() )
        goto LABEL_4;
      if ( v7 )
        v7 += 256 * v9;
    }
  }
  else
  {
    v4 = *a2;
    if ( **a2 )
    {
      MiInitializeLargeMdlLeafPfns(v4, *(_QWORD *)a1);
      if ( *v4 )
LABEL_4:
        *(_DWORD *)(a1 + 196) = 1;
    }
  }
}
