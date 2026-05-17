/*
 * XREFs of _LdrpResGetResourceDirectory@20 @ 0x4B2BB320
 * Callers:
 *     _LdrpResSearchResourceMappedFile@36 @ 0x4B2BACC0 (_LdrpResSearchResourceMappedFile@36.c)
 * Callees:
 *     _LdrpSectionTableFromVirtualAddress@24 @ 0x4B2B8182 (_LdrpSectionTableFromVirtualAddress@24.c)
 *     _RtlImageNtHeaderEx@20 @ 0x4B2BE540 (_RtlImageNtHeaderEx@20.c)
 *     _RtlGetCurrentServiceSessionId@0 @ 0x4B2C3BF0 (_RtlGetCurrentServiceSessionId@0.c)
 *     __SEH_prolog4 @ 0x4B307AC4 (__SEH_prolog4.c)
 *     _LdrpTraceLoadMUIDll@8 @ 0x4B33FAF1 (_LdrpTraceLoadMUIDll@8.c)
 */

int __stdcall LdrpResGetResourceDirectory(unsigned int a1, int a2, __int16 a3, unsigned int *a4, _DWORD *a5)
{
  _DWORD *SharedData; // eax
  int v6; // eax
  int v7; // esi
  unsigned int v8; // ebx
  bool v9; // zf
  int result; // eax
  const void *v11; // eax
  __int16 v12; // cx
  char v13; // cl
  unsigned int v14; // eax
  unsigned int v15; // esi
  unsigned int v16; // edx
  int v17; // edi
  unsigned int v18; // esi
  unsigned __int16 v19; // ax
  unsigned __int16 v20; // cx
  int v21; // ecx
  _DWORD *v22; // eax
  _DWORD *v23; // eax
  int v24; // eax
  _DWORD v25[60]; // [esp+10h] [ebp-13Ch] BYREF
  _WORD v26[2]; // [esp+100h] [ebp-4Ch] BYREF
  const wchar_t *v27; // [esp+104h] [ebp-48h]
  _WORD v28[2]; // [esp+108h] [ebp-44h] BYREF
  const wchar_t *v29; // [esp+10Ch] [ebp-40h]
  unsigned int v30; // [esp+118h] [ebp-34h]
  unsigned __int16 v31; // [esp+11Ch] [ebp-30h]
  unsigned __int16 v32; // [esp+120h] [ebp-2Ch]
  int v33; // [esp+124h] [ebp-28h] BYREF
  BOOL v34; // [esp+128h] [ebp-24h]
  char v35; // [esp+12Fh] [ebp-1Dh]
  int v36; // [esp+130h] [ebp-1Ch]
  CPPEH_RECORD ms_exc; // [esp+134h] [ebp-18h]
  int v38; // [esp+15Ch] [ebp+10h]

  v35 = 1;
  LOBYTE(v34) = 1;
  v28[0] = 66;
  v28[1] = 68;
  v29 = L"LdrpResGetResourceDirectory Enter";
  v26[0] = 64;
  v26[1] = 66;
  v27 = L"LdrpResGetResourceDirectory Exit";
  SharedData = NtCurrentPeb()->SharedData;
  if ( SharedData && *SharedData )
    v6 = (int)NtCurrentPeb()->SharedData + 555;
  else
    v6 = 2147353477;
  if ( (*(_BYTE *)v6 & 1) != 0 )
  {
    v7 = 2147353476;
    if ( RtlGetCurrentServiceSessionId() )
      v24 = (int)NtCurrentPeb()->SharedData + 554;
    else
      v24 = 2147353476;
    LdrpTraceLoadMUIDll(v28, *(unsigned __int8 *)v24);
  }
  else
  {
    v7 = 2147353476;
  }
  v8 = a1;
  if ( !a1 || !a4 || !a5 )
    return -1073741811;
  if ( (a1 & 3) != 0 )
  {
    v8 = a1 & 0xFFFFFFFC;
    v34 = !(a1 & 1);
  }
  v9 = (a3 & 0x1000) == 0;
  v38 = a3 & 0x1000;
  result = RtlImageNtHeaderEx(v9, v8, a2, 0, &v33);
  if ( result >= 0 )
  {
    ms_exc.registration.TryLevel = 0;
    v11 = (const void *)(v33 + 24);
    v12 = *(_WORD *)(v33 + 24);
    if ( v12 == 267 )
    {
      qmemcpy(v25, v11, 0xE0u);
      v13 = v35;
    }
    else
    {
      if ( v12 != 523 )
      {
        v36 = -1073741701;
        ms_exc.registration.TryLevel = -2;
LABEL_31:
        v21 = 2147353477;
        v22 = NtCurrentPeb()->SharedData;
        if ( v22 && *v22 )
          v21 = (int)NtCurrentPeb()->SharedData + 555;
        if ( (*(_BYTE *)v21 & 1) != 0 )
        {
          if ( RtlGetCurrentServiceSessionId() )
            v7 = (int)NtCurrentPeb()->SharedData + 554;
          LdrpTraceLoadMUIDll(v26, *(unsigned __int8 *)v7);
        }
        return v36;
      }
      qmemcpy(v25, v11, sizeof(v25));
      v13 = 0;
    }
    v14 = v25[23];
    if ( !v13 )
      v14 = v25[27];
    if ( v14 > 2 )
    {
      v15 = v25[28];
      if ( !v13 )
        v15 = v25[32];
      if ( v15 )
      {
        if ( v34 || v15 < v25[15] )
        {
          v16 = v15 + v8;
          if ( v15 + v8 >= v8 )
          {
            v17 = v38;
LABEL_22:
            v30 = v16;
            ms_exc.registration.TryLevel = -2;
            if ( !v16 )
            {
              v36 = -1073741687;
              goto LABEL_30;
            }
            if ( !v17 )
              goto LABEL_29;
            if ( v16 <= v8 )
              goto LABEL_50;
            v18 = (v8 & 0xFFFFFFFC) + a2;
            if ( v16 + 16 > v18 )
              goto LABEL_50;
            ms_exc.registration.TryLevel = 1;
            v19 = *(_WORD *)(v16 + 12);
            v32 = v19;
            v20 = *(_WORD *)(v16 + 14);
            v31 = v20;
            ms_exc.registration.TryLevel = -2;
            if ( !v19 && !v20 )
            {
              v36 = -1073741686;
              goto LABEL_30;
            }
            if ( v16 + 8 * (v19 + v20) > v18 )
            {
LABEL_50:
              v36 = -1073741701;
            }
            else
            {
LABEL_29:
              *a4 = v16;
              *a5 = v33;
              v36 = 0;
            }
LABEL_30:
            v7 = 2147353476;
            goto LABEL_31;
          }
        }
        else
        {
          v17 = v38;
          v23 = (_DWORD *)LdrpSectionTableFromVirtualAddress(v8, a2, v33, 0, v15, v38 != 0);
          if ( v23 )
          {
            if ( v23[4] )
            {
              v16 = v8 + v15 + v23[5] - v23[3];
              goto LABEL_22;
            }
            goto LABEL_39;
          }
        }
        v36 = -1073741701;
        goto LABEL_40;
      }
    }
LABEL_39:
    v36 = -1073741687;
LABEL_40:
    ms_exc.registration.TryLevel = -2;
    goto LABEL_30;
  }
  return result;
}
