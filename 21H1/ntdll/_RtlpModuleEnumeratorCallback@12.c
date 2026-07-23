/*
 * XREFs of _RtlpModuleEnumeratorCallback@12 @ 0x4B2A9830
 * Callers:
 *     <none>
 * Callees:
 *     _ZwLockVirtualMemory@16 @ 0x4B2F3A50 (_ZwLockVirtualMemory@16.c)
 *     __SEH_prolog4 @ 0x4B307AC4 (__SEH_prolog4.c)
 */

void __stdcall RtlpModuleEnumeratorCallback(PLDR_DATA_TABLE_ENTRY a1, char *a2, BOOLEAN *a3)
{
  unsigned int v3; // ecx
  _DWORD *DllBase; // ebx
  char *v5; // edx
  __int16 v6; // si
  unsigned __int16 v7; // di
  _DWORD *v8; // edx
  char *v9; // esi
  int v10; // eax
  unsigned int v11; // edi
  unsigned __int16 v12; // [esp+10h] [ebp-24h]

  v3 = 0;
  DllBase = a1->DllBase;
  if ( *(_WORD *)DllBase == 23117 )
  {
    v5 = (char *)DllBase + DllBase[15];
    if ( *(_DWORD *)v5 == 17744 )
    {
      v6 = *((_WORD *)v5 + 10);
      if ( v6 )
      {
        v7 = *((_WORD *)v5 + 3);
        v12 = v7;
        if ( v7 )
        {
          if ( v6 == 224 )
          {
            v8 = v5 + 248;
            while ( v3 < v7 )
            {
              v9 = (char *)DllBase + v8[3];
              v10 = v8[2];
              if ( !v10 )
                v10 = v8[4];
              v11 = (unsigned int)&v9[v10 + 4095] & 0xFFFFF000;
              if ( *(_DWORD *)a2 < v11 && *(_DWORD *)a2 >= (unsigned int)v9 )
              {
                *((_DWORD *)a2 + 2) = v9;
                *((_DWORD *)a2 + 3) = v11 - (_DWORD)v9;
                *((_DWORD *)a2 + 1) = ZwLockVirtualMemory((HANDLE)0xFFFFFFFF, (PVOID *)a2 + 2, (PSIZE_T)(a2 + 12), 1u);
                *a3 = 1;
                return;
              }
              v8 += 10;
              ++v3;
              v7 = v12;
            }
          }
        }
      }
    }
  }
}
