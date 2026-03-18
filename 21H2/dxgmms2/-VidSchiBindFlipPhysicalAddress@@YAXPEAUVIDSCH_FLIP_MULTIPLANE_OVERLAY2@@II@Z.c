/*
 * XREFs of ?VidSchiBindFlipPhysicalAddress@@YAXPEAUVIDSCH_FLIP_MULTIPLANE_OVERLAY2@@II@Z @ 0x1C00125EC
 * Callers:
 *     VidSchiExecuteMmIoFlip @ 0x1C000DBA0 (VidSchiExecuteMmIoFlip.c)
 *     VidSchiSetupMmIoFlipMultiPlaneOverlay3 @ 0x1C0011E34 (VidSchiSetupMmIoFlipMultiPlaneOverlay3.c)
 * Callees:
 *     <none>
 */

void __fastcall VidSchiBindFlipPhysicalAddress(
        struct VIDSCH_FLIP_MULTIPLANE_OVERLAY2 *a1,
        unsigned int a2,
        unsigned int a3)
{
  int v3; // r10d
  __int64 v4; // rdi
  __int64 v5; // rbx
  unsigned __int64 v6; // r8
  char *v7; // rdx
  __int64 v8; // r9

  v3 = *((_DWORD *)a1 + 1);
  v4 = a2;
  v5 = a3;
  v6 = (unsigned __int64)(a2 + v3 * a3) << 6;
  v7 = (char *)a1 + v3 * ((8 * *((_DWORD *)a1 + 2) + 231) & 0xFFFFFFF8);
  v8 = *(_QWORD *)&v7[v6 + 48];
  *(_QWORD *)&v7[v6 + 40] = *(_QWORD *)(*(_QWORD *)(v8 + 96) + 32LL);
  *(_WORD *)((char *)a1
           + 64 * (unsigned __int64)(unsigned int)(v4 + v5 * *((_DWORD *)a1 + 1))
           + *((_DWORD *)a1 + 1) * ((8 * *((_DWORD *)a1 + 2) + 231) & 0xFFFFFFF8)
           + 32) = *(_WORD *)(*(_QWORD *)(v8 + 96) + 6LL);
  if ( !*(_DWORD *)(*(_QWORD *)(v8 + 96) + 12LL) )
  {
    WdLogSingleEntry5(0LL, 281LL, 0x4000LL, v4, v5, 0LL);
    __debugbreak();
    JUMPOUT(0x1C0028E5ELL);
  }
}
