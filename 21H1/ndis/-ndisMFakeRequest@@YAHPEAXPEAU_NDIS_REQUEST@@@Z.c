/*
 * XREFs of ?ndisMFakeRequest@@YAHPEAXPEAU_NDIS_REQUEST@@@Z @ 0x1C006E2D0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall ndisMFakeRequest(_QWORD *a1, struct _NDIS_REQUEST *a2)
{
  __int64 v2; // rax
  unsigned int v3; // edx

  v2 = a1[2];
  if ( v2 )
  {
    v3 = *(_DWORD *)(v2 + 540);
    if ( *(_BYTE *)(a1[3] + 56LL) < 6u && (v3 & 0xC0230000) == 0xC0230000 )
      return (unsigned __int16)v3 | 0xC0010000;
  }
  else
  {
    return (unsigned int)-1073741823;
  }
  return v3;
}
