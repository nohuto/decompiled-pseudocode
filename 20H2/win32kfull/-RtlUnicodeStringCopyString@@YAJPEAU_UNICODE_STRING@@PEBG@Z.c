/*
 * XREFs of ?RtlUnicodeStringCopyString@@YAJPEAU_UNICODE_STRING@@PEBG@Z @ 0x1C007B008
 * Callers:
 *     GetLocalMachineRegistryDWORDValues @ 0x1C007AD64 (GetLocalMachineRegistryDWORDValues.c)
 *     ?GetPredictionSettings@@YAJPEAUtagDEVICECONFIG_SETTING@@KPEAGK@Z @ 0x1C007B178 (-GetPredictionSettings@@YAJPEAUtagDEVICECONFIG_SETTING@@KPEAGK@Z.c)
 *     ?CreatePredictionSettings@@YAJPEAUtagDEVICECONFIG_SETTING@@KPEAGK@Z @ 0x1C0129C34 (-CreatePredictionSettings@@YAJPEAUtagDEVICECONFIG_SETTING@@KPEAGK@Z.c)
 *     ?WritePredictionSettings@@YAHPEAUtagDEVICECONFIG_SETTING@@KPEBGK@Z @ 0x1C0209634 (-WritePredictionSettings@@YAHPEAUtagDEVICECONFIG_SETTING@@KPEBGK@Z.c)
 * Callees:
 *     RtlWideCharArrayCopyStringWorker @ 0x1C007B094 (RtlWideCharArrayCopyStringWorker.c)
 */

NTSTATUS __fastcall RtlUnicodeStringCopyString(struct _UNICODE_STRING *a1, const unsigned __int16 *a2)
{
  USHORT Length; // r8
  wchar_t *Buffer; // r10
  const wchar_t *v5; // r9
  NTSTATUS result; // eax
  unsigned __int64 MaximumLength; // rdx
  size_t v8; // [rsp+20h] [rbp-18h]
  size_t pcchNewDestLength; // [rsp+48h] [rbp+10h] BYREF

  pcchNewDestLength = (size_t)a2;
  Length = a1->Length;
  Buffer = 0LL;
  v5 = 0LL;
  result = 0;
  if ( (a1->Length & 1) != 0 )
    return -1073741811;
  MaximumLength = a1->MaximumLength;
  if ( (MaximumLength & 1) != 0 || Length > (unsigned __int16)MaximumLength || (_WORD)MaximumLength == 0xFFFF )
    return -1073741811;
  if ( !a1->Buffer && (Length || (_WORD)MaximumLength) )
  {
    result = -1073741811;
  }
  else
  {
    Buffer = a1->Buffer;
    v5 = (const wchar_t *)(MaximumLength >> 1);
  }
  if ( result >= 0 )
  {
    pcchNewDestLength = 0LL;
    result = RtlWideCharArrayCopyStringWorker(Buffer, (size_t)v5, &pcchNewDestLength, v5, v8);
    a1->Length = 2 * pcchNewDestLength;
  }
  return result;
}
