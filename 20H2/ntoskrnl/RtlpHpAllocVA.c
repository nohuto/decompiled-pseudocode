/*
 * XREFs of RtlpHpAllocVA @ 0x1402CB9B8
 * Callers:
 *     RtlpHpSegMgrCommit @ 0x1402CD6D0 (RtlpHpSegMgrCommit.c)
 *     RtlpHpSegMgrReserve @ 0x14030801C (RtlpHpSegMgrReserve.c)
 *     RtlpHpLargeAlloc @ 0x140308ADC (RtlpHpLargeAlloc.c)
 *     RtlpHpHeapExtendContext @ 0x14032C0CC (RtlpHpHeapExtendContext.c)
 *     RtlpHpHeapAllocate @ 0x14037B660 (RtlpHpHeapAllocate.c)
 * Callees:
 *     RtlpHpEnvAllocVA @ 0x1402CB4C8 (RtlpHpEnvAllocVA.c)
 *     RtlpHpEnvGetHeapManager @ 0x1402CEE38 (RtlpHpEnvGetHeapManager.c)
 *     RtlpHpVaMgrCtxAlloc @ 0x140307164 (RtlpHpVaMgrCtxAlloc.c)
 *     __security_check_cookie @ 0x1403CFAF0 (__security_check_cookie.c)
 *     memset @ 0x140411300 (memset.c)
 */

__int64 __fastcall RtlpHpAllocVA(void **a1, size_t *a2, __int64 a3, int a4, int a5, __int128 *a6)
{
  unsigned int v8; // r11d
  size_t v9; // r8
  size_t v10; // r8
  unsigned int v11; // r9d
  __int64 result; // rax
  __int64 HeapManager; // rax
  __int64 v14; // r10
  size_t v15; // rcx
  __int64 v16; // rcx
  __int64 v17; // rdx
  __int64 v18; // [rsp+38h] [rbp-31h]
  __int128 v19; // [rsp+50h] [rbp-19h]
  _DWORD v20[3]; // [rsp+60h] [rbp-9h] BYREF
  int v21; // [rsp+6Ch] [rbp+3h]
  __int64 v22; // [rsp+70h] [rbp+7h]
  __int128 v23; // [rsp+80h] [rbp+17h] BYREF

  *(_QWORD *)&v23 = 0x100000001000LL;
  *((_QWORD *)&v23 + 1) = 0x4000000000200000LL;
  v8 = a4 & 0xFEFFFFFF;
  v19 = *a6;
  if ( (a4 & 0xFEFFFFFF) == 0x2000 && (a4 & 0x1000000) == 0 )
  {
    v23 = *a6;
    HeapManager = RtlpHpEnvGetHeapManager(&v23, 0x2000LL);
    v21 = 0;
    if ( BYTE3(v19) )
      v20[0] = BYTE3(v19) - 1;
    else
      v20[0] = -1;
    v20[1] = BYTE1(v19);
    v20[2] = BYTE2(v19);
    if ( (v19 & 8) != 0 )
      v21 = 1;
    v15 = *a2;
    v22 = *((_QWORD *)&v19 + 1);
    *(_QWORD *)&v23 = v15 - ((v15 - 1) & 0xFFFFF) + 0xFFFFF;
    v16 = RtlpHpVaMgrCtxAlloc(HeapManager + 88, &v23, v14, v20);
    if ( !v16 )
      return 3221225626LL;
    *a2 = v23;
    *a1 = (void *)v16;
    return 0LL;
  }
  v9 = *a2;
  if ( (a4 & 0x2000) != 0 )
  {
    v17 = *((unsigned int *)&v23 + BYTE1(v19));
    v10 = v17 - ((v9 + v17 - 1) & (unsigned int)(v17 - 1)) + v9 - 1;
  }
  else
  {
    v10 = v9 - ((v9 - 1) & 0xFFF) + 4095;
  }
  *(_QWORD *)&v23 = v10;
  if ( (a4 & 0x1000) != 0 && BYTE1(v19) >= 2u )
  {
    *a2 = v10;
    if ( (a4 & 0x40000000) != 0 )
      memset(*a1, 0, v10);
    return 0LL;
  }
  v11 = a4 & 0xFEFBFFFF | 0x40000;
  if ( (((unsigned __int8)v19 >> 3) & ((v8 & 0x2000) != 0)) == 0 )
    v11 = v8;
  result = RtlpHpEnvAllocVA(
             (__int64 *)a1,
             (__int64 *)&v23,
             0LL,
             v11,
             a5,
             ((unsigned __int8)v19 >> 1) & 3,
             BYTE1(v19),
             v18,
             BYTE2(v19));
  if ( (int)result >= 0 )
  {
    *a2 = v23;
    return 0LL;
  }
  return result;
}
