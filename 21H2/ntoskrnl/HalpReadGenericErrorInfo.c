/*
 * XREFs of HalpReadGenericErrorInfo @ 0x1404CFD38
 * Callers:
 *     HalpCheckAndReportGhes @ 0x1404CFB88 (HalpCheckAndReportGhes.c)
 * Callees:
 *     MmMapIoSpaceEx @ 0x140216B10 (MmMapIoSpaceEx.c)
 *     HalpExtractGenericErrorData @ 0x1404CFBE4 (HalpExtractGenericErrorData.c)
 */

__int64 __fastcall HalpReadGenericErrorInfo(__int64 a1)
{
  __int64 *v2; // rcx
  _DWORD *v3; // rbx
  __int64 v4; // rax

  v2 = *(__int64 **)(a1 + 40);
  if ( *v2 != -1 )
  {
    v3 = *(_DWORD **)(a1 + 56);
    if ( v3
      || (v4 = MmMapIoSpaceEx(*v2, *(unsigned int *)(a1 + 48), 0x204u),
          *(_QWORD *)(a1 + 56) = v4,
          (v3 = (_DWORD *)v4) != 0LL) )
    {
      if ( (*v3 & 2) != 0 )
      {
        HalpExtractGenericErrorData(a1);
        if ( *(_DWORD *)(a1 + 96) != 12 )
        {
          *v3 &= ~2u;
          return 0LL;
        }
LABEL_9:
        *v3 = 0;
        return 0LL;
      }
      if ( (*v3 & 1) != 0 )
      {
        HalpExtractGenericErrorData(a1);
        if ( *(_DWORD *)(a1 + 96) != 12 )
        {
          *v3 &= ~1u;
          return 0LL;
        }
        goto LABEL_9;
      }
    }
  }
  return 3221226021LL;
}
