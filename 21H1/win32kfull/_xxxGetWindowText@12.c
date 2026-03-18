/*
 * XREFs of _xxxGetWindowText@12 @ 0xBDB18
 * Callers:
 *     _xxxDrawCaptionTemp@28 @ 0xBC4CE (_xxxDrawCaptionTemp@28.c)
 * Callees:
 *     _xxxDefWindowProc@16 @ 0x16650 (_xxxDefWindowProc@16.c)
 *     _xxxSendMessage@16 @ 0x402B0 (_xxxSendMessage@16.c)
 */

unsigned int __fastcall xxxGetWindowText(_DWORD *a1, _WORD *a2, int a3)
{
  int v3; // esi
  int v4; // eax
  unsigned int v5; // ecx
  unsigned int v6; // eax
  unsigned int result; // eax
  unsigned int v8; // [esp+4h] [ebp-Ch] BYREF
  int v9; // [esp+8h] [ebp-8h]
  _WORD *v10; // [esp+Ch] [ebp-4h]

  v8 = 0;
  *a2 = 0;
  v3 = a1[2];
  v10 = a2;
  v9 = 512;
  if ( *(_DWORD *)(v3 + 232) == *(_DWORD *)(_gptiCurrent + 232) )
    v4 = xxxSendMessage(a1, 0x100u, (int)&v8);
  else
    v4 = xxxDefWindowProc((int)a1, 13, 256, (int)&v8);
  v5 = v4;
  v6 = v8;
  if ( v8 > (v9 & 0x7FFFFFFFu) - 2 )
    v6 = (v9 & 0x7FFFFFFF) - 2;
  result = v6 >> 1;
  if ( v5 < result )
    result = v5;
  v10[result] = 0;
  return result;
}
