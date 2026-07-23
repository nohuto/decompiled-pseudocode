/*
 * XREFs of _RtlpCallQueryRegistryRoutine@28 @ 0x4B2EB0AD
 * Callers:
 *     _RtlpQueryRegistryValues@24 @ 0x4B2EAEA8 (_RtlpQueryRegistryValues@24.c)
 * Callees:
 *     _RtlExpandEnvironmentStrings_U@16 @ 0x4B2DC330 (_RtlExpandEnvironmentStrings_U@16.c)
 *     _RtlpQueryRegistryDirect@16 @ 0x4B2EB1AB (_RtlpQueryRegistryDirect@16.c)
 *     _RtlpValidateKeyTrust@8 @ 0x4B2EB243 (_RtlpValidateKeyTrust@8.c)
 *     _RtlpHpAppCompatDontChangePolicy@0 @ 0x4B2ED850 (_RtlpHpAppCompatDontChangePolicy@0.c)
 *     _memcpy @ 0x4B2F88B0 (_memcpy.c)
 */

NTSTATUS __fastcall RtlpCallQueryRegistryRoutine(
        void *a1,
        _DWORD *a2,
        int a3,
        ULONG *a4,
        int a5,
        PVOID Environment,
        char a7)
{
  int v7; // ebx
  wchar_t *v8; // eax
  int v9; // ecx
  int v10; // eax
  unsigned int v11; // esi
  wchar_t *v12; // edi
  int v13; // eax
  NTSTATUS result; // eax
  int v15; // eax
  int v16; // eax
  bool v17; // zf
  unsigned int v18; // ecx
  unsigned int v19; // eax
  char *v20; // edx
  signed int v21; // esi
  char *v22; // ecx
  unsigned int v23; // ecx
  int v24; // eax
  char *v25; // ecx
  __int16 v26; // ax
  __int16 v27; // ax
  unsigned int v28; // eax
  wchar_t *Buffer; // esi
  int v31; // ecx
  ULONG v32; // eax
  int RegistryDirect; // eax
  unsigned int v34; // ebx
  wchar_t *v35; // eax
  wchar_t *v36; // ebx
  size_t v37; // [esp-4h] [ebp-38h]
  ULONG ReturnedLength; // [esp+14h] [ebp-20h] BYREF
  _UNICODE_STRING Destination; // [esp+18h] [ebp-1Ch] BYREF
  _UNICODE_STRING Source; // [esp+20h] [ebp-14h] BYREF
  char *v42; // [esp+28h] [ebp-Ch]
  int v43; // [esp+2Ch] [ebp-8h]
  _DWORD *v44; // [esp+30h] [ebp-4h]

  v7 = 0;
  ReturnedLength = *a4;
  v8 = (wchar_t *)(a3 + ReturnedLength);
  *a4 = 0;
  v9 = *((unsigned __int8 *)a2 + 16);
  Source.Buffer = v8;
  v10 = *(_DWORD *)(a3 + 4);
  v44 = a2;
  Destination.Buffer = (wchar_t *)a3;
  v43 = v10;
  if ( v10 )
  {
    if ( *(_DWORD *)(a3 + 8) != -1 )
    {
      v11 = *(_DWORD *)(a3 + 12);
      if ( v11 || v10 != v9 )
      {
        if ( (a2[1] & 0x20) != 0 )
        {
          v42 = (char *)a2[2];
LABEL_6:
          v12 = (wchar_t *)(*(_DWORD *)(a3 + 8) + a3);
LABEL_7:
          v9 = v43;
          goto LABEL_8;
        }
        v18 = *(_DWORD *)(a3 + 16);
        if ( v11 )
          v19 = a3 + v11 + *(_DWORD *)(a3 + 8);
        else
          v19 = v18 + a3 + 20;
        v20 = (char *)((v19 + 7) & 0xFFFFFFF8);
        v21 = v18 + 2;
        v42 = v20;
        if ( v18 < 0xFFFFFFFE )
        {
          if ( (char *)Source.Buffer - v20 < v21 )
          {
            result = -1073741789;
            *a4 = (ULONG)&v20[v21 - a3];
            return result;
          }
          LODWORD(v37) = v18;
          memcpy(v20, (const void *)(a3 + 20), v37);
          v22 = v42;
          *(_WORD *)&v42[*(_DWORD *)(a3 + 16)] = 0;
          v23 = (unsigned int)&v22[v21 + 7];
          v11 = *(_DWORD *)(a3 + 12);
          v23 &= 0xFFFFFFF8;
          a2 = v44;
          ReturnedLength = (ULONG)Source.Buffer - v23;
          v24 = *(_DWORD *)(a3 + 4);
          Destination.Buffer = (wchar_t *)v23;
          v43 = v24;
          goto LABEL_6;
        }
        return -1073741764;
      }
    }
  }
  v16 = v9;
  if ( !v9 )
  {
    v17 = (a2[1] & 4) == 0;
    goto LABEL_24;
  }
  v11 = a2[6];
  v12 = (wchar_t *)a2[5];
  v42 = (char *)a2[2];
  v43 = v9;
  if ( !v11 )
  {
    v25 = (char *)v12;
    if ( v16 == 1 || v16 == 2 )
    {
      if ( v12 )
      {
        do
        {
          v27 = *(_WORD *)v25;
          v25 += 2;
        }
        while ( v27 );
        v11 = v25 - (char *)v12;
        goto LABEL_7;
      }
      return -1073741764;
    }
    if ( v16 == 7 )
    {
      if ( v12 )
      {
        if ( *v12 )
        {
          do
          {
            do
            {
              v26 = *(_WORD *)v25;
              v25 += 2;
            }
            while ( v26 );
          }
          while ( *(_WORD *)v25 );
        }
        v11 = v25 - (char *)v12 + 2;
        goto LABEL_7;
      }
      return -1073741764;
    }
    v9 = v16;
  }
LABEL_8:
  v13 = a2[1];
  if ( (v13 & 0x20) == 0 )
    goto LABEL_12;
  if ( (v13 & 0x100) == 0 )
  {
    if ( (v13 & 0x80u) == 0 || v9 != 1 && v9 != 7 && v9 != 2 )
      goto LABEL_12;
    v17 = (v13 & 4) == 0;
LABEL_24:
    if ( v17 )
      return 0;
    else
      return -1073741772;
  }
  if ( *((unsigned __int8 *)a2 + 19) != v9 )
    return -1073741788;
  v13 = a2[1];
LABEL_12:
  if ( (v13 & 0x10) == 0 )
  {
    if ( v9 == 7 )
    {
      v28 = v11 - 4;
      Buffer = v12;
      for ( Source.Buffer = (wchar_t *)((char *)v12 + v28); Buffer < Source.Buffer; v12 = Buffer )
      {
        while ( *Buffer++ )
          ;
        v31 = a2[1];
        v32 = (char *)Buffer - (char *)v12;
        Destination.Buffer = Buffer;
        ReturnedLength = (char *)Buffer - (char *)v12;
        if ( (v31 & 0x20) != 0 )
        {
          if ( a7 )
          {
            v7 = RtlpValidateKeyTrust(a1);
            if ( v7 < 0 )
              return v7;
            a2 = v44;
            v32 = ReturnedLength;
          }
          RegistryDirect = RtlpQueryRegistryDirect(1, v12, v32, a2[3]);
          a2 = v44;
          v44[3] += 8;
        }
        else
        {
          RegistryDirect = ((int (__thiscall *)(_DWORD, char *, int, wchar_t *, ULONG, int, _DWORD))*a2)(
                             *a2,
                             v42,
                             1,
                             v12,
                             v32,
                             a5,
                             a2[3]);
          a2 = v44;
          Buffer = Destination.Buffer;
        }
        v7 = RegistryDirect != -1073741789 ? RegistryDirect : 0;
        if ( v7 < 0 )
          break;
      }
      return v7;
    }
    if ( v9 == 2 && v11 >= 2 && v11 <= 0xFFFC )
    {
      v34 = v11 - 2;
      v35 = v12;
      if ( v11 != 2 )
      {
        while ( *v35 != 37 )
        {
          ++v35;
          v34 -= 2;
          if ( !v34 )
            goto LABEL_15;
        }
        v36 = Destination.Buffer;
        Source.MaximumLength = v11;
        Source.Length = v11 - 2;
        Destination.Length = 0;
        Source.Buffer = v12;
        if ( (int)ReturnedLength > 0 )
        {
          if ( ReturnedLength > 0xFFFE )
          {
            Destination.MaximumLength = -2;
            Destination.Buffer[32766] = 0;
          }
          else
          {
            Destination.MaximumLength = ReturnedLength;
            Destination.Buffer[(ReturnedLength >> 1) - 1] = 0;
          }
        }
        else
        {
          Destination.MaximumLength = 0;
        }
        result = RtlExpandEnvironmentStrings_U(Environment, &Source, &Destination, &ReturnedLength);
        v9 = 1;
        v43 = 1;
        if ( result < 0 )
        {
          if ( result == -1073741789 )
            *a4 = (ULONG)v36 + ReturnedLength - a3;
          if ( result != -2147483643
            && (result != -1073741789 || Destination.MaximumLength != 0xFFFE && ReturnedLength <= 0xFFFC) )
          {
            return result;
          }
        }
        else
        {
          v12 = Destination.Buffer;
          v11 = Destination.Length + 2;
        }
        a2 = v44;
      }
    }
  }
LABEL_15:
  if ( (a2[1] & 0x20) != 0 )
  {
    if ( a7 )
    {
      result = RtlpValidateKeyTrust(a1);
      if ( result < 0 )
        return result;
      a2 = v44;
      v9 = v43;
    }
    v15 = RtlpQueryRegistryDirect(v9, v12, v11, a2[3]);
  }
  else
  {
    v15 = ((int (__thiscall *)(_DWORD, char *, int, wchar_t *, unsigned int, int, _DWORD))*a2)(
            *a2,
            v42,
            v9,
            v12,
            v11,
            a5,
            a2[3]);
  }
  return v15 != -1073741789 ? v15 : 0;
}
