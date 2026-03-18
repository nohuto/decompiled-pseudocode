/*
 * XREFs of SepCaptureHandles @ 0x14032D7BC
 * Callers:
 *     NtCreateLowBoxToken @ 0x1406FB890 (NtCreateLowBoxToken.c)
 * Callees:
 *     ExAllocatePoolWithTag @ 0x1409B7010 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x1409B70B0 (ExFreePoolWithTag.c)
 */

__int64 __fastcall SepCaptureHandles(unsigned int a1, __int64 a2, _QWORD *a3)
{
  _QWORD *PoolWithTag; // r8
  __int64 i; // rdx

  *a3 = 0LL;
  if ( a1 > 0xA )
    return 3221225711LL;
  if ( !a1 )
    return 0LL;
  PoolWithTag = ExAllocatePoolWithTag(PagedPool, 8LL * a1, 0x63486553u);
  if ( !PoolWithTag )
    return 3221225626LL;
  for ( i = 0LL; (unsigned int)i < a1; i = (unsigned int)(i + 1) )
    PoolWithTag[i] = *(_QWORD *)(a2 + 8 * i);
  *a3 = PoolWithTag;
  return 0LL;
}
