/*
 * XREFs of HalpFindDevice @ 0x1409B7158
 * Callers:
 *     HalpKdReleaseDebuggingDevice @ 0x1409B7430 (HalpKdReleaseDebuggingDevice.c)
 *     HalpKdSetupDebuggingDevice @ 0x1409B7480 (HalpKdSetupDebuggingDevice.c)
 *     HalpRegisterDeviceInUse @ 0x1409B756C (HalpRegisterDeviceInUse.c)
 * Callees:
 *     wcsncmp @ 0x1403D41B0 (wcsncmp.c)
 */

__int64 *__fastcall HalpFindDevice(__int64 a1)
{
  __int64 *v1; // rsi
  __int64 v2; // rbx
  __int64 *v4; // r14
  char v5; // bp
  __int64 v6; // rcx
  int v7; // eax
  bool v8; // zf
  unsigned int v9; // eax
  const wchar_t *v10; // rdx

  v1 = (__int64 *)qword_140C48DA8;
  v2 = 0LL;
  v4 = 0LL;
  v5 = 0;
  while ( v1 != &qword_140C48DA8 )
  {
    v6 = v1[2];
    v4 = v1;
    v7 = *(_DWORD *)(a1 + 220);
    if ( *(_DWORD *)(v6 + 220) != v7 )
      goto LABEL_12;
    if ( v7 )
    {
      v9 = *(_DWORD *)(a1 + 232);
      if ( *(_DWORD *)(v6 + 232) != v9 )
        goto LABEL_12;
      if ( !*(_QWORD *)(a1 + 224) )
        goto LABEL_12;
      v10 = *(const wchar_t **)(v6 + 224);
      if ( !v10 )
        goto LABEL_12;
      v8 = wcsncmp(*(const wchar_t **)(a1 + 224), v10, v9) == 0;
    }
    else
    {
      if ( *(_DWORD *)v6 != *(_DWORD *)a1 || *(_DWORD *)(v6 + 4) != *(_DWORD *)(a1 + 4) )
        goto LABEL_12;
      v8 = *(_WORD *)(v6 + 8) == *(_WORD *)(a1 + 8);
    }
    if ( v8 )
    {
      v5 = 1;
      break;
    }
LABEL_12:
    v1 = (__int64 *)*v1;
  }
  if ( v5 == 1 )
    return v4;
  return (__int64 *)v2;
}
