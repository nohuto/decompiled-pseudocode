/*
 * XREFs of PiDqQueryAppendActionEntry @ 0x1406A08C8
 * Callers:
 *     PiDqObjectManagerEnumerateAndRegisterQuery @ 0x1406A055C (PiDqObjectManagerEnumerateAndRegisterQuery.c)
 *     PiDqQueryEnumObject @ 0x1406A5AF4 (PiDqQueryEnumObject.c)
 *     PiDqQueryApplyObjectEvent @ 0x14074BE34 (PiDqQueryApplyObjectEvent.c)
 * Callees:
 *     PiDqQueryFreeActiveData @ 0x1406A03F4 (PiDqQueryFreeActiveData.c)
 *     PiDqGetPnpObjectType @ 0x1406ABCF0 (PiDqGetPnpObjectType.c)
 *     PiDmGetObjectCount @ 0x14089F06C (PiDmGetObjectCount.c)
 */

char __fastcall PiDqQueryAppendActionEntry(__int64 a1, __int64 *a2)
{
  __int64 v2; // rax
  __int64 **v4; // rcx
  unsigned int PnpObjectType; // eax

  v2 = a1 + 192;
  v4 = *(__int64 ***)(a1 + 200);
  if ( *v4 != (__int64 *)v2 )
    __fastfail(3u);
  *a2 = v2;
  a2[1] = (__int64)v4;
  *v4 = a2;
  *(_QWORD *)(v2 + 8) = a2;
  if ( ++*(_DWORD *)(a1 + 208) > 0x3E8u )
  {
    PnpObjectType = PiDqGetPnpObjectType(*(unsigned int *)(*(_QWORD *)(a1 + 24) + 16LL));
    LODWORD(v2) = 2 * PiDmGetObjectCount(PnpObjectType);
    if ( *(_DWORD *)(a1 + 208) > (unsigned int)v2 )
    {
      *(_DWORD *)(a1 + 216) |= 1u;
      LOBYTE(v2) = PiDqQueryFreeActiveData(a1);
    }
  }
  return v2;
}
