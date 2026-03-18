/*
 * XREFs of ?RtlStringCbCatW@@YGJPAGIPBG@Z @ 0xE44C0
 * Callers:
 *     __RegisterDManipHook@0 @ 0xE43A6 (__RegisterDManipHook@0.c)
 * Callees:
 *     RtlStringCopyWorkerW_0 @ 0xE44F8 (RtlStringCopyWorkerW_0.c)
 *     RtlStringLengthWorkerW @ 0xE454A (RtlStringLengthWorkerW.c)
 */

int __stdcall RtlStringCbCatW(unsigned __int16 *a1, unsigned int a2, const unsigned __int16 *a3)
{
  int result; // eax
  wchar_t *v4; // ecx
  size_t v5; // [esp+0h] [ebp-8h]
  const wchar_t *v6; // [esp+0h] [ebp-8h]
  wchar_t psz[2]; // [esp+4h] [ebp-4h] BYREF

  result = RtlStringLengthWorkerW(psz, v5, 0);
  if ( result >= 0 )
    return RtlStringCopyWorkerW_0(v4, (size_t)L"\\System32\\directmanipulation.dll", (size_t *)v4, v6, *(size_t *)psz);
  return result;
}
