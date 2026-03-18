/*
 * XREFs of ?bScanTheList@@YGHPAVFHOBJ@@KPAVEFSOBJ@@KPAU_EFFILTER_INFO@@PBG@Z @ 0x89A9E
 * Callers:
 *     ?bScanFamily@@YGHPAVFHOBJ@@K0K0KPAVEFSOBJ@@KPAU_EFFILTER_INFO@@PBG@Z @ 0x89A4A (-bScanFamily@@YGHPAVFHOBJ@@K0K0KPAVEFSOBJ@@KPAU_EFFILTER_INFO@@PBG@Z.c)
 * Callees:
 *     ?bScanLists@FHOBJ@@QAEHPAVEFSOBJ@@KPAU_EFFILTER_INFO@@@Z @ 0x88C9C (-bScanLists@FHOBJ@@QAEHPAVEFSOBJ@@KPAU_EFFILTER_INFO@@@Z.c)
 *     ?bScanLists@FHOBJ@@QAEHPAVEFSOBJ@@PBGKPAU_EFFILTER_INFO@@@Z @ 0x89B06 (-bScanLists@FHOBJ@@QAEHPAVEFSOBJ@@PBGKPAU_EFFILTER_INFO@@@Z.c)
 */

int __userpurge bScanTheList@<eax>(
        int a1@<edx>,
        FHOBJ *a2@<ecx>,
        struct FHOBJ *a3,
        unsigned int a4,
        struct EFSOBJ *a5,
        unsigned __int16 *a6,
        struct _EFFILTER_INFO *a7,
        const unsigned __int16 *a8)
{
  int result; // eax
  int v10; // ebx

  if ( a6 )
    return FHOBJ::bScanLists(a2, a3, a6, a4, a5);
  v10 = 0;
  if ( a1 == 1 )
  {
    v10 = *((_DWORD *)a5 + 4);
    *((_DWORD *)a5 + 4) = 1;
  }
  else if ( a1 == 2 )
  {
    *((_DWORD *)a5 + 3) = 1;
  }
  result = FHOBJ::bScanLists(a2, a3, a4, a5);
  if ( a1 == 1 )
  {
    *((_DWORD *)a5 + 4) = v10;
  }
  else if ( a1 == 2 )
  {
    *((_DWORD *)a5 + 3) = 0;
  }
  return result;
}
