/*
 * XREFs of _NtGdiExtEscape@32 @ 0x8B698
 * Callers:
 *     <none>
 * Callees:
 *     ?IsCurrentProcessUmfdHost@UmfdHostLifeTimeManager@@SG_NXZ @ 0x46590 (-IsCurrentProcessUmfdHost@UmfdHostLifeTimeManager@@SG_NXZ.c)
 *     _PALLOCMEM2@12 @ 0x48D0A (_PALLOCMEM2@12.c)
 *     _UmfdDispatchEscape@4 @ 0x8B7AC (_UmfdDispatchEscape@4.c)
 *     _UmfdDispatchWinLogonEscape@4 @ 0xEB862 (_UmfdDispatchWinLogonEscape@4.c)
 *     __SEH_prolog4_GS @ 0xF917C (__SEH_prolog4_GS.c)
 *     _memcpy @ 0xF929B (_memcpy.c)
 *     _memset @ 0xF92A7 (_memset.c)
 *     _GreExtEscape@24 @ 0x1D8C5F (_GreExtEscape@24.c)
 *     _GreScalingDispatchEscape@4 @ 0x1FD6BF (_GreScalingDispatchEscape@4.c)
 *     _bUMPD@4 @ 0x1FF2C8 (_bUMPD@4.c)
 *     _GreNamedEscape@24 @ 0x206C75 (_GreNamedEscape@24.c)
 */

int __stdcall NtGdiExtEscape(
        HDC a1,
        void *a2,
        int a3,
        unsigned int a4,
        int a5,
        void *a6,
        int Length,
        volatile void *a8)
{
  _BYTE *v8; // esi
  _BYTE *v9; // edi
  int v11; // ebx
  void *v12; // ecx
  size_t v13; // edx
  bool v14; // zf
  size_t v15; // eax
  _BYTE *v16; // ecx
  void *v17; // ecx
  HDC v18; // eax
  void *v19; // edx
  _BYTE v20[16]; // [esp+10h] [ebp-2BCh] BYREF
  _BYTE v21[16]; // [esp+20h] [ebp-2ACh] BYREF
  char *v22; // [esp+30h] [ebp-29Ch]
  volatile void *Address; // [esp+34h] [ebp-298h]
  void *Src; // [esp+38h] [ebp-294h]
  wchar_t *Str1; // [esp+3Ch] [ebp-290h]
  int v26; // [esp+40h] [ebp-28Ch]
  int v27; // [esp+44h] [ebp-288h]
  int v28; // [esp+48h] [ebp-284h]
  int v29; // [esp+4Ch] [ebp-280h]
  void *v30; // [esp+50h] [ebp-27Ch]
  size_t MaxCount; // [esp+54h] [ebp-278h]
  _BYTE *v32; // [esp+58h] [ebp-274h]
  _BYTE *v33; // [esp+5Ch] [ebp-270h]
  HDC v34; // [esp+60h] [ebp-26Ch]
  _WORD v35[262]; // [esp+64h] [ebp-268h] BYREF
  _BYTE v36[32]; // [esp+270h] [ebp-5Ch] BYREF
  _BYTE v37[36]; // [esp+290h] [ebp-3Ch] BYREF
  CPPEH_RECORD ms_exc; // [esp+2B4h] [ebp-18h]

  v34 = a1;
  Src = a2;
  v26 = a3;
  MaxCount = a5;
  v30 = a6;
  Address = a8;
  Str1 = 0;
  v29 = -1;
  memset(v21, 0, sizeof(v21));
  memset(v20, 0, sizeof(v20));
  v27 = 0;
  v28 = 0;
  v8 = 0;
  v32 = 0;
  v9 = 0;
  v33 = 0;
  if ( a5 < 0 || Length < 0 || v26 < 0 || v34 && a2 )
    goto LABEL_11;
  if ( _gpidLogon && PsGetCurrentProcessId() == (HANDLE)_gpidLogon )
  {
    UmfdDispatchWinLogonEscape(v30);
    return 0;
  }
  if ( UmfdHostLifeTimeManager::IsCurrentProcessUmfdHost() )
  {
    UmfdDispatchEscape(v30);
    return 0;
  }
  v12 = Src;
  if ( Src )
  {
    if ( v26 > 260 )
      goto LABEL_11;
    Str1 = v35;
    ms_exc.registration.TryLevel = 0;
    v13 = 2 * v26;
    v22 = (char *)Src + 2 * v26;
    if ( v22 < Src || (v12 = Src, (unsigned int)v22 > _MmUserProbeAddress) )
      *(_BYTE *)_MmUserProbeAddress = 0;
    memcpy(v35, v12, v13);
    v35[v26] = 0;
    ms_exc.registration.TryLevel = -2;
  }
  if ( Str1 && !__wcsicmp(Str1, L"GSESC") && GreScalingDispatchEscape(v30) >= 0 )
    return 0;
  if ( MaxCount )
  {
    v14 = bUMPD(v34) == 0;
    v15 = MaxCount;
    if ( v14 )
    {
      if ( (int)MaxCount > 32 )
      {
        if ( (int)MaxCount <= 40960000 )
        {
          v9 = PALLOCMEM2(MaxCount, 1886221383, 0);
          v33 = v9;
          v15 = MaxCount;
        }
        if ( !v9 )
          goto LABEL_11;
        v27 = 1;
        goto LABEL_38;
      }
    }
    else if ( (int)MaxCount > 32 )
    {
      ms_exc.registration.TryLevel = 1;
      v16 = v30;
      if ( (unsigned int)v30 + MaxCount > _MmUserProbeAddress || (char *)v30 + MaxCount < v30 )
        *(_BYTE *)_MmUserProbeAddress = 0;
      ms_exc.registration.TryLevel = -2;
      v9 = v16;
      v33 = v16;
      goto LABEL_30;
    }
    v9 = v37;
    v33 = v37;
LABEL_38:
    ms_exc.registration.TryLevel = 2;
    v17 = v30;
    if ( (char *)v30 + v15 < v30 || (unsigned int)v30 + v15 > _MmUserProbeAddress )
      *(_BYTE *)_MmUserProbeAddress = 0;
    memcpy(v9, v17, MaxCount);
    ms_exc.registration.TryLevel = -2;
  }
LABEL_30:
  if ( !Length )
    goto LABEL_50;
  if ( bUMPD(v34) )
  {
    ms_exc.registration.TryLevel = 3;
    v8 = Address;
    ProbeForWrite(Address, Length, 1u);
    ms_exc.registration.TryLevel = -2;
    v32 = Address;
    goto LABEL_50;
  }
  if ( Length <= 32 )
  {
    v8 = v36;
    v32 = v36;
LABEL_49:
    memset(v8, 0, Length);
LABEL_50:
    if ( v27 && v9 )
      PushThreadGuardedObject(v21, v9, Win32FreePool);
    if ( v28 && v8 )
      PushThreadGuardedObject(v20, v8, Win32FreePool);
    if ( Str1 )
      v18 = (HDC)GreNamedEscape(Str1, a4, MaxCount, v9, Length, v8);
    else
      v18 = (HDC)GreExtEscape(v34, (struct DCOBJ *)MaxCount, (int)v9, Length, v8);
    v34 = v18;
    if ( v27 && v9 )
      PopThreadGuardedObject(v21);
    if ( v28 && v8 )
      PopThreadGuardedObject(v20);
    if ( Length )
    {
      v19 = (void *)Address;
      if ( v8 != Address )
      {
        ms_exc.registration.TryLevel = 4;
        if ( (unsigned int)Address + Length > _MmUserProbeAddress || (char *)Address + Length <= Address )
          *(_BYTE *)_MmUserProbeAddress = 0;
        memcpy(v19, v8, Length);
        ms_exc.registration.TryLevel = -2;
      }
    }
    v11 = (int)v34;
    goto LABEL_72;
  }
  if ( Length <= 40960000 )
  {
    v8 = PALLOCMEM2(Length, 1886221383, 0);
    v32 = v8;
  }
  if ( v8 )
  {
    v28 = 1;
    goto LABEL_49;
  }
LABEL_11:
  v11 = -1;
LABEL_72:
  if ( v28 && v8 )
    Win32FreePool(v8);
  if ( v27 )
  {
    if ( v9 )
      Win32FreePool(v9);
  }
  return v11;
}
