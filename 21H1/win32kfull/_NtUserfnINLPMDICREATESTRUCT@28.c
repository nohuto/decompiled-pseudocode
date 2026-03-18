/*
 * XREFs of _NtUserfnINLPMDICREATESTRUCT@28 @ 0x16BEB9
 * Callers:
 *     <none>
 * Callees:
 *     _RtlInitLargeAnsiString@8 @ 0x1D5FC (_RtlInitLargeAnsiString@8.c)
 *     _RtlInitLargeUnicodeString@8 @ 0x1DCA6 (_RtlInitLargeUnicodeString@8.c)
 *     __SEH_prolog4 @ 0xF9120 (__SEH_prolog4.c)
 *     _memset @ 0xF92A7 (_memset.c)
 */

int __stdcall NtUserfnINLPMDICREATESTRUCT(int a1, int a2, int a3, ULONG a4, int a5, char a6, int a7)
{
  const void *v7; // esi
  char *v8; // edx
  const char *v9; // edx
  _WORD *v10; // edx
  int v12; // [esp+0h] [ebp-68h]
  int v13; // [esp+4h] [ebp-64h]
  int v14; // [esp+8h] [ebp-60h]
  int v15; // [esp+Ch] [ebp-5Ch]
  _DWORD v16[15]; // [esp+10h] [ebp-58h] BYREF
  CPPEH_RECORD ms_exc; // [esp+50h] [ebp-18h]

  memset(v16, 0, sizeof(v16));
  ms_exc.registration.TryLevel = 0;
  v7 = (const void *)_MmUserProbeAddress;
  if ( a4 < _MmUserProbeAddress )
    v7 = (const void *)a4;
  qmemcpy(v16, v7, 0x24u);
  v8 = (char *)v16[1];
  if ( a7 )
  {
    if ( v16[1] )
      v8 = (char *)v16[1];
    RtlInitLargeAnsiString(&v16[9], v8);
    v9 = (const char *)v16[0];
    if ( (v16[0] & 0xFFFF0000) != 0 )
    {
      if ( v16[0] )
        v9 = (const char *)v16[0];
    }
    else
    {
      v9 = 0;
    }
    RtlInitLargeAnsiString(&v16[12], v9);
  }
  else
  {
    if ( v16[1] )
      v8 = (char *)v16[1];
    RtlInitLargeUnicodeString(&v16[9], v8);
    v10 = (_WORD *)v16[0];
    if ( (v16[0] & 0xFFFF0000) != 0 )
    {
      if ( v16[0] )
        v10 = (_WORD *)v16[0];
    }
    else
    {
      v10 = 0;
    }
    RtlInitLargeUnicodeString(&v16[12], v10);
  }
  ms_exc.registration.TryLevel = -2;
  return ((int (__stdcall *)(int, int, int, _DWORD *, int, int, int, int, int))mpFnidPfn[(a6 + 6) & 0x1F])(
           a1,
           a2,
           a3,
           v16,
           a5,
           v12,
           v13,
           v14,
           v15);
}
