/*
 * XREFs of BgpFwSetBootGraphicsInformation @ 0x1405C46C0
 * Callers:
 *     BgSetBootGraphicsInformation @ 0x1409F7684 (BgSetBootGraphicsInformation.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall BgpFwSetBootGraphicsInformation(__int64 a1, __int64 a2)
{
  unsigned int v2; // r8d

  v2 = 0;
  if ( (_BYTE)BgInternal )
    return (unsigned int)-1073741637;
  xmmword_140C134D0 = *(_OWORD *)a2;
  xmmword_140C134E0 = *(_OWORD *)(a2 + 16);
  DWORD2(BgInternal) = *(_DWORD *)(a2 + 8);
  DWORD1(BgInternal) = *(_DWORD *)(a2 + 12);
  HIDWORD(BgInternal) = *(_DWORD *)(a2 + 16);
  if ( *(_DWORD *)(a2 + 24) == 3 )
  {
    LODWORD(xmmword_140C13490) = 4;
    goto LABEL_7;
  }
  if ( *(_DWORD *)(a2 + 24) == 4 )
  {
    LODWORD(xmmword_140C13490) = 5;
LABEL_7:
    LOWORD(BgInternal) = 1;
    qword_140C134A0 = *(PVOID *)a2;
    return v2;
  }
  return (unsigned int)-1073741637;
}
