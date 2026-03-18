/*
 * XREFs of _NtUserfnINLPCREATESTRUCT@28 @ 0x1DB7A
 * Callers:
 *     <none>
 * Callees:
 *     _RtlInitLargeAnsiString@8 @ 0x1D5FC (_RtlInitLargeAnsiString@8.c)
 *     _RtlInitLargeUnicodeString@8 @ 0x1DCA6 (_RtlInitLargeUnicodeString@8.c)
 *     __SEH_prolog4 @ 0xF9120 (__SEH_prolog4.c)
 *     _memset @ 0xF92A7 (_memset.c)
 */

int __stdcall NtUserfnINLPCREATESTRUCT(int a1, int a2, int a3, ULONG a4, int a5, char a6, int a7)
{
  int v7; // esi
  const void *v8; // esi
  const char *v9; // edx
  int v10; // edx
  int v11; // ecx
  const char *v13; // edx
  _DWORD v14[18]; // [esp+10h] [ebp-64h] BYREF
  CPPEH_RECORD ms_exc; // [esp+5Ch] [ebp-18h]

  v7 = 0;
  memset(v14, 0, sizeof(v14));
  if ( a4 )
  {
    ms_exc.registration.TryLevel = 0;
    v8 = (const void *)_MmUserProbeAddress;
    if ( a4 < _MmUserProbeAddress )
      v8 = (const void *)a4;
    qmemcpy(v14, v8, 0x30u);
    v9 = (const char *)v14[9];
    if ( a7 )
    {
      if ( v14[9] )
        v9 = (const char *)v14[9];
      RtlInitLargeAnsiString(&v14[12], v9);
      v13 = (const char *)v14[10];
      if ( (v14[10] & 0xFFFF0000) != 0 )
      {
        if ( v14[10] )
          v13 = (const char *)v14[10];
        RtlInitLargeAnsiString(&v14[15], v13);
      }
    }
    else
    {
      if ( v14[9] )
        v9 = (const char *)v14[9];
      RtlInitLargeUnicodeString(&v14[12], v9);
      v10 = v14[10];
      if ( (v14[10] & 0xFFFF0000) != 0 )
      {
        if ( v14[10] )
          v10 = v14[10];
        RtlInitLargeUnicodeString(&v14[15], v10);
      }
    }
    ms_exc.registration.TryLevel = -2;
    v11 = a2;
  }
  else
  {
    v11 = a2;
    if ( a2 == 129 )
      return v7;
  }
  return ((int (__stdcall *)(int, int, int, _DWORD *, int))mpFnidPfn[(a6 + 6) & 0x1F])(
           a1,
           v11,
           a3,
           a4 != 0 ? v14 : 0,
           a5);
}
