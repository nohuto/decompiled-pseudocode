/*
 * XREFs of ?RtlUnicodeStringCatString@@YAJPEAU_UNICODE_STRING@@PEBG@Z @ 0x1C007AEA4
 * Callers:
 *     ?OpenDeviceCfgKey@@YAJKPEAGKPEAPEAXH@Z @ 0x1C007AB20 (-OpenDeviceCfgKey@@YAJKPEAGKPEAPEAXH@Z.c)
 *     GetLocalMachineRegistryDWORDValues @ 0x1C007AD64 (GetLocalMachineRegistryDWORDValues.c)
 *     ?GetPredictionSettings@@YAJPEAUtagDEVICECONFIG_SETTING@@KPEAGK@Z @ 0x1C007B178 (-GetPredictionSettings@@YAJPEAUtagDEVICECONFIG_SETTING@@KPEAGK@Z.c)
 *     ?CreatePredictionSettings@@YAJPEAUtagDEVICECONFIG_SETTING@@KPEAGK@Z @ 0x1C0129C34 (-CreatePredictionSettings@@YAJPEAUtagDEVICECONFIG_SETTING@@KPEAGK@Z.c)
 *     ReadTiltCalibrationData @ 0x1C01CEF6C (ReadTiltCalibrationData.c)
 *     WriteTiltCalibrationData @ 0x1C01CF55C (WriteTiltCalibrationData.c)
 *     ?WritePredictionSettings@@YAHPEAUtagDEVICECONFIG_SETTING@@KPEBGK@Z @ 0x1C0209634 (-WritePredictionSettings@@YAHPEAUtagDEVICECONFIG_SETTING@@KPEBGK@Z.c)
 * Callees:
 *     RtlUnicodeStringValidateDestWorker @ 0x1C007AF58 (RtlUnicodeStringValidateDestWorker.c)
 */

__int64 __fastcall RtlUnicodeStringCatString(struct _UNICODE_STRING *a1, const unsigned __int16 *a2)
{
  NTSTATUS v4; // r8d
  __int64 v5; // r10
  __int16 v6; // r11
  __int16 v7; // dx
  size_t v8; // r9
  char *v9; // rcx
  size_t v11; // [rsp+20h] [rbp-28h]
  ULONG v12; // [rsp+28h] [rbp-20h]
  wchar_t *v13; // [rsp+30h] [rbp-18h] BYREF
  size_t v14; // [rsp+60h] [rbp+18h] BYREF
  size_t v15; // [rsp+68h] [rbp+20h] BYREF

  v13 = 0LL;
  v14 = 0LL;
  v15 = 0LL;
  v4 = RtlUnicodeStringValidateDestWorker(a1, &v13, &v14, &v15, v11, v12);
  if ( v4 >= 0 )
  {
    v5 = 0x7FFFLL;
    v6 = v15;
    v4 = 0;
    v7 = 0;
    v8 = v14 - v15;
    if ( v14 == v15 )
      goto LABEL_16;
    v9 = (char *)v13 + 2 * v15 - (_QWORD)a2;
    do
    {
      if ( !v5 )
        break;
      if ( !*a2 )
        break;
      *(const unsigned __int16 *)((char *)a2 + (_QWORD)v9) = *a2;
      --v5;
      ++a2;
      ++v7;
      --v8;
    }
    while ( v8 );
    if ( !v8 && v5 )
    {
LABEL_16:
      if ( *a2 )
        v4 = -2147483643;
    }
    a1->Length = 2 * (v6 + v7);
  }
  return (unsigned int)v4;
}
