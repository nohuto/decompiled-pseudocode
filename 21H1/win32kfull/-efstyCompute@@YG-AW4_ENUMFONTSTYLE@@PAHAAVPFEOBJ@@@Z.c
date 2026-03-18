/*
 * XREFs of ?efstyCompute@@YG?AW4_ENUMFONTSTYLE@@PAHAAVPFEOBJ@@@Z @ 0x8AC5C
 * Callers:
 *     ?bScanLists@FHOBJ@@QAEHPAVEFSOBJ@@KPAU_EFFILTER_INFO@@@Z @ 0x88C9C (-bScanLists@FHOBJ@@QAEHPAVEFSOBJ@@KPAU_EFFILTER_INFO@@@Z.c)
 *     ?bScanLists@FHOBJ@@QAEHPAVEFSOBJ@@PBGKPAU_EFFILTER_INFO@@@Z @ 0x89B06 (-bScanLists@FHOBJ@@QAEHPAVEFSOBJ@@PBGKPAU_EFFILTER_INFO@@@Z.c)
 * Callees:
 *     ?efstyCompute@PFEOBJ@@QAE?AW4_ENUMFONTSTYLE@@XZ @ 0x8AC7C (-efstyCompute@PFEOBJ@@QAE-AW4_ENUMFONTSTYLE@@XZ.c)
 */

int __fastcall efstyCompute(int a1, int a2)
{
  int result; // eax
  int v4; // edx

  result = PFEOBJ::efstyCompute(a2);
  if ( *(_DWORD *)(a1 + 4 * result) )
    return (__wcsicmp(
              (const wchar_t *)(*(_DWORD *)(*(_DWORD *)v4 + 20) + *(_DWORD *)(*(_DWORD *)(*(_DWORD *)v4 + 20) + 8)),
              (const wchar_t *)(*(_DWORD *)(*(_DWORD *)v4 + 20) + *(_DWORD *)(*(_DWORD *)(*(_DWORD *)v4 + 20) + 16))) != 0)
         + 4;
  *(_DWORD *)(a1 + 4 * result) = 1;
  return result;
}
