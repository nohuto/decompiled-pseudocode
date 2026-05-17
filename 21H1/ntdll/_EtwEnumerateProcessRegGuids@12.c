/*
 * XREFs of _EtwEnumerateProcessRegGuids@12 @ 0x4B3802E0
 * Callers:
 *     <none>
 * Callees:
 *     _RtlReleaseSRWLockShared@4 @ 0x4B2B52B0 (_RtlReleaseSRWLockShared@4.c)
 *     _EtwpGetNextRegistration@4 @ 0x4B2EF857 (_EtwpGetNextRegistration@4.c)
 *     _memcmp @ 0x4B2F8860 (_memcmp.c)
 *     __SEH_prolog4 @ 0x4B307AC4 (__SEH_prolog4.c)
 *     _EtwEnumerateProcessRegGuids@12 @ 0x4B3802E0 (_EtwEnumerateProcessRegGuids@12.c)
 */

int __stdcall EtwEnumerateProcessRegGuids(int a1, unsigned int a2, _DWORD *a3)
{
  unsigned int v3; // edi
  unsigned int v4; // ebx
  unsigned int NextRegistration; // eax
  _DWORD *v7; // ecx
  unsigned int v8; // eax
  unsigned int i; // edi
  _DWORD *v10; // edi
  int v11; // esi
  unsigned int v12; // [esp+1Ch] [ebp-24h]
  _DWORD *v13; // [esp+24h] [ebp-1Ch]

  v3 = a2 >> 4;
  v4 = 0;
  if ( !a1 && a2 )
    return 87;
  NextRegistration = EtwpGetNextRegistration(0);
  while ( 1 )
  {
    v7 = (_DWORD *)NextRegistration;
    v13 = (_DWORD *)NextRegistration;
    if ( !NextRegistration )
      break;
    if ( v4 >= v3 )
    {
      v8 = v3;
      v12 = v3;
    }
    else
    {
      v8 = v4;
      v12 = v4;
    }
    for ( i = 0; i < v8; ++i )
    {
      if ( !memcmp(v7 + 3, (const void *)(a1 + 16 * i), 0x10u) )
      {
        v7 = v13;
        goto LABEL_17;
      }
      v7 = v13;
      v8 = v12;
    }
    if ( v4 < a2 >> 4 )
    {
      v10 = (_DWORD *)(a1 + 16 * v4);
      *v10++ = v7[3];
      *v10++ = v7[4];
      *v10 = v7[5];
      v10[1] = v7[6];
    }
    ++v4;
LABEL_17:
    NextRegistration = EtwpGetNextRegistration((unsigned int)v7);
    v3 = a2 >> 4;
  }
  if ( v4 <= v3 )
    v11 = 0;
  else
    v11 = 122;
  *a3 = 16 * v4;
  return v11;
}
