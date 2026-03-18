/*
 * XREFs of _NtGdiGetServerMetaFileBits@28 @ 0x21EEFE
 * Callers:
 *     <none>
 * Callees:
 *     __SEH_prolog4 @ 0xF9120 (__SEH_prolog4.c)
 *     _memcpy @ 0xF929B (_memcpy.c)
 */

int __stdcall NtGdiGetServerMetaFileBits(
        int a1,
        SIZE_T Length,
        volatile void *Address,
        ULONG a4,
        ULONG a5,
        ULONG a6,
        ULONG a7)
{
  int v7; // edi
  int v8; // eax
  int v9; // esi
  int v10; // eax
  _DWORD *v11; // eax
  _DWORD *v12; // eax
  _DWORD *v13; // eax
  _DWORD *v14; // eax

  v7 = 0;
  v8 = HmgLock(a1, 21);
  v9 = v8;
  if ( v8 )
  {
    v10 = *(_DWORD *)(v8 + 16);
    if ( v10 == 1599096397 || v10 == 1480934989 )
    {
      v7 = *(_DWORD *)(v9 + 32);
      if ( Length )
      {
        if ( Length == v7 )
        {
          v11 = (_DWORD *)a6;
          if ( a6 >= _MmUserProbeAddress )
            v11 = (_DWORD *)_MmUserProbeAddress;
          *v11 = *(_DWORD *)(v9 + 24);
          v12 = (_DWORD *)a7;
          if ( a7 >= _MmUserProbeAddress )
            v12 = (_DWORD *)_MmUserProbeAddress;
          *v12 = *(_DWORD *)(v9 + 28);
          v13 = (_DWORD *)a4;
          if ( a4 >= _MmUserProbeAddress )
            v13 = (_DWORD *)_MmUserProbeAddress;
          *v13 = *(_DWORD *)(v9 + 16);
          v14 = (_DWORD *)a5;
          if ( a5 >= _MmUserProbeAddress )
            v14 = (_DWORD *)_MmUserProbeAddress;
          *v14 = *(_DWORD *)(v9 + 20);
          ProbeForWrite(Address, Length, 4u);
          memcpy((void *)Address, (const void *)(v9 + 36), *(_DWORD *)(v9 + 32));
        }
        else
        {
          v7 = 0;
        }
      }
    }
    _InterlockedDecrement((volatile signed __int32 *)(v9 + 8));
  }
  return v7;
}
