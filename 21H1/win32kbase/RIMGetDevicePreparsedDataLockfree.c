/*
 * XREFs of RIMGetDevicePreparsedDataLockfree @ 0x1C015F440
 * Callers:
 *     NtRIMGetDevicePreparsedDataLockfree @ 0x1C015CD30 (NtRIMGetDevicePreparsedDataLockfree.c)
 *     RIMGetDevicePreparsedData @ 0x1C015F2D0 (RIMGetDevicePreparsedData.c)
 * Callees:
 *     RawInputManagerDeviceObjectResolveHandle @ 0x1C00A3EC0 (RawInputManagerDeviceObjectResolveHandle.c)
 *     memmove @ 0x1C00D2F00 (memmove.c)
 */

__int64 __fastcall RIMGetDevicePreparsedDataLockfree(char *a1, char *a2, unsigned int *a3, int a4)
{
  int v7; // esi
  PVOID v8; // rdi
  char *v9; // rax
  __int64 v10; // rax
  unsigned int v11; // edx
  const void *v12; // r9
  __int64 v13; // rax
  PVOID Object; // [rsp+28h] [rbp-10h] BYREF

  Object = 0LL;
  v7 = RawInputManagerDeviceObjectResolveHandle(a1, 3u, 1, &Object);
  if ( v7 >= 0 )
  {
    v8 = Object;
    if ( Object )
      v9 = (char *)Object + 88;
    else
      v9 = 0LL;
    if ( v9[48] == 2 )
    {
      v10 = *((_QWORD *)v9 + 58);
      v11 = *(_DWORD *)(v10 + 104);
      v12 = *(const void **)(v10 + 16);
      if ( a2 )
      {
        if ( a4 )
        {
          if ( a3 + 1 < a3 || (unsigned __int64)(a3 + 1) > MmUserProbeAddress )
            *(_BYTE *)MmUserProbeAddress = 0;
          v13 = *a3;
          if ( v11 < (unsigned int)v13 )
            v13 = v11;
          if ( (unsigned __int64)&a2[v13] > MmUserProbeAddress || &a2[v13] <= a2 )
            *(_BYTE *)MmUserProbeAddress = 0;
          memmove(a2, v12, (unsigned int)v13);
        }
        else
        {
          if ( v11 >= *a3 )
            v11 = *a3;
          memmove(a2, v12, v11);
        }
      }
      else if ( a4 )
      {
        if ( (unsigned __int64)a3 >= MmUserProbeAddress )
          a3 = (unsigned int *)MmUserProbeAddress;
        *a3 = v11;
      }
      else
      {
        *a3 = v11;
      }
    }
    else
    {
      v7 = -1073741811;
    }
    ObfDereferenceObject(v8);
  }
  return (unsigned int)v7;
}
