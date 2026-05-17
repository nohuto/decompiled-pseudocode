/*
 * XREFs of _RtlpModuleEnumeratorCallback@12 @ 0x4B2A9830
 * Callers:
 *     <none>
 * Callees:
 *     _ZwLockVirtualMemory@16 @ 0x4B2F3A50 (_ZwLockVirtualMemory@16.c)
 *     __SEH_prolog4 @ 0x4B307AC4 (__SEH_prolog4.c)
 */

int __stdcall RtlpModuleEnumeratorCallback(int a1, unsigned int *a2, _BYTE *a3)
{
  unsigned int v3; // ecx
  int v4; // ebx
  int result; // eax
  int v6; // edx
  __int16 v7; // si
  unsigned __int16 v8; // di
  _DWORD *i; // edx
  unsigned int v10; // esi
  int v11; // eax
  unsigned int v12; // edi
  unsigned __int16 v13; // [esp+10h] [ebp-24h]

  v3 = 0;
  v4 = *(_DWORD *)(a1 + 24);
  result = 23117;
  if ( *(_WORD *)v4 == 23117 )
  {
    v6 = v4 + *(_DWORD *)(v4 + 60);
    if ( *(_DWORD *)v6 == 17744 )
    {
      v7 = *(_WORD *)(v6 + 20);
      if ( v7 )
      {
        result = *(unsigned __int16 *)(v6 + 6);
        v8 = result;
        v13 = *(_WORD *)(v6 + 6);
        if ( (_WORD)result )
        {
          result = 224;
          if ( v7 == 224 )
          {
            for ( i = (_DWORD *)(v6 + 248); ; i += 10 )
            {
              result = v8;
              if ( v3 >= v8 )
                break;
              v10 = v4 + i[3];
              v11 = i[2];
              if ( !v11 )
                v11 = i[4];
              v12 = (v10 + v11 + 4095) & 0xFFFFF000;
              if ( *a2 < v12 && *a2 >= v10 )
              {
                a2[2] = v10;
                a2[3] = v12 - v10;
                a2[1] = ZwLockVirtualMemory(-1, a2 + 2, a2 + 3, 1);
                result = (int)a3;
                *a3 = 1;
                return result;
              }
              ++v3;
              v8 = v13;
            }
          }
        }
      }
    }
  }
  return result;
}
