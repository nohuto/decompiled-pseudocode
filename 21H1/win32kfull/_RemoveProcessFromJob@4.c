/*
 * XREFs of _RemoveProcessFromJob@4 @ 0x9D65E
 * Callers:
 *     <none>
 * Callees:
 *     _WPP_RECORDER_SF_qq@28 @ 0x6FDEA (_WPP_RECORDER_SF_qq@28.c)
 *     _memmove @ 0xF92A1 (_memmove.c)
 */

int __stdcall RemoveProcessFromJob(int a1)
{
  int DLT; // eax
  int v2; // edx
  int v3; // ecx
  _DWORD *v4; // esi
  int v5; // edi
  unsigned int v7; // ecx
  unsigned int v8; // edx
  _DWORD *v9; // eax
  int v10; // edx
  int v11; // ecx

  DLT = DLT_JOB::getDLT();
  GetDomainLockRef(DLT);
  v4 = *(_DWORD **)(a1 + 416);
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(v2) = 4;
    WPP_RECORDER_SF_qq(
      v3,
      v2,
      0xDu,
      18,
      (int)&WPP_8d1b82f3b1933447d2872340d476a1f2_Traceguids,
      a1,
      *(_DWORD *)(a1 + 416));
  }
  v5 = 0;
  if ( v4 )
  {
    v7 = v4[4];
    v8 = 0;
    if ( v7 )
    {
      v9 = (_DWORD *)v4[6];
      while ( a1 != *v9 )
      {
        ++v8;
        ++v9;
        if ( v8 >= v7 )
          goto LABEL_14;
      }
      *(_DWORD *)(a1 + 416) = 0;
      memmove((void *)(v4[6] + 4 * v8), (const void *)(v4[6] + 4 * v8 + 4), 4 * (v4[4] - v8) - 4);
      if ( v4[4]-- == 1 )
      {
        Win32FreePool(v4[6]);
        v4[6] = 0;
        v4[5] = 0;
      }
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        LOBYTE(v10) = 4;
        WPP_RECORDER_SF_qq(v11, v10, 0xDu, 19, (int)&WPP_8d1b82f3b1933447d2872340d476a1f2_Traceguids, a1, (char)v4);
      }
      return 1;
    }
    else
    {
LABEL_14:
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        LOBYTE(v8) = 4;
        WPP_RECORDER_SF_qq(v7, v8, 0xDu, 20, (int)&WPP_8d1b82f3b1933447d2872340d476a1f2_Traceguids, a1, (char)v4);
      }
    }
  }
  return v5;
}
