/*
 * XREFs of DeregisterKernelIdleDomains @ 0x1C002B9AC
 * Callers:
 *     RegisterKernelIdleStates @ 0x1C000AC00 (RegisterKernelIdleStates.c)
 * Callees:
 *     GetDevExtFromIndex @ 0x1C0001B10 (GetDevExtFromIndex.c)
 *     __security_check_cookie @ 0x1C0001E90 (__security_check_cookie.c)
 *     memset @ 0x1C000ED80 (memset.c)
 *     DeregisterIdleDomain @ 0x1C002B898 (DeregisterIdleDomain.c)
 *     UpdateKernelIdleDomains @ 0x1C00300B0 (UpdateKernelIdleDomains.c)
 */

__int64 __fastcall DeregisterKernelIdleDomains(__int64 a1)
{
  unsigned int *v2; // rdx
  unsigned int v3; // edi
  unsigned int v4; // ecx
  unsigned int v5; // eax
  unsigned int *v6; // rdi
  __int64 v7; // rdx
  __int64 DevExtFromIndex; // rax
  int updated; // eax
  unsigned int v10; // edx
  __int64 v11; // rax
  unsigned int i; // [rsp+20h] [rbp-E0h] BYREF
  __int128 v14; // [rsp+28h] [rbp-D8h] BYREF
  __int64 v15; // [rsp+38h] [rbp-C8h]
  _BYTE v16[176]; // [rsp+40h] [rbp-C0h] BYREF
  _BYTE v17[176]; // [rsp+F0h] [rbp-10h] BYREF

  memset(v17, 0, 0xA8uLL);
  v15 = 0LL;
  v14 = 0LL;
  memset(v16, 0, 0xA8uLL);
  KeInitializeAffinityEx(v16);
  v2 = *(unsigned int **)(a1 + 712);
  if ( v2 )
  {
    v4 = 0;
    i = 0;
    if ( *v2 )
    {
      v5 = 0;
      do
      {
        v6 = &v2[8 * v5];
        v7 = *((_QWORD *)v6 + 2);
        if ( v7 )
        {
          KeCopyAffinityEx(v17, v7 + 48);
          if ( DeregisterIdleDomain(a1, (_QWORD *)v6 + 1) )
            KeOrAffinityEx(v17, v16, v16);
          v4 = i;
        }
        v2 = *(unsigned int **)(a1 + 712);
        i = ++v4;
        v5 = v4;
      }
      while ( v4 < *v2 );
    }
    v3 = 0;
    KeInitializeEnumerationContext(&v14, v16);
    while ( !(unsigned int)KeEnumerateNextProcessor(&i, &v14) )
    {
      DevExtFromIndex = GetDevExtFromIndex(i);
      updated = UpdateKernelIdleDomains(DevExtFromIndex);
      if ( updated < 0 )
        v3 = updated;
    }
    v10 = *(_DWORD *)(*(_QWORD *)(a1 + 696) + 56LL);
    v11 = 0LL;
    for ( i = 0; (unsigned int)v11 < v10; i = v11 )
    {
      *(_QWORD *)(88 * v11 + *(_QWORD *)(a1 + 696) + 136) = 0LL;
      v11 = i + 1;
    }
    ExFreePoolWithTag(*(PVOID *)(a1 + 712), 0x72637250u);
    *(_QWORD *)(a1 + 712) = 0LL;
  }
  else
  {
    return 0;
  }
  return v3;
}
