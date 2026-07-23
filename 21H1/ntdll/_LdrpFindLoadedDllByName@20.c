/*
 * XREFs of _LdrpFindLoadedDllByName@20 @ 0x4B2CF350
 * Callers:
 *     _LdrGetDllHandleEx@20 @ 0x4B2CABE0 (_LdrGetDllHandleEx@20.c)
 *     _LdrpFastpthReloadedDll@16 @ 0x4B2CE2E0 (_LdrpFastpthReloadedDll@16.c)
 *     _LdrGetDllHandleByName@12 @ 0x4B2CF2C0 (_LdrGetDllHandleByName@12.c)
 *     _LdrpFindOrPrepareLoadingModule@28 @ 0x4B2D2238 (_LdrpFindOrPrepareLoadingModule@28.c)
 *     _LdrpFindLoadedDllInternal@20 @ 0x4B2E9DE3 (_LdrpFindLoadedDllInternal@20.c)
 *     _AVrfInitializeVerifier@24 @ 0x4B338523 (_AVrfInitializeVerifier@24.c)
 * Callees:
 *     _RtlAcquireSRWLockExclusive@4 @ 0x4B2C22E0 (_RtlAcquireSRWLockExclusive@4.c)
 *     _RtlReleaseSRWLockExclusive@4 @ 0x4B2C2480 (_RtlReleaseSRWLockExclusive@4.c)
 *     _RtlGetCurrentServiceSessionId@0 @ 0x4B2C3BF0 (_RtlGetCurrentServiceSessionId@0.c)
 *     _RtlEqualUnicodeString@12 @ 0x4B2D1250 (_RtlEqualUnicodeString@12.c)
 *     _LdrpLogEtwEvent@24 @ 0x4B330117 (_LdrpLogEtwEvent@24.c)
 */

int __fastcall LdrpFindLoadedDllByName(_UNICODE_STRING *a1, unsigned __int16 *a2, char a3, int *a4, _DWORD *a5)
{
  _UNICODE_STRING *v5; // eax
  unsigned int v7; // ecx
  unsigned __int16 v8; // si
  unsigned __int16 *v9; // edx
  int v10; // eax
  __int16 v11; // cx
  __int16 v12; // ax
  int v13; // esi
  int v14; // edi
  wchar_t *Buffer; // ebx
  unsigned int v16; // esi
  unsigned __int16 v17; // ax
  int v18; // eax
  int v19; // ebx
  int *v20; // edi
  int v21; // ebx
  int v22; // ecx
  unsigned __int16 *v23; // eax
  unsigned __int16 *v24; // edx
  int v25; // ecx
  unsigned int v26; // edi
  unsigned int v27; // ebx
  _DWORD *v28; // eax
  int v29; // esi
  unsigned __int16 *v30; // edi
  ULONG CurrentServiceSessionId; // eax
  int v32; // eax
  __int16 v34; // cx
  __int16 v35; // cx
  int v36; // eax
  int v37; // eax
  char *v38; // eax
  _WORD v39[2]; // [esp+10h] [ebp-2Ch] BYREF
  unsigned __int16 *v40; // [esp+14h] [ebp-28h]
  int v41; // [esp+18h] [ebp-24h]
  int *v42; // [esp+1Ch] [ebp-20h]
  int v43; // [esp+20h] [ebp-1Ch]
  unsigned __int16 *v44; // [esp+24h] [ebp-18h]
  int *v45; // [esp+28h] [ebp-14h]
  char *v46; // [esp+2Ch] [ebp-10h]
  PUNICODE_STRING String1; // [esp+30h] [ebp-Ch]
  unsigned int v48; // [esp+34h] [ebp-8h]

  v5 = a1;
  String1 = a1;
  v44 = a2;
  if ( !a1 )
  {
    v7 = *((_DWORD *)a2 + 1);
    v8 = *a2;
    v9 = (unsigned __int16 *)(*a2 + v7 - 2);
    if ( (unsigned int)v9 > v7 )
    {
      while ( 1 )
      {
        v10 = *v9;
        if ( v10 == 92 || v10 == 47 )
          break;
        if ( (unsigned int)--v9 <= v7 )
          goto LABEL_8;
      }
      ++v9;
    }
LABEL_8:
    v40 = v9;
    v11 = (_WORD)v9 - v7;
    v12 = a2[1] - v11;
    v39[0] = v8 - v11;
    v39[1] = v12;
    v5 = (_UNICODE_STRING *)v39;
    String1 = (PUNICODE_STRING)v39;
  }
  v13 = 0;
  v48 = 0;
  if ( !v5 )
    goto LABEL_59;
  v14 = v5->Length >> 1;
  Buffer = v5->Buffer;
  if ( v14 )
  {
    while ( 1 )
    {
      v16 = *Buffer++;
      --v14;
      if ( v16 < 0x61 )
        goto LABEL_36;
      if ( v16 > 0x7A )
        break;
      v17 = v16 - 32;
LABEL_14:
      v13 = v17 + 65599 * v48;
      v48 = v13;
      if ( !v14 )
        goto LABEL_15;
    }
    if ( Nls844UnicodeUpcaseTable && (unsigned __int16)v16 >= 0xC0u )
    {
      v17 = v16
          + *(_WORD *)(Nls844UnicodeUpcaseTable
                     + 2
                     * ((v16 & 0xF)
                      + *(unsigned __int16 *)(Nls844UnicodeUpcaseTable
                                            + 2
                                            * (((unsigned __int8)v16 >> 4)
                                             + *(unsigned __int16 *)(Nls844UnicodeUpcaseTable + 2 * (v16 >> 8))))));
      goto LABEL_14;
    }
LABEL_36:
    v17 = v16;
    goto LABEL_14;
  }
LABEL_15:
  if ( !v13 )
  {
LABEL_59:
    v13 = 0x80000000;
    v48 = 0x80000000;
  }
  RtlAcquireSRWLockExclusive(&LdrpModuleDatatableLock);
  v18 = v13 & 0x1F;
  v19 = LdrpHashTable[2 * v18];
  v20 = &LdrpHashTable[2 * v18];
  v42 = v20;
  v45 = (int *)v19;
  if ( (int *)v19 == v20 )
  {
LABEL_48:
    v29 = -1073741515;
    goto LABEL_29;
  }
  while ( 1 )
  {
    v21 = v19 - 60;
    v41 = v21;
    if ( v13 != *(_DWORD *)(v21 + 144) || (a3 & 8) != 0 && (*(_BYTE *)(v21 + 52) & 1) == 0 )
      goto LABEL_47;
    if ( v44 )
      break;
    if ( (*(_DWORD *)(v21 + 52) & 0x10000000) == 0 && RtlEqualUnicodeString(String1, (PUNICODE_STRING)(v21 + 44), 1u) )
      goto LABEL_26;
LABEL_47:
    v19 = *v45;
    v45 = (int *)v19;
    if ( (int *)v19 == v20 )
      goto LABEL_48;
  }
  v22 = *v44;
  if ( v22 != *(unsigned __int16 *)(v21 + 36) )
    goto LABEL_47;
  v23 = (unsigned __int16 *)*((_DWORD *)v44 + 1);
  v24 = (unsigned __int16 *)((char *)v23 + v22);
  v46 = (char *)v23 + v22;
  if ( v23 < (unsigned __int16 *)((char *)v23 + v22) )
  {
    v25 = *(_DWORD *)(v21 + 40) - (_DWORD)v23;
    v43 = v25;
    while ( 2 )
    {
      v26 = *v23;
      v27 = *(unsigned __int16 *)((char *)v23 + v25);
      if ( (_WORD)v26 == (_WORD)v27 )
        goto LABEL_24;
      if ( v26 >= 0x61 )
      {
        if ( v26 <= 0x7A )
        {
          v34 = v26 - 32;
          goto LABEL_40;
        }
        if ( Nls844UnicodeUpcaseTable && (unsigned __int16)v26 >= 0xC0u )
        {
          v24 = (unsigned __int16 *)v46;
          v34 = v26
              + *(_WORD *)(Nls844UnicodeUpcaseTable
                         + 2
                         * ((v26 & 0xF)
                          + *(unsigned __int16 *)(Nls844UnicodeUpcaseTable
                                                + 2
                                                * (((unsigned __int8)v26 >> 4)
                                                 + *(unsigned __int16 *)(Nls844UnicodeUpcaseTable + 2 * (v26 >> 8))))));
LABEL_40:
          LOWORD(v26) = v34;
        }
      }
      if ( v27 >= 0x61 )
      {
        if ( v27 > 0x7A )
        {
          if ( !Nls844UnicodeUpcaseTable || (unsigned __int16)v27 < 0xC0u )
            goto LABEL_42;
          v24 = (unsigned __int16 *)v46;
          v35 = v27
              + *(_WORD *)(Nls844UnicodeUpcaseTable
                         + 2
                         * ((v27 & 0xF)
                          + *(unsigned __int16 *)(Nls844UnicodeUpcaseTable
                                                + 2
                                                * (((unsigned __int8)v27 >> 4)
                                                 + *(unsigned __int16 *)(Nls844UnicodeUpcaseTable + 2 * (v27 >> 8))))));
        }
        else
        {
          v35 = v27 - 32;
        }
      }
      else
      {
LABEL_42:
        v35 = v27;
      }
      if ( (_WORD)v26 != v35 )
      {
        v13 = v48;
        v20 = v42;
        goto LABEL_47;
      }
      v25 = v43;
LABEL_24:
      if ( ++v23 >= v24 )
      {
        v21 = v41;
        break;
      }
      continue;
    }
  }
LABEL_26:
  v28 = *(_DWORD **)(v21 + 80);
  if ( v28[3] != -1 && (*(_BYTE *)(*v28 - 32) & 0x20) == 0 )
    _InterlockedIncrement((volatile signed __int32 *)(v21 + 156));
  v29 = 0;
  *a4 = v21;
  if ( a5 )
    *a5 = *(_DWORD *)(*(_DWORD *)(v21 + 80) + 32);
LABEL_29:
  RtlReleaseSRWLockExclusive(&LdrpModuleDatatableLock);
  v30 = v44;
  CurrentServiceSessionId = RtlGetCurrentServiceSessionId();
  if ( v30 )
  {
    if ( CurrentServiceSessionId )
      v32 = (int)NtCurrentPeb()->SharedData + 554;
    else
      v32 = 2147353476;
    if ( *(_BYTE *)v32 && (NtCurrentPeb()->TracingFlags & 4) != 0 )
    {
      if ( RtlGetCurrentServiceSessionId() )
        v37 = (int)NtCurrentPeb()->SharedData + 555;
      else
        v37 = 2147353477;
      if ( (*(_BYTE *)v37 & 0x20) != 0 )
        LdrpLogEtwEvent(0, v29 >= 0 ? 0 : 3, v30, 0);
    }
  }
  else
  {
    if ( CurrentServiceSessionId )
      v36 = (int)NtCurrentPeb()->SharedData + 554;
    else
      v36 = 2147353476;
    if ( *(_BYTE *)v36 && (NtCurrentPeb()->TracingFlags & 4) != 0 )
    {
      v38 = RtlGetCurrentServiceSessionId() ? (char *)NtCurrentPeb()->SharedData + 555 : (char *)2147353477;
      if ( (*v38 & 0x20) != 0 )
        LdrpLogEtwEvent(0, v29 >= 0 ? 0 : 3, String1, 0);
    }
  }
  return v29;
}
