/*
 * XREFs of ACPIBuildProcessDevicePhaseUidOrHid @ 0x1C002BDB0
 * Callers:
 *     <none>
 * Callees:
 *     ACPIGet @ 0x1C0003E70 (ACPIGet.c)
 *     AMLIDereferenceHandleEx @ 0x1C000BC6C (AMLIDereferenceHandleEx.c)
 *     ACPIBuildCompleteMustSucceed @ 0x1C0015D80 (ACPIBuildCompleteMustSucceed.c)
 *     AMLIGetNamedChild @ 0x1C0020D50 (AMLIGetNamedChild.c)
 */

__int64 __fastcall ACPIBuildProcessDevicePhaseUidOrHid(__int64 a1)
{
  __int64 v1; // r14
  int v3; // esi
  __int64 *v4; // rdi
  __int64 *v5; // rbp
  __int64 v6; // rcx
  __int64 v7; // rax
  int v8; // r8d
  int v9; // eax
  unsigned int v10; // edi
  __int64 v12; // rcx

  v1 = *(_QWORD *)(a1 + 40);
  v3 = 1145656671;
  v4 = AMLIGetNamedChild(*(__int64 **)(v1 + 720), 1145653343);
  v5 = AMLIGetNamedChild(*(__int64 **)(v1 + 720), 1145656671);
  if ( v5 )
  {
    AMLIDereferenceHandleEx((__int64)v4);
    v6 = *(_QWORD *)(a1 + 56);
    *(_DWORD *)(a1 + 32) = 8;
    if ( v6 )
      AMLIDereferenceHandleEx(v6);
    v7 = 576LL;
    v8 = 671613062;
  }
  else
  {
    v12 = *(_QWORD *)(a1 + 56);
    *(_DWORD *)(a1 + 32) = 7;
    if ( v12 )
      AMLIDereferenceHandleEx(v12);
    v3 = 1145653343;
    v7 = 568LL;
    v8 = 671612966;
    v5 = v4;
  }
  *(_QWORD *)(a1 + 56) = v5;
  v9 = ACPIGet((__int64 *)v1, v3, v8, 0LL, 0, (__int64)ACPIBuildCompleteMustSucceed, a1, v1 + v7, 0LL);
  v10 = v9;
  if ( v9 == 259 )
    return 0;
  else
    ACPIBuildCompleteMustSucceed(0LL, v9, 0LL, a1);
  return v10;
}
