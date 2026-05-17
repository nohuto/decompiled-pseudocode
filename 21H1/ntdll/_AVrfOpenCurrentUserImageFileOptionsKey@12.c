/*
 * XREFs of _AVrfOpenCurrentUserImageFileOptionsKey@12 @ 0x4B3388F7
 * Callers:
 *     _LdrpInitializeExecutionOptions@24 @ 0x4B331EB9 (_LdrpInitializeExecutionOptions@24.c)
 * Callees:
 *     _RtlAppendUnicodeStringToString@8 @ 0x4B2D10A0 (_RtlAppendUnicodeStringToString@8.c)
 *     _ZwOpenKey@12 @ 0x4B2F2A80 (_ZwOpenKey@12.c)
 *     _AVrfpFormatCurrentUserKeyPath@4 @ 0x4B339025 (_AVrfpFormatCurrentUserKeyPath@4.c)
 */

int __thiscall AVrfOpenCurrentUserImageFileOptionsKey(_DWORD *this, int a2)
{
  int result; // eax
  int v4; // ecx
  char *v5; // eax
  int v6; // edx
  _DWORD v7[6]; // [esp+8h] [ebp-2Ch] BYREF
  unsigned __int16 v8[4]; // [esp+20h] [ebp-14h] BYREF
  const void *v9[3]; // [esp+28h] [ebp-Ch] BYREF

  result = AVrfpFormatCurrentUserKeyPath((int)v8);
  if ( result >= 0 )
  {
    v4 = *(unsigned __int16 *)this;
    v5 = (char *)(v4 + this[1]);
    if ( *(_WORD *)this )
    {
      do
      {
        if ( *((_WORD *)v5 - 1) == 92 )
          break;
        v5 -= 2;
        v4 -= 2;
      }
      while ( v4 );
    }
    v6 = *(unsigned __int16 *)this - v4;
    v9[1] = v5;
    LOWORD(v9[0]) = v6;
    if ( (unsigned __int16)v6 == v6 )
    {
      result = RtlAppendUnicodeStringToString(v8, v9);
      if ( result >= 0 )
      {
        v7[0] = 24;
        v7[2] = v8;
        v7[1] = 0;
        v7[3] = 64;
        v7[4] = 0;
        v7[5] = 0;
        return ZwOpenKey(a2, 9, (int)v7);
      }
    }
    else
    {
      return -1073741789;
    }
  }
  return result;
}
