/*
 * XREFs of ValidatePccHeader @ 0x1C002EFF0
 * Callers:
 *     AcquirePccInterface @ 0x1C00224A8 (AcquirePccInterface.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C0003718 (WPP_RECORDER_SF_.c)
 */

__int64 __fastcall ValidatePccHeader(__int64 a1)
{
  unsigned int v1; // ebx
  unsigned __int16 v2; // r9
  char v3; // al
  unsigned int v4; // eax

  v1 = -1073741811;
  if ( *(_DWORD *)a1 == 609239875 )
  {
    if ( *(_WORD *)(a1 + 4) >= 0x28u )
    {
      v3 = *(_BYTE *)(a1 + 6);
      if ( (v3 || *(_BYTE *)(a1 + 7) < 6u) && (v3 != 1 || *(_BYTE *)(a1 + 7)) )
      {
        if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        {
          v2 = 45;
          goto LABEL_20;
        }
      }
      else
      {
        v4 = *(_DWORD *)(a1 + 36);
        if ( v4 <= *(_DWORD *)(a1 + 28) )
        {
          if ( *(_DWORD *)(a1 + 32) <= v4 )
          {
            return 0;
          }
          else if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          {
            v2 = 47;
            goto LABEL_20;
          }
        }
        else if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        {
          v2 = 46;
          goto LABEL_20;
        }
      }
    }
    else if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      v2 = 44;
      goto LABEL_20;
    }
  }
  else if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    v2 = 43;
LABEL_20:
    WPP_RECORDER_SF_(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      2u,
      1u,
      v2,
      (__int64)&WPP_ba3a613378173fc61268b8e1c1c8ad8d_Traceguids);
  }
  return v1;
}
