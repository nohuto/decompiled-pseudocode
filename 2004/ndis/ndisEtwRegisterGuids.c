/*
 * XREFs of ndisEtwRegisterGuids @ 0x1C00321D0
 * Callers:
 *     ndisDriverSystemDispatch @ 0x1C00320D0 (ndisDriverSystemDispatch.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C0008A74 (WPP_RECORDER_SF_.c)
 *     WPP_RECORDER_SF_d @ 0x1C001914C (WPP_RECORDER_SF_d.c)
 *     memmove @ 0x1C003FB80 (memmove.c)
 *     memset @ 0x1C003FE40 (memset.c)
 */

__int64 __fastcall ndisEtwRegisterGuids(char *a1, unsigned int a2, unsigned int *a3)
{
  int Length; // r14d
  unsigned int v7; // edi
  GUID v8; // xmm0
  char *v9; // rcx
  __int64 result; // rax
  int v11; // [rsp+28h] [rbp-20h]

  if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      1u,
      0xAu,
      (struct _GUID *)&WPP_25837d708393386fa8b5b40a61d84122_Traceguids);
  if ( !a3 || !a1 || a2 < 4 )
    return 3221225485LL;
  Length = ndisRegistryPath.Length;
  v7 = ndisRegistryPath.Length + 90;
  if ( v7 > a2 )
  {
    *(_DWORD *)a1 = v7;
    result = 3221225507LL;
    *a3 = 4;
  }
  else
  {
    memset(a1, 0, v7);
    *(_DWORD *)a1 = v7;
    *((_DWORD *)a1 + 3) = Length + 58;
    *((_DWORD *)a1 + 4) = 1;
    *((_DWORD *)a1 + 2) = 56;
    v8 = ndisControlGuid;
    *((_DWORD *)a1 + 10) |= 0x81000u;
    *((_DWORD *)a1 + 11) = 0;
    *((_QWORD *)a1 + 6) = 0LL;
    *(GUID *)(a1 + 24) = v8;
    *((_WORD *)a1 + 28) = ndisRegistryPath.Length;
    memmove(a1 + 58, ndisRegistryPath.Buffer, ndisRegistryPath.Length);
    v9 = &a1[*((unsigned int *)a1 + 3)];
    *a3 = v7;
    *(_WORD *)v9 = 30;
    *(_OWORD *)(v9 + 2) = *(_OWORD *)L"MofResourceName";
    *(_QWORD *)(v9 + 18) = *(_QWORD *)L"rceName";
    *(_DWORD *)(v9 + 26) = *(_DWORD *)L"ame";
    *((_WORD *)v9 + 15) = aMofresourcenam[14];
    if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    {
      v11 = 0;
      WPP_RECORDER_SF_d(
        *((_QWORD *)WPP_GLOBAL_Control + 8),
        4u,
        1u,
        0xBu,
        (struct _GUID *)&WPP_25837d708393386fa8b5b40a61d84122_Traceguids,
        v11);
    }
    return 0LL;
  }
  return result;
}
