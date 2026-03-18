/*
 * XREFs of ?RtlUnicodeStringCopyString@@YGJPAU_UNICODE_STRING@@PBG@Z @ 0x998EA
 * Callers:
 *     ?CreatePredictionSettings@@YGJPAUtagDEVICECONFIG_SETTING@@KPAGK@Z @ 0x99582 (-CreatePredictionSettings@@YGJPAUtagDEVICECONFIG_SETTING@@KPAGK@Z.c)
 *     ?GetPredictionSettings@@YGJPAUtagDEVICECONFIG_SETTING@@KPAGK@Z @ 0x9968E (-GetPredictionSettings@@YGJPAUtagDEVICECONFIG_SETTING@@KPAGK@Z.c)
 *     _GetLocalMachineRegistryDWORDValues@12 @ 0x997D6 (_GetLocalMachineRegistryDWORDValues@12.c)
 *     ?WritePredictionSettings@@YGHPAUtagDEVICECONFIG_SETTING@@KPBGK@Z @ 0x16FA91 (-WritePredictionSettings@@YGHPAUtagDEVICECONFIG_SETTING@@KPBGK@Z.c)
 * Callees:
 *     RtlWideCharArrayCopyStringWorker @ 0x99934 (RtlWideCharArrayCopyStringWorker.c)
 *     RtlUnicodeStringValidateWorker @ 0x9998E (RtlUnicodeStringValidateWorker.c)
 */

NTSTATUS __thiscall RtlUnicodeStringCopyString(UNICODE_STRING *this)
{
  NTSTATUS result; // eax
  size_t *v3; // ecx
  size_t v4; // [esp+0h] [ebp-10h]
  const wchar_t *v5; // [esp+0h] [ebp-10h]
  ULONG v6; // [esp+4h] [ebp-Ch]
  size_t v7; // [esp+4h] [ebp-Ch]
  wchar_t pszDest[2]; // [esp+Ch] [ebp-4h] BYREF

  result = RtlUnicodeStringValidateWorker(this, v4, v6);
  if ( result >= 0 )
  {
    *(_DWORD *)pszDest = 0;
    result = RtlWideCharArrayCopyStringWorker(pszDest, (size_t)v3, v3, v5, v7);
    this->Length = 2 * pszDest[0];
  }
  return result;
}
