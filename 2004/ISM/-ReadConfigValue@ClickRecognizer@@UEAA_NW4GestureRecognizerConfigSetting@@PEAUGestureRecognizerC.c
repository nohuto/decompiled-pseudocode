/*
 * XREFs of ?ReadConfigValue@ClickRecognizer@@UEAA_NW4GestureRecognizerConfigSetting@@PEAUGestureRecognizerConfigValue@@@Z @ 0x180184680
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

char __fastcall ClickRecognizer::ReadConfigValue(_WORD *a1, int a2, __int64 a3)
{
  char v3; // r10
  __int16 v4; // ax

  v3 = 1;
  switch ( a2 )
  {
    case 1:
      v4 = a1[13];
      goto LABEL_16;
    case 2:
      v4 = a1[12];
      goto LABEL_16;
    case 3:
      v4 = a1[14];
      goto LABEL_16;
    case 4:
      v4 = a1[15];
      goto LABEL_16;
    case 5:
      v4 = a1[16];
      goto LABEL_16;
    case 6:
      v4 = a1[17];
      goto LABEL_16;
    case 7:
      v4 = a1[18];
LABEL_16:
      *(_WORD *)(a3 + 4) = v4;
      *(_DWORD *)a3 = a2;
      return v3;
  }
  return 0;
}
