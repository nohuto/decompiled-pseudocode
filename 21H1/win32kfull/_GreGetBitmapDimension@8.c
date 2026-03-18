/*
 * XREFs of _GreGetBitmapDimension@8 @ 0x226B65
 * Callers:
 *     _NtGdiGetBitmapDimension@8 @ 0x212700 (_NtGdiGetBitmapDimension@8.c)
 * Callees:
 *     ??0DYNAMICMODECHANGESHARELOCK@@QAE@XZ @ 0x213BE (--0DYNAMICMODECHANGESHARELOCK@@QAE@XZ.c)
 */

int __fastcall GreGetBitmapDimension(int a1, _DWORD *a2)
{
  int v3; // ebx
  int v5; // edx
  _DWORD *v6; // eax
  _DWORD *v7; // esi
  char v9; // [esp+Fh] [ebp-1h] BYREF

  v3 = 0;
  DYNAMICMODECHANGESHARELOCK::DYNAMICMODECHANGESHARELOCK((DYNAMICMODECHANGESHARELOCK *)&v9);
  LOBYTE(v5) = 5;
  v6 = (_DWORD *)HmgShareLockCheck(a1, v5);
  v7 = v6;
  if ( v6 )
  {
    if ( (v6[18] & 0x4000000) != 0 )
    {
      if ( a2 )
      {
        v3 = 1;
        *a2 = v6[25];
        a2[1] = v6[26];
      }
      else
      {
        EngSetLastError(0x57u);
      }
    }
  }
  else
  {
    EngSetLastError(6u);
  }
  if ( v7 )
    DEC_SHARE_REF_CNT(v7);
  EtwTraceGreLockReleaseSemaphore(L"ghsemDynamicModeChange", _ghsemDynamicModeChange);
  GreReleaseSemaphoreInternal(_ghsemDynamicModeChange);
  return v3;
}
