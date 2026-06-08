/*
 * XREFs of DeregisterKernelIdleDomains @ 0x1C0026B30
 * Callers:
 *     RegisterKernelIdleStates @ 0x1C0003B20 (RegisterKernelIdleStates.c)
 * Callees:
 *     __security_check_cookie @ 0x1C00044F0 (__security_check_cookie.c)
 *     memset @ 0x1C0004AC0 (memset.c)
 *     GetDevExtFromIndex @ 0x1C00086AC (GetDevExtFromIndex.c)
 *     DeregisterIdleDomain @ 0x1C0034D18 (DeregisterIdleDomain.c)
 *     UpdateKernelIdleDomains @ 0x1C00384F4 (UpdateKernelIdleDomains.c)
 */

__int64 __fastcall DeregisterKernelIdleDomains(__int64 a1)
{
  unsigned int *v2; // rdx
  unsigned int v3; // edi
  unsigned int v5; // ecx
  unsigned int v6; // eax
  unsigned int *v7; // rdi
  __int64 v8; // rdx
  __int64 DevExtFromIndex; // rax
  int updated; // eax
  unsigned int v11; // edx
  __int64 v12; // rax
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
    v5 = 0;
    i = 0;
    if ( *v2 )
    {
      v6 = 0;
      do
      {
        v7 = &v2[8 * v6];
        v8 = *((_QWORD *)v7 + 2);
        if ( v8 )
        {
          KeCopyAffinityEx(v17, v8 + 48);
          if ( (unsigned __int8)DeregisterIdleDomain(a1, v7 + 2) )
            KeOrAffinityEx(v17, v16, v16);
          v5 = i;
        }
        v2 = *(unsigned int **)(a1 + 712);
        i = ++v5;
        v6 = v5;
      }
      while ( v5 < *v2 );
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
    v11 = *(_DWORD *)(*(_QWORD *)(a1 + 696) + 56LL);
    v12 = 0LL;
    for ( i = 0; (unsigned int)v12 < v11; i = v12 )
    {
      *(_QWORD *)(88 * v12 + *(_QWORD *)(a1 + 696) + 136) = 0LL;
      v12 = i + 1;
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
