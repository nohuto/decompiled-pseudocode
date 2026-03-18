/*
 * XREFs of ?RtlUnicodeStringCatString@@YAJPEAU_UNICODE_STRING@@PEBG@Z @ 0x1C0182608
 * Callers:
 *     RIMRegOpenLocalMachineKey @ 0x1C0182764 (RIMRegOpenLocalMachineKey.c)
 * Callees:
 *     RtlUnicodeStringValidateDestWorker @ 0x1C0182680 (RtlUnicodeStringValidateDestWorker.c)
 *     RtlWideCharArrayCopyStringWorker @ 0x1C0182700 (RtlWideCharArrayCopyStringWorker.c)
 */

NTSTATUS __fastcall RtlUnicodeStringCatString(struct _UNICODE_STRING *a1, const unsigned __int16 *a2)
{
  NTSTATUS result; // eax
  __int16 v4; // bx
  size_t v5; // [rsp+20h] [rbp-20h]
  size_t v6; // [rsp+20h] [rbp-20h]
  ULONG v7; // [rsp+28h] [rbp-18h]
  size_t pcchNewDestLength[2]; // [rsp+30h] [rbp-10h] BYREF
  size_t pcchDest; // [rsp+68h] [rbp+28h] BYREF
  size_t pcchDestLength; // [rsp+70h] [rbp+30h] BYREF
  wchar_t *ppszDest; // [rsp+78h] [rbp+38h] BYREF

  ppszDest = 0LL;
  pcchDest = 0LL;
  pcchDestLength = 0LL;
  result = RtlUnicodeStringValidateDestWorker(a1, &ppszDest, &pcchDest, &pcchDestLength, v5, v7);
  if ( result >= 0 )
  {
    pcchNewDestLength[0] = 0LL;
    v4 = pcchDestLength;
    result = RtlWideCharArrayCopyStringWorker(
               &ppszDest[pcchDestLength],
               pcchDest - pcchDestLength,
               pcchNewDestLength,
               L"Software\\Microsoft\\Windows\\CurrentVersion\\PrecisionTouchPad",
               v6);
    a1->Length = 2 * (LOWORD(pcchNewDestLength[0]) + v4);
  }
  return result;
}
