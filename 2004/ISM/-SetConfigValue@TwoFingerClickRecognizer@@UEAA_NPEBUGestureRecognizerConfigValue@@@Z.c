/*
 * XREFs of ?SetConfigValue@TwoFingerClickRecognizer@@UEAA_NPEBUGestureRecognizerConfigValue@@@Z @ 0x1801863D0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

char __fastcall TwoFingerClickRecognizer::SetConfigValue(
        TwoFingerClickRecognizer *this,
        const struct GestureRecognizerConfigValue *a2)
{
  char v2; // r10

  v2 = 1;
  switch ( *(_DWORD *)a2 )
  {
    case 0x13:
      *((_WORD *)this + 31) = *((_WORD *)a2 + 2);
      break;
    case 0x14:
      *((_WORD *)this + 32) = *((_WORD *)a2 + 2);
      break;
    case 0x15:
      *((_WORD *)this + 33) = *((_WORD *)a2 + 2);
      break;
    case 0x16:
      *((_WORD *)this + 35) = *((_WORD *)a2 + 2);
      break;
    case 0x17:
      *((_WORD *)this + 34) = *((_WORD *)a2 + 2);
      break;
    case 0x18:
      *((_WORD *)this + 30) = *((_WORD *)a2 + 2);
      break;
    default:
      return 0;
  }
  return v2;
}
