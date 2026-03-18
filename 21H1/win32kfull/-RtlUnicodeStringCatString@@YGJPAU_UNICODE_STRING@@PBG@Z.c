/*
 * XREFs of ?RtlUnicodeStringCatString@@YGJPAU_UNICODE_STRING@@PBG@Z @ 0xD7734
 * Callers:
 *     ?CreatePredictionSettings@@YGJPAUtagDEVICECONFIG_SETTING@@KPAGK@Z @ 0x99582 (-CreatePredictionSettings@@YGJPAUtagDEVICECONFIG_SETTING@@KPAGK@Z.c)
 *     ?GetPredictionSettings@@YGJPAUtagDEVICECONFIG_SETTING@@KPAGK@Z @ 0x9968E (-GetPredictionSettings@@YGJPAUtagDEVICECONFIG_SETTING@@KPAGK@Z.c)
 *     _GetLocalMachineRegistryDWORDValues@12 @ 0x997D6 (_GetLocalMachineRegistryDWORDValues@12.c)
 *     ?OpenDeviceCfgKey@@YGJKPAGKPAPAXH@Z @ 0x9CFD8 (-OpenDeviceCfgKey@@YGJKPAGKPAPAXH@Z.c)
 *     ?_OpenDeviceKey@InteractiveControlSettings@@IAEJKHPAPAX@Z @ 0xD7654 (-_OpenDeviceKey@InteractiveControlSettings@@IAEJKHPAPAX@Z.c)
 *     _ReadTiltCalibrationData@12 @ 0x13ED9B (_ReadTiltCalibrationData@12.c)
 *     _WriteTiltCalibrationData@20 @ 0x13F29A (_WriteTiltCalibrationData@20.c)
 *     ?WritePredictionSettings@@YGHPAUtagDEVICECONFIG_SETTING@@KPBGK@Z @ 0x16FA91 (-WritePredictionSettings@@YGHPAUtagDEVICECONFIG_SETTING@@KPBGK@Z.c)
 * Callees:
 *     RtlWideCharArrayCopyStringWorker_0 @ 0xD7796 (RtlWideCharArrayCopyStringWorker_0.c)
 *     RtlUnicodeStringValidateDestWorker @ 0xD77EC (RtlUnicodeStringValidateDestWorker.c)
 */

NTSTATUS __fastcall RtlUnicodeStringCatString(size_t *a1, size_t a2)
{
  size_t *v4; // eax
  NTSTATUS v5; // ecx
  __int16 v6; // si
  size_t v8; // [esp-8h] [ebp-24h]
  size_t v9; // [esp+0h] [ebp-1Ch]
  const wchar_t *v10; // [esp+0h] [ebp-1Ch]
  ULONG v11; // [esp+4h] [ebp-18h]
  size_t v12; // [esp+4h] [ebp-18h]
  wchar_t pszDest[2]; // [esp+Ch] [ebp-10h] BYREF
  int v14; // [esp+10h] [ebp-Ch]
  wchar_t *ppszDest; // [esp+14h] [ebp-8h] BYREF
  UNICODE_STRING DestinationString; // [esp+18h] [ebp-4h] BYREF

  v14 = 0;
  *(_DWORD *)&DestinationString.Length = 0;
  ppszDest = 0;
  v4 = (size_t *)RtlUnicodeStringValidateDestWorker(&DestinationString, &ppszDest, a1, a1, v9, v11);
  v5 = (NTSTATUS)v4;
  if ( (int)v4 >= 0 )
  {
    v8 = a2;
    v6 = (__int16)ppszDest;
    *(_DWORD *)pszDest = 0;
    v5 = RtlWideCharArrayCopyStringWorker_0(pszDest, v8, v4, v10, v12);
    *(_WORD *)a1 = 2 * (v6 + pszDest[0]);
  }
  return v5;
}
