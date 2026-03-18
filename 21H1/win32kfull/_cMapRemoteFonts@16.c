/*
 * XREFs of _cMapRemoteFonts@16 @ 0x1E949B
 * Callers:
 *     _GreAddFontMemResourceEx@20 @ 0x1E9227 (_GreAddFontMemResourceEx@20.c)
 *     _NtGdiAddRemoteFontToDC@16 @ 0x1E92FF (_NtGdiAddRemoteFontToDC@16.c)
 * Callees:
 *     ?MmMapViewOfSection@UmfdHostLifeTimeManager@@SGJPAXPAPAXKKPAT_LARGE_INTEGER@@PAKW4_SECTION_INHERIT@@KKPA_K@Z @ 0x8C716 (-MmMapViewOfSection@UmfdHostLifeTimeManager@@SGJPAXPAPAXKKPAT_LARGE_INTEGER@@PAKW4_SECTION_INHER.c)
 *     _Win32CreateSection@36 @ 0xA9E8E (_Win32CreateSection@36.c)
 *     ?EnsureUmfdHost@UmfdHostLifeTimeManager@@SG_NXZ @ 0xDE13E (-EnsureUmfdHost@UmfdHostLifeTimeManager@@SG_NXZ.c)
 *     __SEH_prolog4 @ 0xF9120 (__SEH_prolog4.c)
 *     _memcpy @ 0xF929B (_memcpy.c)
 *     _memset @ 0xF92A7 (_memset.c)
 */

int __fastcall cMapRemoteFonts(void **a1, void **a2, void *a3, int a4)
{
  void **v4; // esi
  void *v5; // ecx
  unsigned int v6; // edi
  int CurrentProcess; // eax
  _DWORD *v9; // edi
  char *v10; // ecx
  int v11; // eax
  _DWORD *v12; // edx
  _DWORD *v13; // edx
  void ***v14; // eax
  _DWORD *v15; // edx
  int *v16; // edi
  void *v17; // edi
  int v18; // eax
  int v19; // edi
  void *v20; // ecx
  char *v21; // ecx
  union _LARGE_INTEGER *v22; // [esp-10h] [ebp-88h]
  int v23; // [esp-Ch] [ebp-84h]
  unsigned int *v24; // [esp-Ch] [ebp-84h]
  int v25; // [esp-8h] [ebp-80h]
  enum _SECTION_INHERIT v26; // [esp-8h] [ebp-80h]
  int v27; // [esp-4h] [ebp-7Ch]
  void *v28; // [esp-4h] [ebp-7Ch]
  void *v29; // [esp-4h] [ebp-7Ch]
  unsigned int v30; // [esp+0h] [ebp-78h]
  unsigned __int64 *v31; // [esp+4h] [ebp-74h]
  _DWORD v32[2]; // [esp+10h] [ebp-68h] BYREF
  __int64 v33; // [esp+18h] [ebp-60h] BYREF
  unsigned int v34; // [esp+20h] [ebp-58h] BYREF
  int v35; // [esp+24h] [ebp-54h]
  void **v36; // [esp+28h] [ebp-50h]
  unsigned int v37; // [esp+2Ch] [ebp-4Ch]
  unsigned int v38; // [esp+30h] [ebp-48h]
  int **v39; // [esp+34h] [ebp-44h]
  int v40; // [esp+38h] [ebp-40h]
  void *v41; // [esp+3Ch] [ebp-3Ch]
  void *v42; // [esp+40h] [ebp-38h]
  void *Src; // [esp+44h] [ebp-34h]
  int v44; // [esp+48h] [ebp-30h]
  void **v45; // [esp+4Ch] [ebp-2Ch]
  void **v46; // [esp+50h] [ebp-28h] BYREF
  int v47; // [esp+54h] [ebp-24h]
  void *v48; // [esp+58h] [ebp-20h] BYREF
  PVOID Object; // [esp+5Ch] [ebp-1Ch] BYREF
  CPPEH_RECORD ms_exc; // [esp+60h] [ebp-18h]

  v4 = a2;
  v45 = a2;
  v36 = a1;
  v47 = 0;
  v40 = 0;
  Src = *a1;
  v39 = (int **)Src;
  *a1 = 0;
  if ( (unsigned int)(a2 - 3) > 0xFFFFFF4 )
    return 0;
  Object = 0;
  v48 = 0;
  if ( !a3 )
    return 0;
  memset(a3, 0, 0x48u);
  if ( a4 == 1 )
  {
    ms_exc.registration.TryLevel = 0;
    v5 = Src;
    if ( ((unsigned __int8)Src & 3) != 0 )
      ExRaiseDatatypeMisalignment();
    v6 = *((_DWORD *)Src + 1);
    v47 = v6;
    ms_exc.registration.TryLevel = -2;
    if ( v6 > 3 || (unsigned int)v4 > 0x10000000 || (unsigned int)Src < 0x10000 || Src > _MmHighestUserAddress )
      return 0;
    if ( !v6 )
    {
      v40 = 1;
      v47 = 2;
    }
  }
  else
  {
    v47 = 1;
  }
  v37 = (4 * v47 + 15) & 0xFFFFFFF8;
  v38 = v37;
  if ( (unsigned int)v4 < v37 )
    return 0;
  v32[0] = v4;
  v32[1] = 0;
  if ( Win32CreateSection(&Object, (int)v5, (int)v32, (int)v5, 0x8000000, v23, v25, v27) < 0 )
    return 0;
  v34 = 0;
  v35 = 0;
  v46 = v4;
  CurrentProcess = PsGetCurrentProcess();
  if ( (int)MmMapViewOfSection(Object, CurrentProcess, &v48, 0, v4, &v34, &v46, 2, 0x400000, 4) < 0 )
  {
LABEL_17:
    ObfDereferenceObject(Object);
    return 0;
  }
  v9 = v48;
  v42 = v48;
  v41 = v48;
  v10 = (char *)Src;
  if ( v48 > Src )
    goto LABEL_21;
  if ( Src < (char *)v46 + (int)v48 )
  {
LABEL_22:
    v28 = v48;
    v11 = PsGetCurrentProcess();
    MmUnmapViewOfSection(v11, v28);
    goto LABEL_17;
  }
  if ( v48 >= Src )
  {
LABEL_21:
    if ( v48 < (char *)v4 + (int)Src )
      goto LABEL_22;
  }
  if ( a4 == 2 )
  {
    v4 -= 4;
    v45 = v4;
    v48 = (char *)v48 + 16;
    ms_exc.registration.TryLevel = 1;
    Src = (void *)_MmUserProbeAddress;
    v12 = (_DWORD *)_MmUserProbeAddress;
    if ( (unsigned int)v9 < _MmUserProbeAddress )
      v12 = v9;
    *v12 = 0;
    v13 = v9 + 1;
    if ( (unsigned int)(v9 + 1) >= _MmUserProbeAddress )
      v13 = (_DWORD *)_MmUserProbeAddress;
    *v13 = v47;
    v14 = (void ***)(v9 + 2);
    if ( (unsigned int)(v9 + 2) >= *(_DWORD *)Src )
      v14 = *(void ****)Src;
    *v14 = v4;
    v44 = 1;
    ms_exc.registration.TryLevel = -2;
  }
  ms_exc.registration.TryLevel = 2;
  if ( v4 && ((void **)((char *)v4 + (int)v10) > (void **)_MmUserProbeAddress || (char *)v4 + (int)v10 < v10) )
    *(_BYTE *)_MmUserProbeAddress = 0;
  memcpy(v48, v10, (size_t)v4);
  Src = (void *)1;
  v44 = 1;
  ms_exc.registration.TryLevel = -2;
  if ( v40 )
  {
    ms_exc.registration.TryLevel = 3;
    v15 = v9;
    v39 = (int **)_MmUserProbeAddress;
    if ( (unsigned int)v9 >= _MmUserProbeAddress )
      v15 = (_DWORD *)_MmUserProbeAddress;
    *v15 = 0;
    v16 = v9 + 1;
    if ( v16 >= *v39 )
      v16 = *v39;
    *v16 = v47;
    ms_exc.registration.TryLevel = -2;
  }
  v17 = Src;
  v29 = v42;
  v18 = PsGetCurrentProcess();
  if ( (int)MmUnmapViewOfSection(v18, v29) < 0 || !v17 )
    goto LABEL_17;
  v48 = 0;
  v46 = 0;
  v34 = 0;
  v35 = 0;
  v33 = 0LL;
  v19 = -1073741823;
  if ( UmfdHostLifeTimeManager::EnsureUmfdHost() )
    v19 = UmfdHostLifeTimeManager::MmMapViewOfSection(
            (int)&v48,
            (int)Object,
            v20,
            v46,
            (unsigned int)&v34,
            (unsigned int)&v46,
            v22,
            v24,
            v26,
            &v33,
            v30,
            v31);
  if ( v19 < 0 )
    goto LABEL_17;
  v21 = (char *)v48;
  v39 = (int **)v48;
  if ( a4 == 2 )
    v4 += 4;
  *((_DWORD *)a3 + 16) = v48;
  *((_DWORD *)a3 + 3) = &v21[v38];
  *((_DWORD *)a3 + 4) = (char *)v4 - v37;
  *((_DWORD *)a3 + 13) = v46;
  *((_DWORD *)a3 + 14) = 0;
  *((_DWORD *)a3 + 15) = 1;
  *((_DWORD *)a3 + 5) = Object;
  *((_DWORD *)a3 + 17) = (unsigned int)PsGetCurrentProcessId() & 0xFFFFFFFC;
  *((_QWORD *)a3 + 5) = v33;
  *v36 = v39;
  return v47;
}
