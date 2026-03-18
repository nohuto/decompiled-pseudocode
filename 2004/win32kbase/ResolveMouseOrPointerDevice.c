/*
 * XREFs of ResolveMouseOrPointerDevice @ 0x1C0056940
 * Callers:
 *     NtUserGetPointerDeviceInputSpace @ 0x1C0133A70 (NtUserGetPointerDeviceInputSpace.c)
 *     NtUserGetPointerDeviceOrientation @ 0x1C0133B60 (NtUserGetPointerDeviceOrientation.c)
 * Callees:
 *     HMValidateHandleNoSecure @ 0x1C006DF18 (HMValidateHandleNoSecure.c)
 */

__int64 __fastcall ResolveMouseOrPointerDevice(__int64 a1, _QWORD *a2, _DWORD *a3)
{
  unsigned int v3; // ebx
  _QWORD *v5; // rsi
  __int64 v7; // rax

  v3 = 0;
  *a2 = 0LL;
  v5 = a2;
  if ( a3 )
    *a3 = 0;
  if ( a1 != -1 )
  {
    LOBYTE(a2) = 19;
    v7 = HMValidateHandleNoSecure(a1, a2);
    if ( !v7 )
      return v3;
    if ( *(_BYTE *)(v7 + 48) )
    {
      if ( (*(_DWORD *)(v7 + 200) & 0x80u) == 0 )
        return v3;
      *v5 = *(_QWORD *)(v7 + 480);
    }
    else
    {
      if ( !a3 )
        return v3;
      *a3 = 1;
    }
    return 1;
  }
  if ( a3 )
  {
    *a3 = 1;
    return 1;
  }
  return v3;
}
