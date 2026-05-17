/*
 * XREFs of RtlpModuleEnumeratorCallback @ 0x18007F120
 * Callers:
 *     <none>
 * Callees:
 *     NtLockVirtualMemory @ 0x18009F240 (NtLockVirtualMemory.c)
 */

__int64 __fastcall RtlpModuleEnumeratorCallback(__int64 a1, __int64 a2, _BYTE *a3)
{
  __int64 v5; // r9
  __int64 result; // rax
  unsigned int v7; // r8d
  unsigned int *v8; // rcx
  unsigned int i; // edx
  unsigned __int64 v10; // r10
  unsigned __int64 v11; // r11

  v5 = *(_QWORD *)(a1 + 48);
  result = 23117LL;
  if ( *(_WORD *)v5 == 23117 )
  {
    result = v5 + *(int *)(v5 + 60);
    if ( *(_DWORD *)result == 17744 )
    {
      if ( *(_WORD *)(result + 20) )
      {
        v7 = *(unsigned __int16 *)(result + 6);
        if ( (_WORD)v7 )
        {
          if ( *(_WORD *)(result + 20) == 240 )
          {
            v8 = (unsigned int *)(result + 264);
            for ( i = 0; i < v7; ++i )
            {
              v10 = v5 + v8[3];
              result = v8[2];
              if ( !(_DWORD)result )
                result = v8[4];
              v11 = (result + v10 + 4095) & 0xFFFFFFFFFFFFF000uLL;
              if ( *(_QWORD *)a2 >= v10 && *(_QWORD *)a2 < v11 )
              {
                *(_QWORD *)(a2 + 16) = v10;
                *(_QWORD *)(a2 + 24) = v11 - v10;
                result = NtLockVirtualMemory(-1LL, a2 + 16, a2 + 24, 1LL);
                *(_DWORD *)(a2 + 8) = result;
                *a3 = 1;
                return result;
              }
              v8 += 10;
            }
          }
        }
      }
    }
  }
  return result;
}
