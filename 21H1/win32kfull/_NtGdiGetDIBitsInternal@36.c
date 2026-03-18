/*
 * XREFs of _NtGdiGetDIBitsInternal@36 @ 0x48D46
 * Callers:
 *     <none>
 * Callees:
 *     _PALLOCMEM2@12 @ 0x48D0A (_PALLOCMEM2@12.c)
 *     ?GreGetBitmapSizeInternal@@YGKPBUtagBITMAPINFO@@KI@Z @ 0x49006 (-GreGetBitmapSizeInternal@@YGKPBUtagBITMAPINFO@@KI@Z.c)
 *     _GreGetDIBitsInternal@36 @ 0x4B3C0 (_GreGetDIBitsInternal@36.c)
 *     _GreGetBitmapBitsSize@4 @ 0x76F1A (_GreGetBitmapBitsSize@4.c)
 *     __SEH_prolog4_GS @ 0xF917C (__SEH_prolog4_GS.c)
 *     _memcpy @ 0xF929B (_memcpy.c)
 */

int __stdcall NtGdiGetDIBitsInternal(
        HDC a1,
        int a2,
        HDC a3,
        HBITMAP a4,
        int a5,
        char *Address,
        unsigned __int8 *a7,
        struct tagBITMAPINFO *a8,
        int a9)
{
  int DIBitsInternal; // ebx
  const struct tagBITMAPINFO *v10; // esi
  size_t v11; // edi
  size_t BitmapSizeInternal; // eax
  _DWORD *v13; // esi
  int v14; // eax
  HDC v15; // ecx
  HBITMAP v16; // eax
  bool v17; // zf
  int v18; // eax
  volatile void *v19; // eax
  int v20; // ecx
  char *v22; // eax
  unsigned int v23; // eax
  HDC v24; // ecx
  HBITMAP v25; // eax
  unsigned int v26; // [esp+0h] [ebp-80h]
  unsigned int v27; // [esp+0h] [ebp-80h]
  unsigned int v28; // [esp+4h] [ebp-7Ch]
  unsigned int v29; // [esp+4h] [ebp-7Ch]
  struct tagBITMAPINFO *v30; // [esp+1Ch] [ebp-64h]
  int v31; // [esp+20h] [ebp-60h]
  HANDLE SecureHandle; // [esp+24h] [ebp-5Ch]
  struct tagBITMAPINFO *Length; // [esp+2Ch] [ebp-54h]
  PVOID v34; // [esp+30h] [ebp-50h]
  _DWORD v35[11]; // [esp+3Ch] [ebp-44h] BYREF
  CPPEH_RECORD ms_exc; // [esp+68h] [ebp-18h]

  Length = a8;
  DIBitsInternal = 0;
  v31 = 1;
  SecureHandle = 0;
  memset(v35, 0, 0x28u);
  if ( (unsigned int)a7 > 1 && a7 != (unsigned __int8 *)2 || !Address || !a2 )
    return 0;
  ms_exc.registration.TryLevel = 0;
  v34 = a4 != 0 ? (PVOID)a5 : 0;
  v10 = *(const struct tagBITMAPINFO **)Address;
  v30 = *(struct tagBITMAPINFO **)Address;
  ProbeForWrite(Address, *(_DWORD *)Address, 1u);
  if ( v34 )
    goto LABEL_5;
  v11 = 12;
  v22 = Address;
  if ( v10 == (const struct tagBITMAPINFO *)12 && !*((_WORD *)Address + 5) )
    goto LABEL_57;
  if ( (unsigned int)v10 < 0x28 || *((_WORD *)Address + 7) )
LABEL_5:
    v11 = 0;
  else
    v11 = 40;
  if ( v11 )
  {
    v22 = Address;
LABEL_57:
    memcpy(v35, v22, v11);
    v35[0] = v11;
LABEL_58:
    v13 = v35;
    goto LABEL_30;
  }
  if ( v10 == (const struct tagBITMAPINFO *)40 )
    *((_DWORD *)Address + 8) = 0;
  BitmapSizeInternal = GreGetBitmapSizeInternal(v10, v26, v28);
  v11 = BitmapSizeInternal;
  if ( !BitmapSizeInternal )
    goto LABEL_58;
  v13 = PALLOCMEM2(BitmapSizeInternal, 1886221383, 1);
  if ( v13 )
  {
    if ( &Address[v11] < Address || (unsigned int)&Address[v11] > _MmUserProbeAddress )
      *(_BYTE *)_MmUserProbeAddress = 0;
    memcpy(v13, Address, v11);
    *v13 = v30;
    if ( GreGetBitmapSizeInternal(v30, v27, v29) != v11 )
    {
      v11 = 0;
      goto LABEL_39;
    }
    if ( (unsigned int)v30 >= 0x28 )
      v13[8] = 0;
    if ( a4 )
    {
      if ( *v13 < 0x28u )
      {
        v23 = *((unsigned __int16 *)v13 + 3);
        v24 = a3;
        if ( v23 < (unsigned int)a3 )
          v24 = (HDC)*((unsigned __int16 *)v13 + 3);
        a3 = v24;
        v25 = (HBITMAP)(v23 - (_DWORD)v24);
        if ( v25 >= a4 )
          v25 = a4;
        a4 = v25;
        if ( !*((_WORD *)v13 + 2) || !*((_WORD *)v13 + 4) )
          goto LABEL_66;
        v17 = *((_WORD *)v13 + 5) == 0;
      }
      else
      {
        v14 = v13[2];
        if ( v14 < 0 )
          v14 = -v14;
        v15 = a3;
        if ( v14 < (unsigned int)a3 )
          v15 = (HDC)v14;
        a3 = v15;
        v16 = (HBITMAP)(v14 - (_DWORD)v15);
        if ( v16 >= a4 )
          v16 = a4;
        a4 = v16;
        if ( !v13[1] || !*((_WORD *)v13 + 6) )
          goto LABEL_66;
        v17 = *((_WORD *)v13 + 7) == 0;
      }
      if ( !v17 )
      {
        v18 = 0;
LABEL_29:
        v31 = v18;
        goto LABEL_30;
      }
LABEL_66:
      v18 = 1;
      goto LABEL_29;
    }
  }
LABEL_30:
  if ( !v11 )
  {
LABEL_39:
    v19 = v34;
    goto LABEL_40;
  }
  v19 = v34;
  if ( v34 && v13 )
  {
    if ( *v13 >= 0x28u )
    {
      v20 = v13[4];
      if ( (v20 == 1 || v20 == 2) && !v13[5] )
      {
        v11 = 0;
        goto LABEL_40;
      }
    }
    if ( a8 || (Length = (struct tagBITMAPINFO *)GreGetBitmapBitsSize(v13), v19 = v34, Length) )
    {
      ProbeForWrite(v19, (SIZE_T)Length, 4u);
      SecureHandle = MmSecureVirtualMemory(v34, (SIZE_T)Length, 4u);
    }
    v11 &= -(SecureHandle != 0);
    goto LABEL_39;
  }
LABEL_40:
  ms_exc.registration.TryLevel = -2;
  if ( !v19 || !v31 )
  {
    if ( v11 )
    {
      if ( v13 )
      {
        DIBitsInternal = GreGetDIBitsInternal(a1, a3, a4, (int)v19, v13, a7, Length, v11);
        if ( DIBitsInternal )
        {
          ms_exc.registration.TryLevel = 1;
          memcpy(Address, v13, v11);
          ms_exc.registration.TryLevel = -2;
        }
      }
    }
  }
  if ( SecureHandle )
    MmUnsecureVirtualMemory(SecureHandle);
  if ( v13 )
  {
    if ( v13 != v35 )
      Win32FreePool(v13);
  }
  return DIBitsInternal;
}
