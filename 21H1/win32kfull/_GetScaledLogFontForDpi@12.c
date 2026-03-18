/*
 * XREFs of _GetScaledLogFontForDpi@12 @ 0x91944
 * Callers:
 *     _GetWindowNCMetrics@4 @ 0x91522 (_GetWindowNCMetrics@4.c)
 *     __SystemParametersInfoForDpi@20 @ 0x91804 (__SystemParametersInfoForDpi@20.c)
 *     _GetWindowNCMetricsForDpi@8 @ 0x9184C (_GetWindowNCMetricsForDpi@8.c)
 * Callees:
 *     _GreExtGetObjectW@12 @ 0x4B144 (_GreExtGetObjectW@12.c)
 *     _GetDPIMETRICSForDpiUnsafe@4 @ 0x91A30 (_GetDPIMETRICSForDpiUnsafe@4.c)
 *     _GetDPIServerInfoForDpi@4 @ 0x91B76 (_GetDPIServerInfoForDpi@4.c)
 *     _GreMarkDeletableFont@4 @ 0xDAFD8 (_GreMarkDeletableFont@4.c)
 *     _CreateScaledFont@28 @ 0x155260 (_CreateScaledFont@28.c)
 */

int __fastcall GetScaledLogFontForDpi(unsigned int a1, INT b, INT *a3)
{
  int v4; // edi
  int v6; // eax
  unsigned int v7; // esi
  unsigned int v8; // esi
  unsigned int v9; // esi
  unsigned int v10; // esi
  INT v11; // eax
  struct HLFONT__ *v12; // esi
  int v13; // ebx
  struct HLFONT__ *v15; // ecx
  int ScaledFont; // eax
  struct HLFONT__ **v17; // eax
  int v18; // ecx
  struct HLFONT__ *v19; // ecx
  struct HLFONT__ *v20; // ecx
  int v21; // [esp-10h] [ebp-24h]
  int v22; // [esp-10h] [ebp-24h]
  int v23; // [esp-10h] [ebp-24h]

  v4 = 0;
  v6 = 0;
  if ( a1 <= 3 )
    v6 = ((int (__thiscall *)(INT))GetDPIMETRICSForDpiUnsafe)(b);
  if ( a1 )
  {
    v7 = a1 - 1;
    if ( v7 )
    {
      v8 = v7 - 1;
      if ( v8 )
      {
        v9 = v8 - 1;
        if ( v9 )
        {
          v10 = v9 - 1;
          if ( v10 )
          {
            if ( v10 == 1 )
            {
              qmemcpy(a3, (const void *)(_gpsi + 4472), 0x5Cu);
              v11 = *(unsigned __int16 *)(_gpsi + 6242);
              if ( b != v11 )
              {
                a3[1] = EngMulDiv(a3[1], b, v11);
                *a3 = EngMulDiv(*a3, b, *(unsigned __int16 *)(_gpsi + 6242));
              }
              return 1;
            }
            return v4;
          }
          v12 = *(struct HLFONT__ **)(GetDPIServerInfoForDpi(b) + 8);
          goto LABEL_13;
        }
        if ( v6 )
        {
          v12 = *(struct HLFONT__ **)(v6 + 44);
LABEL_13:
          v13 = 0;
          goto LABEL_14;
        }
        v21 = a1;
        v15 = *(struct HLFONT__ **)(Get96DpiMetrics() + 44);
        ScaledFont = CreateScaledFont(v15, v21, b, 0, 0, 0);
      }
      else
      {
        if ( v6 )
        {
          v12 = *(struct HLFONT__ **)v6;
          goto LABEL_13;
        }
        v17 = (struct HLFONT__ **)Get96DpiMetrics();
        ScaledFont = CreateScaledFont(*v17, v18, b, 0, 0, 0);
      }
    }
    else
    {
      if ( v6 )
      {
        v12 = *(struct HLFONT__ **)(v6 + 28);
        goto LABEL_13;
      }
      v22 = a1;
      v19 = *(struct HLFONT__ **)(Get96DpiMetrics() + 28);
      ScaledFont = CreateScaledFont(v19, v22, b, 0, 0, 0);
    }
  }
  else
  {
    if ( v6 )
    {
      v12 = *(struct HLFONT__ **)(v6 + 48);
      goto LABEL_13;
    }
    v23 = a1;
    v20 = *(struct HLFONT__ **)(Get96DpiMetrics() + 48);
    ScaledFont = CreateScaledFont(v20, v23, b, 0, 0, 0);
  }
  v12 = 0;
  v13 = ScaledFont;
LABEL_14:
  if ( v12 && GreExtGetObjectW(v12, 92, a3) )
    v4 = 1;
  if ( v13 && v12 )
  {
    GreMarkDeletableFont(v12);
    GreDeleteObject(v12);
  }
  return v4;
}
