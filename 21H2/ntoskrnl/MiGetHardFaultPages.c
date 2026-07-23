/*
 * XREFs of MiGetHardFaultPages @ 0x1402990D4
 * Callers:
 *     MiBuildMdlForMappedFileFault @ 0x1402E2620 (MiBuildMdlForMappedFileFault.c)
 * Callees:
 *     MiRetainSubsection @ 0x140247E44 (MiRetainSubsection.c)
 *     MiGetAvailablePagesBelowPriority @ 0x14025F8BC (MiGetAvailablePagesBelowPriority.c)
 *     MiGetSlabPage @ 0x14029938C (MiGetSlabPage.c)
 *     MiGetPageChain @ 0x1402B7610 (MiGetPageChain.c)
 *     MiProtectionToCacheAttribute @ 0x1402E6690 (MiProtectionToCacheAttribute.c)
 *     MiSetPfnBlink @ 0x140322E80 (MiSetPfnBlink.c)
 *     MiUseSlabAllocator @ 0x140322EE8 (MiUseSlabAllocator.c)
 */

unsigned __int64 __fastcall MiGetHardFaultPages(
        __int64 *a1,
        unsigned __int64 a2,
        _QWORD *a3,
        __int64 a4,
        _QWORD *a5,
        __int64 a6,
        __int64 a7)
{
  __int64 v8; // rsi
  _QWORD *v9; // r11
  __int64 v11; // r15
  __int64 v12; // r10
  unsigned int v13; // r14d
  unsigned __int64 result; // rax
  int v15; // r11d
  _QWORD *v16; // r13
  unsigned __int64 v17; // rdx
  int v18; // eax
  int v19; // r8d
  int v20; // r11d
  __int64 v21; // rax
  __int64 v22; // rbx
  __int64 v23; // rcx
  __int64 *v24; // rcx
  int v25; // [rsp+80h] [rbp+8h] BYREF
  _QWORD *v26; // [rsp+90h] [rbp+18h]
  unsigned __int64 v27; // [rsp+98h] [rbp+20h]

  v26 = a3;
  v25 = 0;
  v8 = *a1;
  v9 = a3;
  if ( *a1 )
  {
    v11 = (v8 + 0x58000000000LL) / 48;
    while ( 1 )
    {
      v21 = *(_QWORD *)(v8 + 24) & 0xFFFFFFFFFLL;
      if ( v21 == 0xFFFFFFFFFLL )
        break;
      v8 = 48 * v21 - 0x58000000000LL;
    }
  }
  else
  {
    v11 = 0xFFFFFFFFFLL;
  }
  v12 = *(_QWORD *)(a6 + 208);
  v13 = (*(unsigned __int16 *)(v12 + 32) >> 1) & 0x1F;
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
  result = MiUseSlabAllocator(v9, v12, a7, &v25);
  v16 = a5;
  if ( (_DWORD)result && a1[1] < a2 )
  {
    while ( 1 )
    {
      result = MiGetSlabPage(v15, v13, v25, (int)v16 + 120, 0);
      v27 = result;
      if ( result == -1LL )
        break;
      v22 = 48 * result - 0x58000000000LL;
      MiSetPfnBlink(v22, v11, 0LL);
      result = v22;
      v11 = v27;
      v15 = (int)v26;
      if ( *a1 )
        result = v8;
      ++a1[1];
      v8 = result;
      *a1 = v22;
      if ( a1[1] >= a2 )
        goto LABEL_5;
    }
    if ( v16[15] )
    {
      v23 = a6;
      v16[16] = a2 - a1[1];
      v24 = *(__int64 **)(v23 + 208);
      v16[13] = v24;
      result = MiRetainSubsection(v24);
      a2 = a1[1];
    }
  }
LABEL_5:
  v17 = a1[1];
  if ( v17 < a2 )
  {
    a6 = a2 - v17;
    v18 = MiProtectionToCacheAttribute(v13);
    result = MiGetPageChain(v20, v16[7], v19, v18, 0, -1LL, (__int64)&a6);
    if ( result )
    {
      if ( *a1 )
        MiSetPfnBlink(v8, (__int64)(result + 0x58000000000LL) / 48, 0LL);
      else
        *a1 = result;
      result = (unsigned int)a6;
      a1[1] += (unsigned int)a6;
    }
  }
  return result;
}
