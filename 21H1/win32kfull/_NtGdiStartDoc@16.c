/*
 * XREFs of _NtGdiStartDoc@16 @ 0x1D998C
 * Callers:
 *     <none>
 * Callees:
 *     _ULongLongToULong@12 @ 0x9D96E (_ULongLongToULong@12.c)
 *     __SEH_prolog4 @ 0xF9120 (__SEH_prolog4.c)
 *     _memcpy @ 0xF929B (_memcpy.c)
 *     _SIZETAdd@12 @ 0x192B76 (_SIZETAdd@12.c)
 *     ?GreStartDocInternal@@YGHPAUHDC__@@PAU_DOCINFOW@@PAHH@Z @ 0x1D7909 (-GreStartDocInternal@@YGHPAUHDC__@@PAU_DOCINFOW@@PAHH@Z.c)
 */

int __stdcall NtGdiStartDoc(HDC a1, void *a2, ULONG a3, struct _DOCINFOW *a4)
{
  unsigned int v5; // edx
  size_t v6; // esi
  void *v7; // eax
  void *v8; // ecx
  _WORD *v9; // ecx
  HRESULT v11; // eax
  void *v12; // eax
  _WORD *v13; // ecx
  HRESULT v15; // eax
  void *v16; // eax
  struct HDC__ *v17; // ecx
  ULONG *v19; // [esp+0h] [ebp-5Ch]
  SIZE_T *v20; // [esp+4h] [ebp-58h]
  unsigned int v21; // [esp+10h] [ebp-4Ch] BYREF
  void *v22; // [esp+14h] [ebp-48h]
  void *v23; // [esp+18h] [ebp-44h]
  void *v24; // [esp+1Ch] [ebp-40h]
  int v25; // [esp+20h] [ebp-3Ch]
  unsigned int v26; // [esp+24h] [ebp-38h]
  struct HDC__ v27; // [esp+28h] [ebp-34h] BYREF
  void *Src; // [esp+2Ch] [ebp-30h]
  int started; // [esp+30h] [ebp-2Ch]
  void *v30; // [esp+34h] [ebp-28h]
  int v31; // [esp+38h] [ebp-24h]
  SIZE_T Augend; // [esp+3Ch] [ebp-20h] BYREF
  size_t MaxCount; // [esp+40h] [ebp-1Ch]
  CPPEH_RECORD ms_exc; // [esp+44h] [ebp-18h]
  unsigned int v35; // [esp+68h] [ebp+Ch]

  started = 0;
  v27.unused = 0;
  v25 = 0;
  MaxCount = 0;
  Augend = 0;
  v31 = 1;
  v21 = 0;
  v22 = 0;
  v23 = 0;
  v24 = 0;
  if ( a2 )
  {
    ms_exc.registration.TryLevel = 0;
    if ( ((unsigned __int8)a2 & 3) != 0 )
      goto LABEL_3;
    v26 = *(_DWORD *)a2;
    v21 = v26;
    v5 = *((_DWORD *)a2 + 1);
    Src = (void *)v5;
    v35 = *((_DWORD *)a2 + 2);
    v30 = (void *)*((_DWORD *)a2 + 3);
    if ( v5 )
    {
      if ( (v5 & 1) != 0 )
        goto LABEL_3;
      if ( v5 + 2 > _MmUserProbeAddress || v5 + 2 < v5 )
        *(_BYTE *)_MmUserProbeAddress = 0;
      wcslen((const unsigned __int16 *)v5);
      if ( SIZETAdd((SIZE_T)&Augend, (SIZE_T)v19, v20) < 0 || ULongLongToULong(2LL * Augend, v19) < 0 )
      {
        v6 = MaxCount;
      }
      else
      {
        v6 = MaxCount;
        if ( MaxCount )
          v7 = (void *)AllocThreadBufferWithTag(MaxCount, 1886221383, 0);
        else
          v7 = 0;
        v22 = v7;
      }
      if ( v22 )
      {
        v8 = Src;
        if ( v6 && ((unsigned int)Src + v6 > _MmUserProbeAddress || (char *)Src + v6 < Src) )
          *(_BYTE *)_MmUserProbeAddress = 0;
        memcpy(v22, v8, v6);
        if ( v6 >= 2 )
          *((_WORD *)v22 + (v6 >> 1) - 1) = 0;
      }
      else
      {
        v31 = 0;
      }
    }
    else
    {
      v6 = MaxCount;
    }
    v9 = (_WORD *)v35;
    if ( v35 )
    {
      if ( (v35 & 1) != 0 )
        goto LABEL_3;
      if ( v35 + 2 > _MmUserProbeAddress || v35 + 2 < v35 )
        *(_BYTE *)_MmUserProbeAddress = 0;
      while ( *v9++ )
        ;
      if ( SIZETAdd((SIZE_T)&Augend, (SIZE_T)v19, v20) >= 0 )
      {
        v11 = ULongLongToULong(2LL * Augend, v19);
        v6 = MaxCount;
        if ( v11 >= 0 )
        {
          if ( MaxCount )
            v12 = (void *)AllocThreadBufferWithTag(MaxCount, 1886221383, 0);
          else
            v12 = 0;
          v23 = v12;
        }
      }
      if ( v23 )
      {
        if ( v6 && (v35 + v6 > _MmUserProbeAddress || v35 + v6 < v35) )
          *(_BYTE *)_MmUserProbeAddress = 0;
        memcpy(v23, (const void *)v35, v6);
        if ( v6 >= 2 )
          *((_WORD *)v23 + (v6 >> 1) - 1) = 0;
      }
      else
      {
        v31 = 0;
      }
    }
    if ( v26 < 0x14 || (v13 = v30) == 0 )
    {
LABEL_67:
      ms_exc.registration.TryLevel = -2;
      goto LABEL_68;
    }
    ms_exc.registration.TryLevel = 1;
    if ( ((unsigned __int8)v30 & 1) == 0 )
    {
      if ( (unsigned int)v30 + 2 > _MmUserProbeAddress || (char *)v30 + 2 < v30 )
        *(_BYTE *)_MmUserProbeAddress = 0;
      while ( *v13++ )
        ;
      if ( SIZETAdd((SIZE_T)&Augend, (SIZE_T)v19, v20) >= 0 )
      {
        v15 = ULongLongToULong(2LL * Augend, v19);
        v6 = MaxCount;
        if ( v15 >= 0 )
        {
          if ( !MaxCount )
            goto LABEL_60;
          if ( (unsigned int)v30 + MaxCount > _MmUserProbeAddress || (char *)v30 + MaxCount < v30 )
            *(_BYTE *)_MmUserProbeAddress = 0;
          if ( v6 )
            v16 = (void *)AllocThreadBufferWithTag(v6, 1886221383, 0);
          else
LABEL_60:
            v16 = 0;
          v24 = v16;
        }
      }
      if ( v24 )
      {
        memcpy(v24, v30, v6);
        if ( v6 >= 2 )
          *((_WORD *)v24 + (v6 >> 1) - 1) = 0;
      }
      else
      {
        v31 = 0;
      }
      ms_exc.registration.TryLevel = 0;
      goto LABEL_67;
    }
LABEL_3:
    ExRaiseDatatypeMisalignment();
  }
LABEL_68:
  if ( v31 )
  {
    started = GreStartDocInternal((int)&v21, a1, &v27, a4, (int *)v19, (int)v20);
    if ( started )
    {
      ms_exc.registration.TryLevel = 2;
      v17 = (struct HDC__ *)a3;
      if ( a3 >= _MmUserProbeAddress )
        v17 = (struct HDC__ *)_MmUserProbeAddress;
      *(_DWORD *)v17 = v27.unused;
      ms_exc.registration.TryLevel = -2;
    }
  }
  if ( v22 )
    FreeThreadBufferWithTag(v22);
  if ( v23 )
    FreeThreadBufferWithTag(v23);
  if ( v24 )
    FreeThreadBufferWithTag(v24);
  return started;
}
