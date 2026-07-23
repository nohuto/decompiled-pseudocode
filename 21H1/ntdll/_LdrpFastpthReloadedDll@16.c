/*
 * XREFs of _LdrpFastpthReloadedDll@16 @ 0x4B2CE2E0
 * Callers:
 *     _LdrpLoadDllInternal@32 @ 0x4B2CE104 (_LdrpLoadDllInternal@32.c)
 * Callees:
 *     _RtlAcquireSRWLockExclusive@4 @ 0x4B2C22E0 (_RtlAcquireSRWLockExclusive@4.c)
 *     _RtlReleaseSRWLockExclusive@4 @ 0x4B2C2480 (_RtlReleaseSRWLockExclusive@4.c)
 *     _RtlGetCurrentServiceSessionId@0 @ 0x4B2C3BF0 (_RtlGetCurrentServiceSessionId@0.c)
 *     _LdrpDereferenceModule@4 @ 0x4B2CD3B1 (_LdrpDereferenceModule@4.c)
 *     _LdrpFindLoadedDllByNameLockHeld@20 @ 0x4B2CDF40 (_LdrpFindLoadedDllByNameLockHeld@20.c)
 *     _LdrpRecordModuleDependency@16 @ 0x4B2CF113 (_LdrpRecordModuleDependency@16.c)
 *     _LdrpFindLoadedDllByName@20 @ 0x4B2CF350 (_LdrpFindLoadedDllByName@20.c)
 *     _LdrpDrainWorkQueue@4 @ 0x4B2D19AF (_LdrpDrainWorkQueue@4.c)
 *     _LdrpDecrementModuleLoadCountEx@8 @ 0x4B2D9697 (_LdrpDecrementModuleLoadCountEx@8.c)
 *     _LdrpDropLastInProgressCount@0 @ 0x4B2E79C9 (_LdrpDropLastInProgressCount@0.c)
 *     _LdrpLogEtwEvent@24 @ 0x4B330117 (_LdrpLogEtwEvent@24.c)
 */

int __fastcall LdrpFastpthReloadedDll(unsigned __int16 *a1, char *a2, int a3, int **a4)
{
  unsigned __int16 *v4; // eax
  int v5; // esi
  int v6; // ebx
  unsigned __int16 *i; // edi
  unsigned int v8; // eax
  char **v9; // ebx
  unsigned __int16 *v10; // edi
  signed int LoadedDllByNameLockHeld; // esi
  int v12; // eax
  int v13; // edi
  char *v14; // esi
  int v15; // ecx
  int v16; // eax
  unsigned __int16 *v18; // edx
  int v19; // eax
  char *v20; // eax
  __int16 v21; // si
  _WORD v22[2]; // [esp+Ch] [ebp-18h] BYREF
  unsigned __int16 *v23; // [esp+10h] [ebp-14h]
  char *v24; // [esp+14h] [ebp-10h]
  unsigned int v25; // [esp+18h] [ebp-Ch] BYREF
  unsigned __int16 *v26; // [esp+1Ch] [ebp-8h]
  int v27; // [esp+20h] [ebp-4h] BYREF

  v24 = a2;
  v4 = a1;
  v26 = a1;
  v27 = 0;
  if ( ((unsigned __int8)a2 & 0x20) != 0 )
  {
    if ( !a1 )
    {
      v18 = (unsigned __int16 *)(MEMORY[0] + MEMORY[4] - 2);
      if ( (unsigned int)v18 > MEMORY[4] )
      {
        while ( 1 )
        {
          v19 = *v18;
          if ( v19 == 92 || v19 == 47 )
            break;
          if ( (unsigned int)--v18 <= MEMORY[4] )
            goto LABEL_39;
        }
        ++v18;
      }
LABEL_39:
      v23 = v18;
      v22[0] = MEMORY[0] - ((_WORD)v18 - MEMORY[4]);
      v22[1] = MEMORY[2] - ((_WORD)v18 - MEMORY[4]);
      v4 = v22;
      v26 = v22;
    }
    v5 = 0;
    if ( !v4 )
      goto LABEL_43;
    v6 = *v4 >> 1;
    for ( i = (unsigned __int16 *)*((_DWORD *)v4 + 1); v6; v5 = (unsigned __int16)v8 + 65599 * v5 )
    {
      v8 = *i++;
      --v6;
      v25 = v8;
      if ( v8 >= 0x61 )
      {
        if ( v8 > 0x7A )
        {
          if ( Nls844UnicodeUpcaseTable && (unsigned __int16)v8 >= 0xC0u )
            LOWORD(v8) = v25
                       + *(_WORD *)(Nls844UnicodeUpcaseTable
                                  + 2
                                  * ((v8 & 0xF)
                                   + *(unsigned __int16 *)(Nls844UnicodeUpcaseTable
                                                         + 2
                                                         * ((((unsigned __int16)v8 >> 4) & 0xF)
                                                          + *(unsigned __int16 *)(Nls844UnicodeUpcaseTable
                                                                                + 2 * BYTE1(v8))))));
        }
        else
        {
          LOWORD(v8) = v8 - 32;
        }
      }
    }
    if ( !v5 )
LABEL_43:
      v5 = 0x80000000;
    RtlAcquireSRWLockExclusive(&LdrpModuleDatatableLock);
    v9 = (char **)a4;
    v10 = v26;
    LoadedDllByNameLockHeld = LdrpFindLoadedDllByNameLockHeld(v26, 0, (char)v24, a4, v5);
    if ( LoadedDllByNameLockHeld >= 0 )
      v27 = *(_DWORD *)((*a4)[20] + 32);
    RtlReleaseSRWLockExclusive(&LdrpModuleDatatableLock);
    v26 = (unsigned __int16 *)(LoadedDllByNameLockHeld >= 0);
    if ( RtlGetCurrentServiceSessionId() )
      v12 = (int)NtCurrentPeb()->SharedData + 554;
    else
      v12 = 2147353476;
    if ( *(_BYTE *)v12 && (NtCurrentPeb()->TracingFlags & 4) != 0 )
    {
      v20 = RtlGetCurrentServiceSessionId() ? (char *)NtCurrentPeb()->SharedData + 555 : (char *)2147353477;
      if ( (*v20 & 0x20) != 0 )
        LdrpLogEtwEvent(0, v26 != 0 ? 0 : 3, v10, 0);
    }
  }
  else
  {
    if ( ((unsigned __int16)a2 & 0x200) == 0 )
      return -1073741275;
    v9 = (char **)a4;
    LoadedDllByNameLockHeld = LdrpFindLoadedDllByName((char)a2, a4, &v27);
  }
  if ( LoadedDllByNameLockHeld >= 0 )
  {
    v13 = -1073741275;
    if ( v27 == 9 )
    {
      v14 = *v9;
      v13 = 0;
      RtlAcquireSRWLockExclusive(&LdrpModuleDatatableLock);
      v15 = *((_DWORD *)v14 + 20);
      v16 = *(_DWORD *)(v15 + 12);
      if ( v16 != -1 )
      {
        if ( v16 )
        {
          *(_DWORD *)(v15 + 12) = v16 + 1;
        }
        else if ( (NtCurrentTeb()->SameTebFlags & 0x1000) != 0 )
        {
          ++*(_DWORD *)(v15 + 16);
        }
        else
        {
          v13 = -1073741515;
        }
      }
      RtlReleaseSRWLockExclusive(&LdrpModuleDatatableLock);
      if ( v13 >= 0 )
      {
        v13 = 0;
        v24 = *v9;
        v25 = 0;
        if ( a3 )
        {
          RtlAcquireSRWLockExclusive(&LdrpModuleDatatableLock);
          if ( *(_DWORD *)(*(_DWORD *)(a3 + 80) + 12) || (NtCurrentTeb()->SameTebFlags & 0x1000) != 0 )
          {
            LdrpRecordModuleDependency(0, &v25);
            v13 = v25;
          }
          else
          {
            v13 = -1073741515;
          }
          RtlReleaseSRWLockExclusive(&LdrpModuleDatatableLock);
        }
        if ( v13 >= 0 )
          return v13;
        v21 = NtCurrentTeb()->SameTebFlags & 0x1000;
        if ( !v21 )
          LdrpDrainWorkQueue(0);
        LdrpDecrementModuleLoadCountEx(*v9, 0);
        if ( !v21 )
          LdrpDropLastInProgressCount();
      }
    }
    LdrpDereferenceModule(*v9);
    *v9 = 0;
    return v13;
  }
  return LoadedDllByNameLockHeld;
}
