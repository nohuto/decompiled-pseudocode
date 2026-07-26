/*
 * XREFs of ?ndisNDKWmiGetAdapterCapabilities@@YAXPEAU_NDIS_MINIPORT_BLOCK@@KPEAU_NDIS_WMI_NDK_CAPABILITIES@@@Z @ 0x1C01207F8
 * Callers:
 *     ndisQueryGuidData @ 0x1C00124B0 (ndisQueryGuidData.c)
 *     ?ndisGetRdmaCapabilities@@YAJPEAU_NDIS_MINIPORT_BLOCK@@PEAU_IRP@@@Z @ 0x1C012043C (-ndisGetRdmaCapabilities@@YAJPEAU_NDIS_MINIPORT_BLOCK@@PEAU_IRP@@@Z.c)
 * Callees:
 *     ?ndisGetNDKBlock@@YAPEAU_NDIS_NDK_BLOCK@@PEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C000896C (-ndisGetNDKBlock@@YAPEAU_NDIS_NDK_BLOCK@@PEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 *     memset @ 0x1C00403C0 (memset.c)
 */

void __fastcall ndisNDKWmiGetAdapterCapabilities(
        struct _NDIS_MINIPORT_BLOCK *a1,
        unsigned int a2,
        struct _NDIS_WMI_NDK_CAPABILITIES *a3)
{
  unsigned int v5; // edx
  struct _NDIS_NDK_BLOCK *NDKBlock; // rdi

  NDKBlock = ndisGetNDKBlock(a1);
  memset(a3, 0, v5);
  if ( NDKBlock && a2 - 136 <= 8 )
  {
    *(_DWORD *)a3 = *((_DWORD *)NDKBlock + 10);
    *((_DWORD *)a3 + 1) = *((_DWORD *)NDKBlock + 11);
    *((_DWORD *)a3 + 2) = *((_DWORD *)NDKBlock + 12);
    *((_DWORD *)a3 + 3) = *((_DWORD *)NDKBlock + 13);
    *((_DWORD *)a3 + 4) = *((_DWORD *)NDKBlock + 14);
    *((_DWORD *)a3 + 5) = *((_DWORD *)NDKBlock + 15);
    *((_DWORD *)a3 + 6) = *((_DWORD *)NDKBlock + 16);
    *((_DWORD *)a3 + 7) = *((_DWORD *)NDKBlock + 17);
    *((_QWORD *)a3 + 4) = *((_QWORD *)NDKBlock + 9);
    *((_DWORD *)a3 + 10) = *((_DWORD *)NDKBlock + 22);
    *((_DWORD *)a3 + 11) = *((_DWORD *)NDKBlock + 23);
    *((_DWORD *)a3 + 12) = *((_DWORD *)NDKBlock + 24);
    *((_QWORD *)a3 + 7) = *((_QWORD *)NDKBlock + 13);
    *((_QWORD *)a3 + 8) = *((_QWORD *)NDKBlock + 14);
    *((_DWORD *)a3 + 18) = *((_DWORD *)NDKBlock + 30);
    *((_DWORD *)a3 + 19) = *((_DWORD *)NDKBlock + 31);
    *((_DWORD *)a3 + 20) = *((_DWORD *)NDKBlock + 32);
    *((_DWORD *)a3 + 21) = *((_DWORD *)NDKBlock + 33);
    *((_DWORD *)a3 + 22) = *((_DWORD *)NDKBlock + 34);
    *((_DWORD *)a3 + 23) = *((_DWORD *)NDKBlock + 35);
    *((_DWORD *)a3 + 24) = *((_DWORD *)NDKBlock + 36);
    *((_DWORD *)a3 + 25) = *((_DWORD *)NDKBlock + 37);
    *((_DWORD *)a3 + 26) = *((_DWORD *)NDKBlock + 38);
    *((_DWORD *)a3 + 27) = *((_DWORD *)NDKBlock + 39);
    *((_DWORD *)a3 + 28) = *((_DWORD *)NDKBlock + 40);
    *((_DWORD *)a3 + 29) = *((_DWORD *)NDKBlock + 41);
    *((_DWORD *)a3 + 30) = *((_DWORD *)NDKBlock + 42);
    *((_DWORD *)a3 + 31) = *((_DWORD *)NDKBlock + 43);
    *((_DWORD *)a3 + 32) = *((_DWORD *)NDKBlock + 44);
    *((_DWORD *)a3 + 33) = *((_DWORD *)NDKBlock + 45);
    if ( a2 >= 0x90 )
      *((_DWORD *)a3 + 34) = *((_DWORD *)NDKBlock + 46);
  }
}
