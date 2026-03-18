/*
 * XREFs of ?RtlStringCbCopyUnicodeString@@YGJPAGIPBU_UNICODE_STRING@@@Z @ 0x157CFD
 * Callers:
 *     _UserGetHipDeviceInfo@4 @ 0x159610 (_UserGetHipDeviceInfo@4.c)
 *     __GetPointerDeviceInfoProperties@8 @ 0x159B80 (__GetPointerDeviceInfoProperties@8.c)
 * Callees:
 *     RtlStringCopyWideCharArrayWorker @ 0x157D68 (RtlStringCopyWideCharArrayWorker.c)
 *     RtlUnicodeStringValidateWorker_0 @ 0x157DB1 (RtlUnicodeStringValidateWorker_0.c)
 */

int __userpurge RtlStringCbCopyUnicodeString@<eax>(
        unsigned int a1@<edx>,
        _WORD *a2@<ecx>,
        size_t a3@<edi>,
        ULONG a4@<esi>,
        unsigned __int16 *a5,
        unsigned int a6,
        const struct _UNICODE_STRING *a7)
{
  int result; // eax
  size_t *v8; // edi
  wchar_t *v9; // ecx
  const wchar_t *v11; // [esp-8h] [ebp-10h]
  size_t v12; // [esp-4h] [ebp-Ch]

  result = 0;
  if ( !(a1 >> 1) || a1 >> 1 > 0x7FFF )
    result = -1073741811;
  if ( result >= 0 )
  {
    v8 = 0;
    result = RtlUnicodeStringValidateWorker_0(0, a3, a4);
    if ( result >= 0 && a5 )
    {
      v9 = (wchar_t *)*((_DWORD *)a5 + 1);
      v8 = (size_t *)(*a5 >> 1);
    }
    else
    {
      v9 = 0;
    }
    if ( result < 0 )
      *a2 = 0;
    else
      return RtlStringCopyWideCharArrayWorker(v9, (size_t)v9, v8, v11, v12);
  }
  return result;
}
