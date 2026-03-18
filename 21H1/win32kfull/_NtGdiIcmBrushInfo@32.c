/*
 * XREFs of _NtGdiIcmBrushInfo@32 @ 0x21C455
 * Callers:
 *     <none>
 * Callees:
 *     _PALLOCMEM2@12 @ 0x48D0A (_PALLOCMEM2@12.c)
 *     _GreGetBitmapBitsSize@4 @ 0x76F1A (_GreGetBitmapBitsSize@4.c)
 *     __SEH_prolog4 @ 0xF9120 (__SEH_prolog4.c)
 *     ?GreIcmQueryBrushBitmap@@YGHPAUHDC__@@PAUHBRUSH__@@PAUtagBITMAPINFO@@PAXPAK4PAH@Z @ 0x21B8CC (-GreIcmQueryBrushBitmap@@YGHPAUHDC__@@PAUHBRUSH__@@PAUtagBITMAPINFO@@PAXPAK4PAH@Z.c)
 *     ?GreIcmSetBrushBitmap@@YGHPAUHDC__@@PAUHBRUSH__@@PAUtagBITMAPINFO@@PAX@Z @ 0x21BA5A (-GreIcmSetBrushBitmap@@YGHPAUHDC__@@PAUHBRUSH__@@PAUtagBITMAPINFO@@PAX@Z.c)
 */

HDC __stdcall NtGdiIcmBrushInfo(
        HDC a1,
        HBRUSH a2,
        char *a3,
        HBRUSH Address,
        ULONG a5,
        ULONG a6,
        ULONG a7,
        unsigned int a8)
{
  HDC result; // eax
  int v9; // ebx
  SIZE_T *v10; // eax
  unsigned int BitmapBitsSize; // eax
  SIZE_T *v12; // ecx
  _DWORD *v13; // ecx
  _DWORD *v14; // ecx
  _DWORD *v15; // ecx
  struct tagBITMAPINFO *v16; // [esp+0h] [ebp-38h]
  int *v17; // [esp+4h] [ebp-34h]
  HDC v18; // [esp+10h] [ebp-28h]
  int v19; // [esp+14h] [ebp-24h] BYREF
  HDC v20; // [esp+18h] [ebp-20h]
  SIZE_T v21; // [esp+1Ch] [ebp-1Ch] BYREF
  CPPEH_RECORD ms_exc; // [esp+20h] [ebp-18h]

  v21 = 0;
  result = (HDC)PALLOCMEM2(0x428u, 1835231559, 0);
  v18 = result;
  v20 = result;
  if ( result )
  {
    if ( !a8 )
    {
      a8 = 0;
      v19 = 0;
      ms_exc.registration.TryLevel = 0;
      if ( Address )
      {
        v12 = (SIZE_T *)a5;
        if ( a5 >= _MmUserProbeAddress )
          v12 = (SIZE_T *)_MmUserProbeAddress;
        v21 = *v12;
        ProbeForWrite(Address, v21, 4u);
      }
      ms_exc.registration.TryLevel = -2;
      v9 = GreIcmQueryBrushBitmap(
             a2,
             a1,
             v20,
             Address,
             (struct tagBITMAPINFO *)&v21,
             &v19,
             &a8,
             &v16->bmiHeader.biSize,
             v17);
      if ( v9 )
      {
        ms_exc.registration.TryLevel = 1;
        ProbeForWrite(a3, 0x428u, 4u);
        qmemcpy(a3, v18, 0x428u);
        v13 = (_DWORD *)a5;
        if ( a5 >= _MmUserProbeAddress )
          v13 = (_DWORD *)_MmUserProbeAddress;
        *v13 = v21;
        v14 = (_DWORD *)a7;
        if ( a7 )
        {
          if ( a7 >= _MmUserProbeAddress )
            v14 = (_DWORD *)_MmUserProbeAddress;
          *v14 = a8;
        }
        v15 = (_DWORD *)a6;
        if ( a6 )
        {
          if ( a6 >= _MmUserProbeAddress )
            v15 = (_DWORD *)_MmUserProbeAddress;
          *v15 = v19;
        }
        ms_exc.registration.TryLevel = -2;
      }
      goto LABEL_36;
    }
    if ( a8 != 1 )
    {
      EngSetLastError(0x57u);
LABEL_5:
      v9 = 0;
LABEL_36:
      Win32FreePool((PATHOBJ *)v20);
      return (HDC)v9;
    }
    ms_exc.registration.TryLevel = 2;
    if ( ((unsigned __int8)a3 & 3) == 0 )
    {
      if ( (unsigned int)(a3 + 1064) > _MmUserProbeAddress || a3 + 1064 < a3 )
        *(_BYTE *)_MmUserProbeAddress = 0;
      qmemcpy(result, a3, 0x428u);
      v10 = (SIZE_T *)a5;
      if ( a5 >= _MmUserProbeAddress )
        v10 = (SIZE_T *)_MmUserProbeAddress;
      v21 = *v10;
      ms_exc.registration.TryLevel = -2;
      BitmapBitsSize = GreGetBitmapBitsSize(v20);
      if ( !BitmapBitsSize || BitmapBitsSize > v21 )
        goto LABEL_5;
      ms_exc.registration.TryLevel = 3;
      if ( ((unsigned __int8)Address & 3) == 0 )
      {
        if ( (unsigned int)Address + BitmapBitsSize > _MmUserProbeAddress
          || (HBRUSH)((char *)Address + BitmapBitsSize) < Address )
        {
          *(_BYTE *)_MmUserProbeAddress = 0;
        }
        ms_exc.registration.TryLevel = -2;
        v9 = GreIcmSetBrushBitmap(a2, a1, v20, Address, v16, v17);
        goto LABEL_36;
      }
    }
    ExRaiseDatatypeMisalignment();
  }
  return result;
}
