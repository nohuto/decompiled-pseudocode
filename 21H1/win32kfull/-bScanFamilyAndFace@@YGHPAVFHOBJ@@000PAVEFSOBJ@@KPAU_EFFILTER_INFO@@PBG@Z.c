/*
 * XREFs of ?bScanFamilyAndFace@@YGHPAVFHOBJ@@000PAVEFSOBJ@@KPAU_EFFILTER_INFO@@PBG@Z @ 0x899EA
 * Callers:
 *     ?EnumEngineOnly@@YG_NPBGKKPAU_EFFILTER_INFO@@AAVPUBLIC_PFTOBJ@@2PAVDCOBJ@@PAKPAX@Z @ 0x88A46 (-EnumEngineOnly@@YG_NPBGKKPAU_EFFILTER_INFO@@AAVPUBLIC_PFTOBJ@@2PAVDCOBJ@@PAKPAX@Z.c)
 *     ?EnumDeviceAndEngine@@YG_NPBGKKPAU_EFFILTER_INFO@@AAVPUBLIC_PFTOBJ@@2AAVPFFOBJ@@AAVPDEVOBJ@@PAVDCOBJ@@PAKPAX@Z @ 0x21F000 (-EnumDeviceAndEngine@@YG_NPBGKKPAU_EFFILTER_INFO@@AAVPUBLIC_PFTOBJ@@2AAVPFFOBJ@@AAVPDEVOBJ@@PAVD.c)
 * Callees:
 *     ?bScanFamily@@YGHPAVFHOBJ@@K0K0KPAVEFSOBJ@@KPAU_EFFILTER_INFO@@PBG@Z @ 0x89A4A (-bScanFamily@@YGHPAVFHOBJ@@K0K0KPAVEFSOBJ@@KPAU_EFFILTER_INFO@@PBG@Z.c)
 */

int __userpurge bScanFamilyAndFace@<eax>(
        struct FHOBJ *a1@<edx>,
        struct FHOBJ *a2@<ecx>,
        struct FHOBJ *a3,
        struct FHOBJ *a4,
        struct FHOBJ *a5,
        struct FHOBJ *a6,
        struct EFSOBJ *a7,
        unsigned int a8,
        struct _EFFILTER_INFO *a9,
        const unsigned __int16 *a10)
{
  int v10; // esi
  struct _EFFILTER_INFO *v13; // [esp+0h] [ebp-10h]
  struct _EFFILTER_INFO *v14; // [esp+0h] [ebp-10h]
  const unsigned __int16 *v15; // [esp+4h] [ebp-Ch]
  const unsigned __int16 *v16; // [esp+4h] [ebp-Ch]

  v10 = 0;
  if ( bScanFamily(a2, 0, 0, 0, a5, (unsigned int)a6, a7, a8, v13, v15) )
  {
    if ( *(_DWORD *)(*(_DWORD *)a5 + 24) == *(_DWORD *)a5 + 40 )
      return bScanFamily(a1, 0, 0, 0, a5, (unsigned int)a6, a7, a8, v14, v16);
    else
      return 1;
  }
  return v10;
}
