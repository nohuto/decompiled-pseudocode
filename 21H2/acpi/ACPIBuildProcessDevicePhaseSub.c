/*
 * XREFs of ACPIBuildProcessDevicePhaseSub @ 0x1C000A160
 * Callers:
 *     <none>
 * Callees:
 *     ACPIBuildCompleteMustSucceed @ 0x1C000A4C0 (ACPIBuildCompleteMustSucceed.c)
 *     AMLIGetNamedChild @ 0x1C000B060 (AMLIGetNamedChild.c)
 *     AMLIDereferenceHandleEx @ 0x1C000B860 (AMLIDereferenceHandleEx.c)
 *     ACPIGet @ 0x1C0010180 (ACPIGet.c)
 */

__int64 __fastcall ACPIBuildProcessDevicePhaseSub(__int64 a1)
{
  unsigned int v1; // edi
  __int64 v2; // rsi
  __int64 v4; // rax
  __int64 v5; // rbp

  v1 = 0;
  v2 = *(_QWORD *)(a1 + 40);
  if ( (*(_DWORD *)(a1 + 20) & 0x20) != 0 )
  {
    *(_DWORD *)(a1 + 32) = 16;
  }
  else
  {
    v4 = AMLIGetNamedChild(*(_QWORD *)(v2 + 760), 1112888159LL);
    *(_DWORD *)(a1 + 32) = 11;
    v5 = v4;
    if ( v4 )
    {
      if ( (*(_BYTE *)(v2 + 1000) & 0x10) != 0 )
      {
        strnlen(*(const char **)(v2 + 624), 9uLL);
        AMLIDereferenceHandleEx(v5);
      }
      else
      {
        AMLIDereferenceHandleEx(v4);
        _InterlockedOr64((volatile signed __int64 *)(v2 + 1000), 0x10uLL);
        *(_DWORD *)(a1 + 32) = 10;
        v1 = ACPIGet(v2, 1112888159, 671612932, 0, 0, (__int64)ACPIBuildCompleteMustSucceed, a1, v2 + 624, 0LL);
        if ( v1 == 259 )
          return 0;
      }
    }
  }
  ACPIBuildCompleteMustSucceed(0LL);
  return v1;
}
