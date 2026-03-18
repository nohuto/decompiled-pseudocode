/*
 * XREFs of _GreSetBitmapDimension@16 @ 0x226BE6
 * Callers:
 *     _NtGdiSetBitmapDimension@16 @ 0x214127 (_NtGdiSetBitmapDimension@16.c)
 * Callees:
 *     ??0DYNAMICMODECHANGESHARELOCK@@QAE@XZ @ 0x213BE (--0DYNAMICMODECHANGESHARELOCK@@QAE@XZ.c)
 */

int __fastcall GreSetBitmapDimension(int a1, int a2, int a3, _DWORD *a4)
{
  int v6; // edi
  int v7; // edx
  _DWORD *v8; // eax
  _DWORD *v9; // esi
  char v11; // [esp+Fh] [ebp-1h] BYREF

  v6 = 0;
  DYNAMICMODECHANGESHARELOCK::DYNAMICMODECHANGESHARELOCK((DYNAMICMODECHANGESHARELOCK *)&v11);
  LOBYTE(v7) = 5;
  v8 = (_DWORD *)HmgShareLockCheck(a1, v7);
  v9 = v8;
  if ( v8 )
  {
    if ( (v8[18] & 0x4000000) != 0 )
    {
      if ( a4 )
      {
        *a4 = v8[25];
        a4[1] = v8[26];
      }
      v8[25] = a2;
      v6 = 1;
      v8[26] = a3;
    }
  }
  else
  {
    EngSetLastError(6u);
  }
  if ( v9 )
    DEC_SHARE_REF_CNT(v9);
  EtwTraceGreLockReleaseSemaphore(L"ghsemDynamicModeChange", _ghsemDynamicModeChange);
  GreReleaseSemaphoreInternal(_ghsemDynamicModeChange);
  return v6;
}
