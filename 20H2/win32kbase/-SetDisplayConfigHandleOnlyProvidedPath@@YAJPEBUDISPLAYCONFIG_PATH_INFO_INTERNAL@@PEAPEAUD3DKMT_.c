/*
 * XREFs of ?SetDisplayConfigHandleOnlyProvidedPath@@YAJPEBUDISPLAYCONFIG_PATH_INFO_INTERNAL@@PEAPEAUD3DKMT_GETPATHSMODALITY@@PEA_NPEAW4_DXGK_DIAG_SDC_STAGE@@@Z @ 0x1C01476AC
 * Callers:
 *     DrvSetDisplayConfig @ 0x1C006C8A0 (DrvSetDisplayConfig.c)
 * Callees:
 *     ??8@YA_NAEBU_LUID@@0@Z @ 0x1C0086BA8 (--8@YA_NAEBU_LUID@@0@Z.c)
 *     GetPathsModality @ 0x1C00A8064 (GetPathsModality.c)
 *     ?ConvertDisplayConfigPathIntoExistingPathModalityAtIdx@@YAJPEBUDISPLAYCONFIG_PATH_INFO_INTERNAL@@II_N1PEAUD3DKMT_GETPATHSMODALITY@@PEA_N@Z @ 0x1C0144420 (-ConvertDisplayConfigPathIntoExistingPathModalityAtIdx@@YAJPEBUDISPLAYCONFIG_PATH_INFO_INTERNAL@.c)
 *     ?ConvertDisplayConfigScalingToPathModalityForPath@@YAJPEBUDISPLAYCONFIG_PATH_INFO_INTERNAL@@PEAUD3DKMT_PATHMODALITY_DESCRIPTOR@@PEA_N@Z @ 0x1C01448FC (-ConvertDisplayConfigScalingToPathModalityForPath@@YAJPEBUDISPLAYCONFIG_PATH_INFO_INTERNAL@@PEAU.c)
 */

__int64 __fastcall SetDisplayConfigHandleOnlyProvidedPath(
        const struct DISPLAYCONFIG_PATH_INFO_INTERNAL *a1,
        struct D3DKMT_GETPATHSMODALITY **a2,
        bool *a3,
        enum _DXGK_DIAG_SDC_STAGE *a4)
{
  bool *v5; // r13
  __int64 result; // rax
  struct D3DKMT_GETPATHSMODALITY *v9; // rdx
  __int64 v10; // rbx
  unsigned int v11; // r14d
  unsigned int i; // ebp
  char *v13; // rdi
  __int64 v14; // rdx
  __int64 v15; // rcx
  __int64 v16; // rax
  __int64 v17; // rax
  __int64 v18; // rax
  int v19; // r13d
  __int64 v20; // rcx
  int v21; // [rsp+44h] [rbp-34h]

  v5 = a3;
  result = GetPathsModality((__int64)a1, a2, 0x40u, 0);
  if ( (int)result < 0 )
  {
    *(_DWORD *)a4 = 32;
    return result;
  }
  v9 = *a2;
  LODWORD(v10) = 0;
  v11 = 0;
  v21 = 0;
  for ( i = *((unsigned __int16 *)*a2 + 10); v11 < *((unsigned __int16 *)*a2 + 10); ++v11 )
  {
    v13 = (char *)v9 + 272 * v11;
    if ( operator==((_DWORD *)v13 + 16, (_DWORD *)a1 + 4)
      && *((_DWORD *)v13 + 18) == *((_DWORD *)a1 + 6)
      && *((_DWORD *)v13 + 19) == *((_DWORD *)a1 + 7) )
    {
      v16 = *((_QWORD *)v13 + 6);
      if ( (v16 & 0x800) == 0 )
      {
        v17 = WdLogNewEntry5_WdAssertion(v15, v14);
        WdLogEvent5_WdAssertion(v17);
        v16 = *((_QWORD *)v13 + 6);
      }
      v10 = *((_QWORD *)v13 + 24);
      v21 = HIDWORD(v10);
      if ( (v16 & 0x4000000000000LL) == 0 )
      {
        v18 = WdLogNewEntry5_WdAssertion(0x4000000000000LL, v14);
        WdLogEvent5_WdAssertion(v18);
      }
      v19 = *((_DWORD *)v13 + 58);
      i = v11;
      result = ConvertDisplayConfigPathIntoExistingPathModalityAtIdx(a1, v11, 0xFFFFFFFFLL, 0, 0, *a2, a3);
      if ( (int)result < 0 )
      {
        *(_DWORD *)a4 = 34;
        return result;
      }
      *((_DWORD *)v13 + 58) = v19;
      *((_QWORD *)v13 + 6) |= 0x4000000000000uLL;
      v5 = a3;
    }
    else
    {
      result = ConvertDisplayConfigScalingToPathModalityForPath(
                 a1,
                 (struct D3DKMT_PATHMODALITY_DESCRIPTOR *)(v13 + 48),
                 v5);
      if ( (int)result < 0 )
      {
        *(_DWORD *)a4 = 35;
        return result;
      }
    }
    v9 = *a2;
  }
  if ( i < *((unsigned __int16 *)v9 + 10) )
  {
    v20 = 272LL * i;
    if ( (_DWORD)v10 == *(_DWORD *)((char *)v9 + v20 + 192) && v21 == *(_DWORD *)((char *)v9 + v20 + 196) )
      return 0LL;
  }
  *(_DWORD *)a4 = 33;
  return 3221225485LL;
}
