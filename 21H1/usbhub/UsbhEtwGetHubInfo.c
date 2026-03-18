/*
 * XREFs of UsbhEtwGetHubInfo @ 0x1C001BAFC
 * Callers:
 *     UsbhHubProcessIsr @ 0x1C000F090 (UsbhHubProcessIsr.c)
 *     UsbhEtwLogHubEventWithExtraData @ 0x1C005C2E8 (UsbhEtwLogHubEventWithExtraData.c)
 *     UsbhEtwLogHubException @ 0x1C005C3DC (UsbhEtwLogHubException.c)
 *     UsbhEtwLogHubInformation @ 0x1C005C500 (UsbhEtwLogHubInformation.c)
 *     UsbhEtwLogHubPastExceptions @ 0x1C005C614 (UsbhEtwLogHubPastExceptions.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall UsbhEtwGetHubInfo(__int64 a1, __int64 a2)
{
  __int16 v2; // ax
  unsigned __int16 *v3; // r8
  __int64 v4; // r10
  _DWORD *v5; // r9
  int v6; // eax
  __int64 result; // rax

  *(_WORD *)a2 = *(_WORD *)(a1 + 2548);
  v2 = *(_WORD *)(a1 + 2550);
  *(_DWORD *)(a2 + 4) = 0;
  *(_WORD *)(a2 + 2) = v2;
  *(_DWORD *)(a2 + 8) = *(unsigned __int16 *)(a1 + 5208);
  if ( *(_WORD *)(a1 + 5208) )
    ++*(_DWORD *)(a2 + 4);
  v3 = (unsigned __int16 *)(a1 + 5210);
  v4 = 5LL;
  v5 = (_DWORD *)(a2 + 12);
  do
  {
    v6 = *v3;
    *v5 = v6;
    if ( v6 )
      ++*(_DWORD *)(a2 + 4);
    ++v5;
    ++v3;
    --v4;
  }
  while ( v4 );
  result = *(unsigned int *)(a1 + 2536);
  *(_DWORD *)(a2 + 32) = result;
  return result;
}
