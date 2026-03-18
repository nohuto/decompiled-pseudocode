/*
 * XREFs of MiGetHardFaultPages @ 0x140232AB4
 * Callers:
 *     MiBuildMdlForMappedFileFault @ 0x14029C170 (MiBuildMdlForMappedFileFault.c)
 * Callees:
 *     MiSetPfnBlink @ 0x140230190 (MiSetPfnBlink.c)
 *     MiUseSlabAllocator @ 0x1402301F8 (MiUseSlabAllocator.c)
 *     MiGetPageChain @ 0x140274030 (MiGetPageChain.c)
 *     MiProtectionToCacheAttribute @ 0x14028E480 (MiProtectionToCacheAttribute.c)
 *     MiRetainSubsection @ 0x140328334 (MiRetainSubsection.c)
 *     MiGetAvailablePagesBelowPriority @ 0x1403328E8 (MiGetAvailablePagesBelowPriority.c)
 *     MiGetSlabPage @ 0x140332E88 (MiGetSlabPage.c)
 */

unsigned __int64 __fastcall MiGetHardFaultPages(
        __int64 *a1,
        unsigned __int64 a2,
        __int64 a3,
        __int64 a4,
        _QWORD *a5,
        __int64 a6,
        __int64 a7,
        __int64 a8)
{
  __int64 v9; // rsi
  __int64 v10; // r11
  __int64 v12; // r15
  __int64 v13; // r10
  unsigned int v14; // r14d
  unsigned __int64 result; // rax
  int v16; // r11d
  _QWORD *v17; // r13
  unsigned __int64 v18; // rdx
  int v19; // eax
  int v20; // r8d
  int v21; // r11d
  __int64 v22; // rax
  __int64 v23; // rbx
  __int64 v24; // rcx
  ULONG_PTR v25; // rcx
  int v26; // [rsp+80h] [rbp+8h] BYREF
  __int64 v27; // [rsp+90h] [rbp+18h]
  unsigned __int64 v28; // [rsp+98h] [rbp+20h]

  v27 = a3;
  v26 = 0;
  v9 = *a1;
  v10 = a3;
  if ( *a1 )
  {
    v12 = (v9 + 0x58000000000LL) / 48;
    while ( 1 )
    {
      v22 = *(_QWORD *)(v9 + 24) & 0xFFFFFFFFFLL;
      if ( v22 == 0xFFFFFFFFFLL )
        break;
      v9 = 48 * v22 - 0x58000000000LL;
    }
  }
  else
  {
    v12 = 0xFFFFFFFFFLL;
  }
  v13 = *(_QWORD *)(a6 + 208);
  v14 = (*(unsigned __int16 *)(v13 + 32) >> 1) & 0x1F;
  if ( a4 )
  {
    if ( *(_BYTE *)a4 == 1 )
    {
      result = MiGetAvailablePagesBelowPriority(a3, ((*(_DWORD *)(a4 + 80) >> 3) & 7u) + 1);
      if ( a2 > result )
      {
        if ( !result )
          return result;
        a2 = result;
      }
    }
  }
  result = MiUseSlabAllocator(v10, (_BYTE *)v13, a7, &v26);
  v17 = a5;
  if ( (_DWORD)result && a1[1] < a2 )
  {
    while ( 1 )
    {
      result = MiGetSlabPage(v16, v14, v26, (int)v17 + 120, 0);
      v28 = result;
      if ( result == -1LL )
        break;
      v23 = 48 * result - 0x58000000000LL;
      MiSetPfnBlink(v23, v12, 0);
      result = v23;
      v12 = v28;
      v16 = v27;
      if ( *a1 )
        result = v9;
      ++a1[1];
      v9 = result;
      *a1 = v23;
      if ( a1[1] >= a2 )
        goto LABEL_5;
    }
    if ( v17[15] )
    {
      v24 = a6;
      v17[16] = a2 - a1[1];
      v25 = *(_QWORD *)(v24 + 208);
      v17[13] = v25;
      result = MiRetainSubsection(v25);
      a2 = a1[1];
    }
  }
LABEL_5:
  v18 = a1[1];
  if ( v18 < a2 )
  {
    a6 = a2 - v18;
    v19 = MiProtectionToCacheAttribute(v14, v18, (unsigned int)((*(_DWORD *)(a8 + 12) >> byte_140C4DD0C) + 1));
    result = MiGetPageChain(v21, v17[7], v20, v19, 0, -1LL, (__int64)&a6);
    if ( result )
    {
      if ( *a1 )
        MiSetPfnBlink(v9, (__int64)(result + 0x58000000000LL) / 48, 0);
      else
        *a1 = result;
      result = (unsigned int)a6;
      a1[1] += (unsigned int)a6;
    }
  }
  return result;
}
