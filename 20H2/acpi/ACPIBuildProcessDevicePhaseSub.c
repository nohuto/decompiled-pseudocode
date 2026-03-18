/*
 * XREFs of ACPIBuildProcessDevicePhaseSub @ 0x1C0015A90
 * Callers:
 *     <none>
 * Callees:
 *     ACPIGet @ 0x1C0003AB0 (ACPIGet.c)
 *     AMLIDereferenceHandleEx @ 0x1C000B8AC (AMLIDereferenceHandleEx.c)
 *     ACPIBuildCompleteMustSucceed @ 0x1C0015B20 (ACPIBuildCompleteMustSucceed.c)
 *     AMLIGetNamedChild @ 0x1C0020AF0 (AMLIGetNamedChild.c)
 */

__int64 __fastcall ACPIBuildProcessDevicePhaseSub(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  unsigned int v4; // edi
  __int64 v5; // rsi
  __int64 v7; // rax
  __int64 v8; // rbp

  v4 = 0;
  v5 = *(_QWORD *)(a1 + 40);
  if ( (*(_DWORD *)(a1 + 20) & 0x20) != 0 )
  {
    *(_DWORD *)(a1 + 32) = 16;
  }
  else
  {
    v7 = AMLIGetNamedChild(*(_QWORD *)(v5 + 720), 1112888159LL, a3, a4);
    *(_DWORD *)(a1 + 32) = 11;
    v8 = v7;
    if ( v7 )
    {
      if ( (*(_BYTE *)(v5 + 960) & 0x10) != 0 )
      {
        strnlen(*(const char **)(v5 + 584), 9uLL);
        AMLIDereferenceHandleEx(v8);
      }
      else
      {
        AMLIDereferenceHandleEx(v7);
        _InterlockedOr64((volatile signed __int64 *)(v5 + 960), 0x10uLL);
        *(_DWORD *)(a1 + 32) = 10;
        v4 = ACPIGet(
               (__int64 *)v5,
               1112888159,
               671612932,
               0LL,
               0,
               (__int64)ACPIBuildCompleteMustSucceed,
               a1,
               v5 + 584,
               0LL);
      }
      if ( v4 == 259 )
        return 0;
    }
  }
  ACPIBuildCompleteMustSucceed(0LL);
  return v4;
}
