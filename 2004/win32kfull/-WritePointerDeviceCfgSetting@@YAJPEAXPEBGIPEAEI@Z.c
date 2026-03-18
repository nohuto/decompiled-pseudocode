/*
 * XREFs of ?WritePointerDeviceCfgSetting@@YAJPEAXPEBGIPEAEI@Z @ 0x1C020A44C
 * Callers:
 *     ?SetFlickMap@@YAHPEAUtagFLICK_MAP@@H@Z @ 0x1C020A2D0 (-SetFlickMap@@YAHPEAUtagFLICK_MAP@@H@Z.c)
 *     ?WritePredictionSettings@@YAHPEAUtagDEVICECONFIG_SETTING@@KPEBGK@Z @ 0x1C020A4BC (-WritePredictionSettings@@YAHPEAUtagDEVICECONFIG_SETTING@@KPEBGK@Z.c)
 * Callees:
 *     <none>
 */

NTSTATUS __fastcall WritePointerDeviceCfgSetting(
        HANDLE KeyHandle,
        const unsigned __int16 *a2,
        ULONG a3,
        unsigned __int8 *a4,
        ULONG DataSize)
{
  struct _UNICODE_STRING ValueName; // [rsp+30h] [rbp-18h] BYREF

  ValueName = 0LL;
  RtlInitUnicodeString(&ValueName, a2);
  return ZwSetValueKey(KeyHandle, &ValueName, 0, a3, a4, DataSize);
}
