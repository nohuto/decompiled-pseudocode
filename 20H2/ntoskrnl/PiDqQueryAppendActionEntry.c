/*
 * XREFs of PiDqQueryAppendActionEntry @ 0x140645B50
 * Callers:
 *     PiDqQueryEnumObject @ 0x140641DA4 (PiDqQueryEnumObject.c)
 *     PiDqObjectManagerEnumerateAndRegisterQuery @ 0x140646A00 (PiDqObjectManagerEnumerateAndRegisterQuery.c)
 *     PiDqQueryApplyObjectEvent @ 0x14075EE34 (PiDqQueryApplyObjectEvent.c)
 * Callees:
 *     PiDqGetPnpObjectType @ 0x140641640 (PiDqGetPnpObjectType.c)
 *     PiDqQueryFreeActiveData @ 0x1406D806C (PiDqQueryFreeActiveData.c)
 *     PiDmGetObjectCount @ 0x1408A5EBC (PiDmGetObjectCount.c)
 */

__int64 __fastcall PiDqQueryAppendActionEntry(__int64 a1, __int64 *a2)
{
  __int64 result; // rax
  __int64 **v4; // rcx
  unsigned int PnpObjectType; // eax

  result = a1 + 192;
  v4 = *(__int64 ***)(a1 + 200);
  if ( *v4 != (__int64 *)result )
    __fastfail(3u);
  *a2 = result;
  a2[1] = (__int64)v4;
  *v4 = a2;
  *(_QWORD *)(result + 8) = a2;
  if ( ++*(_DWORD *)(a1 + 208) > 0x3E8u )
  {
    PnpObjectType = PiDqGetPnpObjectType(*(_DWORD *)(*(_QWORD *)(a1 + 24) + 16LL));
    result = 2 * (unsigned int)PiDmGetObjectCount(PnpObjectType);
    if ( *(_DWORD *)(a1 + 208) > (unsigned int)result )
    {
      *(_DWORD *)(a1 + 216) |= 1u;
      return PiDqQueryFreeActiveData(a1);
    }
  }
  return result;
}
