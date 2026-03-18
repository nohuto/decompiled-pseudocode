/*
 * XREFs of _NtGdiCreateColorTransform@32 @ 0x21C124
 * Callers:
 *     <none>
 * Callees:
 *     __SEH_prolog4_GS @ 0xF917C (__SEH_prolog4_GS.c)
 *     _memset @ 0xF92A7 (_memset.c)
 *     ?GreCreateColorTransform@@YGPAXPAUHDC__@@PAUtagLOGCOLORSPACEW@@PAXK2K2K@Z @ 0x21B794 (-GreCreateColorTransform@@YGPAXPAUHDC__@@PAUtagLOGCOLORSPACEW@@PAXK2K2K@Z.c)
 */

struct HOBJ__ *__stdcall NtGdiCreateColorTransform(
        HDC a1,
        const void *a2,
        HDC a3,
        struct tagLOGCOLORSPACEW *a4,
        char *a5,
        SIZE_T a6,
        char *a7,
        SIZE_T a8)
{
  void *v9; // [esp+0h] [ebp-2B4h]
  unsigned int v10; // [esp+4h] [ebp-2B0h]
  struct HOBJ__ *v11; // [esp+20h] [ebp-294h]
  HANDLE v12; // [esp+24h] [ebp-290h]
  HANDLE v13; // [esp+28h] [ebp-28Ch]
  HANDLE SecureHandle; // [esp+2Ch] [ebp-288h]
  HDC v15; // [esp+30h] [ebp-284h]
  char *v16; // [esp+34h] [ebp-280h]
  char *v17; // [esp+38h] [ebp-27Ch]
  int v18; // [esp+48h] [ebp-26Ch]
  struct tagLOGCOLORSPACEW v19; // [esp+4Ch] [ebp-268h] BYREF
  CPPEH_RECORD ms_exc; // [esp+29Ch] [ebp-18h]

  v11 = 0;
  memset(&v19, 0, sizeof(v19));
  SecureHandle = 0;
  v13 = 0;
  v12 = 0;
  v15 = 0;
  v16 = 0;
  v17 = 0;
  v18 = 0;
  ms_exc.registration.TryLevel = 0;
  if ( a2 )
  {
    if ( ((unsigned __int8)a2 & 3) != 0 )
      ExRaiseDatatypeMisalignment();
    qmemcpy(&v19, a2, sizeof(v19));
    if ( a3 && a4 )
    {
      if ( (HDC)((char *)a3 + (int)a4) > (HDC)_MmUserProbeAddress || (char *)a3 + (int)a4 < (char *)a3 )
        *(_BYTE *)_MmUserProbeAddress = 0;
      SecureHandle = MmSecureVirtualMemory(a3, (SIZE_T)a4, 2u);
      if ( SecureHandle )
        v15 = a3;
      else
        v18 = 1;
    }
    if ( a5 && a6 )
    {
      if ( (unsigned int)&a5[a6] > _MmUserProbeAddress || &a5[a6] < a5 )
        *(_BYTE *)_MmUserProbeAddress = 0;
      v13 = MmSecureVirtualMemory(a5, a6, 2u);
      if ( v13 )
        v16 = a5;
      else
        v18 = 1;
    }
    if ( a7 && a8 )
    {
      if ( (unsigned int)&a7[a8] > _MmUserProbeAddress || &a7[a8] < a7 )
        *(_BYTE *)_MmUserProbeAddress = 0;
      v12 = MmSecureVirtualMemory(a7, a8, 2u);
      if ( v12 )
        v17 = a7;
      else
        v18 = 1;
    }
    ms_exc.registration.TryLevel = -2;
    if ( !v18 )
      v11 = GreCreateColorTransform(&v19, a1, v15, a4, v16, a6, v17, a8, v9, v10);
    if ( SecureHandle )
      MmUnsecureVirtualMemory(SecureHandle);
    if ( v13 )
      MmUnsecureVirtualMemory(v13);
    if ( v12 )
      MmUnsecureVirtualMemory(v12);
    return v11;
  }
  else
  {
    ms_exc.registration.TryLevel = -2;
    return 0;
  }
}
