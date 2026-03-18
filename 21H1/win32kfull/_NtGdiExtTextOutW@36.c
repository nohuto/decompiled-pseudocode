/*
 * XREFs of _NtGdiExtTextOutW@36 @ 0x5684C
 * Callers:
 *     <none>
 * Callees:
 *     _GreExtTextOutWInternal@40 @ 0x78958 (_GreExtTextOutWInternal@40.c)
 *     _GreExtTextOutRect@8 @ 0x78BA6 (_GreExtTextOutRect@8.c)
 *     __SEH_prolog4_GS @ 0xF917C (__SEH_prolog4_GS.c)
 *     _memcpy @ 0xF929B (_memcpy.c)
 */

int __stdcall NtGdiExtTextOutW(
        HDC a1,
        int a2,
        struct XDCOBJ *a3,
        int a4,
        ULONG a5,
        unsigned int a6,
        struct tagRECT *a7,
        unsigned __int16 *Src,
        unsigned int a9)
{
  int *v9; // edx
  unsigned __int16 *v10; // ebx
  size_t v11; // edi
  int v12; // edx
  unsigned int v13; // ecx
  int v14; // esi
  unsigned __int16 *v16; // [esp+14h] [ebp-114h]
  int MaxCount; // [esp+20h] [ebp-108h]
  unsigned int v18; // [esp+24h] [ebp-104h]
  int *v19; // [esp+2Ch] [ebp-FCh]
  int *v20; // [esp+34h] [ebp-F4h]
  unsigned __int16 *v21; // [esp+38h] [ebp-F0h]
  unsigned __int16 *v22; // [esp+38h] [ebp-F0h]
  int v23; // [esp+3Ch] [ebp-ECh] BYREF
  int v24; // [esp+40h] [ebp-E8h]
  int v25; // [esp+44h] [ebp-E4h]
  int v26; // [esp+48h] [ebp-E0h]
  char v27; // [esp+4Ch] [ebp-DCh] BYREF
  CPPEH_RECORD ms_exc; // [esp+110h] [ebp-18h]

  v9 = (int *)a5;
  v20 = (int *)a5;
  v10 = Src;
  v23 = 0;
  v24 = 0;
  v25 = 0;
  v26 = 0;
  if ( (unsigned int)a7 > 0xFFFF )
    return 0;
  if ( a5 )
  {
    if ( (a4 & 6) != 0 )
    {
      ms_exc.registration.TryLevel = 0;
      if ( a5 >= _MmUserProbeAddress )
        v9 = (int *)_MmUserProbeAddress;
      v23 = *v9;
      v24 = v9[1];
      v25 = v9[2];
      v26 = v9[3];
      v20 = &v23;
      ms_exc.registration.TryLevel = -2;
    }
    else
    {
      v20 = 0;
    }
  }
  if ( !a7 )
  {
    if ( v20 && (a4 & 2) != 0 )
      return GreExtTextOutRect(a1);
    else
      return 1;
  }
  if ( (a4 & 6) != 0 && !v20 || !a6 )
    return 0;
  v11 = 0;
  v18 = (22 * (_DWORD)a7 + 3) & 0xFFFFFFFC;
  v12 = 2 * (_DWORD)a7;
  MaxCount = 2 * (_DWORD)a7;
  if ( Src )
  {
    v11 = 4 * (_DWORD)a7;
    if ( (a4 & 0x2000) != 0 )
      v11 = 8 * (_DWORD)a7;
  }
  if ( v18 + v12 + ((v11 + 3) & 0xFFFFFFFC) <= 0xC0 )
  {
    v16 = 0;
    v21 = (unsigned __int16 *)&v27;
LABEL_16:
    if ( Src )
    {
      ms_exc.registration.TryLevel = 1;
      if ( v11 && ((unsigned int)&Src[v11 / 2] > _MmUserProbeAddress || &Src[v11 / 2] < Src) )
        *(_BYTE *)_MmUserProbeAddress = 0;
      memcpy(v21, Src, v11);
      ms_exc.registration.TryLevel = -2;
      v13 = a6;
      v10 = v21;
      v21 = (unsigned __int16 *)((char *)v21 + ((v11 + 3) & 0xFFFFFFFC));
    }
    else
    {
      v13 = a6;
    }
    v19 = (int *)v21;
    v22 = (unsigned __int16 *)((char *)v21 + v18);
    ms_exc.registration.TryLevel = 2;
    if ( 2 * (_DWORD)a7 )
    {
      if ( (v13 & 1) != 0 )
        ExRaiseDatatypeMisalignment();
      if ( v13 + MaxCount > _MmUserProbeAddress || v13 + MaxCount < v13 )
        *(_BYTE *)_MmUserProbeAddress = 0;
    }
    memcpy(v22, (const void *)v13, MaxCount);
    ms_exc.registration.TryLevel = -2;
    v14 = GreExtTextOutWInternal(a1, a3, a4, (int)v20, (unsigned int)v22, a7, v10, v19, a9);
    if ( v16 )
      FreeTmpBuffer(v16);
    return v14;
  }
  v16 = (unsigned __int16 *)AllocFreeTmpBuffer(v18 + v12 + ((v11 + 3) & 0xFFFFFFFC));
  v21 = v16;
  if ( v16 )
    goto LABEL_16;
  return 0;
}
