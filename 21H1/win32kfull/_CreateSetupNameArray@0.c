/*
 * XREFs of _CreateSetupNameArray@0 @ 0xE73EE
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

unsigned __int16 *__stdcall CreateSetupNameArray()
{
  unsigned __int16 *result; // eax
  unsigned __int16 *v1; // esi
  _DWORD (__stdcall *v2)(int, int); // ebx
  unsigned __int16 *ProfileValue; // eax
  signed int v4; // esi
  unsigned __int16 *v5; // eax
  struct _LIST_ENTRY *v6; // edi
  signed int v7; // edx
  unsigned __int16 *v8; // ecx
  signed int v10; // edi
  int v11; // ebx
  unsigned __int16 *v12; // edx
  unsigned __int16 *v13; // ecx
  _WORD *v15; // ecx
  _WORD *v17; // [esp+Ch] [ebp-Ch]
  unsigned __int16 *v18; // [esp+14h] [ebp-4h]

  result = (unsigned __int16 *)FastGetProfileValue(0, 34, L"SetupProgramNames", 0, 0, 0, 0);
  v1 = result;
  if ( !result )
    return result;
  v2 = Win32AllocPool;
  result = (unsigned __int16 *)Win32AllocPool(result, 2020897621);
  glpSetupPrograms = result;
  if ( !result )
    return result;
  ProfileValue = (unsigned __int16 *)FastGetProfileValue(0, 34, L"SetupProgramNames", 0, result, v1, 0);
  if ( !ProfileValue || ProfileValue != v1 )
  {
    Win32FreePool(glpSetupPrograms);
    result = 0;
    goto LABEL_25;
  }
  v4 = (unsigned int)v1 >> 1;
  v5 = glpSetupPrograms;
  v18 = glpSetupPrograms;
  v6 = 0;
  v7 = 0;
  if ( v4 )
  {
    do
    {
      v8 = &v5[v7];
      if ( *v8 )
      {
        v17 = v8 + 1;
        while ( *v8++ )
          ;
        v5 = glpSetupPrograms;
        v6 = (struct _LIST_ENTRY *)((char *)v6 + 1);
        v7 += v8 - v17;
      }
      ++v7;
    }
    while ( v7 < v4 );
    v2 = Win32AllocPool;
  }
  WPP_MAIN_CB.Queue.ListEntry.Blink = v6;
  result = (unsigned __int16 *)v2(8 * (_DWORD)v6, 2020897621);
  WPP_MAIN_CB.Queue.Wcb.WaitQueueEntry.SortKey = (ULONG)result;
  if ( !result )
  {
    Win32FreePool(glpSetupPrograms);
    result = 0;
    WPP_MAIN_CB.Queue.ListEntry.Blink = 0;
LABEL_25:
    glpSetupPrograms = 0;
    return result;
  }
  v10 = 0;
  if ( v4 )
  {
    result = v18;
    v11 = 0;
    do
    {
      v12 = &result[v10];
      if ( *v12 )
      {
        v13 = &result[v10];
        *(_DWORD *)(v11 + WPP_MAIN_CB.Queue.Wcb.WaitQueueEntry.SortKey + 4) = v12;
        while ( *v13++ )
          ;
        *(_WORD *)(v11 + WPP_MAIN_CB.Queue.Wcb.WaitQueueEntry.SortKey) = 2 * (v13 - (v12 + 1));
        *(_WORD *)(v11 + WPP_MAIN_CB.Queue.Wcb.WaitQueueEntry.SortKey + 2) = *(_WORD *)(v11
                                                                                      + WPP_MAIN_CB.Queue.Wcb.WaitQueueEntry.SortKey)
                                                                           + 2;
        v15 = v12 + 1;
        while ( *v12++ )
          ;
        result = v18;
        v11 += 8;
        v10 += v12 - v15;
      }
      ++v10;
    }
    while ( v10 < v4 );
  }
  return result;
}
