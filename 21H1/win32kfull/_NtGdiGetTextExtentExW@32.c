/*
 * XREFs of _NtGdiGetTextExtentExW@32 @ 0x61BE0
 * Callers:
 *     <none>
 * Callees:
 *     @__security_check_cookie@4 @ 0xED840 (@__security_check_cookie@4.c)
 *     _GreGetTextExtentExW@32 @ 0xF83A4 (_GreGetTextExtentExW@32.c)
 *     _memcpy @ 0xF929B (_memcpy.c)
 */

int __stdcall NtGdiGetTextExtentExW(HDC a1, void *Src, unsigned int a3, int a4, ULONG a5, char *a6, ULONG a7, int a8)
{
  const void *v8; // edx
  _BYTE *v9; // eax
  int TextExtent; // esi
  _BYTE *v11; // ecx
  ULONG v12; // ecx
  unsigned int v13; // edx
  int *v14; // ecx
  int v15; // eax
  BOOL v16; // ecx
  _DWORD *v17; // edi
  _DWORD *v18; // edi
  void *v19; // edi
  size_t v20; // ecx
  char *v21; // edx
  int v23; // [esp+1Ch] [ebp-ACh] BYREF
  int v24; // [esp+20h] [ebp-A8h]
  HDC v25; // [esp+24h] [ebp-A4h]
  ULONG v26; // [esp+28h] [ebp-A0h]
  int v27; // [esp+2Ch] [ebp-9Ch] BYREF
  _BYTE *v28; // [esp+30h] [ebp-98h]
  BOOL v29; // [esp+34h] [ebp-94h]
  _BYTE *v30; // [esp+38h] [ebp-90h]
  BOOL v31; // [esp+3Ch] [ebp-8Ch]
  int v32; // [esp+40h] [ebp-88h]
  void *v33; // [esp+44h] [ebp-84h]
  void *v34; // [esp+48h] [ebp-80h]
  _BYTE v35[64]; // [esp+4Ch] [ebp-7Ch] BYREF
  _BYTE v36[32]; // [esp+8Ch] [ebp-3Ch] BYREF
  CPPEH_RECORD ms_exc; // [esp+B0h] [ebp-18h]

  v25 = a1;
  v8 = Src;
  v26 = a7;
  v23 = 0;
  v24 = 0;
  v27 = 0;
  v9 = 0;
  v33 = 0;
  v28 = 0;
  v34 = 0;
  v30 = 0;
  v31 = 0;
  v29 = 0;
  TextExtent = 0;
  v32 = 0;
  if ( !a7 )
    return TextExtent;
  if ( a3 )
  {
    v31 = a3 <= 0x10;
    v29 = v31;
    if ( Src )
    {
      ms_exc.registration.TryLevel = 0;
      if ( a3 <= 0x10 )
      {
        v11 = v36;
        v28 = v36;
        v9 = v35;
        v34 = v35;
        v30 = v35;
      }
      else
      {
        if ( a3 <= 0x682AAA )
        {
          v9 = (_BYTE *)AllocFreeTmpBuffer(6 * a3);
          v34 = v9;
          v30 = v9;
          v8 = Src;
        }
        v11 = &v9[4 * a3];
        v28 = v11;
      }
      v33 = v11;
      if ( v9 )
      {
        v12 = (ULONG)v8 + 2 * a3;
        if ( v12 < (unsigned int)v8 || v12 > _MmUserProbeAddress )
          *(_BYTE *)_MmUserProbeAddress = 0;
        memcpy(v33, v8, 2 * a3);
        TextExtent = 1;
        v32 = 1;
        v9 = v34;
      }
      ms_exc.registration.TryLevel = -2;
    }
    v13 = 0;
    if ( TextExtent )
    {
      if ( a6 )
        v14 = (int *)v9;
      else
        v14 = 0;
      if ( a5 )
        v15 = a4;
      else
        v15 = -1;
      TextExtent = GreGetTextExtentExW(v25, a3, v15, (int)&v27, v14, (int)&v23, a8);
      v32 = TextExtent;
      v13 = v27;
    }
    v16 = v31;
    v29 = v31;
    if ( !TextExtent )
      goto LABEL_39;
  }
  else
  {
    TextExtent = 1;
    v32 = 1;
    v16 = 0;
    v13 = 0;
  }
  if ( v13 <= a3 )
  {
    ms_exc.registration.TryLevel = 1;
    v17 = (_DWORD *)v26;
    if ( v26 >= _MmUserProbeAddress )
      v17 = (_DWORD *)_MmUserProbeAddress;
    *v17 = v23;
    v17[1] = v24;
    v18 = (_DWORD *)a5;
    if ( a5 )
    {
      if ( a5 >= _MmUserProbeAddress )
        v18 = (_DWORD *)_MmUserProbeAddress;
      *v18 = v13;
    }
    v19 = v34;
    if ( v13 && a6 && v34 )
    {
      v20 = 4 * v13;
      v21 = &a6[4 * v13];
      if ( (unsigned int)v21 > _MmUserProbeAddress || v21 <= a6 || ((unsigned __int8)a6 & 3) != 0 )
        *(_BYTE *)_MmUserProbeAddress = 0;
      memcpy(a6, v19, v20);
      v16 = v31;
    }
    ms_exc.registration.TryLevel = -2;
    goto LABEL_32;
  }
  TextExtent = 0;
LABEL_39:
  v19 = v34;
LABEL_32:
  if ( !v16 && v19 )
    FreeTmpBuffer(v19);
  return TextExtent;
}
