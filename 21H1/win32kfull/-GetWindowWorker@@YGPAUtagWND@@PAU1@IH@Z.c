/*
 * XREFs of ?GetWindowWorker@@YGPAUtagWND@@PAU1@IH@Z @ 0x1B6E6A
 * Callers:
 *     __GetNextQueueWindow@12 @ 0x15D1B0 (__GetNextQueueWindow@12.c)
 * Callees:
 *     _UserSetLastError@4 @ 0x81122 (_UserSetLastError@4.c)
 *     _GetAppCompatFlags@4 @ 0xA6D98 (_GetAppCompatFlags@4.c)
 */

struct tagWND *__userpurge GetWindowWorker@<eax>(
        int a1@<edx>,
        _DWORD *a2@<ecx>,
        struct tagWND *a3,
        unsigned int a4,
        int a5)
{
  int v6; // esi
  int v7; // edx
  int v8; // edx
  int v9; // edx
  int v10; // edx
  int i; // eax
  int v12; // eax
  int v13; // ecx

  if ( (*(_WORD *)(a2[5] + 30) & 0x3FFF) == 0x29D && a1 != 5 )
    return 0;
  v6 = 0;
  if ( a1 )
  {
    v7 = a1 - 1;
    if ( v7 )
    {
      v8 = v7 - 1;
      if ( v8 )
      {
        v9 = v8 - 1;
        if ( v9 )
        {
          v10 = v9 - 1;
          if ( v10 )
          {
            if ( v10 != 1 )
            {
              UserSetLastError((struct _NT_TIB *)0x5A3);
              return 0;
            }
            return (struct tagWND *)a2[15];
          }
          else
          {
            return (struct tagWND *)a2[16];
          }
        }
        else
        {
          return (struct tagWND *)a2[13];
        }
      }
      else
      {
        return (struct tagWND *)a2[12];
      }
    }
    else
    {
      for ( i = *(_DWORD *)(a2[14] + 60); i; i = *(_DWORD *)(i + 48) )
        v6 = i;
    }
  }
  else
  {
    v12 = a2[14];
    if ( v12 )
    {
      v6 = *(_DWORD *)(v12 + 60);
      v13 = GetAppCompatFlags(0) & 8;
      while ( v6 && v13 && (*(_BYTE *)(*(_DWORD *)(v6 + 20) + 16) & 8) != 0 )
        v6 = *(_DWORD *)(v6 + 48);
    }
  }
  return (struct tagWND *)v6;
}
