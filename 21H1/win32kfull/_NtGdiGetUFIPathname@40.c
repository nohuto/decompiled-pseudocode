/*
 * XREFs of _NtGdiGetUFIPathname@40 @ 0x213569
 * Callers:
 *     <none>
 * Callees:
 *     __SEH_prolog4_GS @ 0xF917C (__SEH_prolog4_GS.c)
 *     _memcpy @ 0xF929B (_memcpy.c)
 *     _GreGetUFIPathname@44 @ 0x1D8ECA (_GreGetUFIPathname@44.c)
 */

int __stdcall NtGdiGetUFIPathname(
        ULONG a1,
        ULONG a2,
        void *a3,
        ULONG a4,
        SIZE_T Length,
        ULONG a6,
        ULONG a7,
        volatile void *a8,
        ULONG a9,
        ULONG a10)
{
  int *v10; // ecx
  int UFIPathname; // esi
  _DWORD *v12; // ecx
  void *v13; // ecx
  size_t v14; // edx
  _DWORD *v15; // ecx
  _DWORD *v16; // ecx
  _DWORD *v17; // ecx
  _DWORD *v18; // ecx
  _DWORD *v19; // ecx
  int v21; // [esp+28h] [ebp-250h] BYREF
  int v22; // [esp+2Ch] [ebp-24Ch]
  int v23; // [esp+30h] [ebp-248h] BYREF
  void *v24; // [esp+34h] [ebp-244h]
  int v25; // [esp+38h] [ebp-240h] BYREF
  int v26; // [esp+3Ch] [ebp-23Ch] BYREF
  ULONG_PTR ViewSize; // [esp+40h] [ebp-238h] BYREF
  char *v28; // [esp+44h] [ebp-234h]
  int v29; // [esp+48h] [ebp-230h] BYREF
  void *Src; // [esp+4Ch] [ebp-22Ch]
  PVOID MappedBase; // [esp+50h] [ebp-228h] BYREF
  _BYTE v32[524]; // [esp+54h] [ebp-224h] BYREF
  CPPEH_RECORD ms_exc; // [esp+260h] [ebp-18h]

  v10 = (int *)a1;
  v24 = a3;
  v28 = (char *)a9;
  v21 = 0;
  v22 = 0;
  Src = 0;
  MappedBase = 0;
  ViewSize = 0;
  v29 = 0;
  v23 = 0;
  v26 = 0;
  v25 = 0;
  ms_exc.registration.TryLevel = 0;
  if ( a1 >= _MmUserProbeAddress )
    v10 = (int *)_MmUserProbeAddress;
  v21 = *v10;
  v22 = v10[1];
  ms_exc.registration.TryLevel = -2;
  GreAcquireSemaphore(_ghsemPublicPFT);
  EtwTraceGreLockAcquireSemaphoreExclusive(L"ghsemPublicPFT", _ghsemPublicPFT, 15);
  UFIPathname = GreGetUFIPathname(
                  (int)&v21,
                  &MappedBase,
                  0,
                  0,
                  &ViewSize,
                  Length,
                  &v29,
                  (SIZE_T *)&v23,
                  a8,
                  v28 != 0 ? &v26 : 0,
                  a10 != 0 ? (unsigned int *)&v25 : 0);
  if ( UFIPathname )
  {
    if ( (unsigned int)MappedBase > 0x104 )
    {
      if ( (unsigned int)MappedBase <= 0x1388000 )
        Src = (void *)AllocFreeTmpBuffer(2 * (_DWORD)MappedBase);
      UFIPathname = Src != 0 ? UFIPathname : 0;
    }
    else
    {
      Src = v32;
    }
    if ( UFIPathname && !v29 && Src )
      UFIPathname = GreGetUFIPathname(
                      (int)&v21,
                      0,
                      (char *)Src,
                      (char *)MappedBase,
                      &ViewSize,
                      Length,
                      0,
                      0,
                      0,
                      a9 != 0 ? &v26 : 0,
                      a10 != 0 ? (unsigned int *)&v25 : 0);
  }
  EtwTraceGreLockReleaseSemaphore(L"ghsemPublicPFT", _ghsemPublicPFT);
  GreReleaseSemaphoreInternal(_ghsemPublicPFT);
  if ( UFIPathname )
  {
    UFIPathname = (unsigned int)MappedBase <= 0x30C ? UFIPathname : 0;
    if ( UFIPathname )
    {
      ms_exc.registration.TryLevel = 1;
      v12 = (_DWORD *)a2;
      if ( a2 )
      {
        if ( a2 >= _MmUserProbeAddress )
          v12 = (_DWORD *)_MmUserProbeAddress;
        *v12 = MappedBase;
      }
      v13 = v24;
      if ( v24 )
      {
        v14 = 2 * (_DWORD)MappedBase;
        v28 = (char *)v24 + 2 * (_DWORD)MappedBase;
        if ( (unsigned int)v28 > _MmUserProbeAddress || v28 <= v24 )
          *(_BYTE *)_MmUserProbeAddress = 0;
        memcpy(v13, Src, v14);
      }
      v15 = (_DWORD *)a4;
      if ( a4 )
      {
        if ( a4 >= _MmUserProbeAddress )
          v15 = (_DWORD *)_MmUserProbeAddress;
        *v15 = ViewSize;
      }
      if ( v29 )
      {
        v16 = (_DWORD *)a6;
        if ( a6 )
        {
          if ( a6 >= _MmUserProbeAddress )
            v16 = (_DWORD *)_MmUserProbeAddress;
          *v16 = v29;
        }
        v17 = (_DWORD *)a7;
        if ( a7 )
        {
          if ( a7 >= _MmUserProbeAddress )
            v17 = (_DWORD *)_MmUserProbeAddress;
          *v17 = v23;
        }
      }
      v18 = (_DWORD *)a9;
      if ( a9 )
      {
        if ( a9 >= _MmUserProbeAddress )
          v18 = (_DWORD *)_MmUserProbeAddress;
        *v18 = v26;
      }
      v19 = (_DWORD *)a10;
      if ( a10 )
      {
        if ( a10 >= _MmUserProbeAddress )
          v19 = (_DWORD *)_MmUserProbeAddress;
        *v19 = v25;
      }
      ms_exc.registration.TryLevel = -2;
    }
  }
  if ( Src && Src != v32 )
    FreeTmpBuffer(Src);
  return UFIPathname;
}
